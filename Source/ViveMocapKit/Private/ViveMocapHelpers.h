// (c) Yuri N. K. 2017. All rights reserved.
// ykasczc@gmail.com

#pragma once

#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ViveMocapTypes.h"
#include "ReferenceSkeleton.h"
#include "Animation/PoseSnapshot.h"

namespace VMHelper
{
	/* Calculating twist bones Roll. Some glitches could happen here if DeltaAngle is too high. */
	void CalculateTwist(const FTransform& BoneStart, const FTransform& BoneEnd, EAxis::Type ForwardAxis, float& ReturnValue, bool bDebug = false);

	/* Calculating twist bones by rotator only (no drawing debug). Some glitches could happen here if DeltaAngle is too high. */
	void CalculateTwist(const FRotator& BoneStart, const FRotator& BoneEnd, EAxis::Type ForwardAxis, float& ReturnValue, bool bDebug = false);

	/**
	* Clamping elbow joint target rotation to avoid arms wringing.
	* InternalSide is a direction from hand to spine centre
	* UpSide is a direction from palm centre to thumb
	* CurrentAngle is an elbow direction to clamp
	* Coeffitiens are empirical.
	*/
	void ClampElbowRotation(const FVector InternalSide, const FVector UpSide, const FVector HandUpVector, FVector& CurrentAngle, bool bDebug);
	
	/* Math helper. Add value to Rotator by Axis. */
	void AddAxisRotation(FRotator& Rotator, EAxis::Type Axis, float Value);

	/* Math helper. Set value at Rotator by Axis. */
	void SetAxisRotation(FRotator& Rotator, EAxis::Type Axis, float Value);

	/* Math helper. Get axis value of the specified Rotator. */
	float GetAxisRotation(const FRotator& Rotator, EAxis::Type Axis);

	/* Helper. Build rotator by two axis. */
	FRotator MakeRotByTwoAxes(EAxis::Type MainAxis, FVector MainAxisDirection, EAxis::Type SecondaryAxis, FVector SecondaryAxisDirection);

	/* Helper for rig building. Find axis of rotator the closest to being parallel to the specified vectors. Returns +1.f in Multiplier if co-directed and -1.f otherwise */
	EAxis::Type FindCoDirection(const FRotator& BoneRotator, const FVector& Direction, float& ResultMultiplier);

	FORCEINLINE FVector SetVectorAxis(const FVector& InVector, EAxis::Type Axis, float Value);
	FORCEINLINE FVector MulVectorAxis(const FVector& InVector, EAxis::Type Axis, float Value);
	/* Make joint target adjustment for fully stretched limb */
	FORCEINLINE FVector JointTargetAdjustment(const FVector& ChainRoot, const FTransform& Effector, const FVector& CurrentJointTarget, const FVector& CalculatedForwardDirection, float AdjustmentOffset);
	FORCEINLINE FRotator Vec2Rot(FVector_NetQuantize100 VectorValue) { return FRotator(VectorValue.X * 180.f, VectorValue.Y * 180.f, VectorValue.Z * 180.f); };
	FORCEINLINE FVector_NetQuantize100 Rot2Vec(FRotator RotatorValue) { return FVector(RotatorValue.Pitch / 180.f, RotatorValue.Yaw / 180.f, RotatorValue.Roll / 180.f); };
	FORCEINLINE FVector GetScaleInDirection(EAxis::Type Axis, float Value) { FVector ret = FVector(1.f, 1.f, 1.f); if (Axis == EAxis::X) ret.X = Value; else if (Axis == EAxis::Y) ret.Y = Value; else ret.Z = Value; return ret; };
	/**
	* Calculate rotation in horizontal plane for root bone
	* Use Pelvis forward rotation when it's projection to horizontal plane is large enougth
	* or interpolated value between forward and up vectors in other casese
	*/
	FORCEINLINE float iCalcRootRotation(const FVector& ForwardVector, const FVector& UpVector);
	FORCEINLINE FVector iCalcRootDirection(const FVector& ForwardVector, const FVector& UpVector);
	/* Math. Calculate distance from Point to line A-B */
	FORCEINLINE float iDistanceToLine(FVector LineA, FVector LineB, FVector Point);

	FORCEINLINE FVector iCalculateKnee(const FVector& PelvisLoc, const FVector& PelvisDirection, const FVector& PelvisRight, const FVector& FootLoc, const FVector& FootDirection, const FVector& FootRight, EKneeOrientationSetup KneeOrientation);

	FORCEINLINE FTransform iRestoreSkeletonBoneTransform(const FPoseSnapshot& CurrentPose, const FReferenceSkeleton& RefSkeleton, const int32 CurrentBoneIndex);
}