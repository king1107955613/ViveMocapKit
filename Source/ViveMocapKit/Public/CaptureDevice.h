// (c) Yuri N. K. 2017. All rights reserved.
// ykasczc@gmail.com

#pragma once

#include "CoreMinimal.h"
#include "ViveMocapTypes.h"
#include "VMKFingersSolverTypes.h"
#include "SteamVRFunctionLibrary.h"
#include "Components/ActorComponent.h"
#include "Animation/PoseSnapshot.h"
#include "CaptureDevice.generated.h"

/* Declare logging category */
DECLARE_LOG_CATEGORY_EXTERN(LogCaptureDevice, Log, All);

class UMotionControllerComponent;
class USkinnedMeshComponent;
class UVMKFingersSolverSetup;
class UFingersDataProvider;
class UVMKFingersFKIKSolver;

/*
Main Capture class: 1) calibration to Vive Trackers, 2) Data Capture, 3) Body inverse kinematics calculation
Result is availabe in Capture Device/Capture output variables and functions (see commens below).
*/
UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class VIVEMOCAPKIT_API UCaptureDevice : public UActorComponent
{
	GENERATED_BODY()

public:	
	UCaptureDevice();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void GetLifetimeReplicatedProps(TArray <FLifetimeProperty> &OutLifetimeProps) const override;

	//------------------------- P R O P E R T I E S -------------------------//

	// Map of skeleton bones
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Skeleton")
	TMap<EHumanoidBone, FName> SkeletonBonesMap;

	// Additional bones to animate relative to real bones. Use this map to animate IK bones.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Skeleton")
	TMap<FName, EHumanoidBone> SocketsMap;

	// Right forearm twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Skeleton")
	TMap<FName, float> ForearmTwistsRight;
	// Left forearm twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Skeleton")
	TMap<FName, float> ForearmTwistsLeft;
	// Right upperarm twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Skeleton")
	TMap<FName, float> UpperarmTwistsRight;
	// Right upperarm twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Skeleton")
	TMap<FName, float> UpperarmTwistsLeft;
	// Right calf twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Skeleton")
	TMap<FName, float> CalfTwistsRight;
	// Left calf twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Skeleton")
	TMap<FName, float> CalfTwistsLeft;
	// Right thigh twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Skeleton")
	TMap<FName, float> ThighTwistsRight;
	// Left thigh twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Skeleton")
	TMap<FName, float> ThighTwistsLeft;

	// Should upperarm and thigh twists use torso-upperbone delta (true) or upperbone-lowerbone delta (false)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Skeleton")
	bool bUpperTwistFromTorso;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skeleton")
	ESkeletonBonesOrientation SkeletonType;

	// Coefficient applied to spine when calculating a cubic bezier curve for intermediate bones.
	// Decrease it if you experience unexpected twists
	UPROPERTY(EditAnywhere, Category = "Setup")
	float SpineBendingMultiplier;

	// Only if shoulders aren't tracked.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	bool bLockShouldersRotation;

	// Mirror collarbone if only one of them is tracked
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	bool bMirrorShouldersRotation;

	// Max twist (in degrees) for twist bones
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	float TwistLimit;

	// True for full body tracking in world space, false for upper body (no legs) tracking above world origin location
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	bool bCaptureFullBody;

	// True to return allow root bone move above surface when player's pelvis is higher then legs length (ex: for jumping)
	// If False, Root Bone always keeps zero in Z coordinate
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	bool bAllowRootBoneAboveSurface;

	/* How to use motion controllers? */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	ETrackingDeviceRole MotionControllersTrackingRole;

	/**
	* Uncheck if you use regular tracking device (Vive Tracker or scene component) for head tracking, leave checked if use headset
	* Generally, this option should be unchecked for non-HMD setups
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup", meta = (DisplayName = "Use VR Headset For Head"))
	bool bUseVRHeadsetForHead;

	/* Preferable way to calculate knee joint targets (only if knees aren't tracked): as pelvis forward, as foot forward or average direction.
	Average is safer for sitting, laying down etc. 'As foot' is preferable in most cases. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	EKneeOrientationSetup PreferableKneeOrientation;

	/* Move root bone above pelvis (true) or keep it in coordinates centre (false) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	bool bCaptureRootMotion;

	/* Enable if elbows are bended to the wrong side */
	UPROPERTY(EditAnywhere, Category = "Setup")
	bool bInvertElbows;

	/* Enable if knees are bended to the wrong side */
	UPROPERTY(EditAnywhere, Category = "Setup")
	bool bInvertKnees;

	/* Forward-kinematic solver for legs. Requires trackers on calfs. */
	UPROPERTY(EditAnywhere, Meta = (DisplayName = "Use FK Solver For Legs"), Category = "Setup")
	bool bLimbsFKSolver;

	/* Modify leg scale based on distance from trackers. Requires trackers on feet and calfs. */
	UPROPERTY(EditAnywhere, Meta = (DisplayName = "Adjust Scale With Leg FK Solver"), Category = "Setup")
	bool bAdjustScaleWithLegFKSolver;

	/*  */
	UPROPERTY(EditAnywhere, Category = "Setup")
	EBodySideRole KeepPreciseKneeLocation;

	/** Should interpolate torso from pelvis to head if ribcage wasn't tracked? */
	UPROPERTY(EditAnywhere, Category = "Setup")
	bool bFlexibleTrosoFromPelvis;

	/** Notify the component that there are no trackers for ribcage */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	bool bCalibrateToPelvisWithOneTorsoTracker;

	/** Adjustment for spine length: moves torso forward or backward along pelvis-ribcage axis */
	UPROPERTY(EditAnywhere, Category = "Setup")
	float TorsoVerticalOffset;

	/** Offset along Z axis to fix legs on non-scaled meshes */
	UPROPERTY(BlueprintReadWrite, Category = "Setup")
	float RuntimeVerticalOffset;

	/** Multiplier for arm span scale. Increase to makes hands loner, decrease to make them shorter */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	float ArmsScaleCoefficient;

	/** Multiplier for height scale */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	float HeightScaleCoefficient;

	/** Please don't change this value */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	float ArmsCalibrationAdjustment;

	/** Please don't change this value */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	float HeightCalibrationAdjustment;

	/* Use uniform scaling with a priority given to actor's height (only when call GetSkeletalMeshPose with bEnableScaling = true) */
	UPROPERTY(EditAnywhere, Category = "Setup")
	bool bUniformScaleBasedOnHeight;

	/* Use uniform scaling with a priority given to actor's arm span (only when call GetSkeletalMeshPose with bEnableScaling = true) */
	UPROPERTY(EditAnywhere, Category = "Setup")
	bool bUniformScaleBasedOnArmSpan;

	UPROPERTY(EditAnywhere, Category = "Setup")
	bool bMultiMeshUpdate;

	/** Rotation limits for calculated (non-captured) shouldres: yaw positive */
	UPROPERTY(EditAnywhere, Category = "Setup")
	float ClavicleRotationLimit_YawForward;

	/** rotation limits for calculated (non-captured) shouldres: yaw negative */
	UPROPERTY(EditAnywhere, Category = "Setup")
	float ClavicleRotationLimit_YawBackward;

	/** rotation limits for calculated (non-captured) shouldres: pitch positive */
	UPROPERTY(EditAnywhere, Category = "Setup")
	float ClavicleRotationLimit_PitchUp;

	/** rotation limits for calculated (non-captured) shouldres: pitch negative */
	UPROPERTY(EditAnywhere, Category = "Setup")
	float ClavicleRotationLimit_PitchDown;

	/** rotation offset for calculated (non-captured) shouldres */
	UPROPERTY(EditAnywhere, Category = "Setup")
	float ClavicleRotationOffset_Yaw;

	/** rotation offset for calculated (non-captured) shouldres */
	UPROPERTY(EditAnywhere, Category = "Setup")
	float ClavicleRotationOffset_Pitch;

	/** Only for shoulders captured from upperarms. Higher value - higher clavicles
	* This variable only affects calibration
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	float ClaviclesPitchOffset;

	/**
	* Class providing information about fingers animation (optional)
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fingers")
	TSubclassOf<UFingersDataProvider> FingersDataProviderClass;

	/** Fingers setup for right hand (optional) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fingers")
	UVMKFingersSolverSetup* RightHandSetup;

	/** Fingers setup for left hand (optional) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fingers")
	UVMKFingersSolverSetup* LeftHandSetup;

	/** Use simple average of three last frames */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Filter")
	ECaptureFilter Filter;

	/** Use simple average of three last frames */
	UPROPERTY(EditAnywhere, Category = "Filter")
	bool bKeepFeetAboveGround;

	/** Unused UPROPERTY(EditAnywhere, Category = "Debug") */
	UPROPERTY()
	bool bDisablePelvisPositionScale;
	
	/** Unused */
	UPROPERTY(EditAnywhere, Category = "Debug")
	bool bDrawDebugGeometry;

	/** Unused */
	UPROPERTY(EditAnywhere, Category = "Debug")
	bool bDrawTrackingDebug;

	UPROPERTY(EditAnywhere, Category = "Debug")
	bool bDebugLog;

	/** Unused UPROPERTY(EditAnywhere, Category = "Debug") */
	UPROPERTY()
	float FlexibleSpineFromHead_X_InterpMultiplier;

	/** Unused UPROPERTY(EditAnywhere, Category = "Debug") */
	UPROPERTY()
	float FlexibleSpineFromHead_Z_InterpMultiplier;

	/* Interp Speed used to smooth movements on remote PCs (0 to disable). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Networking")
	float RemoteInterpolationSpeed;

	/* Networking frequency to update from local PC (0 to update in every tick) */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Networking")
	int32 UpdateServerFrequency;

	/* Show reference pose of the mesh (only if capturing) */
	UPROPERTY(BlueprintReadWrite, Category = "Capture")
	bool bShowRefPose;

	// ----------------- output variables -------------------

	// Main struct containing information about bones transform in world space
	UPROPERTY(BlueprintReadOnly, Category = "Capture")
	FCaptureBodyState CapturedBody;

	// Elbow joint target for Two-bone IK
	UPROPERTY(BlueprintReadOnly, Category = "Capture")
	FVector ElbowTargetRight;

	// Elbow joint target for Two-bone IK
	UPROPERTY(BlueprintReadOnly, Category = "Capture")
	FVector ElbowTargetLeft;

	// Knee joint target for Two-bone IK
	UPROPERTY(BlueprintReadOnly, Category = "Capture")
	FVector KneeTargetRight;

	// Knee joint target for Two-bone IK
	UPROPERTY(BlueprintReadOnly, Category = "Capture")
	FVector KneeTargetLeft;

	// Current captured transform & setups of all tracked devices (excluding HMD)
	UPROPERTY(BlueprintReadOnly, Category = "Capture")
	TMap<uint8, FTrackerSetup> TrackersData;

	// Full twisting value for upperarm
	UPROPERTY(BlueprintReadOnly, Category = "Capture")
	float UpperarmRightTwist;
	// Full twisting value for lowerarm
	UPROPERTY(BlueprintReadOnly, Category = "Capture")
	float ForearmRightTwist;
	// Full twisting value for upperarm
	UPROPERTY(BlueprintReadOnly, Category = "Capture")
	float UpperarmLeftTwist;
	// Full twisting value for lowerarm
	UPROPERTY(BlueprintReadOnly, Category = "Capture")
	float ForearmLeftTwist;
	// Full twisting value for thigh
	UPROPERTY(BlueprintReadOnly, Category = "Capture")
	float ThighRightTwist;
	// Full twisting value for calf
	UPROPERTY(BlueprintReadOnly, Category = "Capture")
	float CalfRightTwist;
	// Full twisting value for thigh
	UPROPERTY(BlueprintReadOnly, Category = "Capture")
	float ThighLeftTwist;
	// Full twisting value for calf
	UPROPERTY(BlueprintReadOnly, Category = "Capture")
	float CalfLeftTwist;

	//------------------------- F U N C T I O N S -------------------------//

	/* First step of calibration, only required when using Vive Tracker
	instead of VR headset for tracking head	*/
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void PrepareForCalibrationWithHandsForward();

	/* Stretch and rotate skeletal mesh to adjust it to player's position and dimentions.
	Replication Note: must be called on locally controlled Pawn */
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void PrepareForCalibration();

	/* Connect all existing trackers and HMD to skeleton bones.
	Replication Note: must be called on locally controlled Pawn */
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void CalibrateBones(bool bPredictOnly = false);

	/* Force CalibrateBones() function to use specified tracker to track specified bone */
	UFUNCTION(BlueprintCallable, Category = "Setup")
	bool BindPreCalibrationTracker(int32 TrackerId, EHumanoidBone Bone, bool bAllowSharedBone = false);

	/* Remove pre-calibration hard binding */
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void UnbindPreCalibrationTracker(int32 TrackerId);

	/* Remove all saved pre-calibration bindings */
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void ResetPreCalibrationBinding();

	/* Get active calibration binding rules */
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void GetCalibrationBindingRules(TMap<int32, EHumanoidBone>& OutBindingRules) const;

	/* Returns expected calibration result */
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void PredictBonesCalibration(TMap<uint8, FTrackerSetup>& PredictedTrackersData);

	// Attach tracker to bone and save relative offset
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void InitializeTracker(uint8 Index, EHumanoidBone Bone, bool bSaveInPrivateArray = false, bool bAllowShared = false);

	/* Enable/disable motion data capture.
	Replication Note : must be called on server or locally controlled Pawn */
	UFUNCTION(BlueprintCallable, Category = "Capture")
	void ToggleCapture(bool IsEnabled, bool bForceUpdate = false);

	// Find active trackers and spawn mesh actors
	UFUNCTION(BlueprintCallable, Category = "Capture")
	void InitializeReferences(USkinnedMeshComponent* ControlledMesh);

	/** Initialize fingers solver (if needed) */
	UFUNCTION(BlueprintCallable, Category = "Fingers")
	void InitializeFingers(bool bRecreateObjects = false);

	/** Initialize fingers solver (if needed) */
	UFUNCTION(BlueprintCallable, Category = "Fingers")
	void InitializeFingersEx(
		const TMap<EVMK_FingerName, FVMK_FingerSolver>& FingersSetupRight,
		const TMap<EVMK_FingerName, FVMK_FingerSolver>& FingersSetupLeft,
		float MinRotation = 0.f,
		float MaxRotation = 75.f,
		float InterpSpeed = 12.f,
		bool bRecreateObjects = false);

	/** Update fingers from provider */
	UFUNCTION(BlueprintCallable, Category = "Fingers")
	void ProcessFingers();

	/** Update pose snapshot for a currently captured data
	* @param bEnableScaling makrs if bones should be scaled to fit capture actor or unscaled (used for animation capture and save)
	* @return Pose Snapshot for skeletal mesh pose in Anim Blueprint
	*/
	UFUNCTION(BlueprintCallable, Category = "Capture")
	void GetSkeletalMeshPose(UPARAM(ref) FPoseSnapshot& ReturnValue, bool bEnableScaling = false);

	/** MultiMeshUpdate should be enabled */
	UFUNCTION(BlueprintCallable, Category = "Capture")
	void GetLastSkeletalMeshPose(UPARAM(ref) FPoseSnapshot& ReturnValue, bool bUnscaleSnapshot);

	/**
	* Update bones of poseable mesh component based on current state
	*/
	UFUNCTION(BlueprintCallable, Category = "Capture")
	void UpdatePoseableMesh(bool bEnableScaling, USkinnedMeshComponent* MeshOverride = nullptr);

	// Output Function. Returns Socket, Spine or Neck Bone Transform
	UFUNCTION(BlueprintCallable, Category = "Capture")
	bool GetBoneTransformByName(const FName& BoneName, FTransform& WorldTransform);

	// Helper function. Returns text descrition of the specified bone
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Setup")
	FName BoneToName(EHumanoidBone Bone);

	// Manual calibration. Updates offset of bone relative to tracking device
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void UpdateTrackerTransform(uint8 TrackerId, FTransform Offset);

	// Manual calibration. Updates bone attached to tracking device, returns a new bone
	UFUNCTION(BlueprintCallable, Category = "Setup")
	EHumanoidBone UpdateTrackerBone(uint8 TrackerId, FName BoneName);

	// Load variables of [Capture Pawn/Skeleton] Category from struct
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void LoadSkeletonSetupFromStruct(FSkeletonBasicPreset Preset, bool AutoUpdate = true);

	// Update information about current skeleton. Required before calibration process.
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void UpdateSkeletonSetup();

	/** Force CaptureDevice to use scene components as a source of input instead of direct SteamVR functions
	* Must be called at BeginPlay after 'InitializeReferences'
	* @param MotionControllerComponents Array of scene components containing all tracking points except VR Headset
	* @param RightHandIndex Index of right hand controller within the array
	* @param LeftHandIndex Index of left hand controller within the array
	* @return true if succeed
	*/
	UFUNCTION(BlueprintCallable, Category = "Setup")
	bool InitializeInputFromComponents(TArray<USceneComponent*> MotionControllerComponents, uint8 RightHandIndex, uint8 LeftHandIndex);

	/** Initializing input components for wrists only, use this function for VR gloves with trackers attached to lowerarms (like Noitom Hi5) and Leap Motion
	* For components/sockets used as virtual trackers, X axis should be directed as index/middle finger, Y axis - as thumb finger for left and negative thumb for right.
	* Only works with MotionControllersRole = "Any Role" or "Don't Use" and UseInputFromComponets = false
	* @param PositionOffset wrist offset from lowerarm tracker
	* @param RightRotationSource component used as a source for wrist rotation
	* @param LeftRotationSource component used as a source for wrist rotation
	*/
	UFUNCTION(BlueprintCallable, Category = "Setup")
	bool InitializeVirtualTrackersForHands(float PositionOffset, USceneComponent* RightRotationSource, USceneComponent* LeftRotationSource);

	/** Don't use specified component for motion capture. SHould be called
	* after InitializeInputFromComponents(...) and before calibration
	*/
	UFUNCTION(BlueprintCallable, Category = "Setup")
	bool ExcludeComponentFromInput(USceneComponent* MotionControllerComponent);

	/** 
	* Initializing alien source to capture its position to a socket bone initialized in the SocketsMap.
	* Overrides default components or Vive Trackers with the same Id.
	* @param SourceNumber		Id of tracked device from 1 to 8.
	* @param SceneComponent		Scene Component as a source of location and rotation
	*/
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void AddTrackingDeviceSource(uint8 SourceNumber, USceneComponent* SceneComponent);

	/**
	* Load calibrated data from archive. Player should be in T-pose to match IDs of trackers.
	* Use ApplyCurrentCalibration function to restore calibration within a session (not requires T pose)/
	*/
	UFUNCTION(BlueprintCallable, Category = "Setup", meta = (DisplayName = "Load Calibrated Data in T-pose"))
	bool LoadCalibratedDataInTPose(const TMap<uint8, FTrackerSetup>& CalibratedData, FRotator RightCollarboneOffset = FRotator::ZeroRotator, FRotator LeftCollarboneOffset = FRotator::ZeroRotator);

	/**
	* Load calibrated data from archive. Player should be in T-pose to match IDs of trackers.
	* This function uses new algorithm and should support two trackers per bone
	* Use ApplyCurrentCalibration function to restore calibration within a session (not requires T pose)/
	*/
	UFUNCTION(BlueprintCallable, Category = "Setup", meta = (DisplayName = "Load Calibrated Data in T-pose Ex"))
	bool LoadCalibratedDataInTPoseEx(const FSmartCalibrationData& CalibrationData);

	/**
	* Load calibrateion for future use in LoadCalibratedDataInTPoseEx
	*/
	UFUNCTION(BlueprintCallable, Category = "Setup", meta = (DisplayName = "Get Calibrated Data in T-pose"))
	bool GetCalibratedDataInTPose(FSmartCalibrationData& OutCalibrationData);

	/** Reset current calibration data */
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void ResetCalibration();

	// Is skeleton capturing active?
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Capture")
	bool IsCapturing() const;

	// Get current head transform, return (0) if capturing is disabled
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Capture")
	FTransform GetHeadTransform();

	// Load tracking data from map
	UFUNCTION(BlueprintCallable, Category = "Capture")
	void SetTrackersData(const TMap<uint8, FTrackerSetup>& NewValue);

	// Get height scale multiplier applied to skeletal mesh
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Capture")
	float GetMeshHeightMultiplier() const { return MeshScale.Z; };

	// Get scale multiplier applied to arms of skeletal mesh
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Capture")
	float GetArmsScaleMultiplier() const { return MeshScale.X; };

	// Get number of active devices used for input (either SteamVR devices or Scene Components)
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Capture")
	int32 GetTrackingDevicesNum();

	// Get reference to input Scene Component corresponding to its index (not Optitrack Device ID)
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Debug")
	USceneComponent* GetInputComponent(uint8 DeviceID) const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Debug")
	bool IsInitialized() const;

	// Get calibrated rotation offset for collarbones, used to save and load calibration data.
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Capture")
	bool GetCollarbonesCalibration(FRotator& OutRightCollarbone, FRotator& OutLeftCollarbone) const;

	// Gather data structure describing currently calibrated body
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Calibration")
	bool GetCurrentCalibration(FBodyCalibrationData& OutBodyCalibration) const;

	// Apply body calibration data to current player. BodyCalibration object must be created within the same session.
	UFUNCTION(BlueprintCallable, Category = "Calibration")
	void ApplyCurrentCalibration(const FBodyCalibrationData& BodyCalibration);

	/**
	* All skeletons have different local bones orientation. This function returns current transform for a specified bone with generic orientation,
	* i.e. torso, legs and head have X = forward axis and Z = up axis in T-Pose
	* Hands have X = lengthwise axis and Z = up axis (in T-pose)
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Debug")
	void GetBoneTransformWithGenericOrientation(EHumanoidBone Bone, bool bInLocalSpace, FTransform& OutBonePosition);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Debug")
	FRotator PredictCollarboneDefaultOffset(EControllerHand Hand);

	/** Get forward rotation from local forward and up vectors (to consider rotation with pitch close to -90 degrees) */
	float CalcRootRotation(const FVector& ForwardVector, const FVector& UpVector);

	/** Is calibration complete? */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Capture")
	bool IsCalibrated() const;

	/**
	* Send calibration data to remote instances.
	* This function should be called on server for newly logged players who calibrated before connecting to server.
	* Use OnPostLogin event in game mode class. I recommend to add a delay about .5 seconds.
	*/
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable, Category = "Capture")
	void SendCalibrationToServer();
	void SendCalibrationToServer_Implementation();

	/**
	* Get private body calibration parameters
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Capture")
	void GetBodyParameters(FVector& OutMeshScale, float& OutUpperarmLength, float& OutForearmLength, float& OutThighLength, float& OutCalfLength, float& OutShoulderLength) const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Fingers")
	UVMKFingersFKIKSolver* GetFingersSolverRight() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Fingers")
	UVMKFingersFKIKSolver* GetFingersSolverLeft() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Capture")
	void GetSocketsSetup(TMap<FName, FSocketInfo>& OutSocketsSetup)
	{
		OutSocketsSetup = SocketsInfo;
	}
	
	/* Set Runtime Vertical Offset. Value will be updated with Pose Snapshot. Only for non-scaled meshes. */
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void MeasureVerticalAdjustment(float FootHeight);

protected:
	// reference to controlled skeletal mesh
	UPROPERTY()
	USkinnedMeshComponent* BodyMesh;

	UPROPERTY()
	UFingersDataProvider* FingersDataProvider;
	UPROPERTY()
	UVMKFingersFKIKSolver* HandSolverRight;
	UPROPERTY()
	UVMKFingersFKIKSolver* HandSolverLeft;
	bool bFingersInput;
	TMap<uint8, FSmartTrackerCalibration> TrackersRelationsTPose;

	TMap<int32, EHumanoidBone> CalibrationBindingRules;

	bool bTrial;
	int32 TrialYear;
	int32 TrialMonth;
	int32 TrialDay;

	TMap<uint8, FTrackerSetup> TempTrackersData;

	// Arrays of additional intermediate bones head-ribcage and ribcage-pelvis
	TArray<FName> NeckBonesNames;
	UPROPERTY()
	TArray<FAdditionalBoneState> NeckBones;
	TArray<FName> SpineBonesNames;
	UPROPERTY()
	TArray<FAdditionalBoneState> SpineBones;
	UPROPERTY()
	TArray<FAdditionalBoneState> FullSpineBones;
	FTransform RelativeRibcageOffset;
	// map of socket bones
	TMap<FName, FSocketInfo> SocketsInfo;
	int32 HeadTrackerId;
	// Use separate root bone (false for Mixamo rig, true for normal rigs)?
	bool bHasRootBone;

	UPROPERTY()
	FPoseSnapshot OutPoseSnapshot;

	UPROPERTY()
	FPoseSnapshot LastPoseSnapshot;

	UPROPERTY()
	bool bMeasureVerticalAdjustment;
	UPROPERTY()
	float MeasureFootHeight;

	// global component state
	bool bIsInitialized;
	bool bIsCapturing;
	bool bIsCalibrated;
	
	// Is owning pawn locally controlled?
	bool bIsLocal;

	// Update interval for networking, calculated from frequency
	float NetworkingUpdateInterval;

	// Time since last server update in networking
	float TimeSinceServerUpdate;

	// input from components
	bool bUseComponentsInput;
	UPROPERTY()
	TArray<USceneComponent*> InputComponents;
	int32 RightHandComponentIndex;
	int32 LeftHandComponentIndex;
	UPROPERTY()
	TMap<uint8, USceneComponent*> SocketTrackers;
	// virtual trackers for hands
	bool bUseComponentsForHandsOnly;
	float VirtualBonePositionOffset;
	uint8 RightHandLowerarmId;
	uint8 LeftHandLowerarmId;
	FTransform RightVirtualTrackerOffset;
	FTransform LeftVirtualTrackerOffset;

	// frame index for smoothing algorithms
	uint8 FrameIndex;

	// calibration snapshots
	TMap<int32, FTransform> HandsForward_TrackersSnapshot;

	// scale (1,1,1 if bUseForMotionCapture)
	FVector MeshScale;

	// pose snapshot data
	FName SkeletalMeshName;

	// output twist bone values
	UPROPERTY()
	TMap<FName, FTwistBone> ActiveTwists;

	// skeletal mesh paramsSpineBoneOffsets
	UPROPERTY(BlueprintReadOnly, Category = "Setup")
	float MeshSpineLength;
	UPROPERTY(BlueprintReadOnly, Category = "Setup")
	float MeshUpperarmLength;
	UPROPERTY(BlueprintReadOnly, Category = "Setup")
	float MeshForearmLength;
	UPROPERTY(BlueprintReadOnly, Category = "Setup")
	float MeshHandsFullLength;
	UPROPERTY(BlueprintReadOnly, Category = "Setup")
	float MeshHeight;
	UPROPERTY(BlueprintReadOnly, Category = "Setup")
	float MeshLegsLength;
	// major bones relative offsets (to parent bones)
	UPROPERTY(BlueprintReadOnly, Category = "Setup")
	FTransform HeadToNeck;
	UPROPERTY(BlueprintReadOnly, Category = "Setup")
	FTransform RibcageToHead;	// for flexible spine from pelvis
	UPROPERTY(BlueprintReadOnly, Category = "Setup")
	FTransform ShoulderToRibcageRight;
	UPROPERTY(BlueprintReadOnly, Category = "Setup")
	FTransform ShoulderToRibcageLeft;
	UPROPERTY(BlueprintReadOnly, Category = "Setup")
	FTransform UpperarmToShoulderRight;
	UPROPERTY(BlueprintReadOnly, Category = "Setup")
	FTransform UpperarmToShoulderLeft;
	UPROPERTY(BlueprintReadOnly, Category = "Setup")
	FTransform ThighToPelvisRight;
	UPROPERTY(BlueprintReadOnly, Category = "Setup")
	FTransform ThighToPelvisLeft;
	FTransform RootToComponent;
	FTransform FootToGroundRight;
	FTransform FootToGroundLeft;
	UPROPERTY()
	float FootBoneToGroundZ;

	// TODO: separate foot/leg orientation (possible on some skeletons)
	FVMK_BoneRotatorSetup RightHandRotation;
	FVMK_BoneRotatorSetup LeftHandRotation;
	FVMK_BoneRotatorSetup RightLegRotation;
	FVMK_BoneRotatorSetup LeftLegRotation;
	FVMK_BoneRotatorSetup PelvisRotation;
	FVMK_BoneRotatorSetup RibcageRotation;
	FVMK_BoneRotatorSetup PalmRightRotation;
	FVMK_BoneRotatorSetup PalmLeftRotation;
	FVMK_BoneRotatorSetup RootBoneRotation;
	FVMK_BoneRotatorSetup HeadRotation;
	FRotator ComponentRotation;
	FVMK_BoneRotatorSetup RightCollarboneRotation;
	FVMK_BoneRotatorSetup LeftCollarboneRotation;
	FVMK_SkeletonBonesTransformation BonesCS;

	// capture actor' body settings
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Capture")
	float fUpperarmLength;
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Capture")
	float fForearmLength;
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Capture")
	float fThighLength;
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Capture")
	float fCalfLength;
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Capture")
	float fShoulderLength;

	FVector RuntimeThighScaleR;
	FVector RuntimeCalfScaleR;
	FVector RuntimeThighScaleL;
	FVector RuntimeCalfScaleL;

	// bone tracking flags
	bool bHasPelvis;
	bool bHasRibcage;
	bool bHasThighR;
	bool bHasCalfR;
	bool bHasFootR;
	bool bHasThighL;
	bool bHasCalfL;
	bool bHasFootL;
	bool bHasUpperarmR;
	bool bHasForearmR;
	bool bHasUpperarmL;
	bool bHasForearmL;
	bool bHasShoulderR;
	bool bHasShoulderL;

	// bones scaling: bone indexes
	int32 PelvisBoneIndex;
	int32 HeadBoneIndex;
	int32 ShoulderRightIndex;
	int32 ShoulderLeftIndex;
	// bone scaling: initial scale
	FVector PelvisInitScale;
	FVector HeadInitScale;
	FVector ShoulderRightInitScale;
	FVector ShoulderLeftInitScale;
	// offset from upperarm-based rotation to default rotation
	FTransform RightShoulderRotatorOffset;
	FTransform LeftShoulderRotatorOffset;

	// Helper functions
	void SetBoneFlag(EHumanoidBone Bone, bool IsActive);
	uint8 AddTwistBonesToMap(const TMap<FName, float>& TwistBonesMap, float* TwistValueVariable, EAxis::Type ForwardAxis);
	FORCEINLINE bool iSetCapturedBoneValue(EHumanoidBone Bone, FTransform NewTransform);
	FORCEINLINE FTransform iGetCapturedBoneValue(EHumanoidBone Bone);
	FORCEINLINE EHumanoidBone iNameAsBone(FName BoneName);
	FORCEINLINE FTransform iGetHeadTransform(bool bWorldScale, bool bForceUseHeadset = false);
	FORCEINLINE bool iGetCalculatedBoneTransform(const FName& BoneName, FTransform& ReturnValue);
	FORCEINLINE bool iIsBoneEvaluated(const FName& BoneName);
	FORCEINLINE FTransform CalculateShoulderFromUpperarm(EControllerHand Hand, bool bRelative, bool bApplyClamp) const;
	/*FORCEINLINE*/ bool GetVRHandPosition(EControllerHand Hand, FVector& Location, FRotator& Rotation);
	/*FORCEINLINE*/ bool GetVRTrackerPosition(int32 TrackerId, FVector& Location, FRotator& Rotation);
	/*FORCEINLINE*/ bool GetVRTrackerPositionFiltered(int32 TrackerId, FVector& Location, FRotator& Rotation);
	/*FORCEINLINE*/ bool GetVRTrackerPositionByNumber(uint8 TrackerNumber, FVector& Location, FRotator& Rotation);
	/*FORCEINLINE*/ bool GetVRTrackingDeviceIDs(ESteamVRTrackedDeviceType DeviceType, TArray<int32>& OutIds);
	/*FORCEINLINE*/ int32 DetectHeadID();
	/*FORCEINLINE*/ FTransform PredictCameraTransformFromHandsAndHead(int32 HeadId, int32 IdHand1, int32 IdHand2);
	/*FORCEINLINE*/ int32 GetExtremeDeviceId(const TArray<int32>& DeviceIds, bool bFindHighest);
	void CollectTrackerRelationsInTPose();
	float CalculateTrackersRelations(const TArray<int32>& TrackerIds, int32 TrackerId, const FSmartTrackerCalibration& InRelations, TMap<int32, int32>& OutBinding);
	void CalibrateVirtualHands(int32& HandId_Right, int32& HandId_Left, FVector& RightHandLocation, FVector& LEftHandLocation);

	void DetectHandIDsInTPose(int32& IdHand1, int32& IdHand2);

	// body calculation functions
	void CalculateSpine(const FTransform& Start, FTransform& End, TArray<FAdditionalBoneState>& ResultTransforms, bool bRibcageEffector);
	void CalculateTwoBoneIK(const FVector& ChainStart, const FVector& ChainEnd, const FVector& JointTarget, const float UpperBoneSize, const float LowerBoneSize, FTransform& UpperBone, FTransform& LowerBone, FVMK_BoneRotatorSetup& LimbSpace, bool bDebug = false, bool bInvertBending = false);
	void CalculateTwoBoneIK_CS(const FVector& ChainStart, const FVector& ChainEnd, const FVector& JointTarget, const float UpperBoneSize, const float LowerBoneSize, FTransform& UpperBone, FTransform& LowerBone, bool bSide, bool bIsHand, bool bInvertBending = false);
	void CalculateShoulder(EControllerHand Hand);

	// Replication ///////////////////////////////////////////////////////////////

	// last positions replicated via server to remote PCs
	UPROPERTY(Replicated)
	FTransform NT_Head_Target;
	// current positions smoothly interpolated to last known positions on all remote PCs
	FTransform NT_Head;
	// current position received from HMD/Trackers and saved on locally controlled PC
	FVMK_NT_Transform NT_Head_Local;

	// last positions replicated viaserver to remote PCs
	UPROPERTY(Replicated)
	TArray<FVMK_NT_Transform> NT_Trackers_Target;
	// current positions smoothly interpolated to last known positions on all remote PCs
	TArray<FVMK_NT_PureTransform> NT_Trackers;
	// current position received from HMD/Trackers and saved on locally controlled PC
	TArray<FVMK_NT_Transform> NT_Trackers_Local;

	// trackers array map<TrackerIndex, ArrayIndex> - maps can't be replicated :(
	UPROPERTY()
	TMap<int32, uint8> NT_TrackersMap;

	// init bIsLocal variable
	void InitNetworkingState();

	// get tracker's position from NT_Trackers
	void GetNetworkingTrackerValue(int32 TrackerKey, FVector& Location, FRotator& Rotation);
	void SetNetworkingTrackerValue(int32 TrackerKey, const FVector& Location, const FRotator& Rotation);

	// send input transforms (HMD, controllers, trackers) to server
	UFUNCTION(Server, Unreliable, WithValidation)
	void ServerUpdateInput(const FVMK_NT_Transform& Head, const TArray<FVMK_NT_Transform>& Trackers);
	bool ServerUpdateInput_Validate(const FVMK_NT_Transform& Head, const TArray<FVMK_NT_Transform>& Trackers) { return true; };

	// update mesh scale
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerUpdateMeshScale(float NewUpperarmLength, float NewForearmLength, float NewThighLength, float NewCalfLength, float NewShoulderLength, FRotator ShoulderRightOffset, FRotator ShoulderLeftOffset, FVector NewMeshScale);
	bool ServerUpdateMeshScale_Validate(float NewUpperarmLength, float NewForearmLength, float NewThighLength, float NewCalfLength, float NewShoulderLength, FRotator ShoulderRightOffset, FRotator ShoulderLeftOffset, FVector NewMeshScale) { return true; };
	void ServerUpdateMeshScale_Implementation(float NewUpperarmLength, float NewForearmLength, float NewThighLength, float NewCalfLength, float NewShoulderLength, FRotator ShoulderRightOffset, FRotator ShoulderLeftOffset, FVector NewMeshScale);

	UFUNCTION(NetMulticast, Reliable)
	void Clients_UpdateMeshScale(float NewUpperarmLength, float NewForearmLength, float NewThighLength, float NewCalfLength, float NewShoulderLength, FRotator ShoulderRightOffset, FRotator ShoulderLeftOffset, FVector NewMeshScale);
	void Clients_UpdateMeshScale_Implementation(float NewUpperarmLength, float NewForearmLength, float NewThighLength, float NewCalfLength, float NewShoulderLength, FRotator ShoulderRightOffset, FRotator ShoulderLeftOffset, FVector NewMeshScale);

	void LocalUpdateMeshScale(float NewUpperarmLength, float NewForearmLength, float NewThighLength, float NewCalfLength, float NewShoulderLength, FRotator ShoulderRightOffset, FRotator ShoulderLeftOffset, FVector NewMeshScale);

	// init tracker
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerInitializeTrackerBone(int32 Key, EHumanoidBone Bone, FTransform RelativeOffset);
	bool ServerInitializeTrackerBone_Validate(int32 Key, EHumanoidBone Bone, FTransform RelativeOffset) { return true; };

	// manually replicating TrackersData map (maps aren't replicated)
	UFUNCTION(NetMulticast, Reliable)
	void Clinets_InitializeTrackerBone(int32 Key, EHumanoidBone Bone, FTransform RelativeOffset);

	// update (recalibrate) tracker
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerUpdateTrackerBone(int32 Key, EHumanoidBone Bone, FTransform RelativeOffset);
	bool ServerUpdateTrackerBone_Validate(int32 Key, EHumanoidBone Bone, FTransform RelativeOffset) { return true; };

	// manually replicating TrackersData map (maps aren't replicated)
	UFUNCTION(NetMulticast, Reliable)
	void Clients_UpdateTrackerBone(int32 Key, EHumanoidBone Bone, FTransform RelativeOffset);

	// toggle capture
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerToggleCapture(bool IsEnabled);
	bool ServerToggleCapture_Validate(bool IsEnabled) { return true; };
	void ServerToggleCapture_Implementation(bool IsEnabled);

	UFUNCTION(NetMulticast, Reliable)
	void Clients_ToggleCapture(bool IsEnabled);
	void Clients_ToggleCapture_Implementation(bool IsEnabled);
};
