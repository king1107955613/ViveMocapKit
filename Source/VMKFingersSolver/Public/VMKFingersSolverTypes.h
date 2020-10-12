// Copyright Yuri N K, 2018. All Rights Reserved.
// Support: ykasczc@gmail.com

#pragma once

#include "CoreMinimal.h"
#include "VMKFingersSolverTypes.generated.h"

/**
* Humanoid hand side, left or right
*/
UENUM(BlueprintType, meta=(DisplayName="VR Hand"))
enum class EVMK_VRHand : uint8
{
	VRH_Left				UMETA(DisplayName = "Left"),
	VRH_Right				UMETA(DisplayName = "Right"),
	VRH_MAX					UMETA(Hidden)
};

/**
* Arm visibility
*/
UENUM(BlueprintType, meta = (DisplayName = "VR Hand Style"))
enum class EVMK_HandStyle : uint8
{
	HS_FullArm		UMETA(DisplayName = "Full Arm"),
	HS_Lowerarm		UMETA(DisplayName = "Lowerarm"),
	HS_HandOnly		UMETA(DisplayName = "Hand Only"),
	HS_MAX			UMETA(Hidden)
};

/**
* Bone axis value
*/
UENUM(BlueprintType)
enum class EVMK_BoneOrientationAxis : uint8
{
	X				UMETA(DisplayName = "X+"),
	Y				UMETA(DisplayName = "Y+"),
	Z				UMETA(DisplayName = "Z+"),
	X_Neg			UMETA(DisplayName = "X-"),
	Y_Neg			UMETA(DisplayName = "Y-"),
	Z_Neg			UMETA(DisplayName = "Z-"),
	BOA_MAX			UMETA(Hidden)
};

/**
* Humanoid fingers
*/
UENUM(BlueprintType)
enum class EVMK_FingerName : uint8
{
	FN_Thumb		UMETA(DisplayName = "Thumb Finger"),
	FN_Index		UMETA(DisplayName = "Index Finger"),
	FN_Middle		UMETA(DisplayName = "Middle Finger"),
	FN_Ring			UMETA(DisplayName = "Ring Finger"),
	FN_Pinky		UMETA(DisplayName = "Pinky Finger"),
	EFingerName_MAX UMETA(Hidden)
};

/**
* Finger 3DOF rotation
*/
USTRUCT(BlueprintType)
struct VMKFINGERSSOLVER_API FVMK_FingerRotation
{
	GENERATED_USTRUCT_BODY()

	/** One unit is 90 degrees */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Finger Rotation")
	float CurlValue;

	/** First bone curl addend */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Finger Rotation")
	float FirstKnuckleCurlAddend;

	/** One unit is 20 degrees */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Finger Rotation")
	float SpreadValue;

	/** One unit is 20 degrees */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Finger Rotation")
	float RollValue;

	FVMK_FingerRotation()
	{
		FirstKnuckleCurlAddend = CurlValue = SpreadValue = RollValue = 0.f;
	}
};

/**
Transform struct with support of orientation transformations
*/
struct FVMK_OrientTransform : FTransform
{
	EVMK_BoneOrientationAxis ForwardAxis;
	EVMK_BoneOrientationAxis RightAxis;
	EVMK_BoneOrientationAxis UpAxis;
	float RightAxisMultiplier;

private:
	FORCEINLINE FVector GetAxisVector(EVMK_BoneOrientationAxis Axis) const
	{
		return GetAxisVector(*this, Axis);
	}

public:

	static FVector GetAxisVector(const FTransform& InTransform, EVMK_BoneOrientationAxis Axis)
	{
		float DirMul = 1.f;
		uint8 convAxis = (uint8)Axis;

		if (Axis >= EVMK_BoneOrientationAxis::X_Neg)
		{
			DirMul = -1.f;
			convAxis -= (uint8)EVMK_BoneOrientationAxis::X_Neg;
		}
		return DirMul * InTransform.GetScaledAxis((EAxis::Type)(convAxis + 1));
	}

	static FVector GetAxisVector(const FRotator& InRotator, EVMK_BoneOrientationAxis Axis)
	{
		switch (Axis)
		{
		case EVMK_BoneOrientationAxis::X:
			return InRotator.Quaternion().GetForwardVector();
		case EVMK_BoneOrientationAxis::Y:
			return InRotator.Quaternion().GetRightVector();
		case EVMK_BoneOrientationAxis::Z:
			return InRotator.Quaternion().GetUpVector();
		case EVMK_BoneOrientationAxis::X_Neg:
			return InRotator.Quaternion().GetForwardVector() * -1.f;
		case EVMK_BoneOrientationAxis::Y_Neg:
			return InRotator.Quaternion().GetRightVector() * -1.f;
		case EVMK_BoneOrientationAxis::Z_Neg:
			return InRotator.Quaternion().GetUpVector() * -1.f;
		}
		return FVector();
	}

	FVMK_OrientTransform()
	{
		FTransform();
		ForwardAxis = EVMK_BoneOrientationAxis::X;
		RightAxis = EVMK_BoneOrientationAxis::Y;
		UpAxis = EVMK_BoneOrientationAxis::Z;
		RightAxisMultiplier = 1.f;
	}

	FVMK_OrientTransform(const FVMK_OrientTransform& OrientationBase, const FTransform& InTransform,
		float InRightAxisMultiplier = 1.f,
		EVMK_BoneOrientationAxis InForwardAxis = EVMK_BoneOrientationAxis::X, EVMK_BoneOrientationAxis InUpAxis = EVMK_BoneOrientationAxis::Z)
	{
		*this = InTransform;

		ForwardAxis = OrientationBase.ForwardAxis; RightAxis = OrientationBase.RightAxis; UpAxis = OrientationBase.UpAxis;
		RightAxisMultiplier = InRightAxisMultiplier;

		const FVector V = GetAxisVector(InTransform, InForwardAxis);
		const FVector U = GetAxisVector(InTransform, InUpAxis);
		const FRotator ConvertedRot = MakeRotFromTwoAxis(ForwardAxis, V, UpAxis, U);
		SetRotation(ConvertedRot.Quaternion());
	}

	void SetTransform(const FTransform& InTransform)
	{
		CopyTranslation(InTransform);
		CopyRotation(InTransform);
		CopyScale3D(InTransform);
	}

	static FVMK_OrientTransform MakeOrientTransform(const FVMK_OrientTransform& OrientationBase, const FTransform& InTransform)
	{
		FVMK_OrientTransform ret;
		ret.CopyTranslation(InTransform);
		ret.CopyRotation(InTransform);
		ret.CopyScale3D(InTransform);
		ret.ForwardAxis = OrientationBase.ForwardAxis; ret.RightAxis = OrientationBase.RightAxis; ret.UpAxis = OrientationBase.UpAxis;
		ret.RightAxisMultiplier = OrientationBase.RightAxisMultiplier;

		return ret;
	}

	static FRotator ConvertRotator(const FVMK_OrientTransform& SourceRot, const FVMK_OrientTransform& TargetRot)
	{
		return MakeRotFromTwoAxis(TargetRot.ForwardAxis, SourceRot.GetConvertedForwardVector(), TargetRot.RightAxis, SourceRot.GetConvertedRightVector());
	}

	FVector GetBoneForwardVector() const { return GetScaledAxis(EAxis::X); }
	FVector GetBoneRightVector() const { return GetScaledAxis(EAxis::Y); }
	FVector GetBoneUpVector() const { return GetScaledAxis(EAxis::Z); }

	FVector GetConvertedForwardVector() const { return GetAxisVector(ForwardAxis); }
	FVector GetConvertedRightVector() const { return GetAxisVector(RightAxis) * RightAxisMultiplier; }
	FVector GetConvertedUpVector() const { return GetAxisVector(UpAxis); }

	FVector GetConvertedForwardVectorUnscaled() const { return GetAxisVector(ForwardAxis); }
	FVector GetConvertedRightVectorUnscaled() const { return GetAxisVector(RightAxis); }
	FVector GetConvertedUpVectorUnscaled() const { return GetAxisVector(UpAxis); }

	static FRotator MakeRotFromTwoAxis(EVMK_BoneOrientationAxis Axis1, const FVector& Vector1, EVMK_BoneOrientationAxis Axis2, const FVector& Vector2)
	{
		FRotator r;
		FVector V1, V2;

		if (Axis1 == EVMK_BoneOrientationAxis::X_Neg) {
			Axis1 = EVMK_BoneOrientationAxis::X; V1 = -Vector1;
		}
		else if (Axis1 == EVMK_BoneOrientationAxis::Y_Neg) {
			Axis1 = EVMK_BoneOrientationAxis::Y; V1 = -Vector1;
		}
		else if (Axis1 == EVMK_BoneOrientationAxis::Z_Neg) {
			Axis1 = EVMK_BoneOrientationAxis::Z; V1 = -Vector1;
		}
		else V1 = Vector1;

		if (Axis2 == EVMK_BoneOrientationAxis::X_Neg) {
			Axis2 = EVMK_BoneOrientationAxis::X; V2 = -Vector2;
		}
		else if (Axis2 == EVMK_BoneOrientationAxis::Y_Neg) {
			Axis2 = EVMK_BoneOrientationAxis::Y; V2 = -Vector2;
		}
		else if (Axis2 == EVMK_BoneOrientationAxis::Z_Neg) {
			Axis2 = EVMK_BoneOrientationAxis::Z; V2 = -Vector2;
		}
		else V2 = Vector2;

		if (Axis1 == EVMK_BoneOrientationAxis::X) {
			if (Axis2 == EVMK_BoneOrientationAxis::Y)
				r = FRotationMatrix::MakeFromXY(V1, V2).Rotator();
			else if (Axis2 == EVMK_BoneOrientationAxis::Z)
				r = FRotationMatrix::MakeFromXZ(V1, V2).Rotator();
		}
		else if (Axis1 == EVMK_BoneOrientationAxis::Y) {
			if (Axis2 == EVMK_BoneOrientationAxis::X)
				r = FRotationMatrix::MakeFromYX(V1, V2).Rotator();
			else if (Axis2 == EVMK_BoneOrientationAxis::Z)
				r = FRotationMatrix::MakeFromYZ(V1, V2).Rotator();
		}
		else if (Axis1 == EVMK_BoneOrientationAxis::Z) {
			if (Axis2 == EVMK_BoneOrientationAxis::X)
				r = FRotationMatrix::MakeFromZX(V1, V2).Rotator();
			else if (Axis2 == EVMK_BoneOrientationAxis::Y)
				r = FRotationMatrix::MakeFromZY(V1, V2).Rotator();
		}

		return r;
	}

	FORCEINLINE FVMK_OrientTransform operator*(const FTransform& Other) const
	{
		FVMK_OrientTransform ret;
		ret = (FTransform)*this * Other;
		ret.ForwardAxis = ForwardAxis; ret.RightAxis = RightAxis; ret.UpAxis = UpAxis; ret.RightAxisMultiplier = RightAxisMultiplier;
		return ret;
	}
	FORCEINLINE FVMK_OrientTransform& operator=(const FTransform& Other)
	{
		CopyTranslation(Other);
		CopyRotation(Other);
		CopyScale3D(Other);
		return *this;
	}
	FORCEINLINE FVMK_OrientTransform& operator=(const FVMK_OrientTransform& Other)
	{
		CopyTranslation(Other);
		CopyRotation(Other);
		CopyScale3D(Other);
		ForwardAxis = Other.ForwardAxis; RightAxis = Other.RightAxis; UpAxis = Other.UpAxis; RightAxisMultiplier = Other.RightAxisMultiplier;
		return *this;
	}

	/** Helper. Find axis in transform rotation co-directed with vector */
	static EVMK_BoneOrientationAxis FindCoDirection(const FTransform& BoneRotator, const FVector Direction)
	{
		EVMK_BoneOrientationAxis RetAxis;
		const FVector dir = Direction.GetSafeNormal();
		const FVector v1 = FVMK_OrientTransform::GetAxisVector(BoneRotator, EVMK_BoneOrientationAxis::X);
		const FVector v2 = FVMK_OrientTransform::GetAxisVector(BoneRotator, EVMK_BoneOrientationAxis::Y);
		const FVector v3 = FVMK_OrientTransform::GetAxisVector(BoneRotator, EVMK_BoneOrientationAxis::Z);
		const float dp1 = FVector::DotProduct(v1, dir);
		const float dp2 = FVector::DotProduct(v2, dir);
		const float dp3 = FVector::DotProduct(v3, dir);

		if (FMath::Abs(dp1) > FMath::Abs(dp2) && FMath::Abs(dp1) > FMath::Abs(dp3))
		{
			RetAxis = dp1 > 0.f ? EVMK_BoneOrientationAxis::X : EVMK_BoneOrientationAxis::X_Neg;
		}
		else if (FMath::Abs(dp2) > FMath::Abs(dp1) && FMath::Abs(dp2) > FMath::Abs(dp3))
		{
			RetAxis = dp2 > 0.f ? EVMK_BoneOrientationAxis::Y : EVMK_BoneOrientationAxis::Y_Neg;
		}
		else
		{
			RetAxis = dp3 > 0.f ? EVMK_BoneOrientationAxis::Z : EVMK_BoneOrientationAxis::Z_Neg;
		}

		return RetAxis;
	}

	void DebugDraw(UWorld* World, bool bContinuous) const;
};

/**
* Description of finger knuckle. Initialized in UFingerFKIKSolver::Initialize.
*/
USTRUCT(BlueprintType)
struct VMKFINGERSSOLVER_API FVMK_Knuckle
{
	GENERATED_USTRUCT_BODY()

	/** Name of skeleton bone */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Knuckle")
	FName BoneName;

	/** Index of bone in skeleton */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Knuckle")
	int32 BoneIndex;

	/** Knuckle radius */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Knuckle")
	float Radius;

	/** Distance to the next knuckle (or finger end) */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Knuckle")
	float Length;

	/** Instantaneous transform in world space */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Knuckle")
	FTransform WorldTransform;

	/** Current relative transform */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Knuckle")
	FTransform RelativeTransform;

	/** Relative transform from input animation skeleton */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Knuckle")
	FTransform RefPoseRelativeTransform;

	/** Relative transform from input animation pose */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Knuckle")
	FTransform TraceRefPoseRelativeTransform;

	/** Relative transform for vr input */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Knuckle")
	FTransform InputRefPoseRelativeTransform;
};

/**
* Figer description. Used both for input and output
*/
USTRUCT(BlueprintType)
struct VMKFINGERSSOLVER_API FVMK_FingerSolver
{
	GENERATED_USTRUCT_BODY()

	/** Name of last knuckle bone */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Finger Solver")
	FName TipBoneName;

	/** Number of knuckles */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Finger Solver")
	int32 KnucklesNum;

	/** Radius of tip bone (smallest) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Finger Solver")
	float TipRadius;

	/** Radius of first bone */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Finger Solver")
	float RootRadius;

	/** Transform convertatation for finger */
	FVMK_OrientTransform FingerOrientation;

	/** Outward local axis of the finger (normal to fingers plane) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Finger Solver")
	EVMK_BoneOrientationAxis OutwardAxis;

	/** Should solver process this finger? */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Finger Solver")
	bool bEnabled;

	/** Current alpha to blend between input finger pose and calculated finger pose */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Finger Solver")
	float Alpha;

	/** Calculated: array of knuckles */
	UPROPERTY()
	TArray<FVMK_Knuckle> Knuckles;

	/** Calculated: hand bone name */
	UPROPERTY()
	FName RootBoneName;

	FVMK_FingerSolver()
	{
		KnucklesNum = 3; TipRadius = 0.4f; RootRadius = 0.8f; Alpha = 1.f; bEnabled = true;
		OutwardAxis = EVMK_BoneOrientationAxis::Y_Neg;
	};
};

/** Struct to get knuckle transform by bone index */
USTRUCT()
struct VMKFINGERSSOLVER_API FVMK_FingerKnucklePointer
{
	GENERATED_USTRUCT_BODY()

	/** Name of finger in UHandSkeletalMeshComponent::Fingers map */
	UPROPERTY()
	EVMK_FingerName FingerId;

	/** Index in FVMK_FingerSolver::Knuckles array */
	UPROPERTY()
	int32 KnuckleId;
};

/** Struct to get twist rotation by bone index */
USTRUCT()
struct VMKFINGERSSOLVER_API FVMK_TwistData
{
	GENERATED_USTRUCT_BODY()

	/** Pointer to twist variable */
	float* TwistSource;

	/** Twist multiplier from UHandSkeletalMeshComponent::UpperarmTwists or UHandSkeletalMeshComponent::LowerarmTwists */
	UPROPERTY()
	float Mulitplier;
};

/** Fingers pose description: rotation of all fingers */
USTRUCT(BlueprintType)
struct VMKFINGERSSOLVER_API FVMK_FingersPosePreset
{
	GENERATED_USTRUCT_BODY()

	/** Thumb rotation. All axes usually require adjustment. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Finger Solver")
	FVMK_FingerRotation ThumbRotation;

	/** Index finger rotation. Set curl value and others if necessary. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Finger Solver")
	FVMK_FingerRotation IndexRotation;

	/** Middle finger rotation. Set curl value and others if necessary. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Finger Solver")
	FVMK_FingerRotation MiddleRotation;

	/** Ring finger rotation. Set curl value and others if necessary. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Finger Solver")
	FVMK_FingerRotation RingRotation;

	/** Pinky finger rotation. Set curl value and others if necessary. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Finger Solver")
	FVMK_FingerRotation PinkyRotation;
};

/**
* Local rotations of all bones of human hand. Applied to VR Input Reference Pose by ApplyDetailedVRInput function.
*/
USTRUCT(BlueprintType)
struct VMKFINGERSSOLVER_API FVMK_FingersDetailedInfo
{
	GENERATED_USTRUCT_BODY()

	/** Local rotations of thumb bones in degrees (relative to VR Input Reference Pose or previous bone) */
	UPROPERTY(BlueprintReadWrite, Category = "Fingers Detailed Info")
	TArray<FVMK_FingerRotation> ThumbBones;

	/** Local rotations of index bones in degrees (relative to VR Input Reference Pose or previous bone) */
	UPROPERTY(BlueprintReadWrite, Category = "Fingers Detailed Info")
	TArray<FVMK_FingerRotation> IndexBones;

	/** Local rotations of middle finger bones in degrees (relative to VR Input Reference Pose or previous bone) */
	UPROPERTY(BlueprintReadWrite, Category = "Fingers Detailed Info")
	TArray<FVMK_FingerRotation> MiddleBones;

	/** Local rotations of ring finger bones in degrees (relative to VR Input Reference Pose or previous bone) */
	UPROPERTY(BlueprintReadWrite, Category = "Fingers Detailed Info")
	TArray<FVMK_FingerRotation> RingBones;

	/** Local rotations of pinky finger bones in degrees (relative to VR Input Reference Pose or previous bone) */
	UPROPERTY(BlueprintReadWrite, Category = "Fingers Detailed Info")
	TArray<FVMK_FingerRotation> PinkyBones;

	FVMK_FingersDetailedInfo()
	{
		ThumbBones.SetNum(3);
		IndexBones.SetNum(3);
		MiddleBones.SetNum(3);
		RingBones.SetNum(3);
		PinkyBones.SetNum(3);
	}
};
