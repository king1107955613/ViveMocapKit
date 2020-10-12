// Copyright Yuri N K, 2018. All Rights Reserved.
// Support: ykasczc@gmail.com

#pragma once

#include "CoreMinimal.h"
#include "VMKFingersSolverTypes.h"
#include "Animation/PoseSnapshot.h"
#include "Engine/EngineTypes.h"
#include "VMKFingersFKIKSolver.generated.h"

class USkinnedMeshComponent;
class UVMKFingersSolverSetup;

/**
 * Trace and calculate fingers transforms
 * Result saved in FVMK_Knuckle::RelativeTransform
 */
UCLASS(Blueprintable)
class VMKFINGERSSOLVER_API UVMKFingersFKIKSolver : public UObject
{
	GENERATED_BODY()

public:
	UVMKFingersFKIKSolver();

	/**
	* Hand side associated with this object
	*/
	UPROPERTY(BlueprintReadWrite, Category = "Setup")
	EVMK_VRHand Hand;

	/**
	* Trace distance from knuckle to inside and outside
	*/
	UPROPERTY(BlueprintReadWrite, Category = "Setup")
	float TraceHalfDistance;

	/**
	* Trace channel to probe: Visible, Camera etc
	*/
	UPROPERTY(BlueprintReadWrite, Category = "Setup")
	TEnumAsByte<ECollisionChannel> TraceChannel;

	/**
	* Should trace by trace channel (false) or object type (true)
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VR Hand")
	bool bTraceByObjectType;

	/**
	* Out fingers data. Initialized from UFingersSolverSetup object.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Setup")
	TMap<EVMK_FingerName, FVMK_FingerSolver> Fingers;

	/**
	* If valid, Trace() function would ignore all objects but this
	*/
	UPROPERTY(BlueprintReadWrite, Category = "Setup")
	UPrimitiveComponent* FilterObject;

	/**
	* Lower border for VR input (in degrees). VR input values (0..1) are interpolated to (InputMinRotation, InputMaxRotation)
	*/
	UPROPERTY(BlueprintReadWrite, Category = "Setup")
	float InputMinRotation;

	/**
	* Upper border for VR input (in degrees). VR input values (0..1) are interpolated to (InputMinRotation, InputMaxRotation)
	*/
	UPROPERTY(BlueprintReadWrite, Category = "Setup")
	float InputMaxRotation;

	/**
	* Interpolatoin speed for processing poses applied by SetFingersPose function
	*/
	UPROPERTY(BlueprintReadWrite, Category = "Setup")
	float PosesInterpolationSpeed;

	/**
	* Should draw debug lines for tracing?
	*/
	UPROPERTY(BlueprintReadWrite, Category = "Debug")
	bool bDrawDebugGeometry;

	/**
	* Initialize object. Should be called before using.
	* @param	SolverSetup			Reference to FingersSolverSetup object wtih information about fingers for this hand.
	* @param	SkeletalMeshComp	Reference to controlled skeletal mesh component
	*/
	UFUNCTION()
	bool Initialize(UVMKFingersSolverSetup* SolverSetup, USkinnedMeshComponent* SkeletalMeshComp);

	bool InitializeEx(USkinnedMeshComponent* SkeletalMeshComp,
		EVMK_VRHand InHand,
		float InInputMinRotation,
		float InInputMaxRotation,
		float InPosesInterpolationSpeed,
		const TMap<EVMK_FingerName, FVMK_FingerSolver>& InFingersSetup);

	/**
	* Create and initialize new FingersFKIKSolver object
	* @param	SolverSetup			Reference to FingersSolverSetup object wtih information about fingers for this hand.
	* @param	SkeletalMeshComp	Reference to controlled skeletal mesh component
	*/
	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Create Fingers FK/IK Solver"), Category = "Fingers Solver")
	static UVMKFingersFKIKSolver* CreateFingersFKIKSolver(UVMKFingersSolverSetup* SolverSetup, USkinnedMeshComponent* SkeletalMeshComp);

	/**
	* Create and initialize new FingersFKIKSolver object
	* @param	SkeletalMeshComp	Reference to controlled skeletal mesh component
	*/
	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Create Fingers FK/IK Solver Ex"), Category = "Fingers Solver")
	static UVMKFingersFKIKSolver* CreateFingersFKIKSolverEx(USkinnedMeshComponent* SkeletalMeshComp,
		EVMK_VRHand InHand,
		float InInputMinRotation,
		float InInputMaxRotation,
		float InPosesInterpolationSpeed,
		const TMap<EVMK_FingerName, FVMK_FingerSolver>& InFingersSetup);

	/**
	* Update current fingers transform. Call this function at the end of the Update() event in animation blueprint.
	* @param	bTrace				Should do tracing to detect object in hand (reference pose should be initiaized)?
	* @param	bUpdateFingersPose	Should apply fingers pose initialized by SetFingersPose(...)?
	*/
	UFUNCTION(BlueprintCallable, Category = "Fingers Solver")
	void UpdateFingers(bool bTrace = false, bool bUpdateFingersPose = true);

	/**
	* Copy current fingers rotation to pose snapshot object
	* @param OutPose	already initialized PoseSnapshot object, should be filled with valid pose
	*/
	UFUNCTION(BlueprintCallable, Category = "Fingers Solver")
	void UpdatePoseSnapshot(UPARAM(ref) FPoseSnapshot& OutPose);

	/**
	* Trace scene to find object to grab and update fingers positions. Don't call this function directly.
	* @param	bTracingInTick		Notifies if function called every tick. If true, interpolation would be used to soften fingers movement. Otherwise, position would be updated instantly.
	*/
	UFUNCTION(BlueprintCallable, Category = "Fingers Solver")
	void Trace(bool bTracingInTick);

	/**
	* Apply fingers curl values from Valve Knuckles or Oculus Touch controllers. This function should be called every Tick.
	* @param	ThumbCurl		Curl value returned by curresponding input axis for thumb finger
	* @param	IndexCurl		Curl value returned by curresponding input axis for index finger
	* @param	MiddleCurl		Curl value returned by curresponding input axis for middle finger
	* @param	AnnularCurl		Curl value returned by curresponding input axis for ring finger
	* @param	MercurialCurl	Curl value returned by curresponding input axis for pinky finger
	*/
	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Apply VR Input"), Category = "Fingers Solver")
	void ApplyVRInput(const FVMK_FingersPosePreset& NewFingersRotation);

	/**
	* Input values in degrees for all bones of all fingers
	*/
	UFUNCTION(BlueprintCallable, Meta = (DisplayName = "Apply VR Input Detailed"), Category = "Fingers Solver")
	void ApplyVRInputDetailed(const FVMK_FingersDetailedInfo& NewFingersRotation);

	/**
	* Was object initialized successfully?
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Fingers Solver")
	bool IsInitialized() const { return bIsInitialized; };

	/**
	* Debug function, returns relative transforms of finger knuckles in String
	* @param	FingerName		Name of finger to check
	* @return					String formatted as A [<Alpha>] <KnuckleBone1> [loc=<RelaiveLocation> rol=<RelativeRotation>] <KnuckleBone2> [loc=<RelaiveLocation> rol=<RelativeRotation>] ...
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Fingers Solver")
	FString GetFingerDescription(EVMK_FingerName FingerName) const;

	/**
	* Get information about knuckles for specified finger
	* @param	FingerName		Name of finger to check
	* @return					Array of knuckles with transforms and bone names
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Fingers Solver")
	void GetFingerKnuckles(EVMK_FingerName FingerName, TArray<FVMK_Knuckle>& OutKnuckles);

	/**
	* Check if finger enabled
	* @param	FingerName		Name of finger to check
	* @return					True if finger was enabled in the solver
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Fingers Solver")
	bool IsFingerEnabled(EVMK_FingerName FingerName) const
	{
		const FVMK_FingerSolver* Finger = Fingers.Find(FingerName);
		return Finger ? Finger->bEnabled : false;
	};

	/**
	* Set fingers pose from FingerPoses map by name.
	* @param PoseName Key in FingerPoses map
	*/
	UFUNCTION(BlueprintCallable, Category = "VR Hands")
	bool SetFingersPose(const FVMK_FingersPosePreset& NewPose);

	/**
	* Set reference pose for fingers tracing. It should be 'grabbing' pose which need
	* to be adjusted to attached object by tracing.
	* @param PoseName Key in FingerPoses map
	*/
	UFUNCTION(BlueprintCallable, Category = "VR Hands")
	bool SetFingersTraceReferencePose(const FVMK_FingersPosePreset& NewRefPose);

	/**
	* Set reference pose for VR input from Valve Knuckles or Oculus Touch. It should be pose of fully open hand.
	* @param PoseName Key in FingerPoses map
	*/
	UFUNCTION(BlueprintCallable, Category = "VR Hands", meta = (DisplayName = "Set VR Input Reference Pose"))
	bool SetVRInputReferencePose(const FVMK_FingersPosePreset& NewRefPose);

	/**
	* Grab gameplay object by hand. The function doesn't attach object to hand mesh and only apply rotation to fingers.
	* @param GrabReferencePose	Name (key in FingerPoses map) of tracing reference pose. This pose will be adjusted by tracing
	* @param Object				Component to grab
	*/
	UFUNCTION(BlueprintCallable, Category = "VR Hands")
	void GrabObject(UPrimitiveComponent* Object);

	/** Return fingers rotation from traced to current pose. */
	UFUNCTION(BlueprintCallable, Category = "VR Hands")
	void ReleaseObject();

	/**
	* Enable or disable finger solving
	* @param	FingerName		Name of finger to enable or disable
	* @param	bNewEnabled		Value to set
	*/
	UFUNCTION(BlueprintCallable, Category = "Fingers Solver")
	void SetFingerEnabled(EVMK_FingerName FingerName, bool bNewEnabled)
	{
		FVMK_FingerSolver* Finger = Fingers.Find(FingerName);
		if (Finger) Finger->bEnabled = bNewEnabled;
	};

	/**
	* Convert multiplier-based finger orientation (used in poses, VR input) to degrees (used in detailed VR input)
	* @param	InFingerRot		Finger orientation with values from 0 to 1
	* @return					Finger orientation in degrees
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Fingers Solver")
	static FVMK_FingerRotation ConvertFingerRotationToDegrees(const FVMK_FingerRotation& InFingerRot)
	{
		FVMK_FingerRotation OurFRot;
		OurFRot.CurlValue = InFingerRot.CurlValue * 90.f;
		OurFRot.RollValue = InFingerRot.RollValue * 20.f;
		OurFRot.SpreadValue = InFingerRot.SpreadValue * 20.f;
		return OurFRot;
	}

	/**
	* Convert finger orientation in degrees (used in detailed VR input) to multiplier-based (used in poses, VR input)
	* @param	InFingerRot		Finger orientation in degree
	* @return					Finger orientation with values from 0 to 1
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Fingers Solver")
	static FVMK_FingerRotation ConvertFingerRotationFromDegrees(const FVMK_FingerRotation& InFingerRot)
	{
		FVMK_FingerRotation OurFRot;
		OurFRot.CurlValue = InFingerRot.CurlValue / 90.f;
		OurFRot.RollValue = InFingerRot.RollValue / 20.f;
		OurFRot.SpreadValue = InFingerRot.SpreadValue / 20.f;
		return OurFRot;
	}

private:
	UPROPERTY()
	bool bIsInitialized;

	UPROPERTY()
	USkinnedMeshComponent* Mesh;

	UPROPERTY()
	UVMKFingersSolverSetup* FingersSolverSetup;

	UPROPERTY()
	TMap<EVMK_FingerName, bool> TracingStatus;

	UPROPERTY()
	FVMK_FingersPosePreset VRInput;

	UPROPERTY()
	FVMK_FingersDetailedInfo VRInputDetailed;

	UPROPERTY()
	bool bHasVRInputInFrame;

	UPROPERTY()
	bool bHasDetailedVRInputInFrame;
	/** Has traced pose for fingers? */
	UPROPERTY()
	bool bUseRuntimeFingersPose;
	/** Trace start time when grabbing object */
	UPROPERTY()
	float TraceStartTime;

	UPROPERTY()
	TMap<EVMK_FingerName, bool> VRStatus;

	UPROPERTY()
	FVMK_FingersPosePreset CurrentFingersPose;

	UPROPERTY()
	float HandSideMultiplier;

	void ProcessVRInput();
	void ProcessVRInputDetailed();
	void ProcessFingersPose(bool bUseInterpolation = true);
	/** Update reference pose for fingers tracing or VR curls input */
	bool UpdateReferencePoseFromPoseName(const FVMK_FingersPosePreset& NewRefPose, bool bIsTraceRefPose);
	FORCEINLINE FTransform GetKnuckleRefTransform(const FVMK_FingerSolver& Finger, int32 KnuckleIndex);
	FORCEINLINE FVector TraceKnuckle(UWorld* World, const FVMK_FingerSolver& Finger, const FVMK_Knuckle& Knuckle, const FTransform& KnuckleTr, FHitResult& HitResult, int32& Pass, int32 KnuckleIndex);
	/** Helper. Add rotation around local axes. */
	FORCEINLINE FRotator AddLocalRotation(const FRotator& AdditionRot, const FRotator& BaseRot);
	/** Helper function to apply rotation to rotator by axis */
	void SetRotationAxisValue(FRotator& OutRot, EVMK_BoneOrientationAxis Axis, float Value);
	/** Helper function to apply rotation to rotator by axis */
	void AddRotationAxisValue(FRotator& OutRot, EVMK_BoneOrientationAxis Axis, float Value);
};
