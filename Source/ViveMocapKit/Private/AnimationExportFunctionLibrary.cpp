// (c) YuriNK, 2019, ykasczc@gmail.com
// Exporting UAnimSequence asset to BVH animation file

#include "AnimationExportFunctionLibrary.h"
#include "Animation/AnimSequence.h"
#include "HAL/PlatformFilemanager.h"
#include "GenericPlatform/GenericPlatformFile.h"
#include "Kismet/KismetMathLibrary.h"
#include "Misc/FileHelper.h"
#include "Animation/AnimTypes.h"

#define bvh_ONE_SPACE TEXT(" ")
#define bvh_BEGIN_SEGMENT TEXT("{")
#define bvh_END_SEGMENT TEXT("}")
#define bvh_OFFSET TEXT("OFFSET")
#define bvh_ROOT TEXT("ROOT")
#define bvh_JOINT TEXT("JOINT")
#define bvh_CHANNELS TEXT("CHANNELS")
#define bvh_END_SITE TEXT("End Site")
#define bvh_HIERARCHY TEXT("HIERARCHY")
#define bvh_MOTION TEXT("MOTION")

/*
** BHV coordinate system : Y-up, right-hand.
** Only need to swap Y and Z axes
*/

// Helper macros
#define FloatToString(Value) FString::Printf(TEXT("%.6f"), Value)
#define VectorToString(Vec) FString::Printf(TEXT("%.6f %.6f %.6f"), Vec.X, Vec.Z, Vec.Y)
#define RotationToString(RotVec) FString::Printf(TEXT("%.6f %.6f %.6f"), RotVec.Z, RotVec.Y, RotVec.X)
#define TransformToString(Loc, RotVec) FString::Printf(TEXT("%.6f %.6f %.6f %.6f %.6f %.6f"), Loc.X, Loc.Z, Loc.Y, RotVec.Z, RotVec.Y, RotVec.X)

bool UAnimationExportFunctionLibrary::ExportAnimSequenceToBVH(const UAnimSequence* AnimSequence, const FString& FileName, bool bFirstFrameReferencePose, bool bOverwrite)
{
	if (!AnimSequence)
	{
		return false;
	}

	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

	if (!bOverwrite && PlatformFile.FileExists(*FileName))
	{
		return false;
	}

	// Build backward hierarchy and output sequence)
	TArray<FString> FileData;
	TMultiMap<int32, int32> SkeletonHierarchy;
	// Note: Raw Animation Track Key in UAnimSequence is equal to skeleton bone index
	TSet<int32> BonesOutput;
	const bool bBulkSave = false;

	const USkeleton* Skeleton = AnimSequence->GetSkeleton();
	const FReferenceSkeleton& RefSkeleton = Skeleton->GetReferenceSkeleton();
	const int32 NumSpaceBases = RefSkeleton.GetRefBonePose().Num();
	const int32 FramesNum = AnimSequence->GetNumberOfFrames();

	for (int32 RefSpaceIndex = 1; RefSpaceIndex < NumSpaceBases; ++RefSpaceIndex)
	{
		const int32 ParentBone = RefSkeleton.GetParentIndex(RefSpaceIndex);
		SkeletonHierarchy.Add(ParentBone, RefSpaceIndex);
	}

	// 1. Hierarchy.

	FileData.Add(bvh_HIERARCHY);
	// Build hierarchy segment
	AddJointToBVHFile(0, 0, RefSkeleton, SkeletonHierarchy, BonesOutput, FileData);

	// 2. Motion.

	// Header
	FileData.Add(bvh_MOTION);
	FileData.Add(TEXT("Frames: ") + FString::FromInt(FramesNum + (int)bFirstFrameReferencePose));
	FileData.Add(TEXT("Frame Time: ") + FloatToString(1.f / AnimSequence->GetFrameRate()));

	// Create first frame with reference pose
	if (bFirstFrameReferencePose)
	{
		const TArray<FTransform>& RefPoseSpaceBaseTMs = RefSkeleton.GetRefBonePose();

		FString AnimationLine;
		for (const auto& TrackKey : BonesOutput)
		{
			if (AnimationLine.Len() > 0)
			{
				AnimationLine += bvh_ONE_SPACE;
			}

			const FTransform& BoneRefTr = RefPoseSpaceBaseTMs[TrackKey];
			const FVector Vec = BoneRefTr.GetTranslation();
			FRotator CovnertedRotator = BoneRefTr.Rotator();
			CovnertedRotator.Yaw *= -1.f;
			const FVector RotEuler = CovnertedRotator.Euler();

			if (TrackKey < 2 || RefSkeleton.GetParentIndex(TrackKey) == 0)
			{
				AnimationLine += TransformToString(Vec, RotEuler); // FString::Printf(TEXT("%.6f %.6f %.6f %.6f %.6f %.6f"), Vec.X, Vec.Z, Vec.Y, RotEuler.Z, RotEuler.Y, RotEuler.X);
			}
			else
			{
				AnimationLine += RotationToString(RotEuler); // FString::Printf(TEXT("%.6f %.6f %.6f"), RotEuler.Z, RotEuler.Y, RotEuler.X);
			}
		}
		FileData.Add(AnimationLine);
	}

	// All animation frames. Index in array is bone index in skeleton
	const TArray<FRawAnimSequenceTrack>& RawAnimData = AnimSequence->GetRawAnimationData();

	// Iterate all animation frames
	FVector Pos;
	FRotator Rot;
	for (int32 i = 0; i < FramesNum; i++)
	{
		FString AnimationLine;

		// Iterate all bones
		for (const auto& TrackKey : BonesOutput)
		{
			const int32 FramePos = FMath::Min(i, RawAnimData[TrackKey].PosKeys.Num() - 1);
			const int32 FrameRot = FMath::Min(i, RawAnimData[TrackKey].RotKeys.Num() - 1);

			Pos = RawAnimData[TrackKey].PosKeys[FramePos];
			Rot = RawAnimData[TrackKey].RotKeys[FrameRot].Rotator();

			FRotator CovnertedRotator = Rot;
			CovnertedRotator.Yaw *= -1.f;
			const FVector RotEuler = CovnertedRotator.Euler();

			if (AnimationLine.Len() > 0)
			{
				AnimationLine += bvh_ONE_SPACE;
			}

			if (TrackKey < 2 || RefSkeleton.GetParentIndex(TrackKey) == 0)
			{
				// 6 DOF for root, pelvis and all joints attached to root
				AnimationLine += TransformToString(Pos, RotEuler); // FString::Printf(TEXT("%.6f %.6f %.6f %.6f %.6f %.6f"), Pos.X, Pos.Z, Pos.Y, RotEuler.Z, RotEuler.Y, RotEuler.X);
			}
			else
			{
				// 3 DOF for other joints
				AnimationLine += RotationToString(RotEuler); // FString::Printf(TEXT("%.6f %.6f %.6f"), RotEuler.Z, RotEuler.Y, RotEuler.X);
			}
		}

		FileData.Add(AnimationLine);

		// Disabled; caused bugs with large files.
		if (bBulkSave)
		{
			if (FileData.Num() > 1024)
			{
				FFileHelper::SaveStringArrayToFile(FileData, *FileName);
				FileData.Empty();
			}
		}
	}

	// Save on disk
	FFileHelper::SaveStringArrayToFile(FileData, *FileName);
	FileData.Empty();

	return true;
}

void UAnimationExportFunctionLibrary::AddJointToBVHFile(int32 NestingNum, int32 BoneIndex, const FReferenceSkeleton& RefSkeleton, const TMultiMap<int32, int32>& Hierarchy, TSet<int32>& OutBonesOutput, TArray<FString>& OutData)
{
	FString LeftOffset, LeftOffsetChild;
	for (int32 i = 0; i < NestingNum; i++) LeftOffset += TEXT("\t");
	LeftOffsetChild = LeftOffset + TEXT("\t");

	const TArray<FTransform>& RefPoseSpaceBaseTMs = RefSkeleton.GetRefBonePose();
	const bool bIsRoot = (BoneIndex == 0);
	const int32 ParentBoneIndex = RefSkeleton.GetParentIndex(BoneIndex);

	// Add bone to sequence
	OutBonesOutput.Add(BoneIndex);

	FString AddString;
	if (bIsRoot)
	{
		AddString = bvh_ROOT;
	}
	else
	{
		AddString = bvh_JOINT;
	}

	AddString += (bvh_ONE_SPACE + RefSkeleton.GetBoneName(BoneIndex).ToString());
	OutData.Add(LeftOffset + AddString);
	OutData.Add(LeftOffset + bvh_BEGIN_SEGMENT);
	// offset
	OutData.Add(LeftOffsetChild + bvh_OFFSET + bvh_ONE_SPACE + VectorToString(RefPoseSpaceBaseTMs[BoneIndex].GetTranslation()));
	// channels
	AddString = bvh_CHANNELS;

	/*
	* a. translation and rotation: swap Y and Z axes
	* (BHV coordinate system: Y-up, right-hand)
	* b. rotation: preserve euler matrices multiplication order
	* (in UE4 rotation matrix M_rot = M_eulerZ * M_eulerY * M_eulerX)
	* BVH format allows to provide matrices multiplication order via channels order.
	*/
	if (bIsRoot || (ParentBoneIndex == 0))
	{
		AddString += TEXT(" 6 Xposition Yposition Zposition Yrotation Zrotation Xrotation");
	}
	else
	{
		AddString += TEXT(" 3 Yrotation Zrotation Xrotation");
	}
	OutData.Add(LeftOffsetChild + AddString);

	TArray<int32> ChildBones;
	Hierarchy.MultiFind(BoneIndex, ChildBones, true);

	if (ChildBones.Num() == 0)
	{
		OutData.Add(LeftOffsetChild + bvh_END_SITE);
		OutData.Add(LeftOffsetChild + bvh_BEGIN_SEGMENT);
		OutData.Add(LeftOffsetChild + "\t" + bvh_OFFSET + bvh_ONE_SPACE + VectorToString(FVector::ForwardVector));
		OutData.Add(LeftOffsetChild + bvh_END_SEGMENT);
	}
	else
	{
		for (const auto& ChildBoneIndex : ChildBones)
		{
			AddJointToBVHFile(NestingNum + 1, ChildBoneIndex, RefSkeleton, Hierarchy, OutBonesOutput, OutData);
		}
	}
	OutData.Add(LeftOffset + bvh_END_SEGMENT);
}