// Copyright Yuri N K, 2018. All Rights Reserved.
// Support: ykasczc@gmail.com

#include "ViveMocapHelpers.h"
#include "Engine/Engine.h"
#include "CoreMinimal.h"
#include "ViveMocapTypes.h"
#include "Kismet/KismetMathLibrary.h"
#include "ReferenceSkeleton.h"
#include "Animation/PoseSnapshot.h"

#define VMH_RotatorDirection(Rotator, Axis) FRotationMatrix(Rotator).GetScaledAxis(Axis)

// Calculating twist bones Roll. Some glitches could happen here if DeltaAngle is too high.
void VMHelper::CalculateTwist(const FTransform& BoneStart, const FTransform& BoneEnd, EAxis::Type ForwardAxis, float& ReturnValue, bool bDebug)
{
	//const FRotator Delta = UKismetMathLibrary::NormalizedDeltaRotator(BoneEnd.Rotator(), BoneStart.Rotator());
	//ReturnValue = GetAxisRotation(Delta, ForwardAxis);

	FVector AnotherVec;
	EAxis::Type AnotherAxis = EAxis::Type::X;
	switch (ForwardAxis)
	{
		case EAxis::X: AnotherAxis = EAxis::Type::Y; break;
		case EAxis::Y: AnotherAxis = EAxis::Type::Z; break;
		case EAxis::Z: AnotherAxis = EAxis::Type::X; break;
	}
	FVector StartF = VMH_RotatorDirection(BoneStart.Rotator(), ForwardAxis);
	FVector StartA = VMH_RotatorDirection(BoneStart.Rotator(), AnotherAxis);
	FVector EndF = VMH_RotatorDirection(BoneEnd.Rotator(), ForwardAxis);
	FVector EndA = VMH_RotatorDirection(BoneEnd.Rotator(), AnotherAxis);
	EndA = FVector::VectorPlaneProject(EndA, StartF).GetSafeNormal();
	const FRotator R1 = UKismetMathLibrary::MakeRotFromXY(StartF, StartA);
	const FRotator R2 = UKismetMathLibrary::MakeRotFromXY(StartF, EndA);

	const FRotator Delta = UKismetMathLibrary::NormalizedDeltaRotator(R2, R1);
	ReturnValue = Delta.Roll;
}

/* Calculating twist bones by rotator only (no drawing debug). Some glitches could happen here if DeltaAngle is too high. */
void VMHelper::CalculateTwist(const FRotator& BoneStart, const FRotator& BoneEnd, EAxis::Type ForwardAxis, float& ReturnValue, bool bDebug)
{
	FVector AnotherVec;
	EAxis::Type AnotherAxis;
	switch (ForwardAxis)
	{
		case EAxis::X: AnotherAxis = EAxis::Type::Y; break;
		case EAxis::Y: AnotherAxis = EAxis::Type::Z; break;
		case EAxis::Z: AnotherAxis = EAxis::Type::X; break;
		default: AnotherAxis = EAxis::Type::X; break;
	}
	FVector StartF = VMH_RotatorDirection(BoneStart, ForwardAxis);
	FVector StartA = VMH_RotatorDirection(BoneStart, AnotherAxis);
	FVector EndF = VMH_RotatorDirection(BoneEnd, ForwardAxis);
	FVector EndA = VMH_RotatorDirection(BoneEnd, AnotherAxis);
	EndA = FVector::VectorPlaneProject(EndA, StartF).GetSafeNormal();
	const FRotator R1 = UKismetMathLibrary::MakeRotFromXY(StartF, StartA);
	const FRotator R2 = UKismetMathLibrary::MakeRotFromXY(StartF, EndA);

	const FRotator Delta = UKismetMathLibrary::NormalizedDeltaRotator(R2, R1);
	ReturnValue = Delta.Roll;

	if (bDebug)
	{
		FString dstr =
			"Start val: " + FString::SanitizeFloat(GetAxisRotation(BoneStart, ForwardAxis)) +
			" / " +
			"End val: " + FString::SanitizeFloat(GetAxisRotation(BoneEnd, ForwardAxis));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, dstr);
	}
}

/**
* Clamping elbow joint target rotation to avoid arms wringing.
* InternalSide is a direction from hand to spine centre
* UpSide is a direction from palm centre to thumb
* CurrentAngle is an elbow direction to clamp
* Coeffitiens are empirical.
*/
void VMHelper::ClampElbowRotation(const FVector InternalSide, const FVector UpSide, const FVector HandUpVector, FVector& CurrentAngle, bool bDebug)
{
	// check limits
	FQuat LimAngleA;
	FVector LimAngle;

	if (FVector::DotProduct(InternalSide, HandUpVector) < -0.4f && FVector::DotProduct(UpSide, HandUpVector) > -.4f)
	{
		// Elbow is inside
		LimAngleA = FQuat::FastLerp(
			FRotationMatrix::MakeFromX(InternalSide).ToQuat(),
			FRotationMatrix::MakeFromX(UpSide * -1.f).ToQuat(),
			0.35f);
		LimAngleA.Normalize();
		LimAngle = LimAngleA.GetForwardVector();

		float cos1 = FVector::DotProduct(UpSide, LimAngle);
		float cos2 = FVector::DotProduct(UpSide, CurrentAngle);
		if (cos1 < cos2) {
			CurrentAngle = FMath::Lerp(CurrentAngle, LimAngle, (1.f - cos2 / cos1));
		}
		if (bDebug) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, "internal");
	}
	else if (FVector::DotProduct(InternalSide, HandUpVector) > -.4f && FVector::DotProduct(UpSide, HandUpVector) < -0.4f)
	{
		// Elbow is outside
		LimAngleA = FQuat::FastLerp(
			FRotationMatrix::MakeFromX(InternalSide * -1.f).ToQuat(),
			FRotationMatrix::MakeFromX(UpSide).ToQuat(),
			0.5f);
		LimAngleA.Normalize();
		LimAngle = LimAngleA.GetForwardVector();

		float cos1 = FVector::DotProduct(UpSide, LimAngle);
		float cos2 = FVector::DotProduct(UpSide, CurrentAngle);
		if (cos1 < cos2) {
			CurrentAngle = FMath::Lerp(CurrentAngle, LimAngle, ((cos2 / cos1) - 1.f) * 1.8f);
		}
		if (bDebug) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, "external");
	}
}

// Math helper. Add value to Rotator by Axis.
void VMHelper::AddAxisRotation(FRotator& Rotator, EAxis::Type Axis, float Value)
{
	/**/ if (Axis == EAxis::X) Rotator.Roll += Value;
	else if (Axis == EAxis::Y) Rotator.Pitch += Value;
	else if (Axis == EAxis::Z) Rotator.Yaw += Value;
}

// Math helper. Set value at Rotator by Axis.
void VMHelper::SetAxisRotation(FRotator& Rotator, EAxis::Type Axis, float Value)
{
	/**/ if (Axis == EAxis::X) Rotator.Roll = Value;
	else if (Axis == EAxis::Y) Rotator.Pitch = Value;
	else if (Axis == EAxis::Z) Rotator.Yaw = Value;
}

// Math helper. Get axis value of the specified Rotator.
float VMHelper::GetAxisRotation(const FRotator& Rotator, EAxis::Type Axis)
{
	/**/ if (Axis == EAxis::X) return Rotator.Roll;
	else if (Axis == EAxis::Y) return Rotator.Pitch;
	else if (Axis == EAxis::Z) return Rotator.Yaw;
	else return 0.f;
}

/* Helper. Build rotator by two axis. */
FRotator VMHelper::MakeRotByTwoAxes(EAxis::Type MainAxis, FVector MainAxisDirection, EAxis::Type SecondaryAxis, FVector SecondaryAxisDirection)
{
	FRotator r;

	if (MainAxis == EAxis::X)
	{
		if (SecondaryAxis == EAxis::Y)
			r = FRotationMatrix::MakeFromXY(MainAxisDirection, SecondaryAxisDirection).Rotator();
		else if (SecondaryAxis == EAxis::Z)
			r = FRotationMatrix::MakeFromXZ(MainAxisDirection, SecondaryAxisDirection).Rotator();
	}
	else if (MainAxis == EAxis::Y)
	{
		if (SecondaryAxis == EAxis::X)
			r = FRotationMatrix::MakeFromYX(MainAxisDirection, SecondaryAxisDirection).Rotator();
		else if (SecondaryAxis == EAxis::Z)
			r = FRotationMatrix::MakeFromYZ(MainAxisDirection, SecondaryAxisDirection).Rotator();
	}
	else if (MainAxis == EAxis::Z)
	{
		if (SecondaryAxis == EAxis::X)
			r = FRotationMatrix::MakeFromZX(MainAxisDirection, SecondaryAxisDirection).Rotator();
		else if (SecondaryAxis == EAxis::Y)
			r = FRotationMatrix::MakeFromZY(MainAxisDirection, SecondaryAxisDirection).Rotator();
	}

	return r;
}

/* Helper for rig building. Find axis of rotator the closest to being parallel to the specified vectors. Returns +1.f in Multiplier if co-directed and -1.f otherwise */
EAxis::Type VMHelper::FindCoDirection(const FRotator& BoneRotator, const FVector& Direction, float& ResultMultiplier)
{
	EAxis::Type RetAxis;
	FVector dir = Direction;
	dir.Normalize();

	const FVector v1 = VMH_RotatorDirection(BoneRotator, EAxis::X);
	const FVector v2 = VMH_RotatorDirection(BoneRotator, EAxis::Y);
	const FVector v3 = VMH_RotatorDirection(BoneRotator, EAxis::Z);

	const float dp1 = FVector::DotProduct(v1, dir);
	const float dp2 = FVector::DotProduct(v2, dir);
	const float dp3 = FVector::DotProduct(v3, dir);

	if (FMath::Abs(dp1) > FMath::Abs(dp2) && FMath::Abs(dp1) > FMath::Abs(dp3)) {
		RetAxis = EAxis::X;
		ResultMultiplier = dp1 > 0.f ? 1.f : -1.f;
	}
	else if (FMath::Abs(dp2) > FMath::Abs(dp1) && FMath::Abs(dp2) > FMath::Abs(dp3)) {
		RetAxis = EAxis::Y;
		ResultMultiplier = dp2 > 0.f ? 1.f : -1.f;
	}
	else {
		RetAxis = EAxis::Z;
		ResultMultiplier = dp3 > 0.f ? 1.f : -1.f;
	}

	return RetAxis;
}

FORCEINLINE FVector VMHelper::SetVectorAxis(const FVector& InVector, EAxis::Type Axis, float Value)
{
	FVector Out = InVector;
	switch (Axis)
	{
		case EAxis::Type::X: Out.X = Value; break;
		case EAxis::Type::Y: Out.Y = Value; break;
		case EAxis::Type::Z: Out.Z = Value; break;
	}
	return Out;
}

FORCEINLINE FVector VMHelper::MulVectorAxis(const FVector& InVector, EAxis::Type Axis, float Value)
{
	FVector Out = InVector;
	switch (Axis)
	{
		case EAxis::Type::X: Out.X *= Value; break;
		case EAxis::Type::Y: Out.Y *= Value; break;
		case EAxis::Type::Z: Out.Z *= Value; break;
	}
	return Out;
}

// make joint target adjustment for fully stretched limb
FVector VMHelper::JointTargetAdjustment(const FVector& ChainRoot, const FTransform& Effector, const FVector& CurrentJointTarget, const FVector& CalculatedForwardDirection, float AdjustmentOffset)
{
	FVector RetVal = CurrentJointTarget;

	const FVector R2E = (Effector.GetTranslation() - ChainRoot).GetSafeNormal();
	const FVector R2JT = (Effector.GetTranslation() - CurrentJointTarget).GetSafeNormal();

	const float DP = FVector::DotProduct(R2E, R2JT);
	const float Treshold = 0.95f;
	if (DP > Treshold)
	{
		const float Alpha = (DP - Treshold) / (1.f - Treshold);

		RetVal += (CalculatedForwardDirection * (AdjustmentOffset * Alpha));
	}

	return RetVal;
}

/**
* Calculate rotation in horizontal plane for root bone
* Use Pelvis forward rotation when it's projection to horizontal plane is large enougth
* or interpolated value between forward and up vectors in other casese
*/
FORCEINLINE float VMHelper::iCalcRootRotation(const FVector& ForwardVector, const FVector& UpVector)
{
	FVector FxyN = FVector(ForwardVector.X, ForwardVector.Y, 0.f).GetSafeNormal();
	const FVector Uxy = FVector(UpVector.X, UpVector.Y, 0.f);
	const FVector UxyN = Uxy.GetSafeNormal();

	// squared limit value
	const float TurningTreshold = 0.7f * 0.7f;

	// projection of the forward vector on horizontal plane is too small
	const float ProjectionSize = Uxy.SizeSquared();
	if (ProjectionSize > TurningTreshold)
	{
		// interpolation alpha
		const float alpha = FMath::Clamp((ProjectionSize - TurningTreshold) / (1.f - TurningTreshold), 0.f, 1.f);

		// new forward vector
		FVector NewF;
		// choose down or up side and use interpolated vector between forward and up to find current horizontal forward direction
		if (ForwardVector.Z < 0.f)
		{
			NewF = FMath::Lerp((UpVector.Z > 0.f) ? ForwardVector : -ForwardVector, UpVector, alpha);
		}
		else
		{
			NewF = FMath::Lerp((UpVector.Z > 0.f) ? ForwardVector : -ForwardVector, -UpVector, alpha);
		}

		FxyN = FVector(NewF.X, NewF.Y, 0.f).GetSafeNormal();

		return FMath::RadiansToDegrees(FMath::Atan2(FxyN.Y, FxyN.X));
	}
	// projection of the forward vector on horizontal plane is large enough to use it
	else
	{
		const float YawRet = FMath::RadiansToDegrees(FMath::Atan2(FxyN.Y, FxyN.X));

		return (UpVector.Z > 0.f) ? YawRet : -YawRet;
	}
}

FORCEINLINE FVector VMHelper::iCalcRootDirection(const FVector& ForwardVector, const FVector& UpVector)
{
	const float Yaw = iCalcRootRotation(ForwardVector, UpVector);
	float XYSin, XYCos;

	FMath::SinCos(&XYSin, &XYCos, Yaw);
	return FVector(XYSin, XYCos, 0.f);
}


// Math. Calculate distance from Point to line A-B
FORCEINLINE float VMHelper::iDistanceToLine(FVector LineA, FVector LineB, FVector Point)
{
	FVector a = LineB - LineA;
	FVector c = Point - LineA;
	float size = c.Size();
	a.Normalize(); c.Normalize();

	const float cosa = FVector::DotProduct(a, c); // cos
	return size * FMath::Sqrt(1.f - cosa*cosa); // c*sin
}

/* Calculate knee location based on active settings */
FORCEINLINE FVector VMHelper::iCalculateKnee(const FVector& PelvisLoc, const FVector& PelvisDirection, const FVector& PelvisRight, const FVector& FootLoc, const FVector& FootDirection, const FVector& FootRight, EKneeOrientationSetup KneeOrientation)
{
	const FVector LegLine = FootLoc - PelvisLoc;
	FVector YDir, RightDir;

	switch (KneeOrientation)
	{
		case EKneeOrientationSetup::AsPelvis:
			RightDir = FMath::Lerp(PelvisRight, FootRight, 0.1f);
			break;
		case EKneeOrientationSetup::AsFoot:
			RightDir = FMath::Lerp(PelvisRight, FootRight, 0.9f);
			break;
		default:
			RightDir = FMath::Lerp(PelvisRight, FootRight, 0.5f);
			break;
	}

	// knee forward direction
	YDir = LegLine.GetSafeNormal() ^ RightDir;

	// knee location
	const FVector NewX = LegLine.GetSafeNormal();
	const FVector NewZ = (NewX ^ YDir.GetSafeNormal()).GetSafeNormal();
	const FVector NewY = NewZ ^ NewX;

	return (PelvisLoc + LegLine * 0.5f + NewY * 30.f);
}

FORCEINLINE FTransform VMHelper::iRestoreSkeletonBoneTransform(const FPoseSnapshot& CurrentPose, const FReferenceSkeleton& RefSkeleton, const int32 CurrentBoneIndex)
{
	// calculate world transform transform
	int32 TransformIndex = CurrentBoneIndex;
	int32 ParentIndex = RefSkeleton.GetParentIndex(TransformIndex);
	FTransform tr_bone = FTransform::Identity;
	FTransform tr_par;

	// stop on pelvis
	while (ParentIndex != INDEX_NONE && ParentIndex > 0)
	{
		TransformIndex = ParentIndex;

		tr_par = CurrentPose.LocalTransforms[TransformIndex];
		tr_par.NormalizeRotation();

		tr_bone.NormalizeRotation();
		tr_bone = tr_bone * tr_par;

		ParentIndex = RefSkeleton.GetParentIndex(TransformIndex);
	}
	// add root
	tr_bone.NormalizeRotation();

	/*
	if (bHasRootBone)
	{
		tr_bone = tr_bone * CapturedBody.Root;
	}
	else
	{
		tr_bone = tr_bone * CapturedBody.Pelvis;
	}
	*/

	return tr_bone;
}

/*
FORCEINLINE FQuat UCaptureDevice::MeanQuat(const FTransform* t, int32 Num)
{
	int addAmount = 0;
	FQuat addedRotation = FQuat::Identity;
	FQuat averageRotation;

	for (int32 i = 0; i < Num; ++i)
	{
		float w, x, y, z;
		addAmount++;

		float addDet = 1.0f / (float)addAmount;
		addedRotation.W += t[i].GetRotation().W;
		w = addedRotation.W * addDet;
		addedRotation.X += t[i].GetRotation().X;
		x = addedRotation.X * addDet;
		addedRotation.Y += t[i].GetRotation().Y;
		y = addedRotation.Y * addDet;
		addedRotation.Z += t[i].GetRotation().Z;
		z = addedRotation.Z * addDet;

		float D = 1.0f / (w*w + x * x + y * y + z * z);
		w *= D;
		x *= D;
		y *= D;
		z *= D;

		averageRotation = FQuat(x, y, z, w);
	}

	averageRotation.Normalize();
	return averageRotation;
}
*/