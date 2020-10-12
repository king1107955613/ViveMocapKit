// Copyright Yuri N K, 2018. All Rights Reserved.
// Support: ykasczc@gmail.com

#include "VMKFingersFKIKSolver.h"
#include "VMKFingersSolverTypes.h"
#include "VMKFingersSolverSetup.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/Engine.h"
#include "DrawDebugHelpers.h"
#include "Components/SkinnedMeshComponent.h"
#include "Animation/PoseSnapshot.h"
#include "ReferenceSkeleton.h"
#include "Engine/SkeletalMesh.h"
#include "Runtime/Launch/Resources/Version.h"

UVMKFingersFKIKSolver::UVMKFingersFKIKSolver()
	: Hand(EVMK_VRHand::VRH_Right)
	, InputMinRotation(0.f)
	, InputMaxRotation(75.f)
	, PosesInterpolationSpeed(12.f)
	, HandSideMultiplier(1.f)
{
}

UVMKFingersFKIKSolver* UVMKFingersFKIKSolver::CreateFingersFKIKSolver(UVMKFingersSolverSetup* SolverSetup, USkinnedMeshComponent* SkeletalMeshComp)
{
	UVMKFingersFKIKSolver* NewSolver = NewObject<UVMKFingersFKIKSolver>(UVMKFingersFKIKSolver::StaticClass());
	NewSolver->Initialize(SolverSetup, SkeletalMeshComp);
	return NewSolver;
}

UVMKFingersFKIKSolver* UVMKFingersFKIKSolver::CreateFingersFKIKSolverEx(USkinnedMeshComponent* SkeletalMeshComp,
	EVMK_VRHand InHand,
	float InInputMinRotation,
	float InInputMaxRotation,
	float InPosesInterpolationSpeed,
	const TMap<EVMK_FingerName, FVMK_FingerSolver>& InFingersSetup)
{
	UVMKFingersFKIKSolver* NewSolver = NewObject<UVMKFingersFKIKSolver>(UVMKFingersFKIKSolver::StaticClass());
	NewSolver->InitializeEx(SkeletalMeshComp, InHand, InInputMinRotation, InInputMaxRotation, InPosesInterpolationSpeed, InFingersSetup);
	return NewSolver;
}

bool UVMKFingersFKIKSolver::Initialize(UVMKFingersSolverSetup* SolverSetup, USkinnedMeshComponent* SkeletalMeshComp)
{
	if (!SkeletalMeshComp || !SolverSetup)
	{
		return false;
	}

	FingersSolverSetup = SolverSetup;
	TraceChannel = SolverSetup->TraceChannel;
	TraceHalfDistance = SolverSetup->TraceHalfDistance;
	bTraceByObjectType = SolverSetup->bTraceByObjectType;

	return InitializeEx(SkeletalMeshComp, SolverSetup->Hand, SolverSetup->InputMinRotation, SolverSetup->InputMaxRotation, SolverSetup->PosesInterpolationSpeed, SolverSetup->Fingers);
}

bool UVMKFingersFKIKSolver::InitializeEx(USkinnedMeshComponent* SkeletalMeshComp,
	EVMK_VRHand InHand,
	float InInputMinRotation,
	float InInputMaxRotation,
	float InPosesInterpolationSpeed,
	const TMap<EVMK_FingerName, FVMK_FingerSolver>& InFingersSetup)
{
	bIsInitialized = false;
	if (!SkeletalMeshComp)
	{
		return false;
	}

	Fingers = InFingersSetup;
	Hand = InHand;
	Mesh = SkeletalMeshComp;
	InputMinRotation = InInputMinRotation;
	InputMaxRotation = InInputMaxRotation;
	PosesInterpolationSpeed = InPosesInterpolationSpeed;
	HandSideMultiplier = (Hand == EVMK_VRHand::VRH_Right) ? 1.f : -1.f;

	const TArray<FTransform>& ComponentSpaceTMs = Mesh->GetComponentSpaceTransforms();
	const FReferenceSkeleton& RefSkeleton = Mesh->SkeletalMesh->RefSkeleton;
	const TArray<FTransform>& RefPoseSpaceBaseTMs = RefSkeleton.GetRefBonePose();

	for (auto& Finger : Fingers)
	{
		Finger.Value.bEnabled = true;
		Finger.Value.Knuckles.Empty();

		FName CurrKnuckle = Finger.Value.TipBoneName;
		FTransform PreviousBoneTransform;
		for (int32 i = 0; i < Finger.Value.KnucklesNum; i++)
		{
			const int32 CurrentBoneIndex = RefSkeleton.FindBoneIndex(CurrKnuckle);
			if (CurrentBoneIndex == INDEX_NONE)
			{
				return false;
			}
			FVMK_Knuckle NewKnuckle;
			NewKnuckle.BoneIndex = CurrentBoneIndex;
			NewKnuckle.BoneName = CurrKnuckle;
			NewKnuckle.Radius = FMath::Lerp(Finger.Value.TipRadius, Finger.Value.RootRadius, (float)i / (float)(Finger.Value.KnucklesNum - 1));

			FTransform BoneTransform = RefPoseSpaceBaseTMs[CurrentBoneIndex];
			NewKnuckle.RefPoseRelativeTransform
				= NewKnuckle.InputRefPoseRelativeTransform
				= NewKnuckle.TraceRefPoseRelativeTransform
				= NewKnuckle.RelativeTransform
				= BoneTransform;
			NewKnuckle.WorldTransform = Mesh->GetSocketTransform(CurrKnuckle);

			if (NewKnuckle.WorldTransform.Equals(Mesh->GetComponentTransform()))
			{
				return false;
			}

			if (i > 0)
			{
				NewKnuckle.Length = PreviousBoneTransform.GetTranslation().Size();
			}

			Finger.Value.Knuckles.Insert(NewKnuckle, 0);

			PreviousBoneTransform = BoneTransform;
			const int32 ParentBoneIndex = RefSkeleton.GetParentIndex(CurrentBoneIndex);
			if (ParentBoneIndex == INDEX_NONE)
			{
				return false;
			}
			CurrKnuckle = RefSkeleton.GetBoneName(ParentBoneIndex);
		}

		if (Finger.Value.Knuckles.Num() == 0 || Finger.Value.Knuckles.Num() != Finger.Value.KnucklesNum)
		{
			return false;
		}

		// root bone
		const int32 ParentBoneIndex = RefSkeleton.GetParentIndex(Finger.Value.Knuckles[0].BoneIndex);
		if (ParentBoneIndex == INDEX_NONE)
		{
			return false;
		}
		Finger.Value.RootBoneName = RefSkeleton.GetBoneName(ParentBoneIndex);

		// find right axis

		const FTransform Knuckle0Tr = Mesh->GetSocketTransform(Finger.Value.Knuckles[0].BoneName);
		Finger.Value.FingerOrientation.UpAxis = Finger.Value.OutwardAxis;

		const FVector ForwardKnuckle0 = (Finger.Value.KnucklesNum > 1)
			? Mesh->GetSocketLocation(Finger.Value.Knuckles[1].BoneName) - Knuckle0Tr.GetTranslation()
			: Knuckle0Tr.GetTranslation() - Mesh->GetSocketLocation(Finger.Value.RootBoneName);
		Finger.Value.FingerOrientation.ForwardAxis = FVMK_OrientTransform::FindCoDirection(Knuckle0Tr, ForwardKnuckle0);

		const FVector FingerForwardVector = FVMK_OrientTransform::GetAxisVector(Knuckle0Tr.Rotator(), Finger.Value.FingerOrientation.ForwardAxis);
		const FVector FingerUpVector = FVMK_OrientTransform::GetAxisVector(Knuckle0Tr.Rotator(), Finger.Value.FingerOrientation.UpAxis);
		const FVector FingerRightVector = (FingerUpVector ^ FingerForwardVector).GetSafeNormal();

		EVMK_BoneOrientationAxis FingerRightAxis;
		if (Finger.Value.FingerOrientation.ForwardAxis != EVMK_BoneOrientationAxis::X && Finger.Value.FingerOrientation.ForwardAxis != EVMK_BoneOrientationAxis::X_Neg &&
			Finger.Value.FingerOrientation.UpAxis != EVMK_BoneOrientationAxis::X && Finger.Value.FingerOrientation.UpAxis != EVMK_BoneOrientationAxis::X_Neg) {
			FingerRightAxis =
				(FVector::DotProduct(FVMK_OrientTransform::GetAxisVector(Knuckle0Tr.Rotator(), EVMK_BoneOrientationAxis::X), FingerRightVector) > 0.f) ? EVMK_BoneOrientationAxis::X : EVMK_BoneOrientationAxis::X_Neg;
		}
		else if (Finger.Value.FingerOrientation.ForwardAxis != EVMK_BoneOrientationAxis::Y && Finger.Value.FingerOrientation.ForwardAxis != EVMK_BoneOrientationAxis::Y_Neg &&
			Finger.Value.FingerOrientation.UpAxis != EVMK_BoneOrientationAxis::Y && Finger.Value.FingerOrientation.UpAxis != EVMK_BoneOrientationAxis::Y_Neg) {
			FingerRightAxis =
				(FVector::DotProduct(FVMK_OrientTransform::GetAxisVector(Knuckle0Tr.Rotator(), EVMK_BoneOrientationAxis::Y), FingerRightVector) > 0.f) ? EVMK_BoneOrientationAxis::Y : EVMK_BoneOrientationAxis::Y_Neg;
		}
		else /*if (Finger.Value.FingerOrientation.ForwardAxis != EVMK_BoneOrientationAxis::Z && Finger.Value.FingerOrientation.ForwardAxis != EVMK_BoneOrientationAxis::Z_Neg &&
			Finger.Value.FingerOrientation.UpAxis != EVMK_BoneOrientationAxis::Z && Finger.Value.FingerOrientation.UpAxis != EVMK_BoneOrientationAxis::Z_Neg)*/ {
			FingerRightAxis =
				(FVector::DotProduct(FVMK_OrientTransform::GetAxisVector(Knuckle0Tr.Rotator(), EVMK_BoneOrientationAxis::Z), FingerRightVector) > 0.f) ? EVMK_BoneOrientationAxis::Z : EVMK_BoneOrientationAxis::Z_Neg;
		}

		Finger.Value.FingerOrientation.RightAxis = FingerRightAxis;

		// tip length
		if (Finger.Value.Knuckles.Num() > 2)
		{
			const int32 LastInd = Finger.Value.Knuckles.Num() - 1;
			float Length2 = Finger.Value.Knuckles[LastInd - 1].Length;
			float Length1 = Finger.Value.Knuckles[LastInd - 2].Length;

			Finger.Value.Knuckles.Last().Length = FMath::Clamp(Length2 + (Length2 - Length1), 0.f, FMath::Max(Length1, Length2));
		}
		else if (Finger.Value.Knuckles.Num() > 1)
		{
			Finger.Value.Knuckles.Last().Length = Finger.Value.Knuckles[0].Length;
		}
		else
		{
			Finger.Value.Knuckles.Last().Length = 1.f;
		}
	}

	// init tracing map
	int32 FingersMax = (int32)EVMK_FingerName::EFingerName_MAX;
	for (int32 i = 0; i < FingersMax; i++)
	{
		TracingStatus.Add((EVMK_FingerName)i, false);
		VRStatus.Add((EVMK_FingerName)i, false);
	}

	bIsInitialized = true;
	return true;
}

FVector UVMKFingersFKIKSolver::TraceKnuckle(UWorld* World, const FVMK_FingerSolver& Finger, const FVMK_Knuckle& Knuckle, const FTransform& KnuckleTr, FHitResult& HitResult, int32& Pass, int32 KnuckleIndex)
{
	const FTransform HandPalm_WS = Mesh->GetSocketTransform(Finger.RootBoneName);
	FCollisionQueryParams Params = FCollisionQueryParams::DefaultQueryParam;
	Params.AddIgnoredComponent(Mesh);

	FTransform TraceCenter = KnuckleTr;
	TraceCenter.AddToTranslation(FVMK_OrientTransform::GetAxisVector(TraceCenter.Rotator(), Finger.FingerOrientation.ForwardAxis) * Knuckle.Length);

	FTransform TraceRotationSource;
	if (KnuckleIndex == 0)
		TraceRotationSource = KnuckleTr;
	else
		TraceRotationSource = Finger.Knuckles[KnuckleIndex].TraceRefPoseRelativeTransform * Finger.Knuckles[KnuckleIndex - 1].WorldTransform;

	const FVector UpDirection = FVMK_OrientTransform::GetAxisVector(TraceRotationSource.Rotator(), Finger.OutwardAxis);
	const FVector ForwardDirection = FVMK_OrientTransform::GetAxisVector(TraceRotationSource.Rotator(), Finger.FingerOrientation.ForwardAxis);

	FRotator TraceDirectionSpace = UKismetMathLibrary::MakeRotFromXZ(ForwardDirection, UpDirection);
	float UpMultiplier = (KnuckleIndex == 0 ? FMath::Clamp(0.f, Knuckle.Length, TraceHalfDistance * 0.5f) : TraceHalfDistance);

	FHitResult MinResult;
	FVector TraceDir;
	FVector TraceVector;
	float LocalPitch = 0;
	while (LocalPitch < 90.f)
	{
		LocalPitch += 45.f;

		float SinA, CosA;
		FMath::SinCos(&SinA, &CosA, LocalPitch);

		TraceVector = TraceDirectionSpace.RotateVector(FVector(CosA, 0.f, SinA));
		if (bTraceByObjectType)
		{
			World->SweepSingleByObjectType(HitResult,
				TraceCenter.GetTranslation() + TraceVector * UpMultiplier,
				TraceCenter.GetTranslation() - TraceVector * TraceHalfDistance,
				TraceDirectionSpace.Quaternion(), FCollisionObjectQueryParams(TraceChannel), FCollisionShape::MakeSphere(Knuckle.Radius), Params);
		}
		else
		{
			World->SweepSingleByChannel(HitResult,
				TraceCenter.GetTranslation() + TraceVector * UpMultiplier,
				TraceCenter.GetTranslation() - TraceVector * TraceHalfDistance,
				TraceDirectionSpace.Quaternion(), TraceChannel, FCollisionShape::MakeSphere(Knuckle.Radius), Params);
		}
		if (IsValid(FilterObject) && HitResult.GetComponent() != FilterObject) HitResult.bBlockingHit = false;

		if (bDrawDebugGeometry)
		{
			DrawDebugLine(World, TraceCenter.GetTranslation(), TraceCenter.GetTranslation() - TraceVector * TraceHalfDistance,
				FColor((uint8)TraceDirectionSpace.Pitch, (uint8)TraceDirectionSpace.Pitch, (uint8)TraceDirectionSpace.Pitch)
				, false, 0.1f, 0, 0.1f);
		}

		if (HitResult.bBlockingHit)
		{
			if (!MinResult.bBlockingHit || MinResult.Distance > HitResult.Distance)
			{
				MinResult = HitResult;
				TraceDir = TraceVector;
			}
		}
	}
	if (MinResult.bBlockingHit)
		HitResult = MinResult;
	else if (HitResult.bBlockingHit)
		TraceDir = TraceVector;
	else
		TraceDir = UpDirection;

	if (HitResult.bBlockingHit && KnuckleIndex == 0 && FVector::DotProduct(-TraceDir, UpDirection) > 0.4f)
	{
		HitResult.bBlockingHit = false;
	}

	if (bDrawDebugGeometry)
	{
		DrawDebugLine(World, TraceCenter.GetTranslation(), TraceCenter.GetTranslation() + TraceDir * TraceHalfDistance, FColor::Blue, false, 0.1f, 0, 0.1f);
		if (HitResult.bBlockingHit)
		{
			DrawDebugLine(World, TraceCenter.GetTranslation(), HitResult.ImpactPoint, FColor::Red, false, 0.1f, 0, 0.1f);
		}
	}

	return TraceDir;
}

void UVMKFingersFKIKSolver::Trace(bool bTracingInTick)
{
	if (!bIsInitialized)
	{
		return;
	}

	UWorld* World = Mesh->GetOwner()->GetWorld();
	if (!World)
	{
		// LOG: "invalid world"
		return;
	}

	const float DeltaTime = World->DeltaTimeSeconds;

	FHitResult hit;

	// trace all fingers
	for (auto& FingerRef : Fingers)
	{
		FVMK_FingerSolver& Finger = FingerRef.Value;
		bool bGrabObject = false;

		// disabled finger?
		if (!Finger.bEnabled)
		{
			if (Finger.Alpha > 0.f)
			{
				if (bTracingInTick)
				{
					Finger.Alpha = FMath::FInterpConstantTo(Finger.Alpha, 0.f, DeltaTime, 4.f);
					if (Finger.Alpha < 0.01f) Finger.Alpha = 0.f;
				}
				else
					Finger.Alpha = 0.f;
			}
			continue;
		}

		if (Finger.Knuckles.Num() == 0) continue;

		const FTransform HandPalm_WS = Mesh->GetSocketTransform(Finger.RootBoneName);
		const FTransform FingerBase_WS = Finger.Knuckles[0].TraceRefPoseRelativeTransform * HandPalm_WS;

		// trace all knuckles
		// FK Solver
		int32 FKPass = 1;
		for (int32 Index = 0; Index < Finger.Knuckles.Num(); Index++)
		{
			auto& Knuckle = Finger.Knuckles[Index];
			FTransform KnuckleTr;
			if (Index == 0)
			{
				KnuckleTr = FKPass == 1 ? Knuckle.TraceRefPoseRelativeTransform * HandPalm_WS : Knuckle.WorldTransform;
			}
			else
			{
				KnuckleTr = Knuckle.TraceRefPoseRelativeTransform * Finger.Knuckles[Index - 1].WorldTransform;
			}
			FVector UpDirection = TraceKnuckle(World, Finger, Knuckle, KnuckleTr, hit, FKPass, Index);

			if (hit.bBlockingHit)
			{
				FVector KnuckleTargetPoint = hit.ImpactPoint + hit.ImpactNormal * Knuckle.Radius;
				const FVector TraceForward = (KnuckleTargetPoint - KnuckleTr.GetTranslation()).GetSafeNormal();
				FRotator WorldRotator = FVMK_OrientTransform::MakeRotFromTwoAxis(Finger.FingerOrientation.ForwardAxis, TraceForward, Finger.FingerOrientation.RightAxis, FVMK_OrientTransform::GetAxisVector(FingerBase_WS.Rotator(), Finger.FingerOrientation.RightAxis));

				FTransform NewWorldTransform = FTransform(WorldRotator, KnuckleTr.GetTranslation());

				// Avoid flickering
				FVector NewUpDirection = TraceKnuckle(World, Finger, Knuckle, NewWorldTransform, hit, FKPass, Index);
				if (hit.bBlockingHit)
				{
					Knuckle.WorldTransform = NewWorldTransform;
				}

				// Check if need IK Solver
				if (hit.bBlockingHit && Index > 0 && FKPass <= Finger.KnucklesNum)
				{
					UpDirection = FVMK_OrientTransform::GetAxisVector(Finger.Knuckles[Index - 1].WorldTransform.Rotator(), Finger.FingerOrientation.UpAxis);
					const FVector ForwardDirection = FVMK_OrientTransform::GetAxisVector(Knuckle.WorldTransform.Rotator(), Finger.FingerOrientation.ForwardAxis);

					// IK Solver
					if (FVector::DotProduct(UpDirection, ForwardDirection) > 0.1f)
					{
						if (bDrawDebugGeometry)
						{
							DrawDebugLine(World,
								Finger.Knuckles[Index - 1].WorldTransform.GetTranslation(),
								Finger.Knuckles[Index - 1].WorldTransform.GetTranslation() + FVMK_OrientTransform::GetAxisVector(Finger.Knuckles[Index - 1].WorldTransform.Rotator(), Finger.FingerOrientation.ForwardAxis) * Finger.Knuckles[Index - 1].Length,
								FColor::Orange, false, 0.1f, 0, 0.2f
							);
							DrawDebugLine(World,
								Finger.Knuckles[Index].WorldTransform.GetTranslation(),
								Finger.Knuckles[Index].WorldTransform.GetTranslation() + FVMK_OrientTransform::GetAxisVector(Finger.Knuckles[Index].WorldTransform.Rotator(), Finger.FingerOrientation.ForwardAxis) * Finger.Knuckles[Index].Length,
								FColor::Yellow, false, 0.1f, 0, 0.2f
							);
						}

						const FTransform Knuckle0Tr = Finger.Knuckles[0].WorldTransform;
						WorldRotator = FVMK_OrientTransform::MakeRotFromTwoAxis(Finger.FingerOrientation.ForwardAxis, (KnuckleTargetPoint - Knuckle0Tr.GetTranslation()).GetSafeNormal(), Finger.FingerOrientation.UpAxis, FVMK_OrientTransform::GetAxisVector(Knuckle0Tr.Rotator(), Finger.FingerOrientation.UpAxis));
						Finger.Knuckles[Index].WorldTransform.SetRotation(WorldRotator.Quaternion());

						if (bDrawDebugGeometry)
						{
							DrawDebugSphere(World, Finger.Knuckles[Index].WorldTransform.GetTranslation(), 0.5f, 4, FColor::Blue, false, 0.1f, 0, 0.2f);
						}

						FVector Loc = Finger.Knuckles[0].WorldTransform.GetTranslation();
						for (int32 IndexIK = 0; IndexIK < Index; IndexIK++)
						{
							Finger.Knuckles[IndexIK].WorldTransform = Knuckle.WorldTransform;
							Finger.Knuckles[IndexIK].WorldTransform.SetTranslation(Loc);
							Loc += ForwardDirection * Finger.Knuckles[IndexIK].Length;
						}
						Finger.Knuckles[Index].WorldTransform.SetTranslation(Loc);
						Index = 1; FKPass++;
					}
				}

				bGrabObject = true;
			}
			else
			{
				if (VRStatus[FingerRef.Key] && Index == 0) break;
				Knuckle.WorldTransform = KnuckleTr;
			}
		}

		// if grabbing - update relative transforms
		if (bGrabObject)
		{
			FTransform TargetTr;

			for (int32 Index = 0; Index < Finger.Knuckles.Num(); Index++)
			{
				if (Index == 0)
				{
					TargetTr = Finger.Knuckles[0].WorldTransform.GetRelativeTransform(HandPalm_WS);
				}
				else
				{
					TargetTr = Finger.Knuckles[Index].WorldTransform.GetRelativeTransform(Finger.Knuckles[Index - 1].WorldTransform);
				}

				if (bTracingInTick)
				{
					Finger.Knuckles[Index].RelativeTransform = UKismetMathLibrary::TInterpTo(Finger.Knuckles[Index].RelativeTransform, TargetTr, DeltaTime, 12.f);
				}
				else
				{
					Finger.Knuckles[Index].RelativeTransform = TargetTr;
				}
			}

			if (!VRStatus[FingerRef.Key])
			{
				if (Finger.Alpha < 1.f)
				{
					if (bTracingInTick)
					{
						Finger.Alpha = FMath::FInterpTo(Finger.Alpha, 1.f, DeltaTime, 12.f);
						if (Finger.Alpha > 0.99f) Finger.Alpha = 1.f;
					}
					else Finger.Alpha = 1.f;
				}
			}
		}
		else
		{
			// not grabbing - relax finger
			if (!VRStatus[FingerRef.Key])
			{
				if (Finger.Alpha > 0.f)
				{
					if (bTracingInTick)
					{
						Finger.Alpha = FMath::FInterpConstantTo(Finger.Alpha, 0.f, DeltaTime, 8.f);
						if (Finger.Alpha < 0.01f) Finger.Alpha = 0.f;
					}
					else Finger.Alpha = 0.f;
				}
			}
		}

		TracingStatus[FingerRef.Key] = bGrabObject;
	}

	if (bDrawDebugGeometry)
	{
		for (auto& FingerRef : Fingers)
		{
			FVMK_FingerSolver& Finger = FingerRef.Value;
			for (auto& Knuckle : Finger.Knuckles)
			{
				DrawDebugLine(World,
					Knuckle.WorldTransform.GetTranslation(),
					Knuckle.WorldTransform.GetTranslation() + FVMK_OrientTransform::GetAxisVector(Knuckle.WorldTransform.Rotator(), Finger.FingerOrientation.ForwardAxis) * Knuckle.Length,
					FColor::Red, false, 0.1f, 0, 0.2f
				);
			}
		}
	}

	// adjust untraced fingers
	for (auto& FingerRef : Fingers)
	{
		if (true || TracingStatus[FingerRef.Key] || !FingerRef.Value.bEnabled || VRStatus[FingerRef.Key])
		{
			continue;
		}

		FVMK_FingerSolver& Finger = FingerRef.Value;
		const FTransform HandPalm_WS = Mesh->GetSocketTransform(Finger.RootBoneName);

		EVMK_FingerName Src1 = EVMK_FingerName::EFingerName_MAX, Src2 = EVMK_FingerName::EFingerName_MAX;
		switch (FingerRef.Key)
		{
		case EVMK_FingerName::FN_Index:
			Src1 = EVMK_FingerName::FN_Middle;
			break;
		case EVMK_FingerName::FN_Middle:
			Src1 = EVMK_FingerName::FN_Index; Src2 = EVMK_FingerName::FN_Ring;
			break;
		case EVMK_FingerName::FN_Ring:
			Src1 = EVMK_FingerName::FN_Middle; Src2 = EVMK_FingerName::FN_Pinky;
			break;
		case EVMK_FingerName::FN_Pinky:
			Src1 = EVMK_FingerName::FN_Ring;
			break;
		}

		if ((Src1 != EVMK_FingerName::EFingerName_MAX && TracingStatus[Src1]) || (Src2 != EVMK_FingerName::EFingerName_MAX && TracingStatus[Src2]))
		{
			FTransform ReferenceTr = HandPalm_WS;
			// update world transforms
			for (int32 KnuckleIndex = 0; KnuckleIndex < Finger.KnucklesNum; KnuckleIndex++)
			{
				ReferenceTr = Finger.Knuckles[KnuckleIndex].TraceRefPoseRelativeTransform * ReferenceTr;

				const FVMK_FingerSolver* FingerA = Fingers.Find(Src1);
				const FVMK_FingerSolver* FingerB = Fingers.Find(Src2);

				const bool bFingerAHasTheSameAxes = !FingerA || (FingerA->FingerOrientation.ForwardAxis == Finger.FingerOrientation.ForwardAxis && FingerA->FingerOrientation.UpAxis == Finger.FingerOrientation.UpAxis);
				const bool bFingerBHasTheSameAxes = !FingerB || (FingerB->FingerOrientation.ForwardAxis == Finger.FingerOrientation.ForwardAxis && FingerB->FingerOrientation.UpAxis == Finger.FingerOrientation.UpAxis);

				FQuat NewRot, qA, qB;
				if (bFingerAHasTheSameAxes && bFingerBHasTheSameAxes)
				{
					// simple interpolation is possible
					qA = (FingerA && KnuckleIndex < FingerA->KnucklesNum) ? FingerA->Knuckles[KnuckleIndex].WorldTransform.GetRotation() : ReferenceTr.GetRotation();
					qB = (FingerB && KnuckleIndex < FingerB->KnucklesNum) ? FingerB->Knuckles[KnuckleIndex].WorldTransform.GetRotation() : ReferenceTr.GetRotation();
				}
				else
				{
					// convert A and B to current Finger's space
					if (FingerA && KnuckleIndex < FingerA->KnucklesNum)
					{
						const FRotator SrcRot = FingerA->Knuckles[KnuckleIndex].WorldTransform.Rotator();
						qA = FVMK_OrientTransform::MakeRotFromTwoAxis(
							Finger.FingerOrientation.ForwardAxis, FVMK_OrientTransform::GetAxisVector(SrcRot, FingerA->FingerOrientation.ForwardAxis),
							Finger.FingerOrientation.UpAxis, FVMK_OrientTransform::GetAxisVector(SrcRot, FingerA->FingerOrientation.UpAxis)
						).Quaternion();
					}
					else qA = ReferenceTr.GetRotation();

					if (FingerB && KnuckleIndex < FingerB->KnucklesNum)
					{
						const FRotator SrcRot = FingerB->Knuckles[KnuckleIndex].WorldTransform.Rotator();
						qB = FVMK_OrientTransform::MakeRotFromTwoAxis(
							Finger.FingerOrientation.ForwardAxis, FVMK_OrientTransform::GetAxisVector(SrcRot, FingerB->FingerOrientation.ForwardAxis),
							Finger.FingerOrientation.UpAxis, FVMK_OrientTransform::GetAxisVector(SrcRot, FingerB->FingerOrientation.UpAxis)
						).Quaternion();
					}
					else qB = ReferenceTr.GetRotation();
				}

				NewRot = FQuat::FastLerp(qA, qB, 0.5f);
				NewRot.Normalize();
				Finger.Knuckles[KnuckleIndex].WorldTransform.SetRotation(NewRot);

				if (KnuckleIndex > 0)
				{
					Finger.Knuckles[KnuckleIndex].WorldTransform.SetTranslation(
						Finger.Knuckles[KnuckleIndex - 1].WorldTransform.GetTranslation() +
						FVMK_OrientTransform::GetAxisVector(Finger.Knuckles[KnuckleIndex - 1].WorldTransform.Rotator(), Finger.FingerOrientation.ForwardAxis) * Finger.Knuckles[KnuckleIndex - 1].Length
					);
				}
			}

			// update relative transforms
			FTransform TargetTr;
			for (int32 Index = 0; Index < Finger.Knuckles.Num(); Index++)
			{
				if (Index == 0)
					TargetTr = Finger.Knuckles[0].WorldTransform.GetRelativeTransform(HandPalm_WS);
				else
					TargetTr = Finger.Knuckles[Index].WorldTransform.GetRelativeTransform(Finger.Knuckles[Index - 1].WorldTransform);

				if (bTracingInTick)
					Finger.Knuckles[Index].RelativeTransform = UKismetMathLibrary::TInterpTo(Finger.Knuckles[Index].RelativeTransform, TargetTr, DeltaTime, 12.f);
				else
					Finger.Knuckles[Index].RelativeTransform = TargetTr;
			}

			// can't adjust - disable finger
			if (Finger.Alpha != 0.5f)
			{
				if (bTracingInTick)
				{
					Finger.Alpha = FMath::FInterpConstantTo(Finger.Alpha, 0.5f, DeltaTime, 4.f);
					if (FMath::Abs(Finger.Alpha - 0.5f) < 0.01f) Finger.Alpha = 0.5f;
				}
				else Finger.Alpha = 0.5f;
			}
		}
		else
		{
			// can't adjust - disable finger
			if (Finger.Alpha > 0.f)
			{
				if (bTracingInTick)
				{
					Finger.Alpha = FMath::FInterpConstantTo(Finger.Alpha, 0.f, DeltaTime, 4.f);
					if (Finger.Alpha < 0.01f) Finger.Alpha = 0.f;
				}
				else Finger.Alpha = 0.f;
			}
		}
	}
}

void UVMKFingersFKIKSolver::UpdateFingers(bool bTrace, bool bUpdateFingersPose)
{
	if (!bIsInitialized && FingersSolverSetup && Mesh)
	{
		Initialize(FingersSolverSetup, Mesh);
	}

	if (!bIsInitialized)
	{
		return;
	}

	UWorld* w = Mesh->GetWorld();

	if (bTrace || (bUseRuntimeFingersPose && w && w->TimeSeconds - TraceStartTime < 3.f))
	{
		Trace(true);
	}

	if (bHasVRInputInFrame)
	{
		ProcessVRInput();
	}
	else if (bHasDetailedVRInputInFrame)
	{
		ProcessVRInputDetailed();
	}
	else if (bUpdateFingersPose && !bUseRuntimeFingersPose)
	{
		ProcessFingersPose(true);
	}

	bHasVRInputInFrame = false;
	bHasDetailedVRInputInFrame = false;
}

void UVMKFingersFKIKSolver::UpdatePoseSnapshot(FPoseSnapshot& OutPose)
{
	for (const auto& Finger : Fingers)
	{
		const float FingerAlpha = Finger.Value.Alpha;

		for (const auto& Knuckle : Finger.Value.Knuckles)
		{
			const int32 BoneIndex = Knuckle.BoneIndex;

			if (OutPose.LocalTransforms.Num() < BoneIndex)
			{
				UE_LOG(LogTemp, Warning, TEXT("UpdatePoseSnapshot: Invalid BoneIndex %d for Bone %s"), BoneIndex, *Knuckle.BoneName.ToString());
				continue;
			}
			if (OutPose.BoneNames.Num() < BoneIndex || !OutPose.BoneNames[BoneIndex].IsEqual(Knuckle.BoneName))
			{
				UE_LOG(LogTemp, Warning, TEXT("UpdatePoseSnapshot: Invalid BoneIndex %d for Bone %s"), BoneIndex, *Knuckle.BoneName.ToString());
				continue;
			}

			const FTransform& LocalTransform = OutPose.LocalTransforms[BoneIndex];
			const FTransform& SolverTransform = Knuckle.RelativeTransform;

			FTransform NewTransform = LocalTransform;
			if (FingerAlpha == 1.f)
			{
				NewTransform.SetRotation(SolverTransform.GetRotation());
			}
			else if (FingerAlpha > 0.f)
			{
				FQuat NewRot = FQuat::FastLerp(LocalTransform.GetRotation(), SolverTransform.GetRotation(), FingerAlpha);
				NewRot.Normalize();
				NewTransform.SetRotation(NewRot);
			}

			OutPose.LocalTransforms[BoneIndex] = NewTransform;
		}
	}
}

bool UVMKFingersFKIKSolver::SetFingersPose(const FVMK_FingersPosePreset& NewPose)
{
	CurrentFingersPose = NewPose;
	return true;
}

bool UVMKFingersFKIKSolver::SetFingersTraceReferencePose(const FVMK_FingersPosePreset& NewRefPose)
{
	return UpdateReferencePoseFromPoseName(NewRefPose, true);
}

bool UVMKFingersFKIKSolver::SetVRInputReferencePose(const FVMK_FingersPosePreset& NewRefPose)
{
	return UpdateReferencePoseFromPoseName(NewRefPose, false);
}

void UVMKFingersFKIKSolver::GrabObject(UPrimitiveComponent* Object)
{
	if (!Object)
	{
		return;
	}

	FilterObject = Object;
	bUseRuntimeFingersPose = true;

	if (UWorld* w = Mesh->GetWorld())
	{
		TraceStartTime = w->TimeSeconds;
	}
}

void UVMKFingersFKIKSolver::ReleaseObject()
{
	FilterObject = nullptr;
	bUseRuntimeFingersPose = false;

	for (auto& ts : TracingStatus) ts.Value = false;
}

bool UVMKFingersFKIKSolver::UpdateReferencePoseFromPoseName(const FVMK_FingersPosePreset& NewRefPose, bool bIsTraceRefPose)
{
	for (auto& FingerRef : Fingers)
	{
		FVMK_FingerSolver& Finger = FingerRef.Value;
		int32 KnuckleIndex = 0;

		for (auto& Knuckle : Finger.Knuckles)
		{
			const FVMK_OrientTransform& FingerOrient = Finger.FingerOrientation;

			const FVMK_FingerRotation* fpp = nullptr;
			switch (FingerRef.Key)
			{
				case EVMK_FingerName::FN_Thumb: fpp = &NewRefPose.ThumbRotation; break;
				case EVMK_FingerName::FN_Index: fpp = &NewRefPose.IndexRotation; break;
				case EVMK_FingerName::FN_Middle: fpp = &NewRefPose.MiddleRotation; break;
				case EVMK_FingerName::FN_Ring: fpp = &NewRefPose.RingRotation; break;
				case EVMK_FingerName::FN_Pinky: fpp = &NewRefPose.PinkyRotation; break;
			}
			if (!fpp) continue;

			// For all knucles after first cut off negative curl
			const float CurlVal = (KnuckleIndex == 0) ? fpp->CurlValue + fpp->FirstKnuckleCurlAddend : FMath::Clamp(fpp->CurlValue, -0.1f, 2.f);

			FRotator AddRot = FRotator::ZeroRotator;
			SetRotationAxisValue(AddRot, FingerOrient.RightAxis, CurlVal * 90.f);
			if (KnuckleIndex == 0)
			{
				SetRotationAxisValue(AddRot, FingerOrient.UpAxis, fpp->SpreadValue * 20.f * HandSideMultiplier);
				SetRotationAxisValue(AddRot, FingerOrient.ForwardAxis, fpp->RollValue * 20.f * HandSideMultiplier);
			}

			const FRotator BaseRot = Knuckle.RefPoseRelativeTransform.Rotator();
			const FRotator NewRot = AddLocalRotation(AddRot, BaseRot);

			if (bIsTraceRefPose)
				Knuckle.TraceRefPoseRelativeTransform.SetRotation(NewRot.Quaternion());
			else
				Knuckle.InputRefPoseRelativeTransform.SetRotation(NewRot.Quaternion());

			KnuckleIndex++;
		}
	}

	return true;
}

void UVMKFingersFKIKSolver::ProcessFingersPose(bool bUseInterpolation)
{
	float DeltaTime = 0.f;
	UWorld* World = Mesh->GetWorld();
	if (World) DeltaTime = World->DeltaTimeSeconds;

	bool bStateChecked = false;
	for (auto& FingerRef : Fingers)
	{
		FVMK_FingerSolver& Finger = FingerRef.Value;

		if (Finger.Alpha < 1.f)
		{
			Finger.Alpha = FMath::FInterpTo(Finger.Alpha, 1.f, DeltaTime, 18.f);
		}

		int32 KnuckleIndex = 0;
		for (auto& Knuckle : Finger.Knuckles)
		{
			const FVMK_FingerRotation* fpp = nullptr;
			switch (FingerRef.Key)
			{
			case EVMK_FingerName::FN_Thumb: fpp = &CurrentFingersPose.ThumbRotation; break;
			case EVMK_FingerName::FN_Index: fpp = &CurrentFingersPose.IndexRotation; break;
			case EVMK_FingerName::FN_Middle: fpp = &CurrentFingersPose.MiddleRotation; break;
			case EVMK_FingerName::FN_Ring: fpp = &CurrentFingersPose.RingRotation; break;
			case EVMK_FingerName::FN_Pinky: fpp = &CurrentFingersPose.PinkyRotation; break;
			}
			if (!fpp) continue;

			// For all knucles after first cut off negative curl
			const float CurlVal = (KnuckleIndex == 0) ? fpp->CurlValue + fpp->FirstKnuckleCurlAddend : FMath::Clamp(fpp->CurlValue, -0.1f, 2.f);

			// Calculate target rotation in parent bone space
			FRotator AddRot = FRotator::ZeroRotator;
			SetRotationAxisValue(AddRot, Finger.FingerOrientation.RightAxis, CurlVal * 90.f);
			if (KnuckleIndex == 0)
			{
				SetRotationAxisValue(AddRot, Finger.FingerOrientation.UpAxis, fpp->SpreadValue * 20.f * HandSideMultiplier);
				SetRotationAxisValue(AddRot, Finger.FingerOrientation.ForwardAxis, fpp->RollValue * 20.f * HandSideMultiplier);
			}

			const FRotator BaseRot = Knuckle.RefPoseRelativeTransform.Rotator();
			const FRotator NewRot = AddLocalRotation(AddRot, BaseRot);

			// Index increment
			KnuckleIndex++;

			// Delta between current and target rotation
			const FRotator Delta = UKismetMathLibrary::NormalizedDeltaRotator(NewRot, Knuckle.RelativeTransform.Rotator());
			// Don't update
			if (!bStateChecked && Delta.IsZero()) continue;

			// Update relative transform
			if (PosesInterpolationSpeed == 0.f || !bUseInterpolation || Delta.IsNearlyZero(0.01f))
			{
				// Is close? Set target value.
				Knuckle.RelativeTransform.SetRotation(NewRot.Quaternion());
			}
			else
			{
				// Not close? Interpolate.
#if ENGINE_MINOR_VERSION >= 20
				FQuat CurrRot = FMath::QInterpTo(Knuckle.RelativeTransform.GetRotation(), NewRot.Quaternion(), DeltaTime, PosesInterpolationSpeed);
#else
				FQuat CurrRot = FMath::RInterpTo(Knuckle.RelativeTransform.Rotator(), NewRot, DeltaTime, PosesInterpolationSpeed).Quaternion();
#endif

				Knuckle.RelativeTransform.SetRotation(CurrRot);
			}
		}
	}
}

void UVMKFingersFKIKSolver::ApplyVRInput(const FVMK_FingersPosePreset& NewFingersRotation)
{
	VRInput = NewFingersRotation;
	bHasVRInputInFrame = true;
}

void UVMKFingersFKIKSolver::ApplyVRInputDetailed(const FVMK_FingersDetailedInfo& NewFingersRotation)
{
	VRInputDetailed = NewFingersRotation;
	bHasDetailedVRInputInFrame = true;
}

void UVMKFingersFKIKSolver::ProcessVRInput()
{
	if (!bIsInitialized)
	{
		// Only in runtime
		return;
	}

	UWorld* World = Mesh->GetWorld();
	if (!World)
	{
		return;
	}

	const float DeltaTime = World->DeltaTimeSeconds;

	for (auto& VRSt : VRStatus)
	{
		VRSt.Value = false;
	}

	for (auto& FingerRef : Fingers)
	{
		auto& Finger = FingerRef.Value;
		if (!Finger.bEnabled || Finger.KnucklesNum == 0)
		{
			continue;
		}

		FVMK_FingerRotation FRot;
		switch (FingerRef.Key)
		{
		case EVMK_FingerName::FN_Index: FRot = VRInput.IndexRotation; break;
		case EVMK_FingerName::FN_Middle: FRot = VRInput.MiddleRotation; break;
		case EVMK_FingerName::FN_Ring: FRot = VRInput.RingRotation; break;
		case EVMK_FingerName::FN_Pinky: FRot = VRInput.PinkyRotation; break;
		case EVMK_FingerName::FN_Thumb: default: FRot = VRInput.ThumbRotation; break;
		}

		VRStatus[FingerRef.Key] = true;

		// finger isn't traced or isn't gripping Cnuckles/Touch controller
		// set curl value
		FTransform BaseHandTr = Mesh->GetSocketTransform(Finger.RootBoneName);
		FTransform StartTransform = Finger.Knuckles[0].InputRefPoseRelativeTransform * BaseHandTr;

		// finger is gripping in real reality and grabbing object in vr
		if (TracingStatus[FingerRef.Key])
		{
			auto& Knuckle0 = Finger.Knuckles[0];
			float Value = FMath::Lerp(InputMaxRotation, InputMinRotation, 1.f - FRot.CurlValue);
			const FVMK_OrientTransform FingerOrient = Finger.FingerOrientation;

			// reference vectors
			const FRotator& CurrentRot = Knuckle0.RelativeTransform.Rotator();
			float CurrentCurlAngle;
			switch (FingerOrient.RightAxis)
			{
				case EVMK_BoneOrientationAxis::X: CurrentCurlAngle = -CurrentRot.Roll; break;
				case EVMK_BoneOrientationAxis::X_Neg: CurrentCurlAngle = CurrentRot.Roll; break;
				case EVMK_BoneOrientationAxis::Y: CurrentCurlAngle = -CurrentRot.Pitch; break;
				case EVMK_BoneOrientationAxis::Y_Neg: CurrentCurlAngle = CurrentRot.Pitch; break;
				case EVMK_BoneOrientationAxis::Z: CurrentCurlAngle = CurrentRot.Yaw; break;
				case EVMK_BoneOrientationAxis::Z_Neg:
				default: CurrentCurlAngle = -CurrentRot.Yaw; break;
			}

			// adjust alpha
			if (CurrentCurlAngle < Value)
			{
				Finger.Alpha = FMath::FInterpTo(Finger.Alpha, 1.f, DeltaTime, 18.f);
			}
			else
			{
				Finger.Alpha = 1.f - (CurrentCurlAngle - Value) / (CurrentCurlAngle);
			}
		}
		else
		{
			float ValueCurl = FMath::Lerp(InputMinRotation, InputMaxRotation, FRot.CurlValue);
			const float ValueRoll = FMath::Lerp(InputMinRotation, InputMaxRotation, FRot.RollValue);
			const float ValueSpread = FMath::Lerp(InputMinRotation, InputMaxRotation, FRot.SpreadValue);

			for (int32 Index = 0; Index < Finger.KnucklesNum; Index++)
			{
				auto& Knuckle = Finger.Knuckles[Index];
				// last knuckle - half curl
				if (Index == Finger.KnucklesNum - 1) ValueCurl *= 0.5f;

				FRotator AddRot = FRotator::ZeroRotator;
				SetRotationAxisValue(AddRot, Finger.FingerOrientation.RightAxis, ValueCurl);
				if (Index == 0)
				{
					SetRotationAxisValue(AddRot, Finger.FingerOrientation.UpAxis, ValueSpread * HandSideMultiplier);
					SetRotationAxisValue(AddRot, Finger.FingerOrientation.ForwardAxis, ValueRoll * HandSideMultiplier);
				}
				const FRotator BaseRot = Knuckle.InputRefPoseRelativeTransform.Rotator();
				const FRotator NewRot = AddLocalRotation(AddRot, BaseRot);

				if (Finger.Alpha < 1.f)
				{
					Finger.Alpha = FMath::FInterpTo(Finger.Alpha, 1.f, DeltaTime, 18.f);
				}

				Knuckle.RelativeTransform.SetRotation(NewRot.Quaternion());
			}
		}
	}
}

void UVMKFingersFKIKSolver::ProcessVRInputDetailed()
{
	if (!bIsInitialized)
	{
		// Only in runtime
		return;
	}

	UWorld* World = Mesh->GetWorld();
	if (!World)
	{
		return;
	}

	const float DeltaTime = World->DeltaTimeSeconds;

	for (auto& VRSt : VRStatus)
	{
		VRSt.Value = false;
	}

	for (auto& FingerRef : Fingers)
	{
		auto& Finger = FingerRef.Value;
		if (!Finger.bEnabled || Finger.KnucklesNum == 0)
		{
			continue;
		}

		const TArray<FVMK_FingerRotation>* FRot;
		switch (FingerRef.Key)
		{
			case EVMK_FingerName::FN_Index: FRot = &VRInputDetailed.IndexBones; break;
			case EVMK_FingerName::FN_Middle: FRot = &VRInputDetailed.MiddleBones; break;
			case EVMK_FingerName::FN_Ring: FRot = &VRInputDetailed.RingBones; break;
			case EVMK_FingerName::FN_Pinky: FRot = &VRInputDetailed.PinkyBones; break;
			case EVMK_FingerName::FN_Thumb: default: FRot = &VRInputDetailed.ThumbBones; break;
		}

		VRStatus[FingerRef.Key] = true;

		// finger isn't traced or isn't gripping Cnuckles/Touch controller
		// set curl value
		FTransform BaseHandTr = Mesh->GetSocketTransform(Finger.RootBoneName);
		FTransform StartTransform = Finger.Knuckles[0].InputRefPoseRelativeTransform * BaseHandTr;

		for (int32 Index = 0; Index < Finger.KnucklesNum; Index++)
		{
			FVMK_FingerRotation rot = FRot->Num() > Index ? (*FRot)[Index] : FVMK_FingerRotation();
			auto& Knuckle = Finger.Knuckles[Index];

			FRotator AddRot = FRotator::ZeroRotator;
			SetRotationAxisValue(AddRot, Finger.FingerOrientation.RightAxis, rot.CurlValue);
			SetRotationAxisValue(AddRot, Finger.FingerOrientation.UpAxis, rot.SpreadValue * HandSideMultiplier);
			SetRotationAxisValue(AddRot, Finger.FingerOrientation.ForwardAxis, rot.RollValue * HandSideMultiplier);

			const FRotator BaseRot = Knuckle.InputRefPoseRelativeTransform.Rotator();
			const FRotator NewRot = AddLocalRotation(AddRot, BaseRot);

			if (Finger.Alpha < 1.f)
			{
				Finger.Alpha = FMath::FInterpTo(Finger.Alpha, 1.f, DeltaTime, 18.f);
			}

			Knuckle.RelativeTransform.SetRotation(NewRot.Quaternion());
		}
	}
}

void UVMKFingersFKIKSolver::AddRotationAxisValue(FRotator& OutRot, EVMK_BoneOrientationAxis Axis, float Value)
{
	switch (Axis)
	{
		case EVMK_BoneOrientationAxis::X: OutRot.Roll -= Value; break;
		case EVMK_BoneOrientationAxis::X_Neg: OutRot.Roll += Value; break;
		case EVMK_BoneOrientationAxis::Y: OutRot.Pitch -= Value; break;
		case EVMK_BoneOrientationAxis::Y_Neg: OutRot.Pitch += Value; break;
		case EVMK_BoneOrientationAxis::Z: OutRot.Yaw += Value; break;
		case EVMK_BoneOrientationAxis::Z_Neg: OutRot.Yaw -= Value; break;
	}
}

// Helper function to apply rotation
void UVMKFingersFKIKSolver::SetRotationAxisValue(FRotator& OutRot, EVMK_BoneOrientationAxis Axis, float Value)
{
	switch (Axis)
	{
		case EVMK_BoneOrientationAxis::X: OutRot.Roll = -Value; break;
		case EVMK_BoneOrientationAxis::X_Neg: OutRot.Roll = Value; break;
		case EVMK_BoneOrientationAxis::Y: OutRot.Pitch = -Value; break;
		case EVMK_BoneOrientationAxis::Y_Neg: OutRot.Pitch = Value; break;
		case EVMK_BoneOrientationAxis::Z: OutRot.Yaw = Value; break;
		case EVMK_BoneOrientationAxis::Z_Neg: OutRot.Yaw = -Value; break;
	}
}

FORCEINLINE FRotator UVMKFingersFKIKSolver::AddLocalRotation(const FRotator& AdditionRot, const FRotator& BaseRot)
{
	return UKismetMathLibrary::ComposeRotators(BaseRot.GetInverse(), AdditionRot.GetInverse()).GetInverse();
}

void UVMKFingersFKIKSolver::GetFingerKnuckles(EVMK_FingerName FingerName, TArray<FVMK_Knuckle>& OutKnuckles)
{
	FVMK_FingerSolver* Finger = Fingers.Find(FingerName);

	if (Finger)
	{
		OutKnuckles = Finger->Knuckles;
	}
	else
	{
		OutKnuckles.Empty();
	}
}

FString UVMKFingersFKIKSolver::GetFingerDescription(EVMK_FingerName FingerName) const
{
	if (!Fingers.Contains(FingerName))
	{
		return "";
	}

	const auto& Finger = Fingers[FingerName];
	FString sz = "A [" + FString::SanitizeFloat(Finger.Alpha) + "] ";
	for (auto& Knuckle : Finger.Knuckles)
	{
		sz += (Knuckle.BoneName.ToString() + " [ loc=" + Knuckle.RelativeTransform.GetTranslation().ToString() + " rot=" + Knuckle.RelativeTransform.Rotator().ToString() + "] ");
	}

	return sz.TrimEnd();
}

// Get reference transform of knuckle in world space
FTransform UVMKFingersFKIKSolver::GetKnuckleRefTransform(const FVMK_FingerSolver& Finger, int32 KnuckleIndex)
{
	FTransform ret = FTransform::Identity;
	for (int32 Index = KnuckleIndex; Index >= 0; Index++)
	{
		ret = ret * Finger.Knuckles[Index].RelativeTransform;
	}
	ret = ret * Mesh->GetSocketTransform(Finger.RootBoneName);
	return ret;
}
