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

FTransform RestoreBoneObjectSpaceTransform(const FReferenceSkeleton& RefSkeleton, int32 BoneIndex)
{
	const TArray<FTransform>& RefPoseSpaceBaseTMs = RefSkeleton.GetRefBonePose();

	if (!RefPoseSpaceBaseTMs.IsValidIndex(BoneIndex))
	{
		return FTransform::Identity;
	}
	else if (BoneIndex == 0)
	{
		return RefPoseSpaceBaseTMs[0];
	}

	// calculate world transform transform
	int32 TransformIndex = BoneIndex;
	int32 ParentIndex = RefSkeleton.GetParentIndex(TransformIndex);
	FTransform tr_bone = RefPoseSpaceBaseTMs[TransformIndex];
	FTransform tr_par;

	// stop on root
	while (ParentIndex != INDEX_NONE)
	{
		TransformIndex = ParentIndex;

		tr_par = RefPoseSpaceBaseTMs[TransformIndex];
		tr_par.NormalizeRotation();

		tr_bone.NormalizeRotation();
		tr_bone = tr_bone * tr_par;

		ParentIndex = RefSkeleton.GetParentIndex(TransformIndex);
	}
	// add component transform
	tr_bone.NormalizeRotation();

	return tr_bone;
}

/** Restore bone transform in object space for specified frame in animation data */
FTransform RestoreAnimatedBoneObjectSpaceTransform(const FReferenceSkeleton& RefSkeleton,
												   const TArray<FRawAnimSequenceTrack>& AnimData,
												   const int32 Frame,
												   const TMap<int32,
												   int32>& BoneToTrack,
												   const int32 BoneIndex)
{
	FTransform CurrentBone;
	int32 NextBoneIndex = BoneIndex;

	while (NextBoneIndex != INDEX_NONE)
	{
		int32 TrackKey = BoneToTrack[NextBoneIndex];

		const int32 FramePos = FMath::Min(Frame, AnimData[TrackKey].PosKeys.Num() - 1);
		const int32 FrameRot = FMath::Min(Frame, AnimData[TrackKey].RotKeys.Num() - 1);

		FTransform LocalBone = FTransform(AnimData[TrackKey].RotKeys[FrameRot], AnimData[TrackKey].PosKeys[FramePos]);

		CurrentBone = CurrentBone * LocalBone;
		NextBoneIndex = RefSkeleton.GetParentIndex(NextBoneIndex);
	}

	return CurrentBone;
}

bool UAnimationExportFunctionLibrary::ExportAnimSequenceToBVH(const UAnimSequence* AnimSequence, const FString& FileName, bool bFirstFrameReferencePose, bool bOverwrite, bool bLocalSpace)
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
	TMap<int32, int32> BoneToTrack;
	TMultiMap<int32, int32> SkeletonHierarchy;
	TMap<int32, FTransform> SkeletonOffsets;
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

	// All animation frames. Index in array is bone index in skeleton
	const TArray<FRawAnimSequenceTrack>& RawAnimData = AnimSequence->GetRawAnimationData();
	const int32 TracksNumber = RawAnimData.Num();

	for (int32 TrackIndex = 0; TrackIndex < TracksNumber; TrackIndex++)
	{
		int32 SkeletonIndex = AnimSequence->GetSkeletonIndexFromRawDataTrackIndex(TrackIndex);
		BoneToTrack.Add(SkeletonIndex, TrackIndex);
	}

	// 1. Hierarchy.

	FileData.Add(bvh_HIERARCHY);
	// Build hierarchy segment
	AddJointToBVHFile(0, 0, RefSkeleton, SkeletonHierarchy, BonesOutput, FileData, bLocalSpace, SkeletonOffsets);

	// 2. Motion.

	// Header
	FileData.Add(bvh_MOTION);
	FileData.Add(TEXT("Frames: ") + FString::FromInt(FramesNum + (int)bFirstFrameReferencePose));
	FileData.Add(TEXT("Frame Time: ") + FloatToString(1.f / AnimSequence->GetFrameRate()));

	const TArray<FTransform>& RefPoseSpaceBaseTMs = RefSkeleton.GetRefBonePose();

	// Create first frame with reference pose
	if (bFirstFrameReferencePose)
	{
		FString AnimationLine;
		for (const auto& Bone : BonesOutput)
		{
			if (AnimationLine.Len() > 0)
			{
				AnimationLine += bvh_ONE_SPACE;
			}

			FTransform BoneRefTr = RefPoseSpaceBaseTMs[Bone];

			// convert local bone position/rotation to armature space position/rotation
			if (!bLocalSpace)
			{
				int32 ParentBoneIndex = RefSkeleton.GetParentIndex(Bone);
				FTransform ParentBone_OS, ParentBoneRef_OS;

				if (ParentBoneIndex != INDEX_NONE)
				{
					ParentBone_OS = RestoreBoneObjectSpaceTransform(RefSkeleton, Bone);
					ParentBoneRef_OS = SkeletonOffsets[ParentBoneIndex] * ParentBone_OS;
				}

				const FTransform CurrentBone_OS = BoneRefTr * ParentBone_OS;
				const FTransform RelTr = (SkeletonOffsets[Bone] * CurrentBone_OS).GetRelativeTransform(ParentBoneRef_OS);

				BoneRefTr.SetTranslation(RelTr.GetTranslation());
				BoneRefTr.SetRotation(RelTr.GetRotation());
			}

			// convert and write bone data
			const FVector Vec = BoneRefTr.GetTranslation();
			FRotator CovnertedRotator = BoneRefTr.Rotator();
			CovnertedRotator.Yaw *= -1.f;
			const FVector RotEuler = CovnertedRotator.Euler();

			if (Bone < 2 || RefSkeleton.GetParentIndex(Bone) == 0)
			{
				AnimationLine += TransformToString(Vec, RotEuler);
			}
			else
			{
				AnimationLine += RotationToString(RotEuler);
			}
		}
		FileData.Add(AnimationLine);
	}

	for (const auto& Bone : BoneToTrack)
	{
		UE_LOG(LogTemp, Log, TEXT("Bone [%d] %s --> track %d"), Bone.Key, *RefSkeleton.GetBoneName(Bone.Key).ToString(), Bone.Value);
	}

	// Iterate all animation frames
	FVector Pos;
	FRotator Rot;
	for (int32 i = 0; i < FramesNum; i++)
	{
		FString AnimationLine;

		// Iterate all bones
		for (const auto& Bone : BonesOutput)
		{
			int32 TrackKey = BoneToTrack[Bone];
			const int32 FramePos = FMath::Min(i, RawAnimData[TrackKey].PosKeys.Num() - 1);
			const int32 FrameRot = FMath::Min(i, RawAnimData[TrackKey].RotKeys.Num() - 1);

			if (BoneToTrack.Contains(Bone))
			{
				Pos = RawAnimData[TrackKey].PosKeys[FramePos];
				Rot = RawAnimData[TrackKey].RotKeys[FrameRot].Rotator();
			}
			else
			{
				Pos = RefPoseSpaceBaseTMs[Bone].GetTranslation();
				Rot = RefPoseSpaceBaseTMs[Bone].Rotator();
			}

			// convert local bone position/rotation to armature space position/rotation
			if (!bLocalSpace)
			{
				int32 ParentBoneIndex = RefSkeleton.GetParentIndex(Bone);
				FTransform ParentBone_OS, ParentBoneRef_OS;

				if (ParentBoneIndex != INDEX_NONE)
				{
					ParentBone_OS = RestoreAnimatedBoneObjectSpaceTransform(RefSkeleton, RawAnimData, FMath::Max(FrameRot, FramePos), BoneToTrack, ParentBoneIndex);
					ParentBoneRef_OS = SkeletonOffsets[ParentBoneIndex] * ParentBone_OS;
				}

				const FTransform CurrentBone_OS = FTransform(Rot, Pos) * ParentBone_OS;
				const FTransform RelTr = (SkeletonOffsets[Bone] * CurrentBone_OS).GetRelativeTransform(ParentBoneRef_OS);

				Pos = RelTr.GetTranslation();
				Rot = RelTr.Rotator();
			}

			// convert right-hand to left-hand rotation
			FRotator CovnertedRotator = Rot;
			CovnertedRotator.Yaw *= -1.f;
			const FVector RotEuler = CovnertedRotator.Euler();

			// print to string
			if (AnimationLine.Len() > 0)
			{
				AnimationLine += bvh_ONE_SPACE;
			}

			if (Bone < 2 || RefSkeleton.GetParentIndex(Bone) == 0)
			{
				// 6 DOF for root, pelvis and all joints attached to root
				AnimationLine += TransformToString(Pos, RotEuler);
			}
			else
			{
				// 3 DOF for other joints
				AnimationLine += RotationToString(RotEuler);
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

void UAnimationExportFunctionLibrary::AddJointToBVHFile(int32 NestingNum, int32 BoneIndex, const FReferenceSkeleton& RefSkeleton, const TMultiMap<int32, int32>& Hierarchy, TSet<int32>& OutBonesOutput, TArray<FString>& OutData, bool bLocalSpace, TMap<int32, FTransform>& OutSkeletonOffsets)
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
	FVector BoneOffset;
	if (bLocalSpace)
	{
		BoneOffset = RefPoseSpaceBaseTMs[BoneIndex].GetTranslation();
		OutSkeletonOffsets.Add(BoneIndex, FTransform::Identity);

	}
	else
	{
		const FTransform ParentTr = RestoreBoneObjectSpaceTransform(RefSkeleton, ParentBoneIndex);
		const FTransform ParentRefTr = FTransform(ParentTr.GetTranslation());
		const FTransform CurrentTr = RefPoseSpaceBaseTMs[BoneIndex] * ParentTr;

		const FTransform NewLocalTr = CurrentTr.GetRelativeTransform(ParentRefTr);
		BoneOffset = NewLocalTr.GetTranslation();
 
		OutSkeletonOffsets.Add(BoneIndex, FTransform(CurrentTr.GetTranslation()).GetRelativeTransform(CurrentTr));
	}

	OutData.Add(LeftOffsetChild + bvh_OFFSET + bvh_ONE_SPACE + VectorToString(BoneOffset));
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
			AddJointToBVHFile(NestingNum + 1, ChildBoneIndex, RefSkeleton, Hierarchy, OutBonesOutput, OutData, bLocalSpace, OutSkeletonOffsets);
		}
	}
	OutData.Add(LeftOffset + bvh_END_SEGMENT);
}