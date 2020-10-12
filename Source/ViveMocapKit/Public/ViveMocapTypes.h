// (c) Yuri N. K. 2017. All rights reserved.
// ykasczc@gmail.com

#pragma once

#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ViveMocapTypes.generated.h"

/** Real-time filters for captured animation */
UENUM(BlueprintType)
enum class ECaptureFilter : uint8
{
	// Don't apply filters
	CF_None						UMETA(DisplayName = "None"),
	// Take simple average of last three frames (good for animation capture with frame rate 30)
	CF_SimpleSmooth				UMETA(DisplayName = "Simple Smooth"),
	// Gives one frame 11 ms delay!
	CF_ExtremumCut				UMETA(DisplayName = "Extremum Cut")
};

/** Some skeletons have non-standard orientation of bones which should be considered when exporting Pose Snapshot */
UENUM(BlueprintType)
enum class ESkeletonBonesOrientation : uint8
{
	SBO_Default					UMETA(DisplayName = "Default"),
	SBO_ComponentSpaceBones		UMETA(DisplayName = "Component Space (DAZ3D Genesis)")
};

/* Enum describing all tracked or calculated bones */
UENUM(BlueprintType)
enum class EHumanoidBone : uint8
{
	Root,
	Pelvis,
	Ribcage,
	Head,
	ThighRight,
	CalfRight,
	FootRight,
	ThighLeft,
	CalfLeft,
	FootLeft,
	ShoulderRight,
	UpperarmRight,
	ForearmRight,
	PalmRight,
	ShoulderLeft,
	UpperarmLeft,
	ForearmLeft,
	PalmLeft,
	Locator_ElbowRight			UMETA(DisplayName = "[Locator] Elbow Right"),
	Locator_ElbowLeft			UMETA(DisplayName = "[Locator] Elbow Left"),
	Locator_KneeRight			UMETA(DisplayName = "[Locator] Knee Right"),
	Locator_KneeLeft			UMETA(DisplayName = "[Locator] Knee Left"),
	HMD							UMETA(DisplayName = "[Helper] Head Mounted Display"),
	MotionControllerRight		UMETA(DisplayName = "[Helper] Motion Controller Right"),
	MotionControllerLeft		UMETA(DisplayName = "[Helper] Motion Controller Left"),
	_TrackedDevices				UMETA(Hidden),
	TrackedDevice1				UMETA(DisplayName = "[Helper] Tracked Device #1"),
	TrackedDevice2				UMETA(DisplayName = "[Helper] Tracked Device #2"),
	TrackedDevice3				UMETA(DisplayName = "[Helper] Tracked Device #3"),
	TrackedDevice4				UMETA(DisplayName = "[Helper] Tracked Device #4"),
	TrackedDevice5				UMETA(DisplayName = "[Helper] Tracked Device #5"),
	TrackedDevice6				UMETA(DisplayName = "[Helper] Tracked Device #6"),
	TrackedDevice7				UMETA(DisplayName = "[Helper] Tracked Device #7"),
	TrackedDevice8				UMETA(DisplayName = "[Helper] Tracked Device #8"),
	MAX							UMETA(Hidden)
};

/* Enum describing all tracked or calculated bones */
UENUM(BlueprintType)
enum class ETrackingDeviceRole : uint8
{
	DontUse						UMETA(DisplayName = "Don't Use"),
	HandsOnly					UMETA(DisplayName = "Hand Only"),
	AnyRole						UMETA(DisplayName = "Any Role")
};

/* Enum describing all tracked or calculated bones */
UENUM(BlueprintType)
enum class EBodySideRole : uint8
{
	BSR_Disabled				UMETA(DisplayName = "Disabled"),
	BSR_Right					UMETA(DisplayName = "Right"),
	BSR_Left					UMETA(DisplayName = "Left"),
	BSR_Both					UMETA(DisplayName = "Both")
};

/* Enum describing a way to calculate knee orientation */
UENUM(BlueprintType)
enum class EKneeOrientationSetup : uint8
{
	AsPelvis,
	AsFoot,
	Mixed
};

// Vive Tracker position for replication
USTRUCT()
struct VIVEMOCAPKIT_API FVMK_NT_Transform
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
	uint8 TrackerIndex;
	UPROPERTY()
	FVector_NetQuantize100 Location;
	UPROPERTY()
	FVector_NetQuantizeNormal Rotation;
};

// Vive Tracker position after replication
USTRUCT()
struct VIVEMOCAPKIT_API FVMK_NT_PureTransform
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
	uint8 TrackerIndex;
	UPROPERTY()
	FVector Location;
	UPROPERTY()
	FRotator Rotation;
};

// Retargeting Bones transformation
struct FVMK_SkeletonBonesTransformation
{
	FTransform UpperarmRight;
	FTransform LowerarmRight;
	FTransform HandRight;
	FTransform UpperarmLeft;
	FTransform LowerarmLeft;
	FTransform HandLeft;

	FTransform ThighRight;
	FTransform CalfRight;
	FTransform FootRight;
	FTransform ThighLeft;
	FTransform CalfLeft;
	FTransform FootLeft;

	FVMK_SkeletonBonesTransformation()
		: UpperarmRight(FTransform::Identity)
		, LowerarmRight(FTransform::Identity)
		, HandRight(FTransform::Identity)
		, UpperarmLeft(FTransform::Identity)
		, LowerarmLeft(FTransform::Identity)
		, HandLeft(FTransform::Identity)
		, ThighRight(FTransform::Identity)
		, CalfRight(FTransform::Identity)
		, FootRight(FTransform::Identity)
		, ThighLeft(FTransform::Identity)
		, CalfLeft(FTransform::Identity)
		, FootLeft(FTransform::Identity)
	{};
};

// Custom-to-universal skeleton bone orientation translation
struct FVMK_BoneRotatorSetup
{
	// X direction along the main bone axis
	EAxis::Type ForwardAxis;
	float ForwardDirection;

	// Y direction, right relative to Forward-Up
	EAxis::Type HorizontalAxis;
	float RightDirection;
	// Direction to the outer side. Can be equal to RightDirection or opposite. Used to calculate knee/elbows in TwoBoneIK.
	float ExternalDirection;

	// Z Direction 
	EAxis::Type VerticalAxis;
	float UpDirection;
};

/* This struct allow to save/update additional bones like IK targets. */
USTRUCT(BlueprintType)
struct VIVEMOCAPKIT_API FSocketInfo
{
	GENERATED_USTRUCT_BODY()

	/* Parent Bone for Socket */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Socket Info")
	EHumanoidBone AttachmentBone;
	/* Relative Transform of Socket */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Socket Info")
	FTransform OffsetToBone;
	/* Current Socket transform in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Socket Info")
	FTransform CurrentPosition;
	/* Internl flag: Is socket bone attached to elbow/knee joint target or not */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Socket Info")
	bool bIsLocator;
	/* First evaluated bone in chain of parent bones */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Socket Info")
	FName RootParentBone;
	/* Relative offset to RootParentBone */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Socket Info")
	FTransform OffsetToRootParentBone;
};

/* Captured Bone Transforms in World Space */
USTRUCT(BlueprintType)
struct VIVEMOCAPKIT_API FCaptureBodyState
{
	GENERATED_USTRUCT_BODY()

	/* Root Bone World Transform */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Capture Body State")
	FTransform Root;
	/* Pelvis World Transform */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Capture Body State")
	FTransform Pelvis;
	/* Ribcage World Transform */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Capture Body State")
	FTransform Ribcage;
	/* Right Shoulder World Transform */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Capture Body State")
	FTransform ShoulderRight;
	/* Left Shoulder World Transform */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Capture Body State")
	FTransform ShoulderLeft;
	/* Head World Transform */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Capture Body State")
	FTransform Head;
	/* Right Upperarm World Transform */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Capture Body State")
	FTransform UpperarmRight;
	/* Right Forearm World Transform */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Capture Body State")
	FTransform ForearmRight;
	/* Right Palm World Transform */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Capture Body State")
	FTransform PalmRight;
	/* Left Upperarm World Transform */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Capture Body State")
	FTransform UpperarmLeft;
	/* Left Forearm World Transform */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Capture Body State")
	FTransform ForearmLeft;
	/* Left Palm World Transform */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Capture Body State")
	FTransform PalmLeft;
	/* Right Thigh World Transform */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Capture Body State")
	FTransform ThighRight;
	/* Right Calf World Transform */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Capture Body State")
	FTransform CalfRight;
	/* Right Foot World Transform */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Capture Body State")
	FTransform FootRight;
	/* Left Thigh World Transform */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Capture Body State")
	FTransform ThighLeft;
	/* Left Calf World Transform */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Capture Body State")
	FTransform CalfLeft;
	/* Left Foot World Transform */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Capture Body State")
	FTransform FootLeft;
	/* Upperarm rotation without rolling. Use it if upperarm twists move lower part of the upperarm */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Capture Body State")
	FRotator UpperarmRight_NoRoll;
	/* Upperarm rotation without rolling. Use it if upperarm twists move lower part of the upperarm */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Capture Body State")
	FRotator UpperarmLeft_NoRoll;
};

/* Skeleton Setup struct. Similar to "Capture Device/Skeleton" Category */
USTRUCT(BlueprintType)
struct VIVEMOCAPKIT_API FSkeletonBasicPreset
{
	GENERATED_USTRUCT_BODY()

	/* Map of names of major skeleton bones */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skeleton Basic Preset")
	TMap<EHumanoidBone, FName> SkeletonBonesMap;
	/* Map of additional bones with parents to attach */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skeleton Basic Preset")
	TMap<FName, EHumanoidBone> SocketsMap;

	// Right forearm twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skeleton Basic Preset")
	TMap<FName, float> ForearmTwistsRight;
	// Left forearm twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skeleton Basic Preset")
	TMap<FName, float> ForearmTwistsLeft;
	// Right upperarm twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skeleton Basic Preset")
	TMap<FName, float> UpperarmTwistsRight;
	// Right upperarm twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skeleton Basic Preset")
	TMap<FName, float> UpperarmTwistsLeft;
	// Right calf twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skeleton Basic Preset")
	TMap<FName, float> CalfTwistsRight;
	// Left calf twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skeleton Basic Preset")
	TMap<FName, float> CalfTwistsLeft;
	// Right thigh twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skeleton Basic Preset")
	TMap<FName, float> ThighTwistsRight;
	// Left thigh twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skeleton Basic Preset")
	TMap<FName, float> ThighTwistsLeft;

};

/* Struct to calculate neck bones and spine bones */
USTRUCT(BlueprintType)
struct VIVEMOCAPKIT_API FAdditionalBoneState
{
	GENERATED_USTRUCT_BODY()
	/* Current bone world transform */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Additional Bone State")
	FTransform WorldTransform;
	/* Default Bone Transform relative to Parent Bone */
	UPROPERTY()
	FTransform RelativeOffset;
};

/* Vive Tracker attachment info */
USTRUCT(BlueprintType)
struct VIVEMOCAPKIT_API FTrackerSetup
{
	GENERATED_USTRUCT_BODY()

	/* Tracked Device attached bone */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tracker Setup")
	EHumanoidBone Bone;
	/* Transform of the attached bone reelative to Tracked Device */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tracker Setup")
	FTransform RelativeOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tracker Setup")
	int32 OtherBoneTracker;

	FTransform Frames[3];

	FTrackerSetup()
		: Bone(EHumanoidBone::Root)
		, OtherBoneTracker(INDEX_NONE)
	{}
};

// Nested per-tracker relation
USTRUCT(BlueprintType)
struct VIVEMOCAPKIT_API FSmartTrackerCalibration
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Smart Tracker Calibration")
	TMap<uint8, FTransform> OtherTrackers;
};

// New Calibration data struct
USTRUCT(BlueprintType)
struct VIVEMOCAPKIT_API FSmartCalibrationData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Smart Calibration Data")
	TMap<uint8, FTrackerSetup> TrackersData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Smart Calibration Data")
	FRotator RightCollarboneOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Smart Calibration Data")
	FRotator LeftCollarboneOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Smart Calibration Data")
	TMap<uint8, FSmartTrackerCalibration> Relations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Smart Calibration Data")
	int32 HeadTrackerId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Smart Calibration Data")
	FTransform RightVirtualTrackerOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Smart Calibration Data")
	FTransform LeftVirtualTrackerOffset;
};

/* Twist Bone info (value), key is bone name */
USTRUCT()
struct VIVEMOCAPKIT_API FTwistBone
{
	GENERATED_USTRUCT_BODY()

	/* Pointer to float variable containing current twist value */
	float* TwistSource;

	/* Twist multiplier for this bone */
	float Multiplier;

	/* Bone forward axis */
	EAxis::Type Axis;

	FTwistBone()
		: TwistSource(nullptr)
		, Multiplier(0.f)
		, Axis(EAxis::Type::X)
	{};
};

/* All data required for body calibration */
USTRUCT(BlueprintType)
struct VIVEMOCAPKIT_API FBodyCalibrationData
{
	GENERATED_USTRUCT_BODY()

	/* Bone-to-tracker map */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body Calibration Data")
	TMap<uint8, FTrackerSetup> TrackersData;

	/* Offset for default collarbone rotation */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body Calibration Data")
	FRotator CollarboneRightOffset;

	/* Offset for default collarbone rotation */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body Calibration Data")
	FRotator CollarboneLeftOffset;

	/* Scaled upperarm size */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body Calibration Data")
	float UpperarmLength;

	/* Scaled lowerarm size */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body Calibration Data")
	float ForearmLength;

	/* Scaled thigh size */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body Calibration Data")
	float ThighLength;

	/* Scaled calf size */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body Calibration Data")
	float CalfLength;

	/* Scaled collarbone size */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body Calibration Data")
	float ShoulderLength;

	/* Scaled mesh size */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body Calibration Data")
	FVector MeshSizeScale;
};
