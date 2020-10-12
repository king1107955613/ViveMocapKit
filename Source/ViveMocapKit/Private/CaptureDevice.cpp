// (c) Yuri N. K. 2017. All rights reserved.
// ykasczc@gmail.com

#include "CaptureDevice.h"
// ENGINE
#include "Engine/Engine.h"
#include "TimerManager.h"
#include "Engine/NetSerialization.h"
#include "Net/UnrealNetwork.h"
//#include "Misc/Paths.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetMathLibrary.h"
#include "ReferenceSkeleton.h"
#include "Engine/SkeletalMesh.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/PoseableMeshComponent.h"
#include "Animation/PoseSnapshot.h"
// VR
#include "SteamVRFunctionLibrary.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Features/IModularFeatures.h"
#include "IMotionController.h"
#include "XRMotionControllerBase.h"
// PROJECT
#include "ViveMocapTypes.h"
#include "VMKFingersSolverTypes.h"
#include "ViveMocapHelpers.h"
#include "FingersDataProvider.h"
#include "VMKFingersFKIKSolver.h"

DEFINE_LOG_CATEGORY(LogCaptureDevice);

// Fake head tracker id (when using headset and not tracker for a head)
#define HEADKEY 0xff
#define INVALIDKEY 0xfe
#define RIGHTVIRTUALKEY 0x50
#define LEFTVIRTUALKEY 0x51

// Backward compatibility for 4.21
#define MakeRelativeTransform(A, RelativeTo) A.GetRelativeTransform(RelativeTo)
// Math macros
#define TranslateToParentTransform(t1, t2) t2.GetTranslation() + t2.Rotator().RotateVector(t1.GetTranslation())
#define RotatorDirection(Rotator, Axis) FRotationMatrix(Rotator).GetScaledAxis(Axis)
// Universal macros to get bones direction in generic skeleton space (independent from current skeleton)
#define PelvisForwardVector(InRotator) FRotationMatrix(InRotator).GetScaledAxis(PelvisRotation.VerticalAxis) * PelvisRotation.UpDirection
#define PelvisUpVector(InRotator) FRotationMatrix(InRotator).GetScaledAxis(PelvisRotation.ForwardAxis) * PelvisRotation.ForwardDirection
#define PelvisRightVector(InRotator) FRotationMatrix(InRotator).GetScaledAxis(PelvisRotation.HorizontalAxis) * PelvisRotation.RightDirection
#define HeadUpVector(Rotator) FRotationMatrix(Rotator).GetScaledAxis(HeadRotation.VerticalAxis) * HeadRotation.UpDirection
#define HeadForwardVector(Rotator) FRotationMatrix(Rotator).GetScaledAxis(HeadRotation.ForwardAxis) * HeadRotation.ForwardDirection
#define RootForwardVector(Rotator) FRotationMatrix(Rotator).GetScaledAxis(RootRotation.VerticalAxis) * RootRotation.UpDirection
#define RibcageForwardVector(Rotator) FRotationMatrix(Rotator).GetScaledAxis(RibcageRotation.VerticalAxis) * RibcageRotation.UpDirection
#define RibcageUpVector(Rotator) FRotationMatrix(Rotator).GetScaledAxis(RibcageRotation.ForwardAxis) * RibcageRotation.ForwardDirection
#define RibcageRightVector(Rotator) FRotationMatrix(Rotator).GetScaledAxis(RibcageRotation.HorizontalAxis) * RibcageRotation.RightDirection
#define RightHandForwardVector(Rotator) FRotationMatrix(Rotator).GetScaledAxis(RightHandRotation.ForwardAxis) * RightHandRotation.ForwardDirection
#define LeftHandForwardVector(Rotator) FRotationMatrix(Rotator).GetScaledAxis(LeftHandRotation.ForwardAxis) * LeftHandRotation.ForwardDirection
#define RightHandInsideVector(Rotator) FRotationMatrix(Rotator).GetScaledAxis(RightHandRotation.HorizontalAxis) * RightHandRotation.ExternalDirection * -1.f
#define LeftHandInsideVector(Rotator) FRotationMatrix(Rotator).GetScaledAxis(LeftHandRotation.HorizontalAxis) * LeftHandRotation.ExternalDirection * -1.f
#define RightHandUpVector(Rotator) FRotationMatrix(Rotator).GetScaledAxis(RightHandRotation.VerticalAxis) * RightHandRotation.UpDirection
#define LeftHandUpVector(Rotator) FRotationMatrix(Rotator).GetScaledAxis(LeftHandRotation.VerticalAxis) * LeftHandRotation.UpDirection
#define RightPalmForwardVector(Rotator) FRotationMatrix(Rotator).GetScaledAxis(PalmRightRotation.ForwardAxis) * PalmRightRotation.ForwardDirection
#define LeftPalmForwardVector(Rotator) FRotationMatrix(Rotator).GetScaledAxis(PalmLeftRotation.ForwardAxis) * PalmLeftRotation.ForwardDirection
#define RightPalmUpVector(Rotator) FRotationMatrix(Rotator).GetScaledAxis(PalmRightRotation.VerticalAxis) * PalmRightRotation.UpDirection
#define LeftPalmUpVector(Rotator) FRotationMatrix(Rotator).GetScaledAxis(PalmLeftRotation.VerticalAxis) * PalmLeftRotation.UpDirection
#define RightPalmInsideVector(Rotator) FRotationMatrix(Rotator).GetScaledAxis(PalmRightRotation.HorizontalAxis) * PalmRightRotation.RightDirection
#define LeftPalmInsideVector(Rotator) FRotationMatrix(Rotator).GetScaledAxis(PalmLeftRotation.HorizontalAxis) * PalmLeftRotation.RightDirection
#define RightLegForwardVector(Rotator) FRotationMatrix(Rotator).GetScaledAxis(RightLegRotation.HorizontalAxis) * RightLegRotation.ExternalDirection
#define LeftLegForwardVector(Rotator) FRotationMatrix(Rotator).GetScaledAxis(LeftLegRotation.HorizontalAxis) * LeftLegRotation.ExternalDirection
#define RightLegDownVector(Rotator) FRotationMatrix(Rotator).GetScaledAxis(RightLegRotation.ForwardAxis) * RightLegRotation.ForwardDirection
#define LeftLegDownVector(Rotator) FRotationMatrix(Rotator).GetScaledAxis(LeftLegRotation.ForwardAxis) * LeftLegRotation.ForwardDirection
#define RightLegRightVector(Rotator) FRotationMatrix(Rotator).GetScaledAxis(RightLegRotation.VerticalAxis) * RightLegRotation.UpDirection * -1.f
#define LeftLegRightVector(Rotator) FRotationMatrix(Rotator).GetScaledAxis(LeftLegRotation.VerticalAxis) * LeftLegRotation.UpDirection * -1.f
// Math macros
#define __next_frame(index) (index + 1) % 3;
#define __prev_frame(index) (index + 2) % 3;
// Check macros
#define _CHECKBONE(BoneName) if (skref->FindBoneIndex(BoneName) == INDEX_NONE) { UE_LOG(LogCaptureDevice, Error, TEXT("[UpdateSkeletonSetup] Invalid bone name: %s"), *BoneName.ToString()); return; }
#define _CHECKTRIAL if (bTrial) { const FDateTime &dt = UKismetMathLibrary::UtcNow(); if (dt.GetYear() > TrialYear || (dt.GetYear() == TrialYear && dt.GetMonth() > TrialMonth) || (dt.GetYear() == TrialYear && dt.GetMonth() == TrialMonth && dt.GetDay() > TrialDay)) return; }

using namespace VMHelper;

UCaptureDevice::UCaptureDevice()
	: bUpperTwistFromTorso(true)
	, SkeletonType(ESkeletonBonesOrientation::SBO_Default)
	, SpineBendingMultiplier(0.3f)
	, bLockShouldersRotation(false)
	, bMirrorShouldersRotation(false)
	, TwistLimit(75.f)
	, bCaptureFullBody(true)
	, bAllowRootBoneAboveSurface(false)
	, MotionControllersTrackingRole(ETrackingDeviceRole::HandsOnly)
	, bUseVRHeadsetForHead(true)
	, PreferableKneeOrientation(EKneeOrientationSetup::AsFoot)
	, bCaptureRootMotion(true)
	, bInvertElbows(false)
	, bInvertKnees(false)
	, bLimbsFKSolver(false)
	, bAdjustScaleWithLegFKSolver(false)
	, KeepPreciseKneeLocation(EBodySideRole::BSR_Disabled)
	, bFlexibleTrosoFromPelvis(true)
	, bCalibrateToPelvisWithOneTorsoTracker(false)
	, TorsoVerticalOffset(0.f)
	, ArmsScaleCoefficient(1.f)
	, HeightScaleCoefficient(1.f)
	, ArmsCalibrationAdjustment(17.f)
	, HeightCalibrationAdjustment(8.f)
	, bUniformScaleBasedOnHeight(false)
	, bUniformScaleBasedOnArmSpan(false)
	, ClavicleRotationLimit_YawForward(50.f)
	, ClavicleRotationLimit_YawBackward(30.f)
	, ClavicleRotationLimit_PitchUp(15.f)
	, ClavicleRotationLimit_PitchDown(2.f)
	, ClavicleRotationOffset_Yaw(0.f)
	, ClavicleRotationOffset_Pitch(0.f)
	, Filter(ECaptureFilter::CF_SimpleSmooth)
	, bKeepFeetAboveGround(true)
	, bDisablePelvisPositionScale(false)
	, bDrawDebugGeometry(false)
	, bDebugLog(false)
	, FlexibleSpineFromHead_X_InterpMultiplier(0.8f)
	, FlexibleSpineFromHead_Z_InterpMultiplier(0.5f)
	, RemoteInterpolationSpeed(16.f)
	, UpdateServerFrequency(0)
	, bShowRefPose(false)
	, bFingersInput(false)
	, HeadTrackerId(INDEX_NONE)
	, bHasRootBone(false)
	, bIsInitialized(false)
	, bIsCapturing(false)
	, bIsCalibrated(false)
	, bIsLocal(false)
	, NetworkingUpdateInterval(0.f)
	, TimeSinceServerUpdate(0.f)
	, bUseComponentsInput(false)
	, RightHandComponentIndex(0)
	, LeftHandComponentIndex(0)
	, bUseComponentsForHandsOnly(false)
	, VirtualBonePositionOffset(10.f)
	, RightHandLowerarmId(INVALIDKEY)
	, LeftHandLowerarmId(INVALIDKEY)
	, RightVirtualTrackerOffset(FTransform::Identity)
	, LeftVirtualTrackerOffset(FTransform::Identity)
	, FrameIndex(0xff)
	, MeshScale(FVector::OneVector)
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;

	bHasPelvis = bHasRibcage = bHasThighR = bHasCalfR = bHasFootR = bHasThighL = false;
	bHasCalfL = bHasFootL = bHasUpperarmR = bHasForearmR = bHasUpperarmL = bHasForearmL = false;
	PelvisBoneIndex = 0;
	HeadBoneIndex = 0;
	ShoulderRightIndex = ShoulderLeftIndex = 0;

	SkeletalMeshName = TEXT("");

	PelvisInitScale = HeadInitScale = ShoulderRightInitScale = ShoulderLeftInitScale = FVector::OneVector;
	RightShoulderRotatorOffset = LeftShoulderRotatorOffset = FTransform::Identity;
	RootToComponent = FootToGroundRight = FootToGroundLeft = FTransform::Identity;

	// Default values
	// Trial Version Setup
	bTrial = false;
	TrialYear = 2022;
	TrialMonth = 11;
	TrialDay = 14;

	RuntimeThighScaleR = FVector::OneVector;
	RuntimeThighScaleL = FVector::OneVector;
	RuntimeCalfScaleR = FVector::OneVector;
	RuntimeCalfScaleL = FVector::OneVector;

	// default bones map
	SkeletonBonesMap.Add(EHumanoidBone::Root, TEXT(""));
	SkeletonBonesMap.Add(EHumanoidBone::Pelvis, TEXT(""));
	SkeletonBonesMap.Add(EHumanoidBone::Ribcage, TEXT(""));
	SkeletonBonesMap.Add(EHumanoidBone::Head, TEXT(""));
	SkeletonBonesMap.Add(EHumanoidBone::ThighRight, TEXT(""));
	SkeletonBonesMap.Add(EHumanoidBone::CalfRight, TEXT(""));
	SkeletonBonesMap.Add(EHumanoidBone::FootRight, TEXT(""));
	SkeletonBonesMap.Add(EHumanoidBone::ThighLeft, TEXT(""));
	SkeletonBonesMap.Add(EHumanoidBone::CalfLeft, TEXT(""));
	SkeletonBonesMap.Add(EHumanoidBone::FootLeft, TEXT(""));
	SkeletonBonesMap.Add(EHumanoidBone::ShoulderRight, TEXT(""));
	SkeletonBonesMap.Add(EHumanoidBone::UpperarmRight, TEXT(""));
	SkeletonBonesMap.Add(EHumanoidBone::ForearmRight, TEXT(""));
	SkeletonBonesMap.Add(EHumanoidBone::PalmRight, TEXT(""));
	SkeletonBonesMap.Add(EHumanoidBone::ShoulderLeft, TEXT(""));
	SkeletonBonesMap.Add(EHumanoidBone::UpperarmLeft, TEXT(""));
	SkeletonBonesMap.Add(EHumanoidBone::ForearmLeft, TEXT(""));
	SkeletonBonesMap.Add(EHumanoidBone::PalmLeft, TEXT(""));
}

void UCaptureDevice::InitializeReferences(USkinnedMeshComponent* ControlledMesh)
{
	_CHECKTRIAL;

	bIsLocal = true;
	ToggleCapture(false);
	if (IsValid(ControlledMesh))
	{
		BodyMesh = ControlledMesh;
		bIsInitialized = true;
	}
	else
	{
		UE_LOG(LogCaptureDevice, Error, TEXT("[InitializeReferences]: Invalid ControlledMesh"));
	}

	bUseComponentsInput = false;

	// Update interval
	TimeSinceServerUpdate = 0.f;
	if (UpdateServerFrequency == 0)
	{
		NetworkingUpdateInterval = 0.f;
	}
	else
	{
		NetworkingUpdateInterval = 1000.f / (float)UpdateServerFrequency - 0.01f;
	}

	// Update networking state after small delay because PlayerController actor doesn't control pawn at BeginPlay
	FTimerHandle hTimerDelay;
	GetOwner()->GetWorldTimerManager().SetTimer(hTimerDelay, this, &UCaptureDevice::InitNetworkingState, 0.4f, false);
}

void UCaptureDevice::InitializeFingers(bool bRecreateObjects)
{
	if (!bIsInitialized)
	{
		return;
	}
	if (!FingersDataProviderClass || !RightHandSetup || !LeftHandSetup)
	{
		if (bRecreateObjects)
		{
			if (FingersDataProvider)
			{
				FingersDataProvider->MarkPendingKill();
				FingersDataProvider = nullptr;
			}
			if (HandSolverRight)
			{
				HandSolverRight->MarkPendingKill();
				HandSolverRight = nullptr;
			}
			if (HandSolverLeft)
			{
				HandSolverLeft->MarkPendingKill();
				HandSolverLeft = nullptr;
			}
			bFingersInput = false;
		}
		return;
	}
	if (FingersDataProvider)
	{
		if (bRecreateObjects || FingersDataProvider->GetClass() != FingersDataProviderClass)
		{
			FingersDataProvider->MarkPendingKill();
			FingersDataProvider = nullptr;
		}
	}
	if (!FingersDataProvider)
	{
		// Create finger data provider
		FingersDataProvider = NewObject<UFingersDataProvider>(this, FingersDataProviderClass);

		if (!FingersDataProvider)
		{
			bFingersInput = false;
			return;
		}
	}
	FingersDataProvider->CaptureDevice = this;

	if (HandSolverRight)
	{
		if (bRecreateObjects)
		{
			HandSolverRight->MarkPendingKill();
			HandSolverRight = nullptr;
		}
	}

	// Get input reference pose
	FVMK_FingersPosePreset RefPose;
	FingersDataProvider->GetReferencePose(BodyMesh->GetFName(), RefPose);

	if (!HandSolverRight)
	{
		// Create right fingers solver
		HandSolverRight = UVMKFingersFKIKSolver::CreateFingersFKIKSolver(RightHandSetup, BodyMesh);
		HandSolverRight->SetVRInputReferencePose(RefPose);
	}

	if (HandSolverLeft)
	{
		if (bRecreateObjects)
		{
			HandSolverLeft->MarkPendingKill();
			HandSolverLeft = nullptr;
		}
	}
	if (!HandSolverLeft)
	{
		// Create left fingers solver
		HandSolverLeft = UVMKFingersFKIKSolver::CreateFingersFKIKSolver(LeftHandSetup, BodyMesh);
		HandSolverLeft->SetVRInputReferencePose(RefPose);
	}

	bFingersInput = true;
}

void UCaptureDevice::InitializeFingersEx(
	const TMap<EVMK_FingerName, FVMK_FingerSolver>& FingersSetupRight,
	const TMap<EVMK_FingerName, FVMK_FingerSolver>& FingersSetupLeft,
	float MinRotation,
	float MaxRotation,
	float InterpSpeed,
	bool bRecreateObjects)
{
	if (!bIsInitialized)
	{
		return;
	}
	if (!FingersDataProviderClass)
	{
		if (bRecreateObjects)
		{
			if (FingersDataProvider)
			{
				FingersDataProvider->MarkPendingKill();
				FingersDataProvider = nullptr;
			}
			if (HandSolverRight)
			{
				HandSolverRight->MarkPendingKill();
				HandSolverRight = nullptr;
			}
			if (HandSolverLeft)
			{
				HandSolverLeft->MarkPendingKill();
				HandSolverLeft = nullptr;
			}
			bFingersInput = false;
		}
		return;
	}
	if (FingersDataProvider)
	{
		if (bRecreateObjects || FingersDataProvider->GetClass() != FingersDataProviderClass)
		{
			FingersDataProvider->MarkPendingKill();
			FingersDataProvider = nullptr;
		}
	}
	if (!FingersDataProvider)
	{
		// Create finger data provider
		FingersDataProvider = NewObject<UFingersDataProvider>(this, FingersDataProviderClass);

		if (!FingersDataProvider)
		{
			bFingersInput = false;
			return;
		}
	}
	FingersDataProvider->CaptureDevice = this;

	if (HandSolverRight)
	{
		if (bRecreateObjects)
		{
			HandSolverRight->MarkPendingKill();
			HandSolverRight = nullptr;
		}
	}

	// Get input reference pose
	FVMK_FingersPosePreset RefPose;
	FingersDataProvider->GetReferencePose(BodyMesh->GetFName(), RefPose);

	if (!HandSolverRight)
	{
		// Create right fingers solver
		HandSolverRight = UVMKFingersFKIKSolver::CreateFingersFKIKSolverEx(BodyMesh, EVMK_VRHand::VRH_Right, MinRotation, MaxRotation, InterpSpeed, FingersSetupRight);
		HandSolverRight->SetVRInputReferencePose(RefPose);
	}

	if (HandSolverLeft)
	{
		if (bRecreateObjects)
		{
			HandSolverLeft->MarkPendingKill();
			HandSolverLeft = nullptr;
		}
	}
	if (!HandSolverLeft)
	{
		// Create left fingers solver
		HandSolverLeft = UVMKFingersFKIKSolver::CreateFingersFKIKSolverEx(BodyMesh, EVMK_VRHand::VRH_Left, MinRotation, MaxRotation, InterpSpeed, FingersSetupLeft);
		HandSolverLeft->SetVRInputReferencePose(RefPose);
	}

	bFingersInput = true;
}

void UCaptureDevice::ProcessFingers()
{
	if (!bFingersInput)
	{
		return;
	}

	if (FingersDataProvider->bUseDetailedFingerInfo)
	{
		FVMK_FingersDetailedInfo FingersRight, FingersLeft;
		FingersDataProvider->GetFingersPoseDetailed(EVMK_VRHand::VRH_Right, FingersRight);
		FingersDataProvider->GetFingersPoseDetailed(EVMK_VRHand::VRH_Left, FingersLeft);

		HandSolverRight->ApplyVRInputDetailed(FingersRight);
		HandSolverLeft->ApplyVRInputDetailed(FingersLeft);
	}
	else
	{
		FVMK_FingersPosePreset FingersRightSm, FingersLeftSm;
		FingersDataProvider->GetFingersPose(EVMK_VRHand::VRH_Right, FingersRightSm);
		FingersDataProvider->GetFingersPose(EVMK_VRHand::VRH_Left, FingersLeftSm);

		HandSolverRight->ApplyVRInput(FingersRightSm);
		HandSolverLeft->ApplyVRInput(FingersLeftSm);
	}

	HandSolverRight->UpdateFingers(false, false);
	HandSolverLeft->UpdateFingers(false, false);
}

void UCaptureDevice::InitNetworkingState()
{
	if (GetIsReplicated())
	{
		if (GetOwner()->IsA(APawn::StaticClass()))
		{
			bIsLocal = (Cast<APawn>(GetOwner())->IsLocallyControlled());
		}
		else
		{
			bIsLocal = false;
		}
	}
	else
	{
		bIsLocal = true;
	}
}

/* Networking Properties Replication */
void UCaptureDevice::GetLifetimeReplicatedProps(TArray <FLifetimeProperty> &OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UCaptureDevice, NT_Head_Target);
	DOREPLIFETIME(UCaptureDevice, NT_Trackers_Target);
	DOREPLIFETIME(UCaptureDevice, fUpperarmLength);
	DOREPLIFETIME(UCaptureDevice, fForearmLength);
	DOREPLIFETIME(UCaptureDevice, fThighLength);
	DOREPLIFETIME(UCaptureDevice, fCalfLength);
	DOREPLIFETIME(UCaptureDevice, fShoulderLength);
}

/* This function calculates current transforms of all bones */
void UCaptureDevice::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	_CHECKTRIAL;

	// Base Transform for relative calculations
	const FTransform wt_base = GetOwner()->GetActorTransform();
	// Temporary transforms
	FTransform wt_calc, t1, t2;
	// Temporary variables
	FVector loc;
	FRotator rot;
	// Replication state
	const bool bIsCompReplicated = GetIsReplicated();

	FVector RuntimeMeshScale = MeshScale;
	RuntimeMeshScale.X *= ArmsScaleCoefficient;
	RuntimeMeshScale.Y = RuntimeMeshScale.X;
	RuntimeMeshScale.Z *= HeightScaleCoefficient;

	if (bIsCapturing)
	{
		FTransform wBone, rTracker;
		FVector PelvisLoc, PelvisForward;
		FRotator PelvisRot;

		// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
		// ::: REPLICATION ::: smoothly update transforms at all remote machines
		if (!bIsLocal)
		{
			NT_Head = UKismetMathLibrary::TInterpTo(NT_Head, NT_Head_Target, DeltaTime, RemoteInterpolationSpeed);

			const int TrNum = NT_Trackers_Target.Num();
			if (NT_Trackers.Num() != TrNum) NT_Trackers.SetNum(TrNum);

			for (int i = 0; i < NT_Trackers_Target.Num(); i++)
			{
				NT_Trackers[i].TrackerIndex = NT_Trackers_Target[i].TrackerIndex;
				NT_Trackers[i].Location = FMath::VInterpTo(NT_Trackers[i].Location, NT_Trackers_Target[i].Location, DeltaTime, RemoteInterpolationSpeed);
				NT_Trackers[i].Rotation = FMath::RInterpTo(NT_Trackers[i].Rotation, Vec2Rot(NT_Trackers_Target[i].Rotation), DeltaTime, RemoteInterpolationSpeed);
			}
		}

		if (Filter != ECaptureFilter::CF_None)
		{
			bool bResetAll = false;
			if (FrameIndex == 0xff)
			{
				FrameIndex = 0; bResetAll = true;
			}
			else
			{
				FrameIndex = __next_frame(FrameIndex);
			}

			for (auto& tracker : TrackersData)
			{
				GetVRTrackerPosition(tracker.Key, loc, rot);
				FTransform NewVal = FTransform(rot, loc);

				if (!bResetAll)
				{
					if (loc.IsZero())
					{
						int32 PrevIndex = __prev_frame(FrameIndex);
						tracker.Value.Frames[FrameIndex] = tracker.Value.Frames[PrevIndex];
					}
					else
					{
						tracker.Value.Frames[FrameIndex] = NewVal;
					}
				}
				else
				{
					tracker.Value.Frames[0] = tracker.Value.Frames[1] = tracker.Value.Frames[2] = NewVal;
				}
			}
		}

		// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
		// Load bone transforms from trackers
		TMap <int32, FTransform> AppliedTrackers;
		for (const auto& tracker : TrackersData)
		{
			// should blend newly calculated transform with earlier calculated?
			bool bBlendTransform = (tracker.Value.OtherBoneTracker != INDEX_NONE && AppliedTrackers.Contains(tracker.Value.OtherBoneTracker));

			if (!bUseVRHeadsetForHead || tracker.Value.Bone != EHumanoidBone::Head)
			{
				if (bIsLocal)
				{
					GetVRTrackerPositionFiltered(tracker.Key, loc, rot);

					// Save for sending to server
					if (bIsCompReplicated && loc != FVector::ZeroVector)
					{
						SetNetworkingTrackerValue(tracker.Key, loc, rot);
					}
				}
				else
				{
					GetNetworkingTrackerValue(tracker.Key, loc, rot);
				}
				rTracker.SetTranslation(loc); rTracker.SetRotation(rot.Quaternion());
			}
			else
			{
				rTracker = iGetHeadTransform(false);

				// Save for sending to server
				if (bIsLocal && bIsCompReplicated)
				{
					SetNetworkingTrackerValue(HEADKEY, rTracker.GetTranslation(), rTracker.Rotator());
				}
			}
			// Don't update when lost tracking
			if (rTracker.GetTranslation().IsZero())
			{
				continue;
			}

			rTracker.SetScale3D(FVector::OneVector);

			// Calculate world transform
			wBone = tracker.Value.RelativeOffset * rTracker * wt_base;
			// Save transform
			AppliedTrackers.Add(tracker.Key, wBone);
			// Blend if needed
			if (bBlendTransform)
			{
				wBone.BlendWith(AppliedTrackers[tracker.Value.OtherBoneTracker], 0.5f);
			}

			iSetCapturedBoneValue(tracker.Value.Bone, wBone);
		}

		// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

		// ::: REPLICATION :::
		// Send to server (unreliable call)
		if (bIsLocal && bIsCompReplicated)
		{
			// Check update frequency
			TimeSinceServerUpdate += DeltaTime;

			if (TimeSinceServerUpdate > NetworkingUpdateInterval)
			{
				ServerUpdateInput(NT_Head_Local, NT_Trackers_Local);
				TimeSinceServerUpdate = 0.f;
			}
		}

		// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

		// apply torso offset
		if (TorsoVerticalOffset != 0.f)
		{
			if (bHasPelvis)
			{
				// add offset to fix shoulders position
				FTransform PelvisTransform = CapturedBody.Pelvis;
				PelvisTransform.AddToTranslation(PelvisUpVector(PelvisTransform.Rotator()) * TorsoVerticalOffset);
			}
			else if (bHasRibcage)
			{
				// add offset to fix shoulders position
				FTransform RibcageTransform = CapturedBody.Ribcage;
				RibcageTransform.AddToTranslation(RibcageUpVector(RibcageTransform.Rotator()) * TorsoVerticalOffset);
			}
		}

		// feet-to-ground filter
		if (bKeepFeetAboveGround)
		{
			const float GroundZ = GetOwner()->GetActorLocation().Z;
			if (bHasFootR)
			{
				FTransform FootGroundPos = FTransform().GetRelativeTransform(FootToGroundRight) * CapturedBody.FootRight;
				if (FootGroundPos.GetTranslation().Z < GroundZ)
				{
					FVector FootForward = FootGroundPos.GetRotation().GetForwardVector().GetSafeNormal2D();
					FVector FootRight = FootGroundPos.GetRotation().GetRightVector();
					FootGroundPos.SetRotation(UKismetMathLibrary::MakeRotFromXY(FootForward, FootRight).Quaternion());
					FVector FootGroundLoc = FootGroundPos.GetTranslation(); FootGroundLoc.Z = GroundZ;
					FootGroundPos.SetTranslation(FootGroundLoc);
					CapturedBody.FootRight = FootToGroundRight * FootGroundPos;
				}
			}
			if (bHasFootL)
			{
				FTransform FootGroundPos = FTransform().GetRelativeTransform(FootToGroundLeft) * CapturedBody.FootLeft;
				if (FootGroundPos.GetTranslation().Z < GroundZ)
				{
					FVector FootForward = FootGroundPos.GetRotation().GetForwardVector().GetSafeNormal2D();
					FVector FootRight = FootGroundPos.GetRotation().GetRightVector();
					FootGroundPos.SetRotation(UKismetMathLibrary::MakeRotFromXY(FootForward, FootRight).Quaternion());
					FVector FootGroundLoc = FootGroundPos.GetTranslation(); FootGroundLoc.Z = GroundZ;
					FootGroundPos.SetTranslation(FootGroundLoc);
					CapturedBody.FootLeft = FootToGroundLeft * FootGroundPos;
				}
			}
		}

		// Let's calculate all other bones and IK joint targets

		if (bLimbsFKSolver && bHasPelvis && KeepPreciseKneeLocation != EBodySideRole::BSR_Disabled)
		{
			int32 TargetsNum = 0;

			FTransform pelvis_tr = CapturedBody.Pelvis;
			FVector PelvisScale = PelvisInitScale * GetScaleInDirection(PelvisRotation.ForwardAxis, RuntimeMeshScale.Z);
			/**/ if (PelvisRotation.ForwardAxis == EAxis::X) {
				PelvisScale.Y *= RuntimeMeshScale.X; PelvisScale.Z *= RuntimeMeshScale.X;
			}
			else if (PelvisRotation.ForwardAxis == EAxis::Y) {
				PelvisScale.X *= RuntimeMeshScale.X; PelvisScale.Z *= RuntimeMeshScale.X;
			}
			else if (PelvisRotation.ForwardAxis == EAxis::Z) {
				PelvisScale.X *= RuntimeMeshScale.X; PelvisScale.Y *= RuntimeMeshScale.X;
			}
			pelvis_tr.SetScale3D(PelvisScale);

			FVector PelvisTarget[2];
			int32 PTIndex = 0;
			if ((KeepPreciseKneeLocation == EBodySideRole::BSR_Right || KeepPreciseKneeLocation == EBodySideRole::BSR_Both))
			{
				const FTransform ThighRightInitial = ThighToPelvisRight * pelvis_tr;
				if (bHasCalfR)
				{
					const FVector& CalfLocation = CapturedBody.CalfRight.GetTranslation();

					PelvisTarget[PTIndex] = (ThighRightInitial.GetTranslation() - CalfLocation).GetSafeNormal() * (fThighLength * RuntimeMeshScale.Z) + CalfLocation;
					PelvisTarget[PTIndex] = PelvisTarget[PTIndex] + (pelvis_tr.GetTranslation() - ThighRightInitial.GetTranslation());
					PTIndex++;
				}
				else if (!bHasThighR)
				{
					FVector Foot2Thigh = ThighRightInitial.GetTranslation() - CapturedBody.FootRight.GetTranslation();
					const float LegLength = (fCalfLength + fThighLength) * RuntimeMeshScale.Z;
					if (Foot2Thigh.Size() > LegLength)
					{
						PelvisTarget[PTIndex] = CapturedBody.FootRight.GetTranslation() + Foot2Thigh.Normalize() * LegLength;
						PelvisTarget[PTIndex] = PelvisTarget[PTIndex] + (pelvis_tr.GetTranslation() - ThighRightInitial.GetTranslation());
					}
				}
			}
			if ((KeepPreciseKneeLocation == EBodySideRole::BSR_Left || KeepPreciseKneeLocation == EBodySideRole::BSR_Both))
			{
				const FTransform ThighLeftInitial = ThighToPelvisLeft * pelvis_tr;
				if (bHasCalfL)
				{
					const FVector& CalfLocation = CapturedBody.CalfLeft.GetTranslation();

					PelvisTarget[PTIndex] = (ThighLeftInitial.GetTranslation() - CalfLocation).GetSafeNormal() * (fThighLength * RuntimeMeshScale.Z) + CalfLocation;
					PelvisTarget[PTIndex] = PelvisTarget[PTIndex] + (pelvis_tr.GetTranslation() - ThighLeftInitial.GetTranslation());
					PTIndex++;
				}
				else if (!bHasThighL)
				{
					FVector Foot2Thigh = ThighLeftInitial.GetTranslation() - CapturedBody.FootLeft.GetTranslation();
					const float LegLength = (fCalfLength + fThighLength) * RuntimeMeshScale.Z;
					if (Foot2Thigh.Size() > LegLength)
					{
						PelvisTarget[PTIndex] = CapturedBody.FootLeft.GetTranslation() + Foot2Thigh.Normalize() * LegLength;
						PelvisTarget[PTIndex] = PelvisTarget[PTIndex] + (pelvis_tr.GetTranslation() - ThighLeftInitial.GetTranslation());
					}
				}
			}

			if (PTIndex == 1)
			{
				CapturedBody.Pelvis.SetTranslation(PelvisTarget[0]);
			}
			else if (PTIndex == 2)
			{
				CapturedBody.Pelvis.SetTranslation((PelvisTarget[0] + PelvisTarget[1]) / 2.f);
			}
		}

		// --------------------------------- SPINE ---------------------------------

		if (!bHasRibcage && !bHasPelvis)
		{
			// can't continue if we don't know body position
			return;
		}
		else if (!bHasPelvis && bHasRibcage)
		{
			// calculate pelvis by ribcage
			CapturedBody.Pelvis = CapturedBody.Ribcage;
			CapturedBody.Pelvis.AddToTranslation(PelvisUpVector(CapturedBody.Pelvis.Rotator()) * -MeshSpineLength);
		}
		else if (bHasPelvis && !bHasRibcage)
		{
			if (bFlexibleTrosoFromPelvis)
			{
				// calculate ribcage from head and pelvis
				CapturedBody.Ribcage = RibcageToHead * CapturedBody.Head;

				CapturedBody.Ribcage.SetTranslation(CapturedBody.Head.GetTranslation());
				const FVector RibcageForward = FMath::Lerp(PelvisForwardVector(CapturedBody.Pelvis.Rotator()), HeadForwardVector(CapturedBody.Head.Rotator()), FlexibleSpineFromHead_X_InterpMultiplier);
				const FVector RibcageUp = FMath::Lerp(PelvisUpVector(CapturedBody.Pelvis.Rotator()), HeadUpVector(CapturedBody.Head.Rotator()), FlexibleSpineFromHead_Z_InterpMultiplier);
				CapturedBody.Ribcage.SetRotation
				(
					MakeRotByTwoAxes(PelvisRotation.VerticalAxis, RibcageForward, PelvisRotation.ForwardAxis, RibcageUp).Quaternion()
				);
			}
			else
			{
				// calculate ribcage from pelvis
				CapturedBody.Ribcage = CapturedBody.Pelvis;
				CapturedBody.Ribcage.AddToTranslation(RibcageUpVector(CapturedBody.Ribcage.Rotator()) * MeshSpineLength);
			}
		}

		// if capture upper body only, shift all captured cooridnates to world centre
		if (!bCaptureFullBody)
		{
			PelvisLoc = CapturedBody.Pelvis.GetTranslation();
			PelvisLoc.Z = 0.f; PelvisLoc *= -1.f;

			CapturedBody.Root.SetTranslation(FVector::ZeroVector);
			CapturedBody.Pelvis.AddToTranslation(PelvisLoc);
			CapturedBody.Ribcage.AddToTranslation(PelvisLoc);
			CapturedBody.Head.AddToTranslation(PelvisLoc);
			CapturedBody.PalmRight.AddToTranslation(PelvisLoc);
			CapturedBody.PalmLeft.AddToTranslation(PelvisLoc);
			if (bHasThighR) CapturedBody.ThighRight.AddToTranslation(PelvisLoc);
			if (bHasThighL) CapturedBody.ThighLeft.AddToTranslation(PelvisLoc);
			if (bHasCalfR) CapturedBody.CalfRight.AddToTranslation(PelvisLoc);
			if (bHasCalfL) CapturedBody.CalfLeft.AddToTranslation(PelvisLoc);
			if (bHasFootR) CapturedBody.FootRight.AddToTranslation(PelvisLoc);
			if (bHasFootL) CapturedBody.FootLeft.AddToTranslation(PelvisLoc);
			if (bHasShoulderR) CapturedBody.ShoulderRight.AddToTranslation(PelvisLoc);
			if (bHasShoulderL) CapturedBody.ShoulderLeft.AddToTranslation(PelvisLoc);
			if (bHasUpperarmR) CapturedBody.UpperarmRight.AddToTranslation(PelvisLoc);
			if (bHasUpperarmL) CapturedBody.UpperarmLeft.AddToTranslation(PelvisLoc);
			if (bHasForearmR) CapturedBody.ForearmRight.AddToTranslation(PelvisLoc);
			if (bHasForearmL) CapturedBody.ForearmLeft.AddToTranslation(PelvisLoc);
		}

		// find additional spine bones
		const int nAdditionalBones = SpineBonesNames.Num();
		if (bHasPelvis && (bHasRibcage || bFlexibleTrosoFromPelvis))
		{
			// flexible spine
			if (nAdditionalBones > 0 && bHasRibcage)
			{
				// calculate bezier spine
				CalculateSpine(CapturedBody.Pelvis, CapturedBody.Ribcage, SpineBones, true);
			}
			// need to convert ribcage rotation (currently in pelvis space) to ribcage space
			else if (!bHasRibcage)
			{
				// calculate bezier spine
				CalculateSpine(CapturedBody.Pelvis, CapturedBody.Head, FullSpineBones, false);

				int32 Ind = 0;
				for (; Ind < SpineBones.Num(); Ind++)
				{
					SpineBones[Ind] = FullSpineBones[Ind];
				}
				CapturedBody.Ribcage = FullSpineBones[Ind++].WorldTransform;
				for (int32 IndNeck = 0; IndNeck < NeckBones.Num(); IndNeck++)
				{
					if (FullSpineBones.Num() == Ind) break;
					NeckBones[IndNeck] = FullSpineBones[Ind++];
				}

				const FVector RibcageForward = PelvisForwardVector(CapturedBody.Ribcage.Rotator());
				const FVector RibcageUp = PelvisUpVector(CapturedBody.Ribcage.Rotator());
				CapturedBody.Ribcage.SetRotation
				(
					MakeRotByTwoAxes(RibcageRotation.VerticalAxis, RibcageForward * RibcageRotation.UpDirection, RibcageRotation.ForwardAxis, RibcageUp * RibcageRotation.ForwardDirection).Quaternion()
				);
			}
		}
		else
		{
			// linear spine from pelvis to ribcage
			t1 = CapturedBody.Pelvis;
			t2 = CapturedBody.Ribcage;

			if (nAdditionalBones > 0)
			{
				SpineBones[0].WorldTransform = SpineBones[0].RelativeOffset * CapturedBody.Pelvis;

				for (int i = 1; i < nAdditionalBones; i++)
				{
					SpineBones[i].WorldTransform = SpineBones[i].RelativeOffset * SpineBones[i - 1].WorldTransform;
				}
			}
		}

		PelvisLoc = CapturedBody.Pelvis.GetTranslation();
		PelvisRot = CapturedBody.Pelvis.Rotator();
		PelvisForward = PelvisForwardVector(PelvisRot);

		// ------------------------------------------------------------------------

		// --------------------------------- NECK ---------------------------------

		// interpolate base neck orientation to current head orientation for all neck bones
		if (NeckBonesNames.Num() > 0) {
			const int NeckBonesNum = NeckBonesNames.Num();
			t1 = NeckBones[0].RelativeOffset * CapturedBody.Ribcage;
			const FQuat neck0 = t1.GetRotation();
			const FQuat head = CapturedBody.Head.GetRotation();

			for (int i = 0; i < NeckBonesNum; i++) {
				NeckBones[i].WorldTransform.SetRotation(FMath::Lerp(neck0, head, (float)(i + 1) / (float)(NeckBonesNum + 1)));

				if (i == 0) {
					NeckBones[i].WorldTransform.SetTranslation(t1.GetTranslation());
				}
				else {
					NeckBones[i].WorldTransform.SetTranslation(TranslateToParentTransform(NeckBones[i].RelativeOffset, NeckBones[i - 1].WorldTransform));
				}
			}

			// adjust head location
			CapturedBody.Head.SetTranslation((HeadToNeck * t1).GetTranslation());
		}

		// --------------------------------- ROOT ---------------------------------

		// Root is located under pelvis at Z == 0 with Roll == Pitch == 0
		FVector CharDir = PelvisForwardVector(CapturedBody.Pelvis.Rotator());
		CharDir.Z = 0.f; CharDir.Normalize();
		FRotator rotRoot = MakeRotByTwoAxes(RootBoneRotation.ForwardAxis, FVector(0.f, RootBoneRotation.ForwardDirection, 0.f), RootBoneRotation.VerticalAxis, FVector(0.f, 0.f, RootBoneRotation.UpDirection));

		if (bCaptureRootMotion)
		{
			ComponentRotation.Yaw = iCalcRootRotation(PelvisForward, PelvisUpVector(CapturedBody.Pelvis.Rotator())) - 90.f + RootToComponent.Rotator().Yaw;

			CapturedBody.Root.SetRotation(FRotator(0.f, ComponentRotation.Yaw + 90.f, 0.f).Quaternion());
			ComponentRotation.Pitch = ComponentRotation.Roll = 0.f;

			loc = PelvisLoc;
			if (bAllowRootBoneAboveSurface)
			{
				loc.Z -= MeshLegsLength;
				if (loc.Z < wt_base.GetTranslation().Z) loc.Z = wt_base.GetTranslation().Z;
			}
			else
			{
				loc.Z = wt_base.GetTranslation().Z;
			}

			CapturedBody.Root.SetTranslation(loc);
			CapturedBody.Root.SetScale3D(FVector::OneVector);
		}
		else
		{
			ComponentRotation = FRotator::ZeroRotator;
			// no root motion
			CapturedBody.Root.SetTranslation(FVector::ZeroVector);
			CapturedBody.Root.SetRotation(rotRoot.Quaternion());
		}

		// --------------------------------- LEGS ---------------------------------
		// consist of joint targets, thigh/calf and twists

		// ----------------------------- knee targets -----------------------------

		// use inverse kinematics to get other bone transforms
		// right knee
		if (!bHasFootR)
		{
			CapturedBody.FootRight.SetTranslation(CapturedBody.Root.GetTranslation() + PelvisRightVector(CapturedBody.Pelvis.Rotator()) * 15.f + FVector(0.f, 0.f, 15.f));
			rot = MakeRotByTwoAxes(RightLegRotation.ForwardAxis, PelvisUpVector(CapturedBody.Pelvis.Rotator()) * -RightLegRotation.ForwardDirection, RightLegRotation.HorizontalAxis, CharDir * RightLegRotation.RightDirection);
			CapturedBody.FootRight.SetRotation(rot.Quaternion());
		}

		// right foot
		{
			if (bHasThighR)
			{
				// calculate knee joint target as end of thigh bone
				wt_calc = CapturedBody.ThighRight;
				KneeTargetRight = wt_calc.GetTranslation() + RightLegDownVector(wt_calc.Rotator()) * (MeshLegsLength * 0.5f);
				KneeTargetRight = JointTargetAdjustment(wt_calc.GetTranslation(), CapturedBody.FootRight, KneeTargetRight, RightLegForwardVector(wt_calc.Rotator()), 20.f);
			}
			else if (bHasCalfR)
			{
				// take knee joint target as location of calf bone
				KneeTargetRight = CapturedBody.CalfRight.GetTranslation();
				const FVector ThighLoc = TranslateToParentTransform(ThighToPelvisRight, CapturedBody.Pelvis);
				KneeTargetRight = JointTargetAdjustment(ThighLoc, CapturedBody.FootRight, KneeTargetRight, RightLegForwardVector(CapturedBody.CalfRight.Rotator()), 20.f);
			}
			else
			{
				// get knee location in foot forward direction
				const FRotator FootRotator = CapturedBody.FootRight.Rotator();
				//xx
				KneeTargetRight = iCalculateKnee(PelvisLoc, PelvisForward, PelvisRightVector(PelvisRot), CapturedBody.FootRight.GetTranslation(), RightLegForwardVector(FootRotator), RightLegRightVector(FootRotator), PreferableKneeOrientation);
			}
		}

		// left knee
		if (!bHasFootL)
		{
			CapturedBody.FootLeft.SetTranslation(CapturedBody.Root.GetTranslation() + PelvisRightVector(CapturedBody.Pelvis.Rotator()) * -15.f + FVector(0.f, 0.f, 15.f));
			rot = MakeRotByTwoAxes(LeftLegRotation.ForwardAxis, PelvisUpVector(CapturedBody.Pelvis.Rotator()) * -LeftLegRotation.ForwardDirection, LeftLegRotation.HorizontalAxis, CharDir * LeftLegRotation.RightDirection);
			CapturedBody.FootLeft.SetRotation(rot.Quaternion());
		}

		// left foot
		{
			if (bHasThighL)
			{
				// calculate knee joint target as end of thigh bone
				wt_calc = CapturedBody.ThighLeft;
				KneeTargetLeft = wt_calc.GetTranslation() + LeftLegDownVector(wt_calc.Rotator()) * (MeshLegsLength * 0.5f);
				KneeTargetLeft = JointTargetAdjustment(wt_calc.GetTranslation(), CapturedBody.FootLeft, KneeTargetLeft, LeftLegForwardVector(wt_calc.Rotator()), 20.f);
			}
			else if (bHasCalfL)
			{
				// take knee joint target as location of calf bone
				KneeTargetLeft = CapturedBody.CalfLeft.GetTranslation();
				const FVector ThighLoc = TranslateToParentTransform(ThighToPelvisLeft, CapturedBody.Pelvis);
				KneeTargetLeft = JointTargetAdjustment(ThighLoc, CapturedBody.FootLeft, KneeTargetLeft, LeftLegForwardVector(CapturedBody.CalfLeft.Rotator()), 20.f);
			}
			else
			{
				// get knee location in foot forward direction
				const FRotator FootRotator = CapturedBody.FootLeft.Rotator();
				//xx
				KneeTargetLeft = iCalculateKnee(PelvisLoc, PelvisForward, PelvisRightVector(PelvisRot), CapturedBody.FootLeft.GetTranslation(), LeftLegForwardVector(FootRotator), LeftLegRightVector(FootRotator), PreferableKneeOrientation);

			}
		}

		// ----------------------------- thigh + calf -----------------------------

		// right
		if (bLimbsFKSolver && bHasCalfR)
		{
			// FK Solver
			const FTransform& calf_tr = CapturedBody.CalfRight;
			FTransform pelvis_tr = CapturedBody.Pelvis;

			FVector PelvisScale = PelvisInitScale * GetScaleInDirection(PelvisRotation.ForwardAxis, RuntimeMeshScale.Z);
			/**/ if (PelvisRotation.ForwardAxis == EAxis::X) {
				PelvisScale.Y *= RuntimeMeshScale.X; PelvisScale.Z *= RuntimeMeshScale.X;
			}
			else if (PelvisRotation.ForwardAxis == EAxis::Y) {
				PelvisScale.X *= RuntimeMeshScale.X; PelvisScale.Z *= RuntimeMeshScale.X;
			}
			else if (PelvisRotation.ForwardAxis == EAxis::Z) {
				PelvisScale.X *= RuntimeMeshScale.X; PelvisScale.Y *= RuntimeMeshScale.X;
			}

			pelvis_tr.SetScale3D(PelvisScale);

			CapturedBody.ThighRight = ThighToPelvisRight * pelvis_tr;
			const FVector Thigh2CalfSize = (calf_tr.GetTranslation() - CapturedBody.ThighRight.GetTranslation());
			const FVector Thigh2Calf = Thigh2CalfSize.GetSafeNormal();

			CapturedBody.ThighRight.SetRotation(
				MakeRotByTwoAxes
				(
					RightLegRotation.ForwardAxis, Thigh2Calf * RightLegRotation.ForwardDirection,
					RightLegRotation.VerticalAxis, RightLegRightVector(calf_tr.Rotator()) * RightLegRotation.UpDirection * -1.f
				).Quaternion()
			);

			if (bAdjustScaleWithLegFKSolver && bHasFootR)
			{
				const float RuntimeThighScale = Thigh2CalfSize.Size() / (fThighLength * RuntimeMeshScale.Z);
				RuntimeThighScaleR = SetVectorAxis(RuntimeThighScaleR, RightLegRotation.ForwardAxis, RuntimeThighScale);

				const float CalfToFootSize = FVector::Dist(CapturedBody.FootRight.GetTranslation(), CapturedBody.CalfRight.GetTranslation());
				RuntimeCalfScaleR = SetVectorAxis(RuntimeCalfScaleR, RightLegRotation.ForwardAxis, CalfToFootSize / (fCalfLength * RuntimeThighScale));
			}
		}
		else
		{
			// IK Solver
			if (SkeletonType == ESkeletonBonesOrientation::SBO_Default)
			{
				const FVector FootBoneLoc = CapturedBody.FootRight.GetTranslation();
				const FVector ThighLocation = TranslateToParentTransform(ThighToPelvisRight, CapturedBody.Pelvis);
				if (!bHasThighR && !bHasCalfR)
				{
					float FootBoneVertOffset = FootBoneLoc.Z - BodyMesh->GetComponentLocation().Z - FootBoneToGroundZ;

					if (FMath::Abs(FootBoneVertOffset) < 12.f)
					{
						float Alpha = FMath::Clamp(FootBoneVertOffset - 5.f, 0.f, 7.f) / 7.f;

						FVector HorKneeDir;
						switch (PreferableKneeOrientation)
						{
							case EKneeOrientationSetup::AsFoot:
								HorKneeDir = RightLegForwardVector(CapturedBody.FootRight.Rotator());
								break;
							case EKneeOrientationSetup::AsPelvis:
								HorKneeDir = PelvisForwardVector(PelvisRot);
								break;
							case EKneeOrientationSetup::Mixed:
								HorKneeDir = (PelvisForwardVector(PelvisRot) + RightLegForwardVector(CapturedBody.FootRight.Rotator())).GetSafeNormal();
								break;
						}

						HorKneeDir = FVector::PointPlaneProject(HorKneeDir, FVector::ZeroVector, BodyMesh->GetUpVector()).GetSafeNormal() * 30.f;

						FVector KneeTargetRight2 = (FootBoneLoc + ThighLocation) * 0.5f + HorKneeDir;
						KneeTargetRight = FMath::Lerp(KneeTargetRight2, KneeTargetRight, Alpha);
					}
				}

				CalculateTwoBoneIK(
					ThighLocation, FootBoneLoc,
					KneeTargetRight,
					fThighLength * RuntimeMeshScale.Z, fCalfLength * RuntimeMeshScale.Z,
					CapturedBody.ThighRight, CapturedBody.CalfRight,
					RightLegRotation,
					false,
					bInvertKnees);
			}
			else
			{
				CalculateTwoBoneIK_CS(
					TranslateToParentTransform(ThighToPelvisRight, CapturedBody.Pelvis), CapturedBody.FootRight.GetTranslation(),
					KneeTargetRight,
					fThighLength * RuntimeMeshScale.Z, fCalfLength * RuntimeMeshScale.Z,
					CapturedBody.ThighRight, CapturedBody.CalfRight,
					true /*right*/, false /*leg*/, bInvertKnees);
			}
			// avoid stretching
			// commented 201811/16
			// CapturedBody.FootRight.SetTranslation(CapturedBody.CalfRight.GetTranslation() + RightLegDownVector(CapturedBody.CalfRight.Rotator()) * fCalfLength);
		}

		// left
		if (bLimbsFKSolver && bHasCalfL)
		{
			// FK Solver
			const FTransform& calf_tr = CapturedBody.CalfLeft;
			FTransform pelvis_tr = CapturedBody.Pelvis;

			FVector PelvisScale = PelvisInitScale * GetScaleInDirection(PelvisRotation.ForwardAxis, RuntimeMeshScale.Z);
			/**/ if (PelvisRotation.ForwardAxis == EAxis::X) {
				PelvisScale.Y *= RuntimeMeshScale.X; PelvisScale.Z *= RuntimeMeshScale.X;
			}
			else if (PelvisRotation.ForwardAxis == EAxis::Y) {
				PelvisScale.X *= RuntimeMeshScale.X; PelvisScale.Z *= RuntimeMeshScale.X;
			}
			else if (PelvisRotation.ForwardAxis == EAxis::Z) {
				PelvisScale.X *= RuntimeMeshScale.X; PelvisScale.Y *= RuntimeMeshScale.X;
			}
			pelvis_tr.SetScale3D(PelvisScale);

			CapturedBody.ThighLeft = ThighToPelvisLeft * pelvis_tr;
			const FVector Thigh2CalfSize = (calf_tr.GetTranslation() - CapturedBody.ThighLeft.GetTranslation());
			const FVector Thigh2Calf = Thigh2CalfSize.GetSafeNormal();

			CapturedBody.ThighLeft.SetRotation(
				MakeRotByTwoAxes
				(
					LeftLegRotation.ForwardAxis, Thigh2Calf * LeftLegRotation.ForwardDirection,
					LeftLegRotation.VerticalAxis, LeftLegRightVector(calf_tr.Rotator()) * LeftLegRotation.UpDirection * -1.f
				).Quaternion()
			);

			if (bAdjustScaleWithLegFKSolver && bHasFootL)
			{
				const float RuntimeThighScale = Thigh2CalfSize.Size() / (fThighLength * RuntimeMeshScale.Z);
				RuntimeThighScaleL = SetVectorAxis(RuntimeThighScaleL, LeftLegRotation.ForwardAxis, RuntimeThighScale);

				const float CalfToFootSize = FVector::Dist(CapturedBody.FootLeft.GetTranslation(), CapturedBody.CalfLeft.GetTranslation());
				RuntimeCalfScaleL = SetVectorAxis(RuntimeCalfScaleL, LeftLegRotation.ForwardAxis, CalfToFootSize / (fCalfLength * RuntimeThighScale));
			}
		}
		else
		{
			// IK Solver
			if (SkeletonType == ESkeletonBonesOrientation::SBO_Default)
			{
				const FVector ThighLocation = TranslateToParentTransform(ThighToPelvisLeft, CapturedBody.Pelvis);
				const FVector FootBoneLoc = CapturedBody.FootLeft.GetTranslation();

				if (!bHasThighL && !bHasCalfL)
				{
					float FootBoneVertOffset = FootBoneLoc.Z - BodyMesh->GetComponentLocation().Z - FootBoneToGroundZ;
					if (FMath::Abs(FootBoneVertOffset) < 12.f)
					{
						float Alpha = FMath::Clamp(FootBoneVertOffset - 5.f, 0.f, 7.f) / 7.f;

						FVector HorKneeDir;
						switch (PreferableKneeOrientation)
						{
							case EKneeOrientationSetup::AsFoot:
								HorKneeDir = LeftLegForwardVector(CapturedBody.FootLeft.Rotator());
								break;
							case EKneeOrientationSetup::AsPelvis:
								HorKneeDir = PelvisForwardVector(PelvisRot);
								break;
							case EKneeOrientationSetup::Mixed:
								HorKneeDir = (PelvisForwardVector(PelvisRot) + LeftLegForwardVector(CapturedBody.FootLeft.Rotator())).GetSafeNormal();
								break;
						}
						
						HorKneeDir = FVector::PointPlaneProject(HorKneeDir, FVector::ZeroVector, BodyMesh->GetUpVector()).GetSafeNormal() * 30.f;

						FVector KneeTargetLeft2 = (FootBoneLoc + ThighLocation) * 0.5f + HorKneeDir;
						KneeTargetLeft = FMath::Lerp(KneeTargetLeft2, KneeTargetLeft, Alpha);
					}
				}

				CalculateTwoBoneIK(
					ThighLocation, FootBoneLoc,
					KneeTargetLeft,
					fThighLength * RuntimeMeshScale.Z, fCalfLength * RuntimeMeshScale.Z,
					CapturedBody.ThighLeft, CapturedBody.CalfLeft,
					LeftLegRotation,
					false,
					bInvertKnees);
			}
			else
			{
				CalculateTwoBoneIK_CS(
					TranslateToParentTransform(ThighToPelvisLeft, CapturedBody.Pelvis), CapturedBody.FootLeft.GetTranslation(),
					KneeTargetLeft,
					fThighLength * RuntimeMeshScale.Z, fCalfLength * RuntimeMeshScale.Z,
					CapturedBody.ThighLeft, CapturedBody.CalfLeft,
					false /*right*/, false /*leg*/, bInvertKnees);
			}
			// avoid stretching
			// commented 201811/16
			// CapturedBody.FootLeft.SetTranslation(CapturedBody.CalfLeft.GetTranslation() + LeftLegDownVector(CapturedBody.CalfLeft.Rotator()) * fCalfLength);

		}

		// ------------------------------ leg twists ------------------------------

		// right and left thighs
		if (bUpperTwistFromTorso)
		{
			const FVector PelvisDown = PelvisUpVector(PelvisRot) / -1.f; // leg forward
			//const FVector PelvisForward = PelvisForward
			const FRotator PelvisInRThighSpace = MakeRotByTwoAxes(
				RightLegRotation.ForwardAxis, PelvisDown * RightLegRotation.ForwardDirection,
				RightLegRotation.HorizontalAxis, PelvisForward * RightLegRotation.RightDirection
			);
			const FRotator PelvisInLThighSpace = MakeRotByTwoAxes(
				LeftLegRotation.ForwardAxis, PelvisDown * LeftLegRotation.ForwardDirection,
				LeftLegRotation.HorizontalAxis, PelvisForward * LeftLegRotation.RightDirection
			);

			CalculateTwist(PelvisInRThighSpace, CapturedBody.ThighRight.Rotator(), RightLegRotation.ForwardAxis, ThighRightTwist);
			CalculateTwist(PelvisInLThighSpace, CapturedBody.ThighLeft.Rotator(), LeftLegRotation.ForwardAxis, ThighLeftTwist);
		}
		else
		{
			FRotator noroll_leg = CapturedBody.ThighRight.Rotator();
			SetAxisRotation(noroll_leg, RightLegRotation.ForwardAxis, 0.f);
			CalculateTwist(noroll_leg, CapturedBody.CalfRight.Rotator(), RightLegRotation.ForwardAxis, ThighRightTwist);

			noroll_leg = CapturedBody.ThighLeft.Rotator();
			SetAxisRotation(noroll_leg, LeftLegRotation.ForwardAxis, 0.f);
			CalculateTwist(noroll_leg, CapturedBody.CalfLeft.Rotator(), LeftLegRotation.ForwardAxis, ThighLeftTwist);
		}

		// right and left calfs
		CalculateTwist(CapturedBody.CalfRight.Rotator(), CapturedBody.FootRight.Rotator(), RightLegRotation.ForwardAxis, CalfRightTwist);
		CalculateTwist(CapturedBody.CalfLeft.Rotator(), CapturedBody.FootLeft.Rotator(), LeftLegRotation.ForwardAxis, CalfLeftTwist);

		// --------------------------------- HANDS ---------------------------------
		// hands consist of collarbones, elbow joint targets and arms

		// ------------------------------ collarbones ------------------------------

		if (bHasShoulderR)
		{
			// mirror existing bone to other collarbone if necessary
			if (bMirrorShouldersRotation && !bHasShoulderL)
			{
				// mirror collarbone from right to left
				FTransform w_collarbone_base = ShoulderToRibcageRight * CapturedBody.Ribcage;
				const FTransform r_collarbone_r = CapturedBody.ShoulderRight.GetRelativeTransform(w_collarbone_base);
				FRotator r_collarbone_l;
				// yaw
				SetAxisRotation(r_collarbone_l, LeftHandRotation.VerticalAxis, GetAxisRotation(r_collarbone_r.Rotator(), RightHandRotation.VerticalAxis));
				// pitch
				SetAxisRotation(r_collarbone_l, LeftHandRotation.HorizontalAxis, GetAxisRotation(r_collarbone_r.Rotator(), RightHandRotation.HorizontalAxis));
				// roll
				SetAxisRotation(r_collarbone_l, LeftHandRotation.ForwardAxis, GetAxisRotation(r_collarbone_r.Rotator(), RightHandRotation.ForwardAxis));

				w_collarbone_base = ShoulderToRibcageLeft * CapturedBody.Ribcage;
				CapturedBody.ShoulderLeft = FTransform(r_collarbone_l.Quaternion()) * w_collarbone_base;
			}
		}
		else
		{
			// otherwise, calculate shoulder by hand offset
			if (bHasUpperarmR && !bLockShouldersRotation)
			{
				// @TODO: add here initial delta rotator captured in CalibrateBody
				FTransform WShoulder = CalculateShoulderFromUpperarm(EControllerHand::Right, false, true);
				CapturedBody.ShoulderRight = RightShoulderRotatorOffset * WShoulder;
			}
			else
			{
				CalculateShoulder(EControllerHand::Right);
			}
		}

		if (bHasShoulderL)
		{
			if (bMirrorShouldersRotation && !bHasShoulderR)
			{
				// mirror collarbone from left to right
				FTransform w_collarbone_base = ShoulderToRibcageLeft * CapturedBody.Ribcage;
				const FTransform r_collarbone_l = CapturedBody.ShoulderLeft.GetRelativeTransform(w_collarbone_base);
				FRotator r_collarbone_r;
				// yaw
				SetAxisRotation(r_collarbone_r, RightHandRotation.VerticalAxis, GetAxisRotation(r_collarbone_l.Rotator(), LeftHandRotation.VerticalAxis));
				// pitch
				SetAxisRotation(r_collarbone_r, RightHandRotation.HorizontalAxis, GetAxisRotation(r_collarbone_l.Rotator(), LeftHandRotation.HorizontalAxis));
				// roll
				SetAxisRotation(r_collarbone_r, RightHandRotation.ForwardAxis, GetAxisRotation(r_collarbone_l.Rotator(), LeftHandRotation.ForwardAxis));

				w_collarbone_base = ShoulderToRibcageRight * CapturedBody.Ribcage;
				CapturedBody.ShoulderRight = FTransform(r_collarbone_r.Quaternion()) * w_collarbone_base;
			}
		}
		else
		{
			if (!bMirrorShouldersRotation || !bHasShoulderR)
			{
				if (bHasUpperarmL && !bLockShouldersRotation)
				{
					// @TODO: add here initial delta rotator captured in CalibrateBody
					FTransform WShoulder = CalculateShoulderFromUpperarm(EControllerHand::Left, false, true);
					CapturedBody.ShoulderLeft = LeftShoulderRotatorOffset * WShoulder;
				}
				else
				{
					CalculateShoulder(EControllerHand::Left);
				}
			}
		}

		const FVector RibcageRightSide = RibcageRightVector(CapturedBody.Ribcage.Rotator()) * -1.f;
		const FVector RibcageUpSide = RibcageUpVector(CapturedBody.Ribcage.Rotator());
		const FTransform UppararmBaseRight = UpperarmToShoulderRight * CapturedBody.ShoulderRight;
		const FTransform UppararmBaseLeft = UpperarmToShoulderLeft * CapturedBody.ShoulderLeft;

		// ------------------------------- elbow right -------------------------------		
		if (bHasUpperarmR)
		{
			wt_calc = CapturedBody.UpperarmRight;
			ElbowTargetRight = wt_calc.GetTranslation() + RightHandForwardVector(wt_calc.Rotator()) * MeshUpperarmLength;
			ElbowTargetRight = JointTargetAdjustment(wt_calc.GetTranslation(), CapturedBody.PalmRight, ElbowTargetRight, RightHandInsideVector(wt_calc.Rotator()), -20.f);
		}
		else if (bHasForearmR)
		{
			ElbowTargetRight = CapturedBody.ForearmRight.GetTranslation();

			const FVector UpperarmLoc = TranslateToParentTransform(UpperarmToShoulderRight, CapturedBody.ShoulderRight);
			ElbowTargetRight = JointTargetAdjustment(UpperarmLoc, CapturedBody.PalmRight, ElbowTargetRight, RightHandInsideVector(CapturedBody.ForearmRight.Rotator()), -20.f);
		}
		else
		{
			wt_calc = CapturedBody.PalmRight;

			float koef = FMath::Clamp(iDistanceToLine(PelvisLoc, CapturedBody.Ribcage.GetTranslation(), wt_calc.GetTranslation()) / ((fUpperarmLength + fForearmLength) * RuntimeMeshScale.X), 0.f, 1.f);
			koef = koef * 0.6f + 0.25f;

			const FVector HandUp = RightPalmUpVector(wt_calc.Rotator());
			ElbowTargetRight = (wt_calc.GetTranslation() + UppararmBaseRight.GetTranslation()) * 0.5f;

			FVector advec = FMath::Lerp(RibcageRightSide * -1.f /* external side */, HandUp * -1.f /*palm down side*/, koef);
			advec.Normalize();

			// check limits
			FVector R2H = wt_calc.GetTranslation() - CapturedBody.Ribcage.GetTranslation();
			R2H.Normalize();
			if (FVector::DotProduct(PelvisForward, R2H) > 0.2f)
			{
				ClampElbowRotation(RibcageRightSide, RibcageUpSide, HandUp, advec, false);
			}

			ElbowTargetRight += (advec * 50.f);
		}

		// ------------------------------ arm right ------------------------------

		if (false && (bHasForearmR || bHasUpperarmR))
		{
			// FK Solver

			if (bHasUpperarmR)
			{
				CapturedBody.UpperarmRight.SetTranslation(TranslateToParentTransform(UpperarmToShoulderRight, CapturedBody.ShoulderRight));
				const FTransform& upperarm_tr = CapturedBody.UpperarmRight;
				CapturedBody.ForearmRight.SetTranslation(upperarm_tr.GetTranslation() + RightHandForwardVector(upperarm_tr.Rotator()) * fUpperarmLength /** RuntimeMeshScale.X*/);
				const FVector Elbow2Hand = (CapturedBody.PalmRight.GetTranslation() - CapturedBody.ForearmRight.GetTranslation()).GetSafeNormal();

				CapturedBody.ForearmRight.SetRotation(
					MakeRotByTwoAxes
					(
						RightHandRotation.ForwardAxis, Elbow2Hand * RightHandRotation.ForwardDirection,
						RightHandRotation.VerticalAxis, RightHandUpVector(upperarm_tr.Rotator()) * RightHandRotation.UpDirection
					).Quaternion()
				);
			}
			else if (bHasForearmR)
			{
				const FTransform& lowerarm_tr = CapturedBody.ForearmRight;
				CapturedBody.UpperarmRight = UpperarmToShoulderRight * CapturedBody.ShoulderRight;
				const FVector Upperarm2Elbow = (CapturedBody.ForearmRight.GetTranslation() - CapturedBody.UpperarmRight.GetTranslation()).GetSafeNormal();

				CapturedBody.UpperarmRight.SetRotation(
					MakeRotByTwoAxes
					(
						RightHandRotation.ForwardAxis, Upperarm2Elbow * RightHandRotation.ForwardDirection,
						RightHandRotation.VerticalAxis, RightHandUpVector(lowerarm_tr.Rotator()) * RightHandRotation.UpDirection
					).Quaternion()
				);
			}
		}
		else
		{
			// IK Solver
			if (SkeletonType == ESkeletonBonesOrientation::SBO_Default)
			{
				CalculateTwoBoneIK(
					TranslateToParentTransform(UpperarmToShoulderRight, CapturedBody.ShoulderRight), CapturedBody.PalmRight.GetTranslation(),	// chain start, chain end
					ElbowTargetRight,													// joint target
					fUpperarmLength * RuntimeMeshScale.X, fForearmLength * RuntimeMeshScale.X,		// upperarm and lowerarm size
					CapturedBody.UpperarmRight, CapturedBody.ForearmRight,				// output transforms
					RightHandRotation,
					false,
					bInvertElbows);													// hand orientation
			}
			else
			{
				CalculateTwoBoneIK_CS(
					TranslateToParentTransform(UpperarmToShoulderRight, CapturedBody.ShoulderRight), CapturedBody.PalmRight.GetTranslation(),	// chain start, chain end
					ElbowTargetRight,													// joint target
					fUpperarmLength * RuntimeMeshScale.X, fForearmLength * RuntimeMeshScale.X,		// upperarm and lowerarm size
					CapturedBody.UpperarmRight, CapturedBody.ForearmRight,				// output transforms
					true /*right*/, true /*hand*/, bInvertElbows);
			}
		}
		// avoid stretching
		// commented 201811/16
		// CapturedBody.PalmRight.SetTranslation(CapturedBody.ForearmRight.GetTranslation() + RightHandForwardVector(CapturedBody.ForearmRight.Rotator()) * fForearmLength * RuntimeMeshScale.X);

		// ----------------------------- twists right -----------------------------

		if (bUpperTwistFromTorso)
		{
			CalculateTwist(CapturedBody.ShoulderRight.Rotator(), CapturedBody.UpperarmRight.Rotator(), RightHandRotation.ForwardAxis, UpperarmRightTwist);
		}
		else
		{
			/*
			rot = CapturedBody.UpperarmRight.Rotator();
			SetAxisRotation(rot, RightHandRotation.ForwardAxis, UppararmBaseRight.Rotator().Roll);
			CapturedBody.UpperarmRight_NoRoll = rot;
			*/
			CalculateTwist(CapturedBody.ShoulderRight.Rotator(), CapturedBody.ForearmRight.Rotator(), RightHandRotation.ForwardAxis, UpperarmRightTwist);
		}

		t1.SetTranslation(CapturedBody.ForearmRight.GetTranslation());
		t1.SetRotation(
			UKismetMathLibrary::MakeRotFromXY(
				RightHandForwardVector(CapturedBody.ForearmRight.Rotator()),
				RightHandInsideVector(CapturedBody.ForearmRight.Rotator())).Quaternion()
		);
		t2.SetTranslation(CapturedBody.PalmRight.GetTranslation());
		t2.SetRotation(
			UKismetMathLibrary::MakeRotFromXY(
				RightHandForwardVector(CapturedBody.PalmRight.Rotator()),
				RightPalmUpVector(CapturedBody.PalmRight.Rotator())).Quaternion()
		);

		CalculateTwist(t1, t2, RightHandRotation.ForwardAxis, ForearmRightTwist, false);

		// ------------------------------ elbow left ------------------------------

		// left elbow
		if (bHasUpperarmL)
		{
			wt_calc = CapturedBody.UpperarmLeft;
			ElbowTargetLeft = wt_calc.GetTranslation() + LeftHandForwardVector(wt_calc.Rotator()) * MeshUpperarmLength;
			ElbowTargetLeft = JointTargetAdjustment(wt_calc.GetTranslation(), CapturedBody.PalmLeft, ElbowTargetLeft, LeftHandInsideVector(wt_calc.Rotator()), -20.f);
		}
		else if (bHasForearmL)
		{
			ElbowTargetLeft = CapturedBody.ForearmLeft.GetTranslation();

			const FVector UpperarmLoc = TranslateToParentTransform(UpperarmToShoulderLeft, CapturedBody.ShoulderLeft);
			ElbowTargetLeft = JointTargetAdjustment(UpperarmLoc, CapturedBody.PalmLeft, ElbowTargetLeft, LeftHandInsideVector(CapturedBody.ForearmLeft.Rotator()), -20.f);
		}
		else
		{
			wt_calc = CapturedBody.PalmLeft;

			float koef = FMath::Clamp(iDistanceToLine(PelvisLoc, CapturedBody.Ribcage.GetTranslation(), wt_calc.GetTranslation()) / ((fUpperarmLength + fForearmLength) * RuntimeMeshScale.X), 0.f, 1.f);
			koef = koef * 0.6f + 0.25f;

			const FVector HandUp = LeftPalmUpVector(wt_calc.Rotator());
			ElbowTargetLeft = (wt_calc.GetTranslation() + UppararmBaseLeft.GetTranslation()) * 0.5f;
			FVector advec = FMath::Lerp(RibcageRightSide /* external side */, HandUp * -1.f /*palm down side*/, koef);
			advec.Normalize();

			// check limits
			FVector R2H = wt_calc.GetTranslation() - CapturedBody.Ribcage.GetTranslation();
			R2H.Normalize();
			if (FVector::DotProduct(PelvisForward, R2H) > 0.2f) {
				ClampElbowRotation(RibcageRightSide * -1.f, RibcageUpSide, HandUp, advec, false);
			}

			ElbowTargetLeft += (advec * 50.f);
		}

		// ------------------------------ arm left ------------------------------

		if (false && (bHasForearmL || bHasUpperarmL))
		{
			// FK Solver

			if (bHasUpperarmL)
			{
				CapturedBody.UpperarmLeft.SetTranslation(TranslateToParentTransform(UpperarmToShoulderLeft, CapturedBody.ShoulderLeft));
				const FTransform& upperarm_tr = CapturedBody.UpperarmLeft;
				CapturedBody.ForearmLeft.SetTranslation(upperarm_tr.GetTranslation() + LeftHandForwardVector(upperarm_tr.Rotator()) * fUpperarmLength /** RuntimeMeshScale.X*/);
				const FVector Elbow2Hand = (CapturedBody.PalmLeft.GetTranslation() - CapturedBody.ForearmLeft.GetTranslation()).GetSafeNormal();

				CapturedBody.ForearmLeft.SetRotation(
					MakeRotByTwoAxes
					(
						LeftHandRotation.ForwardAxis, Elbow2Hand * LeftHandRotation.ForwardDirection,
						LeftHandRotation.VerticalAxis, LeftHandUpVector(upperarm_tr.Rotator()) * LeftHandRotation.UpDirection
					).Quaternion()
				);
			}
			else if (bHasForearmL)
			{
				const FTransform& lowerarm_tr = CapturedBody.ForearmLeft;
				CapturedBody.UpperarmLeft = UpperarmToShoulderLeft * CapturedBody.ShoulderLeft;
				const FVector Upperarm2Elbow = (CapturedBody.ForearmLeft.GetTranslation() - CapturedBody.UpperarmLeft.GetTranslation()).GetSafeNormal();

				CapturedBody.UpperarmLeft.SetRotation(
					MakeRotByTwoAxes
					(
						LeftHandRotation.ForwardAxis, Upperarm2Elbow * LeftHandRotation.ForwardDirection,
						LeftHandRotation.VerticalAxis, LeftHandUpVector(lowerarm_tr.Rotator()) * LeftHandRotation.UpDirection
					).Quaternion()
				);
			}
		}
		else
		{
			// IK Solver

			if (SkeletonType == ESkeletonBonesOrientation::SBO_Default)
			{
				CalculateTwoBoneIK(
					TranslateToParentTransform(UpperarmToShoulderLeft, CapturedBody.ShoulderLeft), CapturedBody.PalmLeft.GetTranslation(),
					ElbowTargetLeft,
					fUpperarmLength * RuntimeMeshScale.X, fForearmLength * RuntimeMeshScale.X,
					CapturedBody.UpperarmLeft, CapturedBody.ForearmLeft,
					LeftHandRotation,
					false,
					bInvertElbows);
			}
			else
			{
				CalculateTwoBoneIK_CS(
					TranslateToParentTransform(UpperarmToShoulderLeft, CapturedBody.ShoulderLeft), CapturedBody.PalmLeft.GetTranslation(),
					ElbowTargetLeft,
					fUpperarmLength * RuntimeMeshScale.X, fForearmLength * RuntimeMeshScale.X,
					CapturedBody.UpperarmLeft, CapturedBody.ForearmLeft,
					false /*left*/, true /*hand*/, bInvertElbows);
			}
		}

		// avoid stretching
		// commented 201811/16
		// CapturedBody.PalmLeft.SetTranslation(CapturedBody.ForearmLeft.GetTranslation() + LeftHandForwardVector(CapturedBody.ForearmLeft.Rotator()) * fForearmLength * RuntimeMeshScale.X);

		rot = CapturedBody.UpperarmLeft.Rotator();
		SetAxisRotation(rot, LeftHandRotation.ForwardAxis, UppararmBaseLeft.Rotator().Roll);
		CapturedBody.UpperarmLeft_NoRoll = rot;

		// ----------------------------- twists left -----------------------------

		if (bUpperTwistFromTorso)
		{
			CalculateTwist(CapturedBody.ShoulderLeft.Rotator(), CapturedBody.UpperarmLeft.Rotator(), LeftHandRotation.ForwardAxis, UpperarmLeftTwist);
		}
		else
		{
			/*
			rot = CapturedBody.UpperarmRight.Rotator();
			SetAxisRotation(rot, RightHandRotation.ForwardAxis, UppararmBaseRight.Rotator().Roll);
			CapturedBody.UpperarmRight_NoRoll = rot;
			*/
			CalculateTwist(CapturedBody.ShoulderLeft.Rotator(), CapturedBody.ForearmLeft.Rotator(), LeftHandRotation.ForwardAxis, UpperarmLeftTwist);
		}


		t1.SetTranslation(CapturedBody.ForearmLeft.GetTranslation());
		t1.SetRotation(
			UKismetMathLibrary::MakeRotFromXY(
				LeftHandForwardVector(CapturedBody.ForearmLeft.Rotator()),
				LeftHandInsideVector(CapturedBody.ForearmLeft.Rotator())).Quaternion()
		);
		t2.SetTranslation(CapturedBody.PalmLeft.GetTranslation());
		t2.SetRotation(
			UKismetMathLibrary::MakeRotFromXY(
				LeftHandForwardVector(CapturedBody.PalmLeft.Rotator()),
				LeftPalmUpVector(CapturedBody.PalmLeft.Rotator())).Quaternion()
		);

		CalculateTwist(t1, t2, LeftHandRotation.ForwardAxis, ForearmLeftTwist);

		// ----------------------------- fingers -----------------------------

		if (bFingersInput)
		{
			ProcessFingers();
		}
	}

	// ----------------------------- SOCKET BONES -----------------------------

	for (auto& socket : SocketsInfo)
	{
		if (socket.Value.bIsLocator) {
			socket.Value.CurrentPosition.SetRotation(CapturedBody.Pelvis.GetRotation());
			if (socket.Value.AttachmentBone == EHumanoidBone::Locator_ElbowRight)
				socket.Value.CurrentPosition.SetTranslation(ElbowTargetRight);
			else if (socket.Value.AttachmentBone == EHumanoidBone::Locator_ElbowLeft)
				socket.Value.CurrentPosition.SetTranslation(ElbowTargetLeft);
			else if (socket.Value.AttachmentBone == EHumanoidBone::Locator_KneeRight)
				socket.Value.CurrentPosition.SetTranslation(KneeTargetRight);
			else if (socket.Value.AttachmentBone == EHumanoidBone::Locator_KneeLeft)
				socket.Value.CurrentPosition.SetTranslation(KneeTargetLeft);
		}
		else
		{
			socket.Value.CurrentPosition = socket.Value.OffsetToBone * iGetCapturedBoneValue(socket.Value.AttachmentBone);
		}
	}
}

/**
* Building a rig for a skeleton of the BodyMesh->SkeletalMesh mesh.
* We need to detect local orientation of all skeleton bones assuming that skeletal mesh is in the T pose
* Why not to use mesh reference pose? Because in many cases it could be A pose instead of T pose,
* and using instantaneous pose allow to end developer to specify animation to get T pose.
*/
void UCaptureDevice::UpdateSkeletonSetup()
{
	if (bIsInitialized && IsValid(BodyMesh->SkeletalMesh))
	{
		FTransform t1, t2;
		FVector v0, v1, v2, v3;

		ToggleCapture(false);

		// return if bones aren't initialized
		const FReferenceSkeleton* skref = &BodyMesh->SkeletalMesh->RefSkeleton;
		const FName RootBoneName = SkeletonBonesMap[EHumanoidBone::Root];
		for (const auto& bonename : SkeletonBonesMap)
			if (bonename.Key != EHumanoidBone::Root) _CHECKBONE(bonename.Value);

		// has root bone?
		bHasRootBone = (skref->FindBoneIndex(RootBoneName) != INDEX_NONE && RootBoneName != SkeletonBonesMap[EHumanoidBone::Pelvis]);

		// get bones transforms
		const FTransform tPelvis = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::Pelvis]);
		const FTransform tRibcage = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::Ribcage]);
		const FTransform tHead = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::Head]);
		const FTransform tShoulderRight = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::ShoulderRight]);
		const FTransform tUpperarmRight = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::UpperarmRight]);
		const FTransform tForearmRight = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::ForearmRight]);
		const FTransform tPalmRight = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::PalmRight]);
		const FTransform tShoulderLeft = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::ShoulderLeft]);
		const FTransform tUpperarmLeft = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::UpperarmLeft]);
		const FTransform tForearmLeft = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::ForearmLeft]);
		const FTransform tPalmLeft = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::PalmLeft]);
		const FTransform tThighRight = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::ThighRight]);
		const FTransform tCalfRight = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::CalfRight]);
		const FTransform tFootRight = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::FootRight]);
		const FTransform tThighLeft = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::ThighLeft]);
		const FTransform tCalfLeft = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::CalfLeft]);
		const FTransform tFootLeft = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::FootLeft]);

		// initialize skeleton bones relationship

		// 1. Distances and scales.
		MeshSpineLength = FVector::Dist(tPelvis.GetTranslation(), tRibcage.GetTranslation());
		MeshLegsLength = tPelvis.GetTranslation().Z - GetOwner()->GetActorLocation().Z;

		MeshUpperarmLength = FVector::Dist(tUpperarmRight.GetTranslation(), tForearmRight.GetTranslation());
		MeshForearmLength = FVector::Dist(tForearmRight.GetTranslation(), tPalmRight.GetTranslation());
		MeshHandsFullLength = (MeshUpperarmLength + MeshForearmLength) * 2.f + FVector::Dist(tUpperarmRight.GetTranslation(), tUpperarmLeft.GetTranslation());
		MeshHeight = tHead.GetTranslation().Z - GetOwner()->GetActorLocation().Z;

		fUpperarmLength = MeshUpperarmLength;
		fForearmLength = MeshForearmLength;

		fThighLength = FVector::Dist(tThighRight.GetTranslation(), tCalfRight.GetTranslation());
		fCalfLength = FVector::Dist(tCalfRight.GetTranslation(), tFootRight.GetTranslation());

		// 2. Relative Transforms.
		ShoulderToRibcageRight = tShoulderRight.GetRelativeTransform(tRibcage);
		ShoulderToRibcageLeft = tShoulderLeft.GetRelativeTransform(tRibcage);
		fShoulderLength = ShoulderToRibcageRight.GetTranslation().Size();

		UpperarmToShoulderRight = tUpperarmRight.GetRelativeTransform(tShoulderRight);
		UpperarmToShoulderLeft = tUpperarmLeft.GetRelativeTransform(tShoulderLeft);

		ThighToPelvisRight = MakeRelativeTransform(tThighRight, tPelvis);
		ThighToPelvisLeft = MakeRelativeTransform(tThighLeft, tPelvis);

		t1 = BodyMesh->GetSocketTransform(BodyMesh->GetParentBone(SkeletonBonesMap[EHumanoidBone::Head]));
		HeadToNeck = MakeRelativeTransform(tHead, t1);

		RibcageToHead = MakeRelativeTransform(tRibcage, tHead);

		RootToComponent = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::Root], ERelativeTransformSpace::RTS_Component);

		// 3. Bones orientation.
		FVector SkMForward = tPalmRight.GetTranslation() - tRibcage.GetTranslation();
		SkMForward.Z = 0.f;
		SkMForward.Normalize();
		SkMForward = SkMForward.RotateAngleAxis(-90.f, FVector(0.f, 0.f, 1.f));

		if (bHasRootBone)
		{
			// Root Up-Down
			RootBoneRotation.VerticalAxis = FindCoDirection(BodyMesh->GetSocketRotation(SkeletonBonesMap[EHumanoidBone::Root]), FVector(0.f, 0.f, 1.f), RootBoneRotation.UpDirection);
			// Root Forward
			RootBoneRotation.ForwardAxis = FindCoDirection(BodyMesh->GetSocketRotation(SkeletonBonesMap[EHumanoidBone::Root]), SkMForward, RootBoneRotation.ForwardDirection);
		}

		v0 = tPalmRight.GetTranslation() - tRibcage.GetTranslation();
		v0.Z = 0.f;

		// Head
		HeadRotation.VerticalAxis = FindCoDirection(tHead.Rotator(), FVector(0.f, 0.f, 1.f), HeadRotation.UpDirection);
		HeadRotation.ForwardAxis = FindCoDirection(tPelvis.Rotator(), SkMForward, PelvisRotation.ForwardDirection);

		if (HeadRotation.ForwardAxis != EAxis::X && HeadRotation.VerticalAxis != EAxis::X)
			HeadRotation.HorizontalAxis = EAxis::X;
		else if (HeadRotation.ForwardAxis != EAxis::Y && HeadRotation.VerticalAxis != EAxis::Y)
			HeadRotation.HorizontalAxis = EAxis::Y;
		else if (HeadRotation.ForwardAxis != EAxis::Z && HeadRotation.VerticalAxis != EAxis::Z)
			HeadRotation.HorizontalAxis = EAxis::Z;

		if (FVector::DotProduct(v0, RotatorDirection(tHead.Rotator(), HeadRotation.HorizontalAxis)) > 0.f) HeadRotation.RightDirection = 1.f; else HeadRotation.RightDirection = -1.f;

		// Spine Up-Down
		PelvisRotation.ForwardAxis = FindCoDirection(tPelvis.Rotator(), FVector(0.f, 0.f, 1.f), PelvisRotation.ForwardDirection);
		RibcageRotation.ForwardAxis = FindCoDirection(tRibcage.Rotator(), FVector(0.f, 0.f, 1.f), RibcageRotation.ForwardDirection);

		// spine forward

		// mesh/pelvis forward axis
		PelvisRotation.VerticalAxis = FindCoDirection(tPelvis.Rotator(), SkMForward, PelvisRotation.UpDirection);
		RibcageRotation.VerticalAxis = FindCoDirection(tRibcage.Rotator(), SkMForward, RibcageRotation.UpDirection);

		// spine right
		v0 = FVector(0.f, 0.f, 1.f) ^ PelvisForwardVector(tPelvis.Rotator());
		PelvisRotation.HorizontalAxis = FindCoDirection(tPelvis.Rotator(), v0, PelvisRotation.RightDirection);
		RibcageRotation.HorizontalAxis = FindCoDirection(tRibcage.Rotator(), v0, RibcageRotation.RightDirection);

		if (!bHasRootBone)
		{
			RootBoneRotation = PelvisRotation;
		}

		// right hand forward
		v0 = tPalmRight.GetTranslation() - tUpperarmRight.GetTranslation();
		RightHandRotation.ForwardAxis = FindCoDirection(tUpperarmRight.Rotator(), v0, RightHandRotation.ForwardDirection);

		// left hand forward
		v0 = tPalmLeft.GetTranslation() - tUpperarmLeft.GetTranslation();
		LeftHandRotation.ForwardAxis = FindCoDirection(tUpperarmLeft.Rotator(), v0, LeftHandRotation.ForwardDirection);

		// right hand plane axes
		v0 = PelvisForwardVector(tPelvis.Rotator()) * -1.f; // back direction
		RightHandRotation.HorizontalAxis = FindCoDirection(tUpperarmRight.Rotator(), v0, RightHandRotation.ExternalDirection);

		// left hand rotation axes
		LeftHandRotation.HorizontalAxis = FindCoDirection(tUpperarmLeft.Rotator(), v0, LeftHandRotation.ExternalDirection);

		// right arm up axis		
		if (RightHandRotation.ForwardAxis != EAxis::X && RightHandRotation.HorizontalAxis != EAxis::X)
			RightHandRotation.VerticalAxis = EAxis::X;
		else if (RightHandRotation.ForwardAxis != EAxis::Y && RightHandRotation.HorizontalAxis != EAxis::Y)
			RightHandRotation.VerticalAxis = EAxis::Y;
		else if (RightHandRotation.ForwardAxis != EAxis::Z && RightHandRotation.HorizontalAxis != EAxis::Z)
			RightHandRotation.VerticalAxis = EAxis::Z;

		if (FVector::DotProduct(FVector(0.f, 0.f, 1.f), RotatorDirection(tUpperarmRight.Rotator(), RightHandRotation.VerticalAxis)) > 0.f) RightHandRotation.UpDirection = 1.f; else RightHandRotation.UpDirection = -1.f;

		// left arm up axis		
		if (LeftHandRotation.ForwardAxis != EAxis::X && LeftHandRotation.HorizontalAxis != EAxis::X)
			LeftHandRotation.VerticalAxis = EAxis::X;
		else if (LeftHandRotation.ForwardAxis != EAxis::Y && LeftHandRotation.HorizontalAxis != EAxis::Y)
			LeftHandRotation.VerticalAxis = EAxis::Y;
		else if (LeftHandRotation.ForwardAxis != EAxis::Z && LeftHandRotation.HorizontalAxis != EAxis::Z)
			LeftHandRotation.VerticalAxis = EAxis::Z;

		if (FVector::DotProduct(FVector(0.f, 0.f, 1.f), RotatorDirection(tUpperarmLeft.Rotator(), LeftHandRotation.VerticalAxis)) > 0.f) LeftHandRotation.UpDirection = 1.f; else LeftHandRotation.UpDirection = -1.f;

		// right leg down
		RightLegRotation.ForwardAxis = FindCoDirection(tThighRight.Rotator(), FVector(0.f, 0.f, -1.f), RightLegRotation.ForwardDirection);

		// left leg down
		LeftLegRotation.ForwardAxis = FindCoDirection(tThighLeft.Rotator(), FVector(0.f, 0.f, -1.f), LeftLegRotation.ForwardDirection);

		// right Leg forward axis
		v0 = PelvisForwardVector(tPelvis.Rotator());
		RightLegRotation.HorizontalAxis = FindCoDirection(tThighRight.Rotator(), v0, RightLegRotation.ExternalDirection);

		// left Leg forward axis
		LeftLegRotation.HorizontalAxis = FindCoDirection(tThighLeft.Rotator(), v0, LeftLegRotation.ExternalDirection);

		// right leg side axis
		v0 = PelvisUpVector(tPelvis.Rotator()) ^ PelvisForwardVector(tPelvis.Rotator());
		RightLegRotation.VerticalAxis = FindCoDirection(tThighRight.Rotator(), v0, RightLegRotation.UpDirection);
		RightLegRotation.UpDirection *= -1.f;

		// left leg side axis
		LeftLegRotation.VerticalAxis = FindCoDirection(tThighLeft.Rotator(), v0, LeftLegRotation.UpDirection);
		LeftLegRotation.UpDirection *= -1.f;

		FVector RightFootForward = RightLegForwardVector(tFootRight.Rotator());
		RightFootForward = RightFootForward.GetSafeNormal2D();
		FVector FootLoc = tFootRight.GetTranslation();
		FootLoc.Z = BodyMesh->GetComponentLocation().Z;
		FTransform FootBase = FTransform(UKismetMathLibrary::MakeRotFromXZ(RightFootForward, BodyMesh->GetUpVector()), FootLoc);
		FootToGroundRight = tFootRight.GetRelativeTransform(FootBase);
		FootBoneToGroundZ = tFootRight.GetTranslation().Z - BodyMesh->GetComponentLocation().Z;

		FVector LeftFootForward = LeftLegForwardVector(tFootLeft.Rotator());
		LeftFootForward = LeftFootForward.GetSafeNormal2D();
		FootLoc = tFootLeft.GetTranslation();
		FootLoc.Z = BodyMesh->GetComponentLocation().Z;
		FootBase = FTransform(UKismetMathLibrary::MakeRotFromXZ(LeftFootForward, BodyMesh->GetUpVector()), FootLoc);
		FootToGroundLeft = tFootLeft.GetRelativeTransform(FootBase);

		// right palm up
		v0 = PelvisForwardVector(tPelvis.Rotator());
		PalmRightRotation.VerticalAxis = FindCoDirection(tPalmRight.Rotator(), v0, PalmRightRotation.UpDirection);

		// right palm forward
		v0 = tPalmRight.GetTranslation() - tRibcage.GetTranslation();
		PalmRightRotation.ForwardAxis = FindCoDirection(tPalmRight.Rotator(), v0, PalmRightRotation.ForwardDirection);

		// right palm right
		v0 = (RotatorDirection(tPalmRight.Rotator(), PalmRightRotation.ForwardAxis) * PalmRightRotation.ForwardDirection) ^
			(RotatorDirection(tPalmRight.Rotator(), PalmRightRotation.VerticalAxis) * PalmRightRotation.UpDirection);
		PalmRightRotation.HorizontalAxis = FindCoDirection(tPalmRight.Rotator(), v0, PalmRightRotation.RightDirection);

		// left palm up
		v0 = PelvisForwardVector(tPelvis.Rotator());
		PalmLeftRotation.VerticalAxis = FindCoDirection(tPalmLeft.Rotator(), v0, PalmLeftRotation.UpDirection);

		// left palm forward
		v0 = tPalmLeft.GetTranslation() - tRibcage.GetTranslation();
		PalmLeftRotation.ForwardAxis = FindCoDirection(tPalmLeft.Rotator(), v0, PalmLeftRotation.ForwardDirection);

		// left palm right
		v0 = (RotatorDirection(tPalmLeft.Rotator(), PalmLeftRotation.ForwardAxis) * PalmLeftRotation.ForwardDirection) ^
			(RotatorDirection(tPalmLeft.Rotator(), PalmLeftRotation.VerticalAxis) * PalmLeftRotation.UpDirection);
		PalmLeftRotation.HorizontalAxis = FindCoDirection(tPalmLeft.Rotator(), v0, PalmLeftRotation.RightDirection);

		// set limb describing structs at the end

		RightHandRotation.RightDirection = RightHandRotation.ExternalDirection;
		LeftHandRotation.RightDirection = LeftHandRotation.ExternalDirection * -1.f;

		RightLegRotation.RightDirection = RightLegRotation.ExternalDirection;
		LeftLegRotation.RightDirection = LeftLegRotation.ExternalDirection;

		if (SkeletonType == ESkeletonBonesOrientation::SBO_ComponentSpaceBones)
		{
			FVector ForwardCS, UpCS, RightCS;
			UpCS = FVector(0.f, 0.f, 1.f);
			RightCS = PelvisForwardVector(tPelvis.Rotator());

			// Hand Right

			ForwardCS = (tForearmRight.GetTranslation() - tUpperarmRight.GetTranslation()).GetSafeNormal();
			t1 = FTransform(UKismetMathLibrary::MakeRotFromXZ(ForwardCS, UpCS), tUpperarmRight.GetTranslation());
			BonesCS.UpperarmRight = tUpperarmRight.GetRelativeTransform(t1);

			ForwardCS = (tPalmRight.GetTranslation() - tForearmRight.GetTranslation()).GetSafeNormal();
			t1 = FTransform(UKismetMathLibrary::MakeRotFromXZ(ForwardCS, UpCS), tForearmRight.GetTranslation());
			BonesCS.LowerarmRight = tForearmRight.GetRelativeTransform(t1);

			t1.SetTranslation(tPalmRight.GetTranslation());
			BonesCS.HandRight = tPalmRight.GetRelativeTransform(t1);

			// Hand Left

			ForwardCS = (tForearmLeft.GetTranslation() - tUpperarmLeft.GetTranslation()).GetSafeNormal();
			t1 = FTransform(UKismetMathLibrary::MakeRotFromXZ(ForwardCS, UpCS), tUpperarmLeft.GetTranslation());
			BonesCS.UpperarmLeft = tUpperarmLeft.GetRelativeTransform(t1);

			ForwardCS = (tPalmLeft.GetTranslation() - tForearmLeft.GetTranslation()).GetSafeNormal();
			t1 = FTransform(UKismetMathLibrary::MakeRotFromXZ(ForwardCS, UpCS), tForearmLeft.GetTranslation());
			BonesCS.LowerarmLeft = tForearmLeft.GetRelativeTransform(t1);

			t1.SetTranslation(tPalmLeft.GetTranslation());
			BonesCS.HandLeft = tPalmLeft.GetRelativeTransform(t1);

			// New Up

			// Leg Right

			ForwardCS = (tCalfRight.GetTranslation() - tThighRight.GetTranslation()).GetSafeNormal();
			t1 = FTransform(UKismetMathLibrary::MakeRotFromXY(ForwardCS, RightCS), tThighRight.GetTranslation());
			BonesCS.ThighRight = tThighRight.GetRelativeTransform(t1);

			ForwardCS = (tFootRight.GetTranslation() - tCalfRight.GetTranslation()).GetSafeNormal();
			t1 = FTransform(UKismetMathLibrary::MakeRotFromXY(ForwardCS, RightCS), tCalfRight.GetTranslation());
			BonesCS.CalfRight = tCalfRight.GetRelativeTransform(t1);

			t1.SetTranslation(tFootRight.GetTranslation());
			BonesCS.FootRight = tPalmRight.GetRelativeTransform(t1);

			// Foot Right

			ForwardCS = (tCalfLeft.GetTranslation() - tThighLeft.GetTranslation()).GetSafeNormal();
			t1 = FTransform(UKismetMathLibrary::MakeRotFromXY(ForwardCS, RightCS), tThighLeft.GetTranslation());
			BonesCS.ThighLeft = tThighLeft.GetRelativeTransform(t1);

			ForwardCS = (tFootLeft.GetTranslation() - tCalfLeft.GetTranslation()).GetSafeNormal();
			t1 = FTransform(UKismetMathLibrary::MakeRotFromXY(ForwardCS, RightCS), tCalfLeft.GetTranslation());
			BonesCS.CalfLeft = tCalfLeft.GetRelativeTransform(t1);

			t1.SetTranslation(tFootLeft.GetTranslation());
			BonesCS.FootLeft = tPalmLeft.GetRelativeTransform(t1);

			// collarbones

			// right forward
			v0 = (tPalmRight.GetTranslation() - tUpperarmRight.GetTranslation()).GetSafeNormal2D();
			RightCollarboneRotation.ForwardAxis = FindCoDirection(tShoulderRight.Rotator(), v0, RightCollarboneRotation.ForwardDirection);

			// left forward
			v0 = (tPalmLeft.GetTranslation() - tUpperarmLeft.GetTranslation()).GetSafeNormal2D();
			LeftCollarboneRotation.ForwardAxis = FindCoDirection(tShoulderLeft.Rotator(), v0, LeftCollarboneRotation.ForwardDirection);

			// right hand plane axes
			v0 = PelvisForwardVector(tPelvis.Rotator()) * -1.f; // back direction
			RightCollarboneRotation.HorizontalAxis = FindCoDirection(tShoulderRight.Rotator(), v0, RightCollarboneRotation.ExternalDirection);

			// left hand rotation axes
			LeftCollarboneRotation.HorizontalAxis = FindCoDirection(tShoulderLeft.Rotator(), v0, LeftCollarboneRotation.ExternalDirection);

			// right arm up axis		
			if (RightCollarboneRotation.ForwardAxis != EAxis::X && RightCollarboneRotation.HorizontalAxis != EAxis::X)
				RightCollarboneRotation.VerticalAxis = EAxis::X;
			else if (RightCollarboneRotation.ForwardAxis != EAxis::Y && RightCollarboneRotation.HorizontalAxis != EAxis::Y)
				RightCollarboneRotation.VerticalAxis = EAxis::Y;
			else if (RightCollarboneRotation.ForwardAxis != EAxis::Z && RightCollarboneRotation.HorizontalAxis != EAxis::Z)
				RightCollarboneRotation.VerticalAxis = EAxis::Z;

			if (FVector::DotProduct(FVector(0.f, 0.f, 1.f), RotatorDirection(tShoulderRight.Rotator(), RightCollarboneRotation.VerticalAxis)) > 0.f) RightCollarboneRotation.UpDirection = 1.f; else RightCollarboneRotation.UpDirection = -1.f;

			// left arm up axis		
			if (LeftCollarboneRotation.ForwardAxis != EAxis::X && LeftCollarboneRotation.HorizontalAxis != EAxis::X)
				LeftCollarboneRotation.VerticalAxis = EAxis::X;
			else if (LeftCollarboneRotation.ForwardAxis != EAxis::Y && LeftCollarboneRotation.HorizontalAxis != EAxis::Y)
				LeftCollarboneRotation.VerticalAxis = EAxis::Y;
			else if (LeftCollarboneRotation.ForwardAxis != EAxis::Z && LeftCollarboneRotation.HorizontalAxis != EAxis::Z)
				LeftCollarboneRotation.VerticalAxis = EAxis::Z;

			if (FVector::DotProduct(FVector(0.f, 0.f, 1.f), RotatorDirection(tShoulderLeft.Rotator(), LeftCollarboneRotation.VerticalAxis)) > 0.f) LeftCollarboneRotation.UpDirection = 1.f; else LeftCollarboneRotation.UpDirection = -1.f;

			RightCollarboneRotation.RightDirection = RightCollarboneRotation.ExternalDirection;
			LeftCollarboneRotation.RightDirection = LeftCollarboneRotation.ExternalDirection * -1.f;

		}

		// 4. Initialize additional bones arrays.

		// find additional spine bones
		int32 CycleCounter = 0;
		SpineBonesNames.Empty();
		FName RootName = SkeletonBonesMap[EHumanoidBone::Pelvis];
		FName CurrentBoneName = BodyMesh->GetParentBone(SkeletonBonesMap[EHumanoidBone::Ribcage]);
		while (CurrentBoneName != RootName)
		{
			SpineBonesNames.Insert(CurrentBoneName, 0);
			CurrentBoneName = BodyMesh->GetParentBone(CurrentBoneName);

			if (CycleCounter++ > 10)
			{
				UE_LOG(LogCaptureDevice, Warning, TEXT("[UpdateSkeletonSetup]: Can't determine spine bones"));
				break;
			}
		}

		// init spine bones offsets
		SpineBones.SetNum(SpineBonesNames.Num());
		FullSpineBones.SetNum(SpineBonesNames.Num());
		for (int i = 0; i < SpineBonesNames.Num(); i++)
		{
			t1 = BodyMesh->GetSocketTransform(BodyMesh->GetParentBone(SpineBonesNames[i]));
			t2 = BodyMesh->GetSocketTransform(SpineBonesNames[i]);
			SpineBones[i].RelativeOffset = t2.GetRelativeTransform(t1);
			FullSpineBones[i].RelativeOffset = SpineBones[i].RelativeOffset;
		}
		// ribcage bone offset
		t1 = BodyMesh->GetSocketTransform(BodyMesh->GetParentBone(SkeletonBonesMap[EHumanoidBone::Ribcage]));
		t2 = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::Ribcage]);
		RelativeRibcageOffset = t2.GetRelativeTransform(t1);

		// FullSpineBones should contain all bones from pelvis to head, used to calculate flexible spine
		FAdditionalBoneState AdditionalBS;
		AdditionalBS.RelativeOffset = RelativeRibcageOffset;
		FullSpineBones.Add(AdditionalBS);

		// find additional neck bones
		NeckBonesNames.Empty();
		RootName = SkeletonBonesMap[EHumanoidBone::Ribcage];
		CurrentBoneName = BodyMesh->GetParentBone(SkeletonBonesMap[EHumanoidBone::Head]);
		CycleCounter = 0;
		while (CurrentBoneName != RootName) {
			NeckBonesNames.Insert(CurrentBoneName, 0);
			CurrentBoneName = BodyMesh->GetParentBone(CurrentBoneName);
			if (CurrentBoneName.IsNone()) break;

			if (CycleCounter++ > 10)
			{
				UE_LOG(LogCaptureDevice, Warning, TEXT("[UpdateSkeletonSetup]: Can't determine neck bones"));
				break;
			}

		}

		// init neck bones offsets
		NeckBones.SetNum(NeckBonesNames.Num());
		for (int i = 0; i < NeckBonesNames.Num(); i++) {
			t1 = BodyMesh->GetSocketTransform(BodyMesh->GetParentBone(NeckBonesNames[i]));
			t2 = BodyMesh->GetSocketTransform(NeckBonesNames[i]);
			NeckBones[i].RelativeOffset = t2.GetRelativeTransform(t1);

			AdditionalBS.RelativeOffset = NeckBones[i].RelativeOffset;
			FullSpineBones.Add(AdditionalBS);

			if (CurrentBoneName.IsNone()) break;
		}

		// combine twists in a single map (ActiveTwists)
		AddTwistBonesToMap(ForearmTwistsRight, &ForearmRightTwist, RightHandRotation.ForwardAxis);
		AddTwistBonesToMap(ForearmTwistsLeft, &ForearmLeftTwist, LeftHandRotation.ForwardAxis);
		AddTwistBonesToMap(UpperarmTwistsRight, &UpperarmRightTwist, RightHandRotation.ForwardAxis);
		AddTwistBonesToMap(UpperarmTwistsLeft, &UpperarmLeftTwist, LeftHandRotation.ForwardAxis);
		AddTwistBonesToMap(CalfTwistsRight, &CalfRightTwist, RightLegRotation.ForwardAxis);
		AddTwistBonesToMap(CalfTwistsLeft, &CalfLeftTwist, LeftLegRotation.ForwardAxis);
		AddTwistBonesToMap(ThighTwistsRight, &ThighRightTwist, RightLegRotation.ForwardAxis);
		AddTwistBonesToMap(ThighTwistsLeft, &ThighLeftTwist, LeftLegRotation.ForwardAxis);

		// sockets setup
		SocketsInfo.Empty();
		FSocketInfo sk;
		for (const auto& socketbone : SocketsMap) {
			sk.AttachmentBone = socketbone.Value;
			sk.bIsLocator = (socketbone.Value == EHumanoidBone::Locator_ElbowRight) || (socketbone.Value == EHumanoidBone::Locator_ElbowLeft) || (socketbone.Value == EHumanoidBone::Locator_KneeRight) || (socketbone.Value == EHumanoidBone::Locator_KneeLeft);
			sk.OffsetToRootParentBone = FTransform::Identity;
			if (!sk.bIsLocator)
			{
				if (SkeletonBonesMap.Contains(socketbone.Value))
				{
					t1 = BodyMesh->GetSocketTransform(SkeletonBonesMap[socketbone.Value]);
					t2 = BodyMesh->GetSocketTransform(socketbone.Key);
					sk.OffsetToBone = t2.GetRelativeTransform(t1);
				}
				else
				{
					sk.OffsetToBone = FTransform::Identity;
				}

				// evaluate chain of parent bones
				sk.RootParentBone = socketbone.Key;
				bool bBoneIsEvaluated = false;
				while (!bBoneIsEvaluated && !sk.RootParentBone.IsNone()) {
					sk.RootParentBone = BodyMesh->GetParentBone(sk.RootParentBone);
					bBoneIsEvaluated = iIsBoneEvaluated(sk.RootParentBone);

					if (!bBoneIsEvaluated) sk.OffsetToRootParentBone = BodyMesh->GetSocketTransform(sk.RootParentBone, ERelativeTransformSpace::RTS_ParentBoneSpace) * sk.OffsetToRootParentBone;
				}
			}
			else {
				sk.RootParentBone = SkeletonBonesMap[EHumanoidBone::Root];
			}

			SocketsInfo.Add(socketbone.Key, sk);
		}

		// init skeletal mesh name for a snapshot pose
		SkeletalMeshName = BodyMesh->SkeletalMesh->GetFName();

		// scale bones info
		const int32 NumSpaceBases = BodyMesh->GetComponentSpaceTransforms().Num();
		const TArray<FTransform>& RefPoseSpaceBaseTMs = BodyMesh->SkeletalMesh->RefSkeleton.GetRefBonePose();

		PelvisBoneIndex = HeadBoneIndex = ShoulderRightIndex = ShoulderLeftIndex = INDEX_NONE;
		for (int32 ComponentSpaceIdx = 1; ComponentSpaceIdx < NumSpaceBases; ++ComponentSpaceIdx)
		{
			const FName BoneName = skref->GetBoneName(ComponentSpaceIdx);

			if (BoneName == SkeletonBonesMap[EHumanoidBone::Pelvis])
			{
				PelvisBoneIndex = ComponentSpaceIdx;
				PelvisInitScale = RefPoseSpaceBaseTMs[ComponentSpaceIdx].GetScale3D();
			}
			else if (BoneName == SkeletonBonesMap[EHumanoidBone::Head])
			{
				HeadBoneIndex = ComponentSpaceIdx;
				HeadInitScale = RefPoseSpaceBaseTMs[ComponentSpaceIdx].GetScale3D();
			}
			else if (BoneName == SkeletonBonesMap[EHumanoidBone::UpperarmRight])
			{
				ShoulderRightIndex = ComponentSpaceIdx;
				ShoulderRightInitScale = RefPoseSpaceBaseTMs[ComponentSpaceIdx].GetScale3D();
			}
			else if (BoneName == SkeletonBonesMap[EHumanoidBone::UpperarmLeft])
			{
				ShoulderLeftIndex = ComponentSpaceIdx;
				ShoulderLeftInitScale = RefPoseSpaceBaseTMs[ComponentSpaceIdx].GetScale3D();
			}
		}
	}
}

FORCEINLINE bool UCaptureDevice::iIsBoneEvaluated(const FName& BoneName)
{
	for (auto& bone : SkeletonBonesMap)
	{
		if (bone.Value == BoneName) return true;
	}
	if (SocketsMap.Contains(BoneName)) return true;

	return false;
}

FORCEINLINE bool UCaptureDevice::iGetCalculatedBoneTransform(const FName& BoneName, FTransform& ReturnValue)
{
	bool bRet = false;

	if (SpineBonesNames.Contains(BoneName)) {
		int index;
		SpineBonesNames.Find(BoneName, index);

		ReturnValue = SpineBones[index].WorldTransform;
		bRet = true;
	}
	else if (NeckBonesNames.Contains(BoneName)) {
		int index;
		NeckBonesNames.Find(BoneName, index);

		ReturnValue = NeckBones[index].WorldTransform;
		bRet = true;
	}
	else {
		bRet = true;

		if (BoneName == SkeletonBonesMap[EHumanoidBone::Root])
			ReturnValue = CapturedBody.Root;
		else if (BoneName == SkeletonBonesMap[EHumanoidBone::Pelvis])
			ReturnValue = CapturedBody.Pelvis;
		else if (BoneName == SkeletonBonesMap[EHumanoidBone::Ribcage])
			ReturnValue = CapturedBody.Ribcage;
		else if (BoneName == SkeletonBonesMap[EHumanoidBone::Head])
			ReturnValue = CapturedBody.Head;
		else if (BoneName == SkeletonBonesMap[EHumanoidBone::ShoulderRight])
			ReturnValue = CapturedBody.ShoulderRight;
		else if (BoneName == SkeletonBonesMap[EHumanoidBone::UpperarmRight])
			ReturnValue = CapturedBody.UpperarmRight;
		else if (BoneName == SkeletonBonesMap[EHumanoidBone::ForearmRight])
			ReturnValue = CapturedBody.ForearmRight;
		else if (BoneName == SkeletonBonesMap[EHumanoidBone::PalmRight])
			ReturnValue = CapturedBody.PalmRight;
		else if (BoneName == SkeletonBonesMap[EHumanoidBone::ShoulderLeft])
			ReturnValue = CapturedBody.ShoulderLeft;
		else if (BoneName == SkeletonBonesMap[EHumanoidBone::UpperarmLeft])
			ReturnValue = CapturedBody.UpperarmLeft;
		else if (BoneName == SkeletonBonesMap[EHumanoidBone::ForearmLeft])
			ReturnValue = CapturedBody.ForearmLeft;
		else if (BoneName == SkeletonBonesMap[EHumanoidBone::PalmLeft])
			ReturnValue = CapturedBody.PalmLeft;
		else if (BoneName == SkeletonBonesMap[EHumanoidBone::ThighRight])
			ReturnValue = CapturedBody.ThighRight;
		else if (BoneName == SkeletonBonesMap[EHumanoidBone::CalfRight])
			ReturnValue = CapturedBody.CalfRight;
		else if (BoneName == SkeletonBonesMap[EHumanoidBone::FootRight])
			ReturnValue = CapturedBody.FootRight;
		else if (BoneName == SkeletonBonesMap[EHumanoidBone::ThighLeft])
			ReturnValue = CapturedBody.ThighLeft;
		else if (BoneName == SkeletonBonesMap[EHumanoidBone::CalfLeft])
			ReturnValue = CapturedBody.CalfLeft;
		else if (BoneName == SkeletonBonesMap[EHumanoidBone::FootLeft])
			ReturnValue = CapturedBody.FootLeft;
		else
			bRet = false;
	}
	return bRet;
}

/* Updating initial skeleton setup from data struct. For real-time retargeting to other skeleton. */
void UCaptureDevice::LoadSkeletonSetupFromStruct(FSkeletonBasicPreset Preset, bool AutoUpdate)
{
	SkeletonBonesMap = Preset.SkeletonBonesMap;
	SocketsMap = Preset.SocketsMap;

	ForearmTwistsRight = Preset.ForearmTwistsRight;
	ForearmTwistsLeft = Preset.ForearmTwistsLeft;
	UpperarmTwistsRight = Preset.UpperarmTwistsRight;
	UpperarmTwistsLeft = Preset.UpperarmTwistsLeft;
	CalfTwistsRight = Preset.CalfTwistsRight;
	CalfTwistsLeft = Preset.CalfTwistsLeft;
	ThighTwistsRight = Preset.ThighTwistsRight;
	ThighTwistsLeft = Preset.ThighTwistsLeft;

	if (AutoUpdate) UpdateSkeletonSetup();
}

/**
* Input from components: for using other tracking systems then SteamVR. Was tested with Optitrack. Use Optitrack Rigid Body components as parameters.
* RightHandIndex and LeftHandIndex are indexes of the array, not Optitrack device IDs.
*/
bool UCaptureDevice::InitializeInputFromComponents(TArray<USceneComponent*> MotionControllerComponents, uint8 RightHandIndex, uint8 LeftHandIndex)
{
	// Need both hands
	if (MotionControllersTrackingRole == ETrackingDeviceRole::HandsOnly)
	{
		if (RightHandIndex == LeftHandIndex ||
			!MotionControllerComponents.IsValidIndex(RightHandIndex) ||
			!MotionControllerComponents.IsValidIndex(LeftHandIndex))
		{
			UE_LOG(LogCaptureDevice, Warning, TEXT("[InitializeInputFromComponents]: Invalid hand tracking indexes. Change 'MotionControllersTrackingRole' to 'Don't Use' or 'Any Role'."));
			return false;
		}
	}

	// Need at least hands and torso
	if (MotionControllerComponents.Num() < 3)
	{
		UE_LOG(LogCaptureDevice, Warning, TEXT("[InitializeInputFromComponents]: At least three components required"));
		return false;
	}

	RightHandComponentIndex = RightHandIndex;
	LeftHandComponentIndex = LeftHandIndex;

	InputComponents = MotionControllerComponents;
	bUseComponentsInput = true;

	return true;
}

bool UCaptureDevice::InitializeVirtualTrackersForHands(float PositionOffset, USceneComponent* RightRotationSource, USceneComponent* LeftRotationSource)
{
	if (bUseComponentsInput)
	{
		UE_LOG(LogCaptureDevice, Warning, TEXT("Can't initialize virtual hand bones with bUseComponentsInput == true"));
		bUseComponentsForHandsOnly = false;
		return false;
	}
	if (!RightRotationSource || !LeftRotationSource)
	{
		bUseComponentsForHandsOnly = false;
		return false;
	}

	InputComponents.Empty();
	InputComponents.Add(RightRotationSource);
	InputComponents.Add(LeftRotationSource);
	RightHandComponentIndex = 0;
	LeftHandComponentIndex = 1;
	VirtualBonePositionOffset = PositionOffset;

	bUseComponentsForHandsOnly = true;
	return true;
}

/* Don't use specified component for input (when using input from components) */
bool UCaptureDevice::ExcludeComponentFromInput(USceneComponent* MotionControllerComponent)
{
	if (bUseComponentsInput)
	{
		if (MotionControllersTrackingRole == ETrackingDeviceRole::HandsOnly &&
			(MotionControllerComponent == InputComponents[RightHandComponentIndex] || MotionControllerComponent == InputComponents[LeftHandComponentIndex]))
		{
			UE_LOG(LogCaptureDevice, Warning, TEXT("[ExcludeComponentFromInput]: Can't exclude hand tracking device. Use another 'MotionControllersTrackingRole' value."));
			return false;
		}
		else
		{
			USceneComponent* cRight = InputComponents.IsValidIndex(RightHandComponentIndex) ? InputComponents[RightHandComponentIndex] : nullptr;
			USceneComponent* cLeft = InputComponents.IsValidIndex(LeftHandComponentIndex) ? InputComponents[LeftHandComponentIndex] : nullptr;
			const bool bResult = (InputComponents.RemoveSingle(MotionControllerComponent) == 1);

			if (bResult)
			{
				if (IsValid(cRight)) RightHandComponentIndex = InputComponents.Find(cRight);
				if (IsValid(cLeft)) LeftHandComponentIndex = InputComponents.Find(cLeft);
			}

			return bResult;
		}
	}
	else
	{
		return false;
	}
}

void UCaptureDevice::AddTrackingDeviceSource(uint8 SourceNumber, USceneComponent* SceneComponent)
{
	if (SocketTrackers.Contains(SourceNumber))
	{
		SocketTrackers[SourceNumber] = SceneComponent;
	}
	else
	{
		SocketTrackers.Add(SourceNumber, SceneComponent);
	}
}

void UCaptureDevice::CollectTrackerRelationsInTPose()
{
	TrackersRelationsTPose.Empty();

	FVector loc;
	FRotator rot;

	for (const auto& TrackerData : TrackersData)
	{
		if (TrackerData.Key == HEADKEY && !bUseVRHeadsetForHead) continue;
		if (TrackerData.Key == RIGHTVIRTUALKEY || TrackerData.Key == LEFTVIRTUALKEY) continue;

		int32 Id = (int32)TrackerData.Key;
		GetVRTrackerPosition(Id, loc, rot);
		FTransform BaseTr = FTransform(rot, loc);

		FSmartTrackerCalibration NewCalibration;
		for (const auto& OtherTracker : TrackersData)
		{
			if (OtherTracker.Key == HEADKEY && !bUseVRHeadsetForHead) continue;
			if (OtherTracker.Key == RIGHTVIRTUALKEY || OtherTracker.Key == LEFTVIRTUALKEY) continue;

			int32 OtherId = (int32)OtherTracker.Key;
			if (OtherId == Id)
			{
				continue;
			}

			GetVRTrackerPosition(OtherId, loc, rot);
			FTransform OtherTr = FTransform(rot, loc);
			NewCalibration.OtherTrackers.Add(OtherId, OtherTr.GetRelativeTransform(BaseTr));
		}

		TrackersRelationsTPose.Add(Id, NewCalibration);
	}
}

bool UCaptureDevice::LoadCalibratedDataInTPoseEx(const FSmartCalibrationData& CalibrationData)
{
	if (!bIsInitialized)
	{
		return false;
	}

	FVector loc;
	FRotator rot;
	TArray<int32> TrackerIds, HandIds;
	UWorld* w = GetWorld();

	int32 RequiredTrackersNum = CalibrationData.TrackersData.Num();

	GetVRTrackingDeviceIDs(ESteamVRTrackedDeviceType::Other, TrackerIds);
	if (MotionControllersTrackingRole != ETrackingDeviceRole::DontUse)
	{
		GetVRTrackingDeviceIDs(ESteamVRTrackedDeviceType::Controller, HandIds);
		TrackerIds.Append(HandIds);
	}
	if (bUseVRHeadsetForHead)
	{
		TrackerIds.AddUnique(HEADKEY);
	}
	else
	{
		// Make sure we don't use HMD ID
		TrackerIds.Remove(HEADKEY);
	}
	for (const auto& cd : CalibrationData.TrackersData)
	{
		if (cd.Key == RIGHTVIRTUALKEY || cd.Key == LEFTVIRTUALKEY)
		{
			RequiredTrackersNum--;
		}
	}

	if (TrackerIds.Num() < RequiredTrackersNum)
	{
		UE_LOG(LogCaptureDevice, Warning, TEXT("[LoadCalibratedDataInTPoseEx]: CalibrationData requires more tracked devices (%d) then connected (%d)"), RequiredTrackersNum, TrackerIds.Num());
		return false;
	}

	if (bDebugLog)
	{
		UE_LOG(LogCaptureDevice, Log, TEXT("[LoadCalibratedDataInTPoseEx]: active tracked devices - %d, devices in saved archive - %d"), TrackerIds.Num(), CalibrationData.TrackersData.Num());
	}

	// Key is a saved TrackerId, Value is an active tracker Id
	TMap<int32, int32> SourceToTargetIds;
	// Result data
	TMap<uint8, FTrackerSetup> NewCalibratedData;

	// Initialize binding map
	for (const auto& Id : TrackerIds)
	{
		if (Id == HEADKEY)
		{
			SourceToTargetIds.Add(Id, Id);
		}
		else
		{
			SourceToTargetIds.Add(Id, INDEX_NONE);
		}
	}

	// Calculate mesh scale and place mesh in the same position with player
	PrepareForCalibration();

	// Calculate bindings
	const TMap<uint8, FSmartTrackerCalibration>& Relations = CalibrationData.Relations;

	int32 CurrentHeadId = bUseVRHeadsetForHead ? HEADKEY : DetectHeadID();
	float MinCost = 0.f;
	const FSmartTrackerCalibration* HeadRelation = Relations.Find(CalibrationData.HeadTrackerId);

	if (bDebugLog)
	{
		uint8 HasHeadRel = HeadRelation ? 1 : 0;
		UE_LOG(LogCaptureDevice, Log, TEXT("[LoadCalibratedDataInTPoseEx]: CurrentHeadId %d, saved head tracked %d, has relations data: %d"), CurrentHeadId, CalibrationData.HeadTrackerId, HasHeadRel);

		for (const auto& Rel : Relations)
		{
			UE_LOG(LogCaptureDevice, Log, TEXT("[LoadCalibratedDataInTPoseEx]: relations data. %d --> %d"), Rel.Key, Rel.Value.OtherTrackers.Num());
		}
	}

	if (HeadRelation && CalculateTrackersRelations(TrackerIds, CurrentHeadId, *HeadRelation, SourceToTargetIds) > 0.f)
	{
		//...
		MinCost = 1.f;
		if (!SourceToTargetIds.Contains(HEADKEY))
		{
			SourceToTargetIds.Add(CalibrationData.HeadTrackerId, CurrentHeadId);
		}

		if (bDebugLog)
		{
			UE_LOG(LogCaptureDevice, Log, TEXT("[LoadCalibratedDataInTPoseEx]: auto-binded head to head successfully"));
		}
	}
	else
	{
		for (const auto& Rule : Relations)
		{
			TMap<int32, int32> OutBinding;
			float NewCost = CalculateTrackersRelations(TrackerIds, CurrentHeadId, Rule.Value, OutBinding);
			if (NewCost == 0.f)
			{
				continue;
			}
			if (NewCost < MinCost || MinCost == 0.f)
			{
				MinCost = NewCost;
				SourceToTargetIds = OutBinding;
				SourceToTargetIds.Add(Rule.Key, CurrentHeadId);
			}
		}

		if (bDebugLog)
		{
			UE_LOG(LogCaptureDevice, Log, TEXT("[LoadCalibratedDataInTPoseEx]: relations for all trackers tested with result: %s"), *FString::SanitizeFloat(MinCost));
		}
	}

	if (MinCost == 0.f)
	{
		UE_LOG(LogCaptureDevice, Warning, TEXT("[LoadCalibratedDataInTPoseEx]: Can't match trackers"));

		if (bDebugLog)
		{
			FString TrackersList;
			for (const auto& Id : TrackerIds)
			{
				TrackersList += (FString::FromInt(Id) + TEXT(", "));
			}
			UE_LOG(LogCaptureDevice, Log, TEXT("[LoadCalibratedDataInTPoseEx]: active trackers: %s"), *TrackersList);

			FString SavedTrackersList;
			for (const auto& Id : CalibrationData.TrackersData)
			{
				SavedTrackersList += (FString::FromInt(Id.Key) + TEXT(" (") + BoneToName(Id.Value.Bone).ToString() + TEXT("), "));
			}
			UE_LOG(LogCaptureDevice, Log, TEXT("[LoadCalibratedDataInTPoseEx]: saved trackers: %s"), *SavedTrackersList);
		}

		if (bDrawDebugGeometry && HeadRelation)
		{
			GetVRTrackerPosition(CurrentHeadId, loc, rot);
			const FTransform BaseTr = FTransform(rot, loc);
			UWorld* World = GetWorld();

			DrawDebugSphere(World, BaseTr.GetTranslation(), 10.f, 4, FColor::Red, false, 20.f, 0, 0.5f);

			for (const auto& Rule : HeadRelation->OtherTrackers)
			{
				FTransform TrackerTr = Rule.Value * BaseTr;
				DrawDebugSphere(World, TrackerTr.GetTranslation(), 10.f, 4, FColor::Green, false, 20.f, 0, 0.5f);
			}
		}

		return false;
	}
	else if (bDebugLog)
	{
		UE_LOG(LogCaptureDevice, Log, TEXT("[LoadCalibratedDataInTPoseEx]: binded head to head with distance %s"), *FString::SanitizeFloat(MinCost));
	}

	if (bDebugLog)
	{
		UE_LOG(LogCaptureDevice, Log, TEXT("[LoadCalibratedDataInTPoseEx]: SourceToTargetIds num is %d"), SourceToTargetIds.Num());
		for (const auto& IdRef : SourceToTargetIds)
		{
			UE_LOG(LogCaptureDevice, Log, TEXT("[LoadCalibratedDataInTPoseEx]: Tracker %d ---> Tracker %d "), IdRef.Key, IdRef.Value);
		}
	}

	// refresh calibration data
	for (const auto& TrackerSetup : CalibrationData.TrackersData)
	{
		if (TrackerSetup.Key == LEFTVIRTUALKEY || TrackerSetup.Key == RIGHTVIRTUALKEY)
		{
			continue;
		}
		if (!SourceToTargetIds.Contains(TrackerSetup.Key))
		{
			UE_LOG(LogCaptureDevice, Warning, TEXT("[LoadCalibratedDataInTPoseEx]: Can't find binding for tracker %d"), TrackerSetup.Key);
			return false;
		}
		NewCalibratedData.Add(SourceToTargetIds[TrackerSetup.Key], TrackerSetup.Value);
	}

	if (CalibrationData.TrackersData.Contains(RIGHTVIRTUALKEY) && CalibrationData.TrackersData.Contains(LEFTVIRTUALKEY))
	{
		RightHandLowerarmId = LeftHandLowerarmId = INDEX_NONE;
		for (const auto& Data : NewCalibratedData)
		{
			if (Data.Value.Bone == EHumanoidBone::ForearmRight)
				RightHandLowerarmId = Data.Key;
			else if (Data.Value.Bone == EHumanoidBone::ForearmLeft)
				LeftHandLowerarmId = Data.Key;
		}
		if (RightHandLowerarmId == INDEX_NONE || LeftHandLowerarmId == INDEX_NONE)
		{
			UE_LOG(LogCaptureDevice, Warning, TEXT("[LoadCalibratedDataInTPoseEx]: Can't find binding for lowerarms, required with virtual hand bones"));
			return false;
		}

		NewCalibratedData.Add(RIGHTVIRTUALKEY, CalibrationData.TrackersData[RIGHTVIRTUALKEY]);
		NewCalibratedData.Add(LEFTVIRTUALKEY, CalibrationData.TrackersData[LEFTVIRTUALKEY]);
	}

	// And finally restore setup
	SetTrackersData(NewCalibratedData);

	// Save another calibration parameters
	RightShoulderRotatorOffset = FTransform(CalibrationData.RightCollarboneOffset);
	LeftShoulderRotatorOffset = FTransform(CalibrationData.LeftCollarboneOffset);
	RightVirtualTrackerOffset = CalibrationData.RightVirtualTrackerOffset;
	LeftVirtualTrackerOffset = CalibrationData.LeftVirtualTrackerOffset;
	TrackersRelationsTPose = CalibrationData.Relations;

	// Networking replication
	if (bIsLocal && GetIsReplicated())
	{
		ServerUpdateMeshScale(fUpperarmLength, fForearmLength, fThighLength, fCalfLength, fShoulderLength, CalibrationData.RightCollarboneOffset, CalibrationData.LeftCollarboneOffset, MeshScale);
	}

	bIsCalibrated = true;

	return true;
}

float UCaptureDevice::CalculateTrackersRelations(const TArray<int32>& TrackerIds, int32 TrackerId, const FSmartTrackerCalibration& InRelations, TMap<int32, int32>& OutBinding)
{
	FVector loc;
	FRotator rot;
	GetVRTrackerPosition(TrackerId, loc, rot);
	const FTransform BaseTr = FTransform(rot, loc);

	// Init bindings array
	for (const auto& Rule : InRelations.OtherTrackers)
	{
		OutBinding.Add(Rule.Key, INDEX_NONE);
	}

	float SummDistance = 0.f;
	// Find closest trackers
	for (const auto& Rule : InRelations.OtherTrackers)
	{
		float MinDistance = 0.f;
		FVector MinRelativeLocation;

		for (const auto& OtherId_1 : TrackerIds)
		{
			if (OtherId_1 == RIGHTVIRTUALKEY || OtherId_1 == LEFTVIRTUALKEY) continue;

			if (OtherId_1 == TrackerId) continue;
			bool bContinue = false;
			for (const auto& Binding : OutBinding)
			{
				if (Binding.Value == OtherId_1)
				{
					bContinue = true; break;
				}
			}
			if (bContinue) continue;

			GetVRTrackerPosition(OtherId_1, loc, rot);
			const FTransform RelativeTr = FTransform(rot, loc).GetRelativeTransform(BaseTr);

			const float TestDistance = FVector::DistSquared(RelativeTr.GetTranslation(), Rule.Value.GetTranslation());
			if (TestDistance < MinDistance || MinDistance == 0.f)
			{
				MinDistance = TestDistance;
				OutBinding[Rule.Key] = OtherId_1;
			}
		}

		SummDistance += MinDistance;
	}

	for (const auto& Binding : OutBinding)
	{
		if (Binding.Value == INDEX_NONE)
		{
			return 0.f;
		}
	}

	return SummDistance;
}

bool UCaptureDevice::LoadCalibratedDataInTPose(const TMap<uint8, FTrackerSetup>& CalibratedData, FRotator RightCollarboneOffset, FRotator LeftCollarboneOffset)
{
	if (!bIsInitialized)
	{
		return false;
	}

	FVector loc;
	FRotator rot;
	TArray<int32> TrackerIds, HandIds;
	UWorld* w = GetWorld();

	GetVRTrackingDeviceIDs(ESteamVRTrackedDeviceType::Other, TrackerIds);

	if (bDebugLog)
	{
		UE_LOG(LogCaptureDevice, Log, TEXT("[LoadCalibratedDataInTPose]: using (%d) active trackers"), TrackerIds.Num());
	}

	if (MotionControllersTrackingRole != ETrackingDeviceRole::DontUse)
	{
		GetVRTrackingDeviceIDs(ESteamVRTrackedDeviceType::Controller, HandIds);
		TrackerIds.Append(HandIds);

		if (bDebugLog)
		{
			UE_LOG(LogCaptureDevice, Log, TEXT("[LoadCalibratedDataInTPose]: using (%d) active controllers"), HandIds.Num());
		}
	}
	int32 RequiredTrackersNum = CalibratedData.Num();
	if (bUseVRHeadsetForHead)
	{
		TrackerIds.AddUnique(HEADKEY);
	}
	else
	{
		// Make sure we don't have HMD id
		TrackerIds.Remove(HEADKEY);
		RequiredTrackersNum--;
	}

	if (TrackerIds.Num() < RequiredTrackersNum)
	{
		UE_LOG(LogCaptureDevice, Warning, TEXT("[LoadCalibratedDataInTPose]: CalibratedData requires more trackers (%d) then connected (%d)"), CalibratedData.Num(), TrackerIds.Num());
		return false;
	}

	if (bDebugLog)
	{
		for (const auto& Id : TrackerIds)
		{
			FVector v_loc;
			FRotator v_rot;
			GetVRTrackerPosition(Id, v_loc, v_rot);
			if (HandIds.Contains(Id))
			{
				UE_LOG(LogCaptureDevice, Log, TEXT("[LoadCalibratedDataInTPose]: controller %d at position: %s"), Id, *v_loc.ToString());
			}
			else
			{
				UE_LOG(LogCaptureDevice, Log, TEXT("[LoadCalibratedDataInTPose]: tracker %d at position: %s"), Id, *v_loc.ToString());
			}
		}

		for (const auto& Binding : CalibratedData)
		{
			UE_LOG(LogCaptureDevice, Log, TEXT("[LoadCalibratedDataInTPose]: saved tracker %d is binded to: %s"), Binding.Key, *SkeletonBonesMap[Binding.Value.Bone].ToString());
		}
	}

	// Calculate mesh scale and place mesh in the same position with player
	PrepareForCalibration();

	// Transforms (world space) of virtual saved trackers from CalibratedData
	TMap<int32, FTransform> SavedTransforms, CurrentTransforms;

	// Helpers
	FTransform w_head = BodyMesh->GetComponentTransform();
	rot = FRotator::ZeroRotator;
	rot.Yaw = w_head.Rotator().Yaw + 90.f;
	w_head.SetRotation(rot.Quaternion());
	const FVector MeshForwardVector = rot.Quaternion().GetForwardVector();
	const FTransform ActorTransform = BodyMesh->GetOwner()->GetActorTransform();

	// Get current trackers positions
	CurrentTransforms.Reserve(TrackerIds.Num());
	for (int32 DeviceId : TrackerIds)
	{
		FTransform w_t;
		if (DeviceId == HEADKEY)
		{
			w_t = iGetHeadTransform(true);
		}
		else
		{
			GetVRTrackerPosition(DeviceId, loc, rot);
			w_t = FTransform(rot, loc) * ActorTransform;
		}
		CurrentTransforms.Add(DeviceId, w_t);

		if (bDrawDebugGeometry)
		{
			DrawDebugSphere(w, w_t.GetTranslation(), 5.f, 8, FColor::Yellow, false, 20.f, 0, 1.f);
		}
	}

	// Get saved trackers positions
	SavedTransforms.Reserve(CalibratedData.Num());
	for (const auto& VirtualTracker : CalibratedData)
	{
		const EHumanoidBone BoneName = VirtualTracker.Value.Bone;

		FTransform BoneTr = BodyMesh->GetSocketTransform(SkeletonBonesMap[BoneName]);
		FTransform VirtTrackerTr = VirtualTracker.Value.RelativeOffset.Inverse() * BoneTr;

		SavedTransforms.Add(VirtualTracker.Key, VirtTrackerTr);

		if (bDrawDebugGeometry)
		{
			DrawDebugSphere(w, VirtTrackerTr.GetTranslation(), 5.f, 8, FColor::Red, false, 20.f, 0, 1.f);
		}
	}

	// Result map
	TMap<int32, int32> OldToNewIds;
	TSet<int32> BindedNewTrackers;
	float MinSquaredDistance, MinDistId;

	OldToNewIds.Reserve(SavedTransforms.Num());
	for (const auto& VirtualTrackerTr : SavedTransforms)
	{
		const FVector SavedLoc = VirtualTrackerTr.Value.GetTranslation();
		MinSquaredDistance = 0.f;
		MinDistId = INDEX_NONE;

		for (const auto& RealTrackerTr : CurrentTransforms)
		{
			const FVector NewLoc = RealTrackerTr.Value.GetTranslation();
			const float DistSq = FVector::DistSquared(SavedLoc, NewLoc);

			if (DistSq < MinSquaredDistance || MinDistId == INDEX_NONE)
			{
				MinSquaredDistance = DistSq;
				MinDistId = RealTrackerTr.Key;
			}
		}

		if (MinDistId == INDEX_NONE)
		{
			UE_LOG(LogCaptureDevice, Warning, TEXT("[LoadCalibratedDataInTPose]: Can't find active trackers"));
			return false;
		}

		if (BindedNewTrackers.Contains(MinDistId))
		{
			FString BoneName = SkeletonBonesMap[CalibratedData[VirtualTrackerTr.Key].Bone].ToString();
			FString BoneNameWrong = TEXT("");

			if (bDrawDebugGeometry)
			{
				DrawDebugLine(w, SavedLoc, CurrentTransforms[MinDistId].GetTranslation(), FColor::Red, false, 20.f, 0, 0.5f);
				for (const auto& connection : OldToNewIds)
				{
					if (connection.Value == MinDistId)
					{
						BoneNameWrong = SkeletonBonesMap[CalibratedData[connection.Key].Bone].ToString();
						break;
					}
				}
			}
			UE_LOG(LogCaptureDevice, Warning, TEXT("[LoadCalibratedDataInTPose]: Active tracker required for %s was already binded to %s"), *BoneName, *BoneNameWrong);
			return false;
		}

		if (bDrawDebugGeometry)
		{
			DrawDebugLine(w, SavedLoc, CurrentTransforms[MinDistId].GetTranslation(), FColor::Red, false, 20.f, 0, 0.5f);
		}

		BindedNewTrackers.Add(MinDistId);
		OldToNewIds.Add(VirtualTrackerTr.Key, MinDistId);
	}

	// Get result trackers setup
	TMap<uint8, FTrackerSetup> NewCalibratedData;
	NewCalibratedData.Reserve(SavedTransforms.Num());

	for (const auto& VirtualTracker : CalibratedData)
	{
		NewCalibratedData.Add(OldToNewIds[VirtualTracker.Key], VirtualTracker.Value);
	}

	// And finally restore setup
	SetTrackersData(NewCalibratedData);

	RightShoulderRotatorOffset = FTransform(RightCollarboneOffset);
	LeftShoulderRotatorOffset = FTransform(LeftCollarboneOffset);

	// Networking replication
	if (bIsLocal && GetIsReplicated())
	{
		ServerUpdateMeshScale(fUpperarmLength, fForearmLength, fThighLength, fCalfLength, fShoulderLength, RightCollarboneOffset, LeftCollarboneOffset, MeshScale);
	}

	bIsCalibrated = true;

	return true;
}

bool UCaptureDevice::GetCalibratedDataInTPose(FSmartCalibrationData& OutCalibrationData)
{
	if (!bIsInitialized || !bIsCalibrated)
	{
		return false;
	}

	OutCalibrationData.TrackersData = TrackersData;
	OutCalibrationData.RightCollarboneOffset = RightShoulderRotatorOffset.Rotator();
	OutCalibrationData.LeftCollarboneOffset = LeftShoulderRotatorOffset.Rotator();
	OutCalibrationData.Relations = TrackersRelationsTPose;
	OutCalibrationData.HeadTrackerId = bUseVRHeadsetForHead ? HEADKEY : HeadTrackerId;
	OutCalibrationData.RightVirtualTrackerOffset = RightVirtualTrackerOffset;
	OutCalibrationData.LeftVirtualTrackerOffset = LeftVirtualTrackerOffset;

	return true;
}

void UCaptureDevice::ResetCalibration()
{
	if (bIsCapturing)
	{
		ToggleCapture(false);
	}

	if (bIsCalibrated)
	{
		bIsCalibrated = false;

		TrackersData.Empty();
		bHasPelvis = bHasRibcage = bHasThighR = bHasCalfR = bHasFootR = bHasThighL = false;
		bHasCalfL = bHasFootL = bHasUpperarmR = bHasForearmR = bHasUpperarmL = bHasForearmL = false;
		HeadTrackerId = -1;

		RightShoulderRotatorOffset = FTransform::Identity;
		LeftShoulderRotatorOffset = FTransform::Identity;

		HandsForward_TrackersSnapshot.Empty();

		RightHandLowerarmId = LeftHandLowerarmId = INVALIDKEY;
		RightVirtualTrackerOffset = LeftVirtualTrackerOffset = FTransform::Identity;
		bUseComponentsForHandsOnly = false;
	}
}

bool UCaptureDevice::IsCapturing() const
{
	return bIsCapturing;
}

FTransform UCaptureDevice::GetHeadTransform()
{
	return iGetHeadTransform(true);
}

void UCaptureDevice::SetTrackersData(const TMap<uint8, FTrackerSetup>& NewValue)
{
	TrackersData = NewValue;

	bHasPelvis = bHasRibcage = bHasThighR = bHasCalfR = bHasFootR = bHasThighL = false;
	bHasCalfL = bHasFootL = bHasUpperarmR = bHasForearmR = bHasUpperarmL = bHasForearmL = false;
	HeadTrackerId = -1;

	bool bShouldUpdateServer = (bIsLocal && GetIsReplicated());

	for (const auto& tracker : TrackersData)
	{
		SetBoneFlag(tracker.Value.Bone, true);

		if (!bUseVRHeadsetForHead && tracker.Value.Bone == EHumanoidBone::Head)
		{
			HeadTrackerId = tracker.Key;
		}

		if (bShouldUpdateServer)
		{
			ServerInitializeTrackerBone(tracker.Key, tracker.Value.Bone, tracker.Value.RelativeOffset);
		}
	}
}

int32 UCaptureDevice::GetTrackingDevicesNum()
{
	if (bUseComponentsInput)
	{
		return InputComponents.Num();
	}
	else
	{
		TArray<int32> TrackerIds, HandIds;
		GetVRTrackingDeviceIDs(ESteamVRTrackedDeviceType::Other, TrackerIds);
		GetVRTrackingDeviceIDs(ESteamVRTrackedDeviceType::Controller, HandIds);

		int32 Result = TrackerIds.Num();
		if (MotionControllersTrackingRole != ETrackingDeviceRole::DontUse) Result += HandIds.Num(); // controllers
		if (bUseVRHeadsetForHead) Result += 1; // headset
		if (bUseComponentsForHandsOnly) Result += 2;

		return Result;
	}
}

USceneComponent* UCaptureDevice::GetInputComponent(uint8 DeviceID) const
{
	if (bUseComponentsInput && InputComponents.IsValidIndex(DeviceID))
		return InputComponents[DeviceID];
	else
		return nullptr;
}

bool UCaptureDevice::IsInitialized() const
{
	return bIsInitialized;
}

bool UCaptureDevice::GetCollarbonesCalibration(FRotator& OutRightCollarbone, FRotator& OutLeftCollarbone) const
{
	if (!bIsInitialized || !bHasPelvis)
	{
		return false;
	}
	OutRightCollarbone = RightShoulderRotatorOffset.Rotator();
	OutLeftCollarbone = LeftShoulderRotatorOffset.Rotator();

	return true;
}

UVMKFingersFKIKSolver* UCaptureDevice::GetFingersSolverRight() const
{
	return HandSolverRight;
}

UVMKFingersFKIKSolver* UCaptureDevice::GetFingersSolverLeft() const
{
	return HandSolverLeft;
}

bool UCaptureDevice::GetCurrentCalibration(FBodyCalibrationData& OutBodyCalibration) const
{
	OutBodyCalibration.TrackersData = TrackersData;
	OutBodyCalibration.CollarboneRightOffset = RightShoulderRotatorOffset.Rotator();
	OutBodyCalibration.CollarboneLeftOffset = LeftShoulderRotatorOffset.Rotator();
	OutBodyCalibration.UpperarmLength = fUpperarmLength;
	OutBodyCalibration.ForearmLength = fForearmLength;
	OutBodyCalibration.ThighLength = fThighLength;
	OutBodyCalibration.CalfLength = fCalfLength;
	OutBodyCalibration.ShoulderLength = fShoulderLength;
	OutBodyCalibration.MeshSizeScale = MeshScale;

	return bIsCalibrated;
}

void UCaptureDevice::ApplyCurrentCalibration(const FBodyCalibrationData& BodyCalibration)
{
	if (bIsLocal)
	{
		SetTrackersData(BodyCalibration.TrackersData);
		RightShoulderRotatorOffset = FTransform(BodyCalibration.CollarboneRightOffset);
		LeftShoulderRotatorOffset = FTransform(BodyCalibration.CollarboneLeftOffset);
		fUpperarmLength = BodyCalibration.UpperarmLength;
		fForearmLength = BodyCalibration.ForearmLength;
		fThighLength = BodyCalibration.ThighLength;
		fCalfLength = BodyCalibration.CalfLength;
		fShoulderLength = BodyCalibration.ShoulderLength;
		MeshScale = BodyCalibration.MeshSizeScale;

		bIsCalibrated = true;

		// Networking replication
		if (GetIsReplicated())
		{
			ServerUpdateMeshScale(fUpperarmLength, fForearmLength, fThighLength, fCalfLength, fShoulderLength, BodyCalibration.CollarboneRightOffset, BodyCalibration.CollarboneLeftOffset, MeshScale);
		}
	}
}

float UCaptureDevice::CalcRootRotation(const FVector& ForwardVector, const FVector& UpVector)
{
	return iCalcRootRotation(ForwardVector, UpVector);
}

void UCaptureDevice::GetBoneTransformWithGenericOrientation(EHumanoidBone Bone, bool bInLocalSpace, FTransform& OutBonePosition)
{
	FRotator Rot;
	FVector Loc;
	switch (Bone)
	{
	case EHumanoidBone::Head:
		OutBonePosition = CapturedBody.Head;
		break;
	case EHumanoidBone::HMD:
		OutBonePosition = iGetHeadTransform(true);
		break;
	case EHumanoidBone::MotionControllerRight:
		GetVRHandPosition(EControllerHand::Right, Loc, Rot);
		OutBonePosition = FTransform(Rot, Loc) * GetOwner()->GetActorTransform();;
		break;
	case EHumanoidBone::MotionControllerLeft:
		GetVRHandPosition(EControllerHand::Left, Loc, Rot);
		OutBonePosition = FTransform(Rot, Loc) * GetOwner()->GetActorTransform();;
		break;
	case EHumanoidBone::Pelvis:
		OutBonePosition = CapturedBody.Pelvis;
		Rot = OutBonePosition.Rotator();
		OutBonePosition.SetRotation(UKismetMathLibrary::MakeRotFromXZ(PelvisForwardVector(Rot), PelvisUpVector(Rot)).Quaternion());
		break;
	case EHumanoidBone::Ribcage:
		OutBonePosition = CapturedBody.Ribcage;
		Rot = OutBonePosition.Rotator();
		OutBonePosition.SetRotation(UKismetMathLibrary::MakeRotFromXZ(RibcageForwardVector(Rot), RibcageUpVector(Rot)).Quaternion());
		break;
	case EHumanoidBone::ThighRight:
		OutBonePosition = CapturedBody.ThighRight;
		Rot = OutBonePosition.Rotator();
		OutBonePosition.SetRotation(UKismetMathLibrary::MakeRotFromXZ(RightLegForwardVector(Rot), RightLegDownVector(Rot) * -1.f).Quaternion());
		break;
	case EHumanoidBone::CalfRight:
		OutBonePosition = CapturedBody.CalfRight;
		Rot = OutBonePosition.Rotator();
		OutBonePosition.SetRotation(UKismetMathLibrary::MakeRotFromXZ(RightLegForwardVector(Rot), RightLegDownVector(Rot) * -1.f).Quaternion());
		break;
	case EHumanoidBone::FootRight:
		OutBonePosition = CapturedBody.FootRight;
		Rot = OutBonePosition.Rotator();
		OutBonePosition.SetRotation(UKismetMathLibrary::MakeRotFromXZ(RightLegForwardVector(Rot), RightLegDownVector(Rot) * -1.f).Quaternion());
		break;
	case EHumanoidBone::ThighLeft:
		OutBonePosition = CapturedBody.ThighLeft;
		Rot = OutBonePosition.Rotator();
		OutBonePosition.SetRotation(UKismetMathLibrary::MakeRotFromXZ(LeftLegForwardVector(Rot), LeftLegDownVector(Rot) * -1.f).Quaternion());
		break;
	case EHumanoidBone::CalfLeft:
		OutBonePosition = CapturedBody.CalfLeft;
		Rot = OutBonePosition.Rotator();
		OutBonePosition.SetRotation(UKismetMathLibrary::MakeRotFromXZ(LeftLegForwardVector(Rot), LeftLegDownVector(Rot) * -1.f).Quaternion());
		break;
	case EHumanoidBone::FootLeft:
		OutBonePosition = CapturedBody.FootLeft;
		Rot = OutBonePosition.Rotator();
		OutBonePosition.SetRotation(UKismetMathLibrary::MakeRotFromXZ(LeftLegForwardVector(Rot), LeftLegDownVector(Rot) * -1.f).Quaternion());
		break;
	case EHumanoidBone::ShoulderRight:
		OutBonePosition = CapturedBody.ShoulderRight;
		Rot = OutBonePosition.Rotator();
		OutBonePosition.SetRotation(UKismetMathLibrary::MakeRotFromXZ(RightHandForwardVector(Rot), RightHandUpVector(Rot)).Quaternion());
		break;
	case EHumanoidBone::UpperarmRight:
		OutBonePosition = CapturedBody.UpperarmRight;
		Rot = OutBonePosition.Rotator();
		OutBonePosition.SetRotation(UKismetMathLibrary::MakeRotFromXZ(RightHandForwardVector(Rot), RightHandUpVector(Rot)).Quaternion());
		break;
	case EHumanoidBone::ForearmRight:
		OutBonePosition = CapturedBody.ForearmRight;
		Rot = OutBonePosition.Rotator();
		OutBonePosition.SetRotation(UKismetMathLibrary::MakeRotFromXZ(RightHandForwardVector(Rot), RightHandUpVector(Rot)).Quaternion());
		break;
	case EHumanoidBone::PalmRight:
		OutBonePosition = CapturedBody.PalmRight;
		Rot = OutBonePosition.Rotator();
		OutBonePosition.SetRotation(UKismetMathLibrary::MakeRotFromXY(RightPalmForwardVector(Rot), RightPalmUpVector(Rot) * -1.f).Quaternion());
		break;
	case EHumanoidBone::ShoulderLeft:
		OutBonePosition = CapturedBody.ShoulderLeft;
		Rot = OutBonePosition.Rotator();
		OutBonePosition.SetRotation(UKismetMathLibrary::MakeRotFromXZ(LeftHandForwardVector(Rot), LeftHandUpVector(Rot)).Quaternion());
		break;
	case EHumanoidBone::UpperarmLeft:
		OutBonePosition = CapturedBody.UpperarmLeft;
		Rot = OutBonePosition.Rotator();
		OutBonePosition.SetRotation(UKismetMathLibrary::MakeRotFromXZ(LeftHandForwardVector(Rot), LeftHandUpVector(Rot)).Quaternion());
		break;
	case EHumanoidBone::ForearmLeft:
		OutBonePosition = CapturedBody.ForearmLeft;
		Rot = OutBonePosition.Rotator();
		OutBonePosition.SetRotation(UKismetMathLibrary::MakeRotFromXZ(LeftHandForwardVector(Rot), LeftHandUpVector(Rot)).Quaternion());
		break;
	case EHumanoidBone::PalmLeft:
		OutBonePosition = CapturedBody.PalmLeft;
		Rot = OutBonePosition.Rotator();
		OutBonePosition.SetRotation(UKismetMathLibrary::MakeRotFromXY(LeftPalmForwardVector(Rot), LeftPalmUpVector(Rot)).Quaternion());
		break;
	default:
		OutBonePosition = FTransform::Identity;
	}

	if (bInLocalSpace)
	{
		OutBonePosition = OutBonePosition.GetRelativeTransform(GetOwner()->GetActorTransform());
	}

	OutBonePosition.SetScale3D(FVector::OneVector);
}

bool UCaptureDevice::IsCalibrated() const
{
	return bIsCalibrated;
}

void UCaptureDevice::SendCalibrationToServer_Implementation()
{
	if (bIsLocal && bIsCalibrated && GetIsReplicated())
	{
		for (const auto& tracker : TrackersData)
		{
			ServerInitializeTrackerBone(tracker.Key, tracker.Value.Bone, tracker.Value.RelativeOffset);
		}

		ServerUpdateMeshScale(fUpperarmLength, fForearmLength, fThighLength, fCalfLength, fShoulderLength, RightShoulderRotatorOffset.Rotator(), LeftShoulderRotatorOffset.Rotator(), MeshScale);
	}
}

void UCaptureDevice::GetBodyParameters(FVector& OutMeshScale, float& OutUpperarmLength, float& OutForearmLength, float& OutThighLength, float& OutCalfLength, float& OutShoulderLength) const
{
	OutMeshScale = MeshScale;
	OutUpperarmLength = fUpperarmLength;
	OutForearmLength = fForearmLength;
	OutThighLength = fThighLength;
	OutCalfLength = fCalfLength;
	OutShoulderLength = fShoulderLength;
}

bool UCaptureDevice::GetBoneTransformByName(const FName& BoneName, FTransform& WorldTransform)
{
	bool bRet = false;

	if (SocketsInfo.Contains(BoneName))
	{
		WorldTransform = SocketsInfo[BoneName].CurrentPosition;
		bRet = true;
	}
	else
	{
		const int32 index_spine = SpineBonesNames.Find(BoneName);
		if (index_spine != INDEX_NONE) {
			WorldTransform = SpineBones[index_spine].WorldTransform;
			bRet = true;
		}
		else {
			const int32 index_neck = NeckBonesNames.Find(BoneName);
			if (index_neck != INDEX_NONE) {
				WorldTransform = NeckBones[index_neck].WorldTransform;
				bRet = true;
			}
		}
	}

	return bRet;
}

void UCaptureDevice::PrepareForCalibrationWithHandsForward()
{
	if (!bIsLocal)
	{
		return;
	}

	TArray<int32> DeviceIds, HandIds;
	GetVRTrackingDeviceIDs(ESteamVRTrackedDeviceType::Other, DeviceIds);
	if (MotionControllersTrackingRole != ETrackingDeviceRole::DontUse)
	{
		GetVRTrackingDeviceIDs(ESteamVRTrackedDeviceType::Controller, HandIds);
		DeviceIds.Append(HandIds);
	}

	HandsForward_TrackersSnapshot.Empty();

	FVector loc;
	FRotator rot;
	for (auto Id : DeviceIds)
	{
		GetVRTrackerPosition(Id, loc, rot);
		HandsForward_TrackersSnapshot.Add(Id, FTransform(rot, loc, FVector::OneVector));

		if (bDrawDebugGeometry)
		{
			DrawDebugSphere(GetWorld(), loc, 5.f, 12, FColor::MakeRandomColor(), false, 5.f, 0, 1.f);
		}
	}
}

void UCaptureDevice::DetectHandIDsInTPose(int32& IdHand1, int32& IdHand2)
{
	TArray<int32> DeviceIds, HandIds;
	GetVRTrackingDeviceIDs(ESteamVRTrackedDeviceType::Other, DeviceIds);

	if (MotionControllersTrackingRole != ETrackingDeviceRole::DontUse)
	{
		GetVRTrackingDeviceIDs(ESteamVRTrackedDeviceType::Controller, HandIds);
		DeviceIds.Append(HandIds);
	}

	int32 FoundPairA = INDEX_NONE, FoundPairB = INDEX_NONE;
	float FoundPairDist = 0.f;

	int32 MaxDistId;
	float MaxDist, CurrDist;
	FVector loc, locPaired;
	FRotator rot;
	float Height = 0.f;

	// find height
	for (const auto Id : DeviceIds)
	{
		GetVRTrackerPosition(Id, loc, rot);
		if (loc.Z > Height) Height = loc.Z;
	}

	for (const auto Id : DeviceIds)
	{
		MaxDistId = INDEX_NONE; MaxDist = 0.f;
		GetVRTrackerPosition(Id, loc, rot);

		if (loc.Z < Height * 0.6f) continue;

		// find pair
		for (int32 i = 0; i < DeviceIds.Num(); i++)
		{
			const int32 PairedId = DeviceIds[i];
			if (PairedId == Id) continue;

			GetVRTrackerPosition(PairedId, locPaired, rot);

			// approximately the same height
			if (FMath::Abs(loc.Z - locPaired.Z) < 20.f)
			{
				CurrDist = FVector::DistSquaredXY(loc, locPaired);
				if (CurrDist > MaxDist)
				{
					MaxDist = CurrDist; MaxDistId = PairedId;
				}
			}
		}

		if (MaxDistId != INDEX_NONE && MaxDist > FoundPairDist)
		{
			FoundPairA = Id;
			FoundPairB = MaxDistId;
			FoundPairDist = MaxDist;
		}
	}

	// return values
	IdHand1 = FoundPairA;
	IdHand2 = FoundPairB;
}

int32 UCaptureDevice::DetectHeadID()
{
	TArray<int32> DeviceIds, HandIds;
	GetVRTrackingDeviceIDs(ESteamVRTrackedDeviceType::Other, DeviceIds);
	GetVRTrackingDeviceIDs(ESteamVRTrackedDeviceType::Controller, HandIds);
	DeviceIds.Append(HandIds);

	FVector loc;
	FRotator rot;
	int32 hid = INDEX_NONE;
	float Height = 0.f;

	// find height
	for (auto Id : DeviceIds)
	{
		GetVRTrackerPosition(Id, loc, rot);
		if (loc.Z > Height)
		{
			Height = loc.Z;
			hid = Id;
		}
	}

	return hid;
}

FTransform UCaptureDevice::PredictCameraTransformFromHandsAndHead(int32 HeadId, int32 IdHand1, int32 IdHand2)
{
	if (HeadId == INDEX_NONE)
	{
		return FTransform::Identity;
	}

	FVector HandRightLoc, HandLeftLoc;
	FTransform w_base = GetOwner()->GetActorTransform();
	FTransform w_head;
	FVector loc;
	FRotator rot;

	// as we don't know yet how trackers binded, these 'right' and 'left' values are just assumptions
	// in this fuction we only need to know distance between hands
	GetVRTrackerPosition(IdHand1, HandRightLoc, rot);
	HandRightLoc = TranslateToParentTransform(FTransform(rot, HandRightLoc), w_base);
	GetVRTrackerPosition(IdHand2, HandLeftLoc, rot);
	HandLeftLoc = TranslateToParentTransform(FTransform(rot, HandLeftLoc), w_base);

	// ---------------- head location is average point between hands, and Z coordinate is average between hands Z coord and head's tracker Z coord

	FVector HeadLoc = (HandRightLoc + HandLeftLoc) / 2.f;

	// Prelimirary pose with hands directed forward is required
	// If you wasn't use VR headset, please call PrepareForCalibrationWithHandsForward() before PrepareForCalibration()
	const FTransform* H1Tr = HandsForward_TrackersSnapshot.Find(IdHand1);
	const FTransform* H2Tr = HandsForward_TrackersSnapshot.Find(IdHand2);

	FTransform Hand1Tr, Hand2Tr;
	if (H1Tr && H2Tr)
	{
		Hand1Tr = *H1Tr;
		Hand2Tr = *H2Tr;
	}
	else
	{
		const FVector UpDir = w_base.GetRotation().GetUpVector();
		const FVector ForwardLoc = HeadLoc + ((HandRightLoc - HeadLoc).GetSafeNormal() ^ UpDir) * 50.f;
		Hand1Tr = Hand2Tr = FTransform(ForwardLoc);
	}

	// loc = head tracker's location

	GetVRTrackerPosition(HeadId, loc, rot);
	w_head = FTransform(rot, loc) * w_base;
	HeadLoc.Z = (w_head.GetTranslation().Z + HeadLoc.Z) / 2.f;
	w_head.SetTranslation(HeadLoc);

	if (bDrawDebugGeometry)
	{
		DrawDebugSphere(GetWorld(), w_head.GetTranslation(), 25.f, 24, FColor::Yellow, false, 50.f, 0, 2.f);
	}

	// ---------------- head rotation is 90 degrees from hand left-right direction, to get side, we're using saved 'hands forward' pose

	// forward hands coords to world space
	const FTransform H1Tr_ws = Hand1Tr * w_base;
	const FTransform H2Tr_ws = Hand2Tr * w_base;
	// average location on hands in 'forward' pose
	const FVector ForwardPoint = (H1Tr_ws.GetTranslation() + H2Tr_ws.GetTranslation()) / 2.f;

	// preliminary forward direction
	const FVector ForwardDirection = (ForwardPoint - w_head.GetTranslation()).GetSafeNormal2D();
	// hands direction
	const FVector LeftToRightDirection = (HandRightLoc - HandLeftLoc).GetSafeNormal2D();
	// rotator from left hand to right
	const FRotator TempRot = UKismetMathLibrary::MakeRotFromYZ(LeftToRightDirection, w_base.GetRotation().GetUpVector());
	// forward direction from left-right hand ray
	const FVector ArmsForwardVector = TempRot.Quaternion().GetForwardVector();

	// is forward vector from arms in T-Pose co-directed with forward vector in 'hands forward' pose?
	if (FVector::DotProduct(ArmsForwardVector, ForwardDirection) > 0.f)
	{
		// left is left, right is right
		w_head.SetRotation(TempRot.Quaternion());
	}
	else
	{
		// right is left, left is right
		w_head.SetRotation(UKismetMathLibrary::MakeRotFromXZ(-ArmsForwardVector, w_base.GetRotation().GetUpVector()).Quaternion());
	}

	return w_head;
}

FORCEINLINE FTransform UCaptureDevice::CalculateShoulderFromUpperarm(EControllerHand Hand, bool bRelative, bool bApplyClamp) const
{
	// input: CapturedBody.Upperarm, CapturedBudy.Ribcage

	FTransform WorldTr, WorldTrBase;
	if (Hand == EControllerHand::Right)
	{
		WorldTr = ShoulderToRibcageRight * CapturedBody.Ribcage;
		WorldTrBase = WorldTr;
		const FVector ShoulderDir = (CapturedBody.UpperarmRight.GetTranslation() - WorldTr.GetTranslation()).GetSafeNormal();
		WorldTr.SetRotation(
			MakeRotByTwoAxes(
				RightHandRotation.ForwardAxis, ShoulderDir * RightHandRotation.ForwardDirection,
				RightHandRotation.VerticalAxis, RightHandUpVector(WorldTr.Rotator()) * RightHandRotation.UpDirection
			).Quaternion()
		);
	}
	else // if (Hand == EControllerHand::Left)
	{
		WorldTr = ShoulderToRibcageLeft * CapturedBody.Ribcage;
		WorldTrBase = WorldTr;
		const FVector ShoulderDir = (CapturedBody.UpperarmLeft.GetTranslation() - WorldTr.GetTranslation()).GetSafeNormal();
		WorldTr.SetRotation(
			MakeRotByTwoAxes(
				LeftHandRotation.ForwardAxis, ShoulderDir * LeftHandRotation.ForwardDirection,
				LeftHandRotation.VerticalAxis, LeftHandUpVector(WorldTr.Rotator()) * LeftHandRotation.UpDirection
			).Quaternion()
		);
	}

	// return raw?
	if (!bRelative && !bApplyClamp)
	{
		// shoudn't be used
		return WorldTr;
	}

	FTransform RelTr = WorldTr.GetRelativeTransform(WorldTrBase);
	FRotator r = RelTr.Rotator();

	if (!bApplyClamp)
	{
		RelTr.SetRotation(r.Quaternion());
		return RelTr;
	}

	r.Yaw /= 1.25f; r.Pitch /= 1.25f; r.Roll /= 1.25f;

	r.Roll = FMath::Clamp(r.Roll, -45.f, 45.f);
	r.Pitch = FMath::Clamp(r.Pitch, -45.f, 45.f);
	r.Yaw = FMath::Clamp(r.Yaw, -45.f, 45.f);

	RelTr.SetRotation(r.Quaternion());

	return (bRelative ? RelTr : RelTr * WorldTrBase);
}

int32 UCaptureDevice::GetExtremeDeviceId(const TArray<int32>& DeviceIds, bool bFindHighest)
{
	float ExtremeHeight = 0.f;
	int32 RetVal = -1;

	FVector loc;
	FRotator rot;

	for (const auto& DeviceId : DeviceIds)
	{
		GetVRTrackerPosition(DeviceId, loc, rot);
		ExtremeHeight = loc.Z;
		RetVal = DeviceId;
	}

	return RetVal;
}

// Stretch and rotate skeletal mesh to adjust it to player's position and dimentions
void UCaptureDevice::PrepareForCalibration()
{
	if (!bIsInitialized) return;
	if (!bIsLocal) return;

	FVector loc;
	FRotator rot;
	FVector scale;
	FVector HandRightLoc, HandLeftLoc;
	FTransform w_base = GetOwner()->GetActorTransform();
	FTransform w_head = iGetHeadTransform(true);
	float ActorLocationZ = w_base.GetTranslation().Z;

	// using only trackers for everything?
	// using trackers for everything except headset?
	// using motion controlllers for something other then hands?
	if (MotionControllersTrackingRole != ETrackingDeviceRole::HandsOnly)
	{
		// detect two tracked devices (trackers or controllers) with fartherst horizontal distance between each other
		int32 H1, H2;
		DetectHandIDsInTPose(H1, H2);

		// as we don't know yet how trackers binded, these 'right' and 'left' values are just assumptions
		// in this fuction we only need to know distance between hands
		GetVRTrackerPosition(H1, HandRightLoc, rot);
		HandRightLoc = TranslateToParentTransform(FTransform(rot, HandRightLoc), w_base);
		GetVRTrackerPosition(H2, HandLeftLoc, rot);
		HandLeftLoc = TranslateToParentTransform(FTransform(rot, HandLeftLoc), w_base);

		// We also need to know head transform. If we had no VR headset, let's calcuate it.
		if (!bUseVRHeadsetForHead)
		{
			int32 HeadId = DetectHeadID();
			if (bDrawDebugGeometry)
			{
				if (HeadId >= 0) {
					GetVRTrackerPosition(HeadId, loc, rot);
					loc = TranslateToParentTransform(FTransform(rot, loc), w_base);
					DrawDebugSphere(GetWorld(), loc, 15.f, 24, FColor::Orange, false, 50.f, 0, 2.f);
				}

				DrawDebugSphere(GetWorld(), HandRightLoc, 15.f, 12, FColor::Red, false, 50.f, 0, 2.f);
				DrawDebugSphere(GetWorld(), HandLeftLoc, 15.f, 12, FColor::Cyan, false, 50.f, 0, 2.f);
			}

			w_head = PredictCameraTransformFromHandsAndHead(HeadId, H1, H2);
		}

		if (bUseComponentsForHandsOnly)
		{
			if (FVector::DotProduct(w_head.GetRotation().GetRightVector(), (HandRightLoc - HandLeftLoc).GetSafeNormal()) < 0.f)
			{
				Swap(H1, H2);
			}
			RightHandLowerarmId = H1;
			LeftHandLowerarmId = H2;
		}
	}
	else
	{
		// no, use motion controllers
		GetVRHandPosition(EControllerHand::Right, HandRightLoc, rot);
		HandRightLoc = TranslateToParentTransform(FTransform(rot, HandRightLoc), w_base);
		GetVRHandPosition(EControllerHand::Left, HandLeftLoc, rot);
		HandLeftLoc = TranslateToParentTransform(FTransform(rot, HandLeftLoc), w_base);

		if (!bUseVRHeadsetForHead)
		{
			int32 HeadId = DetectHeadID();

			TArray<int32> CtrlIds;
			GetVRTrackingDeviceIDs(ESteamVRTrackedDeviceType::Controller, CtrlIds);
			if (CtrlIds.Num() == 2)
			{
				w_head = PredictCameraTransformFromHandsAndHead(HeadId, CtrlIds[0], CtrlIds[1]);
			}
		}
	}

	loc = w_head.GetTranslation(); loc.Z = ActorLocationZ;
	rot = FRotator::ZeroRotator;
	rot.Yaw = w_head.Rotator().Yaw - 90.f;
	BodyMesh->SetWorldLocationAndRotation(loc, rot);

	scale.X = FVector::Dist2D(HandRightLoc, HandLeftLoc);
	if (bUseComponentsForHandsOnly)
	{
		scale.X += VirtualBonePositionOffset * 2.f;
	}

	scale.X /= (MeshHandsFullLength + ArmsCalibrationAdjustment);
	scale.Y = scale.X;
	scale.Z = w_head.GetTranslation().Z - ActorLocationZ;
	scale.Z /= (BodyMesh->GetSocketLocation(SkeletonBonesMap[EHumanoidBone::Head]).Z - ActorLocationZ + HeightCalibrationAdjustment);
	BodyMesh->SetRelativeScale3D(scale);

	MeshScale = scale;
	// 2019/03/13 ArmsScaleCoefficient should be applied in runtime
	//MeshScale.X *= ArmsScaleCoefficient;
	//MeshScale.Y = MeshScale.X;

	if (bUniformScaleBasedOnHeight)
	{
		MeshScale.X = MeshScale.Y = MeshScale.Z;
	}
	else if (bUniformScaleBasedOnArmSpan)
	{
		MeshScale.Z = MeshScale.X;
	}
}

bool UCaptureDevice::BindPreCalibrationTracker(int32 TrackerId, EHumanoidBone Bone, bool bAllowSharedBone)
{
	TArray<int32> DeviceIds;

	GetVRTrackingDeviceIDs(ESteamVRTrackedDeviceType::Other, DeviceIds);
	if (MotionControllersTrackingRole != ETrackingDeviceRole::DontUse)
	{
		TArray<int32> HandIds;
		GetVRTrackingDeviceIDs(ESteamVRTrackedDeviceType::Other, HandIds);
		DeviceIds.Append(HandIds);
	}

	if (DeviceIds.Contains(TrackerId))
	{
		int32 TrackersForBoneNum = 0;
		int32 AllowedTrackersForBone = bAllowSharedBone ? 2 : 1;
		for (const auto& Rule : CalibrationBindingRules)
		{
			if (Rule.Value == Bone && Rule.Key != TrackerId)
			{
				if (++TrackersForBoneNum == AllowedTrackersForBone)
				{
					return false;
				}
			}
		}

		// Not needed actually, Add(...) works for both cases
		if (CalibrationBindingRules.Contains(TrackerId))
		{
			CalibrationBindingRules[TrackerId] = Bone;
		}
		else
		{
			CalibrationBindingRules.Add(TrackerId, Bone);
		}

		return true;
	}
	else
	{
		return false;
	}
}

void UCaptureDevice::UnbindPreCalibrationTracker(int32 TrackerId)
{
	if (CalibrationBindingRules.Contains(TrackerId))
	{
		CalibrationBindingRules.Remove(TrackerId);
	}
}

void UCaptureDevice::ResetPreCalibrationBinding()
{
	CalibrationBindingRules.Empty();
}

void UCaptureDevice::GetCalibrationBindingRules(TMap<int32, EHumanoidBone>& OutBindingRules) const
{
	OutBindingRules = CalibrationBindingRules;
}

void UCaptureDevice::PredictBonesCalibration(TMap<uint8, FTrackerSetup>& PredictedTrackersData)
{
	TempTrackersData.Empty();
	CalibrateBones(true);
	PredictedTrackersData = TempTrackersData;
}

void UCaptureDevice::CalibrateVirtualHands(int32& HandId_Right, int32& HandId_Left, FVector& RightHandLocation, FVector& LeftHandLocation)
{
	const FTransform ActorTransform = GetOwner()->GetActorTransform();
	
	FVector LowerarmRightLoc, LowerarmLeftLoc;
	FRotator LowerarmRightRot, LowerarmLeftRot;

	// get lowerarm trackers
	GetVRTrackerPosition(RightHandLowerarmId, LowerarmRightLoc, LowerarmRightRot);
	LowerarmRightLoc = (FTransform(LowerarmRightRot, LowerarmRightLoc) * ActorTransform).GetTranslation();
	GetVRTrackerPosition(LeftHandLowerarmId, LowerarmLeftLoc, LowerarmLeftRot);
	LowerarmLeftLoc = (FTransform(LowerarmLeftRot, LowerarmLeftLoc) * ActorTransform).GetTranslation();
	// apply required offset
	const FVector PlayerRightDirection = (RightHandLocation - LeftHandLocation).GetSafeNormal();
	RightHandLocation = LowerarmRightLoc + PlayerRightDirection * VirtualBonePositionOffset;
	LeftHandLocation = LowerarmLeftLoc - PlayerRightDirection * VirtualBonePositionOffset;

	// get relative offsets
	RightVirtualTrackerOffset = FTransform(LowerarmRightRot, RightHandLocation).GetRelativeTransform(FTransform(LowerarmRightRot, LowerarmRightLoc));
	LeftVirtualTrackerOffset = FTransform(LowerarmLeftRot, LeftHandLocation).GetRelativeTransform(FTransform(LowerarmLeftRot, LowerarmLeftLoc));

	// and now GetVRTrackerPosition can calculate virtual trackers
	HandId_Right = RIGHTVIRTUALKEY;
	HandId_Left = LEFTVIRTUALKEY;

	// pre-define bindings for lowerarms
	if (!CalibrationBindingRules.Contains(RightHandLowerarmId))
	{
		CalibrationBindingRules.Add(RightHandLowerarmId, EHumanoidBone::ForearmRight);
	}
	if (!CalibrationBindingRules.Contains(LeftHandLowerarmId))
	{
		CalibrationBindingRules.Add(LeftHandLowerarmId, EHumanoidBone::ForearmLeft);
	}
}

// Automatically connect head, hands and Vive trackers to skeleton bones and save relative transform.
void UCaptureDevice::CalibrateBones(bool bPredictOnly)
{
	if (!bIsInitialized) return;
	// Execute on locally controller machine only
	if (!bIsLocal) return;
	if (!bPredictOnly)
	{
		TrackersData.Empty();
	}

	UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones started. Bones Calibrated: %d"), TrackersData.Num());

	FVector loc_base, loc;
	FRotator rot;
	FTransform ActorTransform = GetOwner()->GetActorTransform();
	FTransform CameraTransform, HeadTransformLocal;
	FVector HandRightLoc, HandLeftLoc;
	FVector a, b, c, d, tmpV;
	int32 DevId1 = -1, DevId2 = -1;

	TArray<int32> DeviceIds;

	GetVRHandPosition(EControllerHand::Right, HandRightLoc, rot);
	GetVRHandPosition(EControllerHand::Left, HandLeftLoc, rot);
	FVector LocalRightHandLoc = HandRightLoc;
	FVector LocalLeftHandLoc = HandLeftLoc;
	HandRightLoc = (FTransform(HandRightLoc) * ActorTransform).GetTranslation();
	HandLeftLoc = (FTransform(HandLeftLoc) * ActorTransform).GetTranslation();

	ActorTransform.SetScale3D(FVector(1.f, 1.f, 1.f));

	// 1. Connect all tracking devices to bones.

	// Predict hand IDs
	int32 H1, H2;
	if (MotionControllersTrackingRole == ETrackingDeviceRole::HandsOnly)
	{
		TArray<int32> HandIds;
		GetVRTrackingDeviceIDs(ESteamVRTrackedDeviceType::Controller, HandIds);
		if (HandIds.Num() < 2)
		{
			return;
		}
		H1 = HandIds[0];
		H2 = HandIds[1];
	}
	else
	{
		DetectHandIDsInTPose(H1, H2);
	}

	// Head
	if (bUseVRHeadsetForHead)
	{
		// 1) HMD
		InitializeTracker(HEADKEY, EHumanoidBone::Head, bPredictOnly);
		UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Head calibrated to headset"));

		CameraTransform = iGetHeadTransform(true);
		HeadTransformLocal = iGetHeadTransform(false);

		rot = CameraTransform.Rotator();
		rot.Pitch = rot.Roll = 0.f;
		CameraTransform.SetRotation(rot.Quaternion());
	}
	else
	{
		// 1) head tracker
		HeadTrackerId = DetectHeadID();

		if (HeadTrackerId == INDEX_NONE)
		{
			return;
		}

		InitializeTracker(HeadTrackerId, EHumanoidBone::Head, bPredictOnly);
		UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Head calibrated to: %d"), HeadTrackerId);

		CameraTransform = PredictCameraTransformFromHandsAndHead(HeadTrackerId, H1, H2);
		HeadTransformLocal = CameraTransform.GetRelativeTransform(ActorTransform);
	}

	if (MotionControllersTrackingRole != ETrackingDeviceRole::HandsOnly)
	{
		b = c = FVector::ZeroVector;

		// 2) Hands
		// save right direction
		if (bUseComponentsForHandsOnly)
		{
			CalibrateVirtualHands(DevId1, DevId2, HandRightLoc, HandLeftLoc);
			UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Lowerarm right pre-binded to: %d"), RightHandLowerarmId);
			UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Lowerarm left pre-binded to: %d"), LeftHandLowerarmId);

			GetVRTrackerPosition(RightHandLowerarmId, LocalRightHandLoc, rot);
			GetVRTrackerPosition(LeftHandLowerarmId, LocalLeftHandLoc, rot);
			const FVector LocalOffset = (LocalRightHandLoc - LocalLeftHandLoc).GetSafeNormal2D() * VirtualBonePositionOffset;
			LocalRightHandLoc += LocalOffset;
			LocalLeftHandLoc -= LocalOffset;
		}
		else
		{
			GetVRTrackerPosition(H1, LocalRightHandLoc, rot);
			HandRightLoc = TranslateToParentTransform(FTransform(rot, LocalRightHandLoc), ActorTransform);

			GetVRTrackerPosition(H2, LocalRightHandLoc, rot);
			HandLeftLoc = TranslateToParentTransform(FTransform(rot, LocalRightHandLoc), ActorTransform);

			if (FVector::DotProduct(CameraTransform.GetRotation().GetRightVector(), (HandRightLoc - CameraTransform.GetTranslation()).GetSafeNormal2D()) > 0.f)
			{
				DevId1 = H1; DevId2 = H2;
			}
			else
			{
				DevId1 = H2; DevId2 = H1;
				// swap
				Swap<FVector>(HandRightLoc, HandLeftLoc);
				Swap<FVector>(LocalRightHandLoc, LocalRightHandLoc);
			}
		}

		InitializeTracker(DevId1, EHumanoidBone::PalmRight, bPredictOnly);
		InitializeTracker(DevId2, EHumanoidBone::PalmLeft, bPredictOnly);

		UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Hand right calibrated to: %d"), DevId1);
		UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Hand left calibrated to: %d"), DevId2);
	}
	else
	{
		GetVRHandPosition(EControllerHand::Right, LocalRightHandLoc, rot);
		GetVRHandPosition(EControllerHand::Left, LocalLeftHandLoc, rot);

		// 2) Hand Controllers
		GetVRTrackingDeviceIDs(ESteamVRTrackedDeviceType::Controller, DeviceIds);
		for (int32 id : DeviceIds)
		{
			GetVRTrackerPosition(id, loc, rot);
			if (FVector::DistSquared(loc, LocalRightHandLoc) < 4.f)
			{
				DevId1 = id;
				InitializeTracker(id, EHumanoidBone::PalmRight, bPredictOnly);
				UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Hand right calibrated to: %d"), DevId1);
			}
			else
			{
				DevId2 = id;
				InitializeTracker(id, EHumanoidBone::PalmLeft, bPredictOnly);
				UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Hand left calibrated to: %d"), DevId2);
			}
		}
	}
	HandRightLoc = (FTransform(LocalRightHandLoc) * ActorTransform).GetTranslation();
	HandLeftLoc = (FTransform(LocalLeftHandLoc) * ActorTransform).GetTranslation();

	// Temporary calibration results
	int32 CalibratedFootL_Id = INDEX_NONE, CalibratedFootR_Id = INDEX_NONE;
	FVector CalibratedFootL, CalibratedFootR;
	const FVector DownVector = FVector(0.f, 0.f, -1.f);
	int32 PelvisId = INDEX_NONE, RibcageId = INDEX_NONE;

	// initialize bones forcesd by BindPreCalibrationTracker(...) function
	TSet<EHumanoidBone> ForcedBones;
	for (const auto& Rule : CalibrationBindingRules)
	{
		switch (Rule.Value)
		{
		case EHumanoidBone::Pelvis:
			PelvisId = Rule.Key; break;
		case EHumanoidBone::Ribcage:
			RibcageId = Rule.Key; break;
		case EHumanoidBone::FootLeft:
			CalibratedFootL_Id = Rule.Key;
			GetVRTrackerPosition(CalibratedFootL_Id, CalibratedFootL, rot);
			break;
		case EHumanoidBone::FootRight:
			CalibratedFootR_Id = Rule.Key;
			GetVRTrackerPosition(CalibratedFootR_Id, CalibratedFootR, rot);
			break;
		}

		ForcedBones.Add(Rule.Value);
		// allow two trackers for the same bone
		InitializeTracker(Rule.Key, Rule.Value, bPredictOnly, true);

		UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Pre-binded bone %s calibrated to: %d"), *BoneToName(Rule.Value).ToString(), Rule.Key);
	}

	// 3) Vive trackers
	DeviceIds.Empty();
	GetVRTrackingDeviceIDs(ESteamVRTrackedDeviceType::Other, DeviceIds);

	// if motion controllers are used to track other bones then palms
	if (MotionControllersTrackingRole == ETrackingDeviceRole::AnyRole)
	{
		TArray<int32> HandIds;
		GetVRTrackingDeviceIDs(ESteamVRTrackedDeviceType::Controller, HandIds);
		DeviceIds.Append(HandIds);
	}

	// skip head tracker (if used)
	if (!bUseVRHeadsetForHead)
	{
		DeviceIds.Remove(HeadTrackerId);
	}
	DeviceIds.Remove(RIGHTVIRTUALKEY);
	DeviceIds.Remove(LEFTVIRTUALKEY);
	// skip hands trackers (if used)
	if (MotionControllersTrackingRole != ETrackingDeviceRole::HandsOnly)
	{
		DeviceIds.Remove(DevId1);
		DeviceIds.Remove(DevId2);
	}

	float rShoulderRZ = 0.f, rShoulderLZ = 0.f;
	FTransform T2HMD, T2World;
	bool bIsRight;

	const float PelvisLocZ = BodyMesh->GetSocketLocation(SkeletonBonesMap[EHumanoidBone::Pelvis]).Z;
	const float FootLocZ = BodyMesh->GetSocketLocation(SkeletonBonesMap[EHumanoidBone::FootRight]).Z;
	const float LocalPelvisLocZ = PelvisLocZ - ActorTransform.GetTranslation().Z;
	const float LocalFootLocZ = FootLocZ - ActorTransform.GetTranslation().Z;

	/*
	** First, force to find pelvis or ribcage - the last required bone in addition to hands and head
	*/

	float PelvisZ = 0.f;

	FVector RibcagePosLocal = HeadTransformLocal.GetTranslation();
	RibcagePosLocal.Z = (LocalRightHandLoc.Z + LocalLeftHandLoc.Z) * 0.5f + 10.f;
	for (int32 id : DeviceIds)
	{
		// skip manually binded bones
		if (CalibrationBindingRules.Contains(id)) continue;

		GetVRTrackerPosition(id, loc, rot);
		T2HMD = FTransform(rot, loc);
		T2World = T2HMD * ActorTransform;
		T2HMD = MakeRelativeTransform(T2HMD, CameraTransform);

		if (loc.Z > MeshHeight * 0.4f)
		{
			// pelvis or ribcage
			//if (FMath::Abs(T2HMD.GetTranslation().Y) < 20.f && loc.Z < LocalRightHandLoc.Z + 10.f && loc.Z < LocalLeftHandLoc.Z + 10.f)
			const float DownDP = FVector::DotProduct(DownVector, (loc - RibcagePosLocal).GetSafeNormal());

			if (DownDP > 0.76f
				&& DownDP > FVector::DotProduct(DownVector, (LocalRightHandLoc - RibcagePosLocal).GetSafeNormal())
				&& DownDP > FVector::DotProduct(DownVector, (LocalLeftHandLoc - RibcagePosLocal).GetSafeNormal()))
			{
				a = BodyMesh->GetSocketLocation(SkeletonBonesMap[EHumanoidBone::Pelvis]);
				b = BodyMesh->GetSocketLocation(SkeletonBonesMap[EHumanoidBone::Ribcage]);
				if (FVector::DistSquared(a, T2World.GetTranslation()) < FVector::DistSquared(b, T2World.GetTranslation())
					|| (bCalibrateToPelvisWithOneTorsoTracker && PelvisId == INDEX_NONE))
				{
					if (PelvisId != INDEX_NONE && RibcageId != INDEX_NONE && loc.Z < PelvisZ)
					{
						continue;
					}
					if (ForcedBones.Contains(EHumanoidBone::Pelvis))
					{
						continue;
					}

					// pelvis
					InitializeTracker(id, EHumanoidBone::Pelvis, bPredictOnly);
					UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Pelvis calibrated to: %d"), id);

					PelvisId = id; PelvisZ = loc.Z;
				}
				else
				{
					if (ForcedBones.Contains(EHumanoidBone::Ribcage))
					{
						continue;
					}

					// ribcage
					InitializeTracker(id, EHumanoidBone::Ribcage, bPredictOnly);
					UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Ribcage calibrated to: %d"), id);

					RibcageId = id;
				}
			}
		}
	}

	/*
	** After pelvis and/or ribcage, find all remaining bones
	*/

	for (int32 id : DeviceIds)
	{
		// skip torso bones
		if (id == PelvisId || id == RibcageId) continue;
		// skip slready calibrated
		if (CalibrationBindingRules.Contains(id)) continue;

		GetVRTrackerPosition(id, loc, rot);
		T2HMD = FTransform(rot, loc);
		T2World = T2HMD * ActorTransform;
		T2HMD = MakeRelativeTransform(T2HMD, CameraTransform);

		if (loc.Z > MeshHeight * 0.5f)
		{
			// hands
			bIsRight = (T2HMD.GetTranslation().Y > 0);
			if (bIsRight)
			{
				a = BodyMesh->GetSocketLocation(SkeletonBonesMap[EHumanoidBone::PalmRight]);
				b = BodyMesh->GetSocketLocation(SkeletonBonesMap[EHumanoidBone::ForearmRight]);
				c = BodyMesh->GetSocketLocation(SkeletonBonesMap[EHumanoidBone::UpperarmRight]);
			}
			else
			{
				a = BodyMesh->GetSocketLocation(SkeletonBonesMap[EHumanoidBone::PalmLeft]);
				b = BodyMesh->GetSocketLocation(SkeletonBonesMap[EHumanoidBone::ForearmLeft]);
				c = BodyMesh->GetSocketLocation(SkeletonBonesMap[EHumanoidBone::UpperarmLeft]);
			}
			// Don't use dedicaced trackers for collarbones anymore. Instead, they're tracked by upperarm trackers.
			if (FVector::DistSquared(a, T2World.GetTranslation()) < FVector::DistSquared(a, b))
			{
				// forearm
				if (bIsRight && !ForcedBones.Contains(EHumanoidBone::ForearmRight))
				{
					InitializeTracker(id, EHumanoidBone::ForearmRight, bPredictOnly);
					UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Lowerarm right calibrated to: %d"), id);
				}
				else if (!bIsRight && !ForcedBones.Contains(EHumanoidBone::ForearmLeft))
				{
					InitializeTracker(id, EHumanoidBone::ForearmLeft, bPredictOnly);
					UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Lowerarm left calibrated to: %d"), id);
				}
			}
			else
			{
				// upperarm
				if (bIsRight && !ForcedBones.Contains(EHumanoidBone::UpperarmRight))
				{
					InitializeTracker(id, EHumanoidBone::UpperarmRight, bPredictOnly);
					UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Upperarm right calibrated to: %d"), id);
				}
				else if (!bIsRight && !ForcedBones.Contains(EHumanoidBone::UpperarmLeft))
				{
					InitializeTracker(id, EHumanoidBone::UpperarmLeft, bPredictOnly);
					UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Upperarm left calibrated to: %d"), id);
				}
			}
		}
		else
		{
			// feet
			if (T2HMD.GetTranslation().Y > 0)
			{
				if (CalibratedFootR_Id == INDEX_NONE)
				{
					// right foot
					InitializeTracker(id, EHumanoidBone::FootRight, bPredictOnly);
					CalibratedFootR_Id = id; CalibratedFootR = loc;

					UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Right foot calibrated to: %d"), id);
				}
				else
				{
					if (CalibratedFootR.Z > loc.Z)
					{
						// leg right
						if (FMath::Abs(LocalPelvisLocZ - CalibratedFootR.Z) < FMath::Abs(LocalFootLocZ - CalibratedFootR.Z)
							&& !ForcedBones.Contains(EHumanoidBone::ThighRight))
						{
							InitializeTracker(CalibratedFootR_Id, EHumanoidBone::ThighRight, bPredictOnly);
							UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Right thigh calibrated to: %d"), CalibratedFootR_Id);
						}
						else if (!ForcedBones.Contains(EHumanoidBone::CalfRight))
						{
							InitializeTracker(CalibratedFootR_Id, EHumanoidBone::CalfRight, bPredictOnly);
							UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Right calf calibrated to: %d"), CalibratedFootR_Id);
						}

						// update foot right
						InitializeTracker(id, EHumanoidBone::FootRight, bPredictOnly);
						UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Right foot calibrated to: %d"), id);
						CalibratedFootR_Id = id; CalibratedFootR = loc;
					}
					else
					{
						// leg right
						if (FMath::Abs(LocalPelvisLocZ - loc.Z) < FMath::Abs(LocalFootLocZ - loc.Z)
							&& !ForcedBones.Contains(EHumanoidBone::ThighRight))
						{
							InitializeTracker(id, EHumanoidBone::ThighRight, bPredictOnly);
							UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Right thigh calibrated to: %d"), id);
						}
						else if (!ForcedBones.Contains(EHumanoidBone::CalfRight))
						{
							InitializeTracker(id, EHumanoidBone::CalfRight, bPredictOnly);
							UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Right calf calibrated to: %d"), id);
						}
					}
				}
			}
			else
			{
				if (CalibratedFootL_Id == INDEX_NONE)
				{
					// right foot
					InitializeTracker(id, EHumanoidBone::FootLeft, bPredictOnly);
					CalibratedFootL_Id = id; CalibratedFootL = loc;
					UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Left foot calibrated to: %d"), id);
				}
				else
				{
					if (CalibratedFootL.Z > loc.Z)
					{
						// leg right
						if (FMath::Abs(LocalPelvisLocZ - CalibratedFootL.Z) < FMath::Abs(LocalFootLocZ - CalibratedFootL.Z)
							&& !ForcedBones.Contains(EHumanoidBone::ThighLeft))
						{
							InitializeTracker(CalibratedFootL_Id, EHumanoidBone::ThighLeft, bPredictOnly);
							UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Left thigh calibrated to: %d"), CalibratedFootL_Id);
						}
						else if (!ForcedBones.Contains(EHumanoidBone::CalfLeft))
						{
							InitializeTracker(CalibratedFootL_Id, EHumanoidBone::CalfLeft, bPredictOnly);
							UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Left calf calibrated to: %d"), CalibratedFootL_Id);
						}

						// update foot right
						InitializeTracker(id, EHumanoidBone::FootLeft, bPredictOnly);
						CalibratedFootL_Id = id; CalibratedFootL = loc;
						UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Left foot calibrated to: %d"), id);
					}
					else
					{
						// leg right
						if (FMath::Abs(LocalPelvisLocZ - loc.Z) < FMath::Abs(LocalFootLocZ - loc.Z)
							&& !ForcedBones.Contains(EHumanoidBone::ThighLeft))
						{
							InitializeTracker(id, EHumanoidBone::ThighLeft, bPredictOnly);
							UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Left thigh calibrated to: %d"), id);
						}
						else if (!ForcedBones.Contains(EHumanoidBone::CalfLeft))
						{
							InitializeTracker(id, EHumanoidBone::CalfLeft, bPredictOnly);
							UE_LOG(LogCaptureDevice, Log, TEXT("CalibrateBones. Left calf calibrated to: %d"), id);
						}
					}
				}
			}
		}
	}

	// 2. Calculate offset to bone for each tracker
	if (bPredictOnly)
	{
		return;
	}

	bHasPelvis = bHasRibcage = bHasThighR = bHasCalfR = bHasFootR = bHasThighL = false;
	bHasCalfL = bHasFootL = bHasUpperarmR = bHasForearmR = bHasUpperarmL = bHasForearmL = false;

	for (auto& tracker : TrackersData)
	{
		if (SkeletonBonesMap.Contains(tracker.Value.Bone))
		{
			FTransform wTracker;
			// get bone transform
			FTransform wBone = BodyMesh->GetSocketTransform(SkeletonBonesMap[tracker.Value.Bone], ERelativeTransformSpace::RTS_Component) * BodyMesh->GetComponentTransform();

			if (bUseComponentsForHandsOnly && (tracker.Key == RIGHTVIRTUALKEY || tracker.Key == LEFTVIRTUALKEY))
			{
				if (tracker.Key == RIGHTVIRTUALKEY)
				{
					GetVRTrackerPosition(RightHandLowerarmId, loc, rot);
					wTracker.SetRotation(UKismetMathLibrary::MakeRotFromXY(RightHandForwardVector(wBone.Rotator()), RightHandInsideVector(wBone.Rotator())).Quaternion());
				}
				else if (tracker.Key == LEFTVIRTUALKEY)
				{
					GetVRTrackerPosition(LeftHandLowerarmId, loc, rot);
					wTracker.SetRotation(UKismetMathLibrary::MakeRotFromXY(LeftHandForwardVector(wBone.Rotator()), LeftHandInsideVector(wBone.Rotator())).Quaternion());
				}

				wTracker.SetTranslation(wBone.GetTranslation());
				tracker.Value.RelativeOffset = wBone.GetRelativeTransform(wTracker);

				if (bIsLocal && GetIsReplicated())
				{
					ServerInitializeTrackerBone(tracker.Key, tracker.Value.Bone, tracker.Value.RelativeOffset);
				}

				continue;
			}

			// Should I remove scale?
			// wBone.SetScale3D(FVector::OneVector);

			if (tracker.Value.Bone == EHumanoidBone::Head && bUseVRHeadsetForHead)
			{
				wTracker = iGetHeadTransform(false) * ActorTransform;
			}
			else
			{

				GetVRTrackerPosition(tracker.Key, loc, rot);
				wTracker = FTransform(rot, loc) * ActorTransform;
			}

			// get transform of bone relative to tracking deivce
			tracker.Value.RelativeOffset = wBone.GetRelativeTransform(wTracker);

			// set flag
			if (tracker.Value.Bone == EHumanoidBone::Pelvis) bHasPelvis = true;
			else if (tracker.Value.Bone == EHumanoidBone::Ribcage) bHasRibcage = true;
			else if (tracker.Value.Bone == EHumanoidBone::ThighRight) bHasThighR = true;
			else if (tracker.Value.Bone == EHumanoidBone::CalfRight) bHasCalfR = true;
			else if (tracker.Value.Bone == EHumanoidBone::FootRight) bHasFootR = true;
			else if (tracker.Value.Bone == EHumanoidBone::ThighLeft) bHasThighL = true;
			else if (tracker.Value.Bone == EHumanoidBone::CalfLeft) bHasCalfL = true;
			else if (tracker.Value.Bone == EHumanoidBone::FootLeft) bHasFootL = true;
			else if (tracker.Value.Bone == EHumanoidBone::UpperarmRight) bHasUpperarmR = true;
			else if (tracker.Value.Bone == EHumanoidBone::ForearmRight) bHasForearmR = true;
			else if (tracker.Value.Bone == EHumanoidBone::UpperarmLeft) bHasUpperarmL = true;
			else if (tracker.Value.Bone == EHumanoidBone::ForearmLeft) bHasForearmL = true;
			else if (tracker.Value.Bone == EHumanoidBone::ShoulderRight) bHasShoulderR = true;
			else if (tracker.Value.Bone == EHumanoidBone::ShoulderLeft) bHasShoulderL = true;

			if (bIsLocal && GetIsReplicated())
			{
				ServerInitializeTrackerBone(tracker.Key, tracker.Value.Bone, tracker.Value.RelativeOffset);
			}
		}
	}

	// initial offsets of collarbones
	if (bHasUpperarmR && !bHasShoulderR)
	{
		CapturedBody.UpperarmRight = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::UpperarmRight]);
		CapturedBody.Ribcage = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::Ribcage]);
		FRotator RShoulder = CalculateShoulderFromUpperarm(EControllerHand::Right, true, false).Rotator();
		RShoulder = RShoulder.GetInverse();
		if (RightHandRotation.ForwardAxis == EAxis::X)
			RShoulder.Roll = 0.f;
		else if (RightHandRotation.ForwardAxis == EAxis::Y)
			RShoulder.Pitch = 0.f;
		else if (RightHandRotation.ForwardAxis == EAxis::Z)
			RShoulder.Yaw = 0.f;

		AddAxisRotation(RShoulder, RightHandRotation.HorizontalAxis, ClaviclesPitchOffset * RightHandRotation.RightDirection);

		RightShoulderRotatorOffset = FTransform(RShoulder);
	}
	if (bHasUpperarmL && !bHasShoulderL)
	{
		CapturedBody.UpperarmLeft = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::UpperarmLeft]);
		CapturedBody.Ribcage = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::Ribcage]);
		FRotator RShoulder = CalculateShoulderFromUpperarm(EControllerHand::Left, true, false).Rotator();
		RShoulder = RShoulder.GetInverse();
		if (LeftHandRotation.ForwardAxis == EAxis::X)
			RShoulder.Roll = 0.f;
		else if (LeftHandRotation.ForwardAxis == EAxis::Y)
			RShoulder.Pitch = 0.f;
		else if (LeftHandRotation.ForwardAxis == EAxis::Z)
			RShoulder.Yaw = 0.f;

		AddAxisRotation(RShoulder, LeftHandRotation.HorizontalAxis, ClaviclesPitchOffset * LeftHandRotation.ExternalDirection * -1.f);

		LeftShoulderRotatorOffset = FTransform(RShoulder);
	}

	// Restore default position of the mesh
	BodyMesh->SetRelativeLocationAndRotation(FVector::ZeroVector, FRotator::ZeroRotator);
	BodyMesh->SetRelativeScale3D(FVector::OneVector);

	// networking replication
	if (bIsLocal && GetIsReplicated())
	{
		ServerUpdateMeshScale(fUpperarmLength, fForearmLength, fThighLength, fCalfLength, fShoulderLength, RightShoulderRotatorOffset.Rotator(), LeftShoulderRotatorOffset.Rotator(), MeshScale);
	}

	// Save trackers relations in T-pose
	CollectTrackerRelationsInTPose();

	bIsCalibrated = true;
}

FRotator UCaptureDevice::PredictCollarboneDefaultOffset(EControllerHand Hand)
{
	FRotator RShoulder;
	if (Hand == EControllerHand::Right)
	{
		CapturedBody.UpperarmRight = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::UpperarmRight]);
		CapturedBody.Ribcage = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::Ribcage]);
		RShoulder = CalculateShoulderFromUpperarm(EControllerHand::Right, true, false).Rotator();
		RShoulder = RShoulder.GetInverse();
		if (RightHandRotation.ForwardAxis == EAxis::X)
			RShoulder.Roll = 0.f;
		else if (RightHandRotation.ForwardAxis == EAxis::Y)
			RShoulder.Pitch = 0.f;
		else if (RightHandRotation.ForwardAxis == EAxis::Z)
			RShoulder.Yaw = 0.f;
	}
	else
	{
		CapturedBody.UpperarmLeft = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::UpperarmLeft]);
		CapturedBody.Ribcage = BodyMesh->GetSocketTransform(SkeletonBonesMap[EHumanoidBone::Ribcage]);
		RShoulder = CalculateShoulderFromUpperarm(EControllerHand::Left, true, false).Rotator();
		RShoulder = RShoulder.GetInverse();
		if (LeftHandRotation.ForwardAxis == EAxis::X)
			RShoulder.Roll = 0.f;
		else if (LeftHandRotation.ForwardAxis == EAxis::Y)
			RShoulder.Pitch = 0.f;
		else if (LeftHandRotation.ForwardAxis == EAxis::Z)
			RShoulder.Yaw = 0.f;
	}
	return RShoulder;
}

// Save a bone associated to tracker and update actor's label (via Tag)
void UCaptureDevice::InitializeTracker(uint8 Index, EHumanoidBone Bone, bool bSaveInPrivateArray, bool bAllowShared)
{
	if (bSaveInPrivateArray)
	{
		if (TempTrackersData.Contains(Index))
		{
			if (TempTrackersData[Index].Bone != Bone) {
				TempTrackersData[Index].Bone = Bone;
				TempTrackersData[Index].RelativeOffset = FTransform::Identity;
			}
		}
		else {
			FTrackerSetup tr;
			tr.Bone = Bone;
			tr.RelativeOffset = FTransform::Identity;
			TempTrackersData.Add(Index, tr);
		}
	}
	else
	{
		FTrackerSetup* ExistingTracker = TrackersData.Find(Index);
		if (ExistingTracker)
		{
			if (ExistingTracker->Bone != Bone)
			{
				ExistingTracker->Bone = Bone;
				ExistingTracker->RelativeOffset = FTransform::Identity;
				ExistingTracker->Frames[0] = TrackersData[Index].Frames[1] = TrackersData[Index].Frames[2] = FTransform::Identity;
			}
		}
		else
		{
			FTrackerSetup tr;
			tr.Bone = Bone;
			tr.RelativeOffset = FTransform::Identity;
			tr.Frames[0] = tr.Frames[1] = tr.Frames[2] = FTransform::Identity;
			TrackersData.Add(Index, tr);
		}
	}

	if (bAllowShared)
	{
		int32 OtherIndex = INDEX_NONE;
		for (auto& Tr : TrackersData)
		{
			if (Tr.Value.Bone == Bone && Tr.Key != Index)
			{
				OtherIndex = Tr.Key;
				Tr.Value.OtherBoneTracker = Index;
			}
		}
		TrackersData[Index].OtherBoneTracker = OtherIndex;
	}
}

// Enable/Disabe capturing body. Do not confuse is with an animation recording (see BP_CapturePawn).
void UCaptureDevice::ToggleCapture(bool IsEnabled, bool bForceUpdate)
{
	if (bIsCapturing == IsEnabled && !bForceUpdate)
	{
		return;
	}
	if (!bIsInitialized)
	{
		return;
	}

	if (IsEnabled && FullSpineBones.Num() == 0)
	{
		UpdateSkeletonSetup();
	}
	bIsCapturing = IsEnabled;
	SetComponentTickEnabled(bIsCapturing);

	if (GetIsReplicated())
	{
		if (GetWorld()->IsServer())
		{
			// only called on server
			Clients_ToggleCapture(IsEnabled);
		}
		else
		{
			// send to server
			ServerToggleCapture(IsEnabled);
		}
	}
}

// Tracker's bone-to-device transform update for manual calibration
void UCaptureDevice::UpdateTrackerTransform(uint8 TrackerId, FTransform Offset)
{
	if (bIsLocal)
	{
		Offset.SetScale3D(FVector::OneVector);

		if (FTrackerSetup* TrackerData = TrackersData.Find(TrackerId))
		{
			TrackerData->RelativeOffset = Offset;
			if (GetIsReplicated()) ServerUpdateTrackerBone(TrackerId, TrackerData->Bone, Offset);
		}
	}
}

// Tracker's bone update for manual calibration
EHumanoidBone UCaptureDevice::UpdateTrackerBone(uint8 TrackerId, FName BoneName)
{
	if (bIsLocal && TrackersData.Contains(TrackerId))
	{
		EHumanoidBone newbone = iNameAsBone(BoneName);

		SetBoneFlag(TrackersData[TrackerId].Bone, false);
		SetBoneFlag(newbone, true);
		TrackersData[TrackerId].Bone = newbone;

		if (GetIsReplicated()) ServerUpdateTrackerBone(TrackerId, TrackersData[TrackerId].Bone, TrackersData[TrackerId].RelativeOffset);

		return newbone;
	}
	else
	{
		return EHumanoidBone::Root;
	}
}

// Helper function. Updates flag marking if we have (or not) tracker for the bone
void UCaptureDevice::SetBoneFlag(EHumanoidBone Bone, bool IsActive)
{
	switch (Bone) {
	case EHumanoidBone::Pelvis:
		bHasPelvis = IsActive; break;
	case EHumanoidBone::Ribcage:
		bHasRibcage = IsActive; break;
	case EHumanoidBone::ThighRight:
		bHasThighR = IsActive; break;
	case EHumanoidBone::CalfRight:
		bHasCalfR = IsActive; break;
	case EHumanoidBone::FootRight:
		bHasFootR = IsActive; break;
	case EHumanoidBone::ThighLeft:
		bHasThighL = IsActive; break;
	case EHumanoidBone::CalfLeft:
		bHasCalfL = IsActive; break;
	case EHumanoidBone::FootLeft:
		bHasFootL = IsActive; break;
	case EHumanoidBone::ShoulderRight:
		bHasShoulderR = IsActive; break;
	case EHumanoidBone::UpperarmRight:
		bHasUpperarmR = IsActive; break;
	case EHumanoidBone::ForearmRight:
		bHasForearmR = IsActive; break;
	case EHumanoidBone::ShoulderLeft:
		bHasShoulderL = IsActive; break;
	case EHumanoidBone::UpperarmLeft:
		bHasUpperarmL = IsActive; break;
	case EHumanoidBone::ForearmLeft:
		bHasForearmL = IsActive; break;
	}
}

// Calculate spine bones between pelvis and ribcage by cubic bezier curve
// The coefficient of length variable (SpineBendingMultiplier = .35f) is empirical.
void UCaptureDevice::CalculateSpine(const FTransform& Start, FTransform& End, TArray<FAdditionalBoneState>& ResultTransforms, bool bRibcageEffector)
{
	FVector Points[4];
	TArray<FVector> ResultPoints;

	// start and end
	Points[0] = Start.GetTranslation();
	Points[3] = End.GetTranslation();

	// direction points
	const float length = FVector::Dist(Points[0], Points[3]) * SpineBendingMultiplier;
	Points[1] = Start.GetTranslation() + PelvisUpVector(Start.Rotator()) * length;
	if (bRibcageEffector)
		Points[2] = End.GetTranslation() - RibcageUpVector(End.Rotator()) * length;
	else
		Points[2] = End.GetTranslation() - HeadUpVector(End.Rotator()) * length;

	// number of points to calculate (including start and end)
	int BonesNum = ResultTransforms.Num() + 2;
	FVector::EvaluateBezier(Points, BonesNum, ResultPoints);

	for (int32 i = 0; i < BonesNum - 2; i++)
	{
		FVector DirectionY;
		FTransform NewRelativeOffset = ResultTransforms[i].RelativeOffset;

		if (i == 0)
		{
			ResultTransforms[i].WorldTransform = NewRelativeOffset * Start;
			DirectionY = PelvisRightVector(Start.Rotator());

			if (bDrawDebugGeometry)
			{
				DrawDebugSphere(GetWorld(), ResultTransforms[i].WorldTransform.GetTranslation(), 5.f, 4, FColor::Yellow, false, 0.5f, 0, 0.5f);
				DrawDebugLine(GetWorld(), Start.GetTranslation(), ResultTransforms[i].WorldTransform.GetTranslation(), FColor::Yellow, false, 0.5f, 0, 0.5f);
			}
		}
		else
		{
			ResultTransforms[i].WorldTransform = NewRelativeOffset * ResultTransforms[i - 1].WorldTransform;
			DirectionY = PelvisRightVector(ResultTransforms[i].WorldTransform.Rotator());

			if (bDrawDebugGeometry)
			{
				DrawDebugSphere(GetWorld(), ResultTransforms[i].WorldTransform.GetTranslation(), 5.f, 4, FColor::Yellow, false, 0.5f, 0, 0.5f);
				DrawDebugLine(GetWorld(), ResultTransforms[i - 1].WorldTransform.GetTranslation(), ResultTransforms[i].WorldTransform.GetTranslation(), FColor::Yellow, false, 0.5f, 0, 0.5f);
			}
		}

		FVector DirectionX = ResultPoints[i + 2] - ResultPoints[i + 1];
		DirectionX.Normalize();

		const FRotator r = MakeRotByTwoAxes(PelvisRotation.ForwardAxis, DirectionX * PelvisRotation.ForwardDirection, PelvisRotation.HorizontalAxis, DirectionY * PelvisRotation.RightDirection);
		ResultTransforms[i].WorldTransform.SetRotation(r.Quaternion());
	}

	// RelativeRibcageOffset is local transform of ribcage bone relative to previous bone
	if (bRibcageEffector)
	{
		// last bone is ribcage, not head
		End.SetTranslation((RelativeRibcageOffset * ResultTransforms.Last().WorldTransform).GetTranslation());
	}
}

// Helper function. Get EHumanoidBone bone by current skeleton's bone name
FORCEINLINE EHumanoidBone UCaptureDevice::iNameAsBone(FName BoneName)
{
	EHumanoidBone r = EHumanoidBone::Root;
	for (const auto& bone : SkeletonBonesMap) {
		if (bone.Value == BoneName) {
			r = bone.Key;
			break;
		}
	}
	return r;
}

FORCEINLINE FTransform UCaptureDevice::iGetHeadTransform(bool bWorldScale, bool bForceUseHeadset)
{
	FVector loc;
	FRotator rot;

	if (bIsLocal)
	{
		if (bUseVRHeadsetForHead || bForceUseHeadset)
		{
			UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(rot, loc);

			if (bWorldScale) {
				return FTransform(rot, loc, FVector::OneVector) * GetOwner()->GetActorTransform();
			}
			else {
				return FTransform(rot, loc, FVector::OneVector);
			}
		}
		else
		{
			GetVRTrackerPosition(HeadTrackerId, loc, rot);
			return FTransform(rot, loc, (FVector)1);
		}
	}
	else
	{
		return NT_Head;
	}
}

// Helper function. Returns text descrition of a bone
FName UCaptureDevice::BoneToName(EHumanoidBone Bone)
{
	switch (Bone) {
	case EHumanoidBone::Pelvis:
		return FName(TEXT("pelvis"));
	case EHumanoidBone::Ribcage:
		return FName(TEXT("ribcage"));
	case EHumanoidBone::ThighRight:
		return FName(TEXT("thigh r"));
	case EHumanoidBone::CalfRight:
		return FName(TEXT("calf r"));
	case EHumanoidBone::FootRight:
		return FName(TEXT("foot r"));
	case EHumanoidBone::ThighLeft:
		return FName(TEXT("thigh l"));
	case EHumanoidBone::CalfLeft:
		return FName(TEXT("calf l"));
	case EHumanoidBone::FootLeft:
		return FName(TEXT("foot l"));
	case EHumanoidBone::ShoulderRight:
		return FName(TEXT("clavicle r"));
	case EHumanoidBone::UpperarmRight:
		return FName(TEXT("upperarm r"));
	case EHumanoidBone::ForearmRight:
		return FName(TEXT("lowerarm r"));
	case EHumanoidBone::PalmRight:
		return FName(TEXT("hand r"));
	case EHumanoidBone::ShoulderLeft:
		return FName(TEXT("clavicle l"));
	case EHumanoidBone::UpperarmLeft:
		return FName(TEXT("upperarm l"));
	case EHumanoidBone::ForearmLeft:
		return FName(TEXT("lowerarm l"));
	case EHumanoidBone::PalmLeft:
		return FName(TEXT("hand l"));
	case EHumanoidBone::Head:
		return FName(TEXT("head"));
	case EHumanoidBone::HMD:
		return FName(TEXT("hmd"));
	case EHumanoidBone::MotionControllerRight:
		return FName(TEXT("ctrlRight"));
	case EHumanoidBone::MotionControllerLeft:
		return FName(TEXT("ctrlLeft"));
	default:
		return FName(TEXT("unknown"));
	}
}

// Helper function. Update bone transform in the output struct
FORCEINLINE bool UCaptureDevice::iSetCapturedBoneValue(EHumanoidBone Bone, FTransform NewTransform)
{
	switch (Bone) {
	case EHumanoidBone::Head: CapturedBody.Head = NewTransform; break;
	case EHumanoidBone::Pelvis: CapturedBody.Pelvis = NewTransform; break;
	case EHumanoidBone::Ribcage: CapturedBody.Ribcage = NewTransform; break;
	case EHumanoidBone::ThighRight: CapturedBody.ThighRight = NewTransform; break;
	case EHumanoidBone::CalfRight: CapturedBody.CalfRight = NewTransform; break;
	case EHumanoidBone::FootRight: CapturedBody.FootRight = NewTransform; break;
	case EHumanoidBone::ThighLeft: CapturedBody.ThighLeft = NewTransform; break;
	case EHumanoidBone::CalfLeft: CapturedBody.CalfLeft = NewTransform; break;
	case EHumanoidBone::FootLeft: CapturedBody.FootLeft = NewTransform; break;
	case EHumanoidBone::ShoulderRight: CapturedBody.ShoulderRight = NewTransform; break;
	case EHumanoidBone::UpperarmRight: CapturedBody.UpperarmRight = NewTransform; break;
	case EHumanoidBone::ForearmRight: CapturedBody.ForearmRight = NewTransform; break;
	case EHumanoidBone::PalmRight: CapturedBody.PalmRight = NewTransform; break;
	case EHumanoidBone::ShoulderLeft: CapturedBody.ShoulderLeft = NewTransform; break;
	case EHumanoidBone::UpperarmLeft: CapturedBody.UpperarmLeft = NewTransform; break;
	case EHumanoidBone::ForearmLeft: CapturedBody.ForearmLeft = NewTransform; break;
	case EHumanoidBone::PalmLeft: CapturedBody.PalmLeft = NewTransform; break;
	case EHumanoidBone::Root: CapturedBody.Root = NewTransform; break;
	}
	return true;
}

// Helper function. Returns bone transform from the output struct by EHumanoidBone value
FORCEINLINE FTransform UCaptureDevice::iGetCapturedBoneValue(EHumanoidBone Bone)
{
	FVector loc; FRotator rot;
	switch (Bone) {
	case EHumanoidBone::Head: return CapturedBody.Head;
	case EHumanoidBone::Pelvis: return CapturedBody.Pelvis;
	case EHumanoidBone::Ribcage: return CapturedBody.Ribcage;
	case EHumanoidBone::ThighRight: return CapturedBody.ThighRight;
	case EHumanoidBone::CalfRight: return CapturedBody.CalfRight;
	case EHumanoidBone::FootRight: return CapturedBody.FootRight;
	case EHumanoidBone::ThighLeft: return CapturedBody.ThighLeft;
	case EHumanoidBone::CalfLeft: return CapturedBody.CalfLeft;
	case EHumanoidBone::FootLeft: return CapturedBody.FootLeft;
	case EHumanoidBone::ShoulderRight: return CapturedBody.ShoulderRight;
	case EHumanoidBone::UpperarmRight: return CapturedBody.UpperarmRight;
	case EHumanoidBone::ForearmRight: return CapturedBody.ForearmRight;
	case EHumanoidBone::PalmRight: return CapturedBody.PalmRight;
	case EHumanoidBone::ShoulderLeft: return CapturedBody.ShoulderLeft;
	case EHumanoidBone::UpperarmLeft: return CapturedBody.UpperarmLeft;
	case EHumanoidBone::ForearmLeft: return CapturedBody.ForearmLeft;
	case EHumanoidBone::PalmLeft: return CapturedBody.PalmLeft;
	case EHumanoidBone::Root: return CapturedBody.Root;
	case EHumanoidBone::HMD: return iGetHeadTransform(true);
	case EHumanoidBone::MotionControllerRight:
		GetVRHandPosition(EControllerHand::Right, loc, rot);
		return FTransform(rot, loc) * GetOwner()->GetActorTransform();
	case EHumanoidBone::MotionControllerLeft:
		GetVRHandPosition(EControllerHand::Left, loc, rot);
		return FTransform(rot, loc) * GetOwner()->GetActorTransform();
	default:
		if ((uint8)Bone > (uint8)EHumanoidBone::_TrackedDevices)
		{
			uint8 DeviceNumber = (uint8)Bone - (uint8)EHumanoidBone::_TrackedDevices - 1;

			if (USceneComponent** TrackerCompPtr = SocketTrackers.Find(DeviceNumber))
			{
				USceneComponent* TrackerComp = *TrackerCompPtr;

				if (IsValid(TrackerComp))
				{
					const FTransform tr = TrackerComp->GetRelativeTransform();
					loc = tr.GetTranslation();
					rot = tr.Rotator();
				}
				else
				{
					GetVRTrackerPositionByNumber(DeviceNumber, loc, rot);
				}
			}
			else
			{
				GetVRTrackerPositionByNumber(DeviceNumber, loc, rot);
			}
			return FTransform(rot, loc) * GetOwner()->GetActorTransform();
		}
		else
		{
			return CapturedBody.Pelvis;
		}
	}
}

// Math. Calculate IK transforms for two-bone chain.
// Need to be refactored to consider skeleton bones orientation!
void UCaptureDevice::CalculateTwoBoneIK(
	const FVector& ChainStart, const FVector& ChainEnd,
	const FVector& JointTarget,
	const float UpperBoneSize, const float LowerBoneSize,
	FTransform& UpperBone, FTransform& LowerBone,
	FVMK_BoneRotatorSetup& LimbSpace, bool bDebug, bool bInvertBending)
{
	const float DirectSize = FVector::Dist(ChainStart, ChainEnd);
	const float DirectSizeSquared = DirectSize * DirectSize;
	const float a = UpperBoneSize * UpperBoneSize;
	const float b = LowerBoneSize * LowerBoneSize;

	// 1) upperbone and lowerbone plane angles
	float Angle1 = FMath::RadiansToDegrees(FMath::Acos((DirectSizeSquared + a - b) / (2.f * UpperBoneSize * DirectSize)));
	float Angle2 = FMath::RadiansToDegrees(FMath::Acos((a + b - DirectSizeSquared) / (2.f * UpperBoneSize * LowerBoneSize)));

	// 2) Find rotation plane
	FTransform ChainPlane = FTransform(ChainStart);
	// upperarm-hand as FORWARD direction
	FVector FrontVec = ChainEnd - ChainStart; FrontVec.Normalize();
	// RIGHT direction
	FVector JointVec = (JointTarget - ChainStart); JointVec.Normalize(); JointVec *= (LimbSpace.RightDirection * LimbSpace.ExternalDirection);
	// (temp: UP direction)
	FVector PlaneNormal = JointVec ^ FrontVec; PlaneNormal.Normalize();
	FVector RightVec = FrontVec ^ PlaneNormal; RightVec.Normalize();
	ChainPlane.SetRotation(MakeRotByTwoAxes(LimbSpace.ForwardAxis, FrontVec * LimbSpace.ForwardDirection, LimbSpace.HorizontalAxis, RightVec * LimbSpace.RightDirection).Quaternion());

	// direction to joint target at the rotation plane
	float RotationDirection;
	if (LimbSpace.VerticalAxis == EAxis::Z) {
		RotationDirection = LimbSpace.UpDirection * LimbSpace.ExternalDirection * LimbSpace.RightDirection;
	}
	else {
		RotationDirection = -LimbSpace.UpDirection * LimbSpace.ExternalDirection * LimbSpace.RightDirection;
	}
	if (bInvertBending) RotationDirection *= -1.f;

	// 3) upper bone
	FRotator RotUpperbone = FRotator::ZeroRotator;
	SetAxisRotation(RotUpperbone, LimbSpace.VerticalAxis, Angle1 * RotationDirection);
	UpperBone = FTransform(RotUpperbone, FVector::ZeroVector) * ChainPlane;
	UpperBone.SetTranslation(ChainStart);

	// 4) lower bone
	ChainPlane = FTransform(UpperBone.GetRotation(), UpperBone.GetTranslation() + RotatorDirection(UpperBone.Rotator(), LimbSpace.ForwardAxis) * LimbSpace.ForwardDirection * UpperBoneSize);
	SetAxisRotation(RotUpperbone, LimbSpace.VerticalAxis, (Angle2 - 180.f) * RotationDirection);
	LowerBone = FTransform(RotUpperbone, FVector::ZeroVector) * ChainPlane;
	LowerBone.SetTranslation(ChainStart + UpperBone.GetRotation().GetForwardVector() * LimbSpace.ForwardDirection  * UpperBoneSize);

	if (bDebug)
	{
		FVector loc = LowerBone.GetTranslation();
		DrawDebugLine(GetWorld(), ChainStart, loc, FColor::Yellow, false, 0.1f, 0, 0.5f);
		DrawDebugLine(GetWorld(), ChainEnd, loc, FColor::Yellow, false, 0.1f, 0, 0.5f);
		DrawDebugSphere(GetWorld(), loc, 4.f, 4, FColor::Yellow, false, 0.1f, 0, 0.5f);
		DrawDebugSphere(GetWorld(), ChainEnd, 4.f, 4, FColor::Yellow, false, 0.1f, 0, 0.5f);

		FVector UpperForward = FRotationMatrix(UpperBone.Rotator()).GetScaledAxis(LimbSpace.ForwardAxis) * LimbSpace.ForwardDirection;
		FVector LowerForward = FRotationMatrix(LowerBone.Rotator()).GetScaledAxis(LimbSpace.ForwardAxis) * LimbSpace.ForwardDirection;

		DrawDebugLine(GetWorld(), ChainStart, ChainStart + UpperForward * 20.f, FColor::Green, false, 0.1f, 0, 1.5f);
		DrawDebugLine(GetWorld(), loc, loc + LowerForward * 20.f, FColor::Green, false, 0.1f, 0, 1.5f);
	}
}

/** Calculating two bone ik for skeleton with bones in component-space */
void UCaptureDevice::CalculateTwoBoneIK_CS(const FVector& ChainStart, const FVector& ChainEnd, const FVector& JointTarget, const float UpperBoneSize, const float LowerBoneSize, FTransform& UpperBone, FTransform& LowerBone, bool bSide, bool bIsHand, bool bInvertBending)
{
	const float DirectSize = FVector::Dist(ChainStart, ChainEnd);
	const float DirectSizeSquared = DirectSize * DirectSize;
	const float a = UpperBoneSize * UpperBoneSize;
	const float b = LowerBoneSize * LowerBoneSize;

	FTransform FirstTr, SecondTr;
	float ExternalMul = 1.f;
	if (bSide /* is right */)
	{
		if (bIsHand)
		{
			/* BonesCS contains transforms of bones relative to transforms of generic skeleton (X = Limb Forward, Y = Limb Right) */
			FirstTr = BonesCS.UpperarmRight;
			SecondTr = BonesCS.LowerarmRight;
		}
		else /* is leg */
		{
			FirstTr = BonesCS.ThighRight;
			SecondTr = BonesCS.CalfRight;
		}
	}
	else  /*if side is left */
	{
		if (bIsHand)
		{
			FirstTr = BonesCS.UpperarmLeft;
			SecondTr = BonesCS.LowerarmLeft;
			ExternalMul = -1.f;
		}
		else /* is leg */
		{
			FirstTr = BonesCS.ThighLeft;
			SecondTr = BonesCS.CalfLeft;
		}
	}

	// 1) upperbone and lowerbone plane angles
	float Angle1 = FMath::RadiansToDegrees(FMath::Acos((DirectSizeSquared + a - b) / (2.f * UpperBoneSize * DirectSize)));
	float Angle2 = FMath::RadiansToDegrees(FMath::Acos((a + b - DirectSizeSquared) / (2.f * UpperBoneSize * LowerBoneSize)));

	// 2) Find rotation plane
	FTransform ChainPlane = FTransform(ChainStart);
	// upperarm-hand as FORWARD direction
	FVector FrontVec = ChainEnd - ChainStart; FrontVec.Normalize();
	// RIGHT direction
	FVector JointVec = (JointTarget - ChainStart); JointVec.Normalize(); JointVec *= ExternalMul;
	// (temp: UP direction)
	FVector PlaneNormal = JointVec ^ FrontVec; PlaneNormal.Normalize();
	FVector RightVec = FrontVec ^ PlaneNormal; RightVec.Normalize();
	ChainPlane.SetRotation(UKismetMathLibrary::MakeRotFromXY(FrontVec, RightVec).Quaternion());

	// direction to joint target at the rotation plane
	float RotationDirection = ExternalMul;
	if (bInvertBending) RotationDirection *= -1.f;

	// 3) upper bone
	FRotator RotUpperbone = FRotator::ZeroRotator;
	RotUpperbone.Yaw = Angle1 * RotationDirection;
	UpperBone = FTransform(RotUpperbone, FVector::ZeroVector) * ChainPlane;
	UpperBone.SetTranslation(ChainStart);

	// 4) lower bone
	ChainPlane = FTransform(UpperBone.GetRotation(), UpperBone.GetTranslation() + UpperBone.GetRotation().GetForwardVector() * UpperBoneSize);
	RotUpperbone.Yaw = (Angle2 - 180.f) * RotationDirection;
	LowerBone = FTransform(RotUpperbone, FVector::ZeroVector) * ChainPlane;
	LowerBone.SetTranslation(ChainStart + UpperBone.GetRotation().GetForwardVector() * UpperBoneSize);

	// Convert to bone space
	UpperBone = FirstTr * UpperBone;
	LowerBone = SecondTr * LowerBone;
}

// Calculate shoulder yaw/pitch offser by palm-to-shoulder distance.
// Used if shoulders aren't tracked and bLockShouldersRotation = false
void UCaptureDevice::CalculateShoulder(EControllerHand Hand)
{
	FTransform Ribcage = CapturedBody.Ribcage;
	FVector ShoulderEnd, HandLoc;
	float HandLength = fUpperarmLength + fForearmLength;

	if (Hand == EControllerHand::Right)
	{
		ShoulderEnd = TranslateToParentTransform(ShoulderToRibcageRight, Ribcage);
		HandLoc = CapturedBody.PalmRight.GetTranslation();
	}
	else
	{
		ShoulderEnd = TranslateToParentTransform(ShoulderToRibcageLeft, Ribcage);
		HandLoc = CapturedBody.PalmLeft.GetTranslation();
	}
	const FRotator RibcageRot = Ribcage.Rotator();
	Ribcage.SetRotation(UKismetMathLibrary::MakeRotFromXZ(RibcageForwardVector(RibcageRot), RibcageUpVector(RibcageRot)).Quaternion());

	FTransform relhand = FTransform(HandLoc).GetRelativeTransform(FTransform(Ribcage.GetRotation(), ShoulderEnd));
	FVector v = relhand.GetTranslation();
	v.Z += 17.f;
	relhand.SetTranslation(v);

	// get coefs by rotation axis
	float ShoulderShiftKoefX = FMath::Clamp(relhand.GetTranslation().X / HandLength, -1.f, 1.f);
	float ShoulderShiftKoefY = FMath::Clamp(-relhand.GetTranslation().Y / HandLength, -1.f, 1.f);
	float ShoulderShiftKoefZ = FMath::Clamp(relhand.GetTranslation().Z / HandLength, -1.f, 1.f);

	ShoulderShiftKoefZ *= (ShoulderShiftKoefZ > 0.f ? ClavicleRotationLimit_PitchUp : ClavicleRotationLimit_PitchDown);
	ShoulderShiftKoefX *= (ShoulderShiftKoefX > 0.f ? ClavicleRotationLimit_YawForward : ClavicleRotationLimit_YawBackward);

	// default calculation for joint-chain oriented skeleton
	if (SkeletonType == ESkeletonBonesOrientation::SBO_Default)
	{
		// Build local rotation based on coeffitiens above and add it to world shoulder rotation
		FRotator addrot;
		if (Hand == EControllerHand::Right)
		{
			FRotator r = FRotator::ZeroRotator;
			FTransform rel_tr = FTransform::Identity;

			float VertCoef = RightHandRotation.VerticalAxis == EAxis::Z ? -1.f : 1.f;
			float HorCoef = RightHandRotation.HorizontalAxis == EAxis::Z ? -1.f : 1.f;

			AddAxisRotation(r, RightHandRotation.VerticalAxis, (ClavicleRotationOffset_Yaw + ShoulderShiftKoefX) * RightHandRotation.UpDirection * VertCoef);
			AddAxisRotation(r, RightHandRotation.HorizontalAxis, (ClavicleRotationOffset_Pitch + ShoulderShiftKoefZ) * RightHandRotation.ExternalDirection * HorCoef);
			rel_tr.SetRotation(r.Quaternion());

			const FTransform w_tr = ShoulderToRibcageRight * CapturedBody.Ribcage;

			CapturedBody.ShoulderRight = rel_tr * w_tr;
		}
		else
		{
			FRotator r = FRotator::ZeroRotator;
			FTransform rel_tr = FTransform::Identity;

			float VertCoef = LeftHandRotation.VerticalAxis == EAxis::Z ? 1.f : -1.f;
			float HorCoef = LeftHandRotation.HorizontalAxis == EAxis::Z ? 1.f : -1.f;

			AddAxisRotation(r, LeftHandRotation.VerticalAxis, (ClavicleRotationOffset_Yaw + ShoulderShiftKoefX) * LeftHandRotation.UpDirection * VertCoef);
			AddAxisRotation(r, LeftHandRotation.HorizontalAxis, (ClavicleRotationOffset_Pitch + ShoulderShiftKoefZ) * LeftHandRotation.ExternalDirection * HorCoef);
			rel_tr.SetRotation(r.Quaternion());

			const FTransform w_tr = ShoulderToRibcageLeft * CapturedBody.Ribcage;

			CapturedBody.ShoulderLeft = rel_tr * w_tr;
		}
	}
	else
	{
		if (Hand == EControllerHand::Right)
		{
			FRotator r = FRotator::ZeroRotator;
			FTransform rel_tr = FTransform::Identity;

			float VertCoef = RightCollarboneRotation.VerticalAxis == EAxis::Z ? -1.f : 1.f;
			float HorCoef = RightCollarboneRotation.HorizontalAxis == EAxis::Z ? -1.f : 1.f;

			AddAxisRotation(r, RightCollarboneRotation.VerticalAxis, (ClavicleRotationOffset_Yaw + ShoulderShiftKoefX) * RightCollarboneRotation.UpDirection * VertCoef);
			AddAxisRotation(r, RightCollarboneRotation.HorizontalAxis, (ClavicleRotationOffset_Pitch + ShoulderShiftKoefZ) * RightCollarboneRotation.ExternalDirection * HorCoef);
			rel_tr.SetRotation(r.Quaternion());

			const FTransform w_tr = ShoulderToRibcageRight * CapturedBody.Ribcage;

			CapturedBody.ShoulderRight = rel_tr * w_tr;
		}
		else
		{
			FRotator r = FRotator::ZeroRotator;
			FTransform rel_tr = FTransform::Identity;

			float VertCoef = LeftCollarboneRotation.VerticalAxis == EAxis::Z ? 1.f : -1.f;
			float HorCoef = LeftCollarboneRotation.HorizontalAxis == EAxis::Z ? 1.f : -1.f;

			AddAxisRotation(r, LeftCollarboneRotation.VerticalAxis, (ClavicleRotationOffset_Yaw + ShoulderShiftKoefX) * LeftCollarboneRotation.UpDirection * VertCoef);
			AddAxisRotation(r, LeftCollarboneRotation.HorizontalAxis, (ClavicleRotationOffset_Pitch + ShoulderShiftKoefZ) * LeftCollarboneRotation.ExternalDirection * HorCoef);
			rel_tr.SetRotation(r.Quaternion());

			const FTransform w_tr = ShoulderToRibcageLeft * CapturedBody.Ribcage;

			CapturedBody.ShoulderLeft = rel_tr * w_tr;
		}
	}
}

void UCaptureDevice::UpdatePoseableMesh(bool bEnableScaling, USkinnedMeshComponent* MeshOverride)
{
	if (!bIsInitialized)
	{
		UE_LOG(LogCaptureDevice, Log, TEXT("[GetSkeletalMeshPose]: Component isn't initialized."));
		return;
	}
	if (!bIsCalibrated)
	{
		return;
	}

	USkinnedMeshComponent* SavedBodyMesh = BodyMesh;
	if (MeshOverride)
	{
		BodyMesh = MeshOverride;
	}

	UPoseableMeshComponent* PoseMesh = Cast<UPoseableMeshComponent>(BodyMesh);
	if (!PoseMesh)
	{
		return;
	}

	GetSkeletalMeshPose(OutPoseSnapshot, bEnableScaling);
	Exchange(PoseMesh->BoneSpaceTransforms, OutPoseSnapshot.LocalTransforms);

	PoseMesh->MarkRefreshTransformDirty();

	if (MeshOverride)
	{
		BodyMesh = SavedBodyMesh;
	}
}

/**
* Function returns (updates) FPoseSnapshot struct used to animate skeletal mesh component in Anim Blueprint
* Use ReturnValue as an input parameter in PoseSnapshot Animation Node.
*/
void UCaptureDevice::GetSkeletalMeshPose(FPoseSnapshot& ReturnValue, bool bEnableScaling)
{
	// can't return PoseSnapshot if skeletal mesh isn't initialized
	if (!bIsInitialized)
	{
		ReturnValue.bIsValid = false;
		UE_LOG(LogCaptureDevice, Log, TEXT("[GetSkeletalMeshPose]: Component isn't initialized."));
		return;
	}
	if (!bIsCalibrated)
	{
		ReturnValue.bIsValid = false;
		return;
	}

	FVector RuntimeMeshScale = MeshScale;
	RuntimeMeshScale.X *= ArmsScaleCoefficient;
	RuntimeMeshScale.Y = RuntimeMeshScale.X;
	RuntimeMeshScale.Z *= HeightScaleCoefficient;

	// references to skeleton data
	const TArray<FTransform>& ComponentSpaceTMs = BodyMesh->GetComponentSpaceTransforms();
	const FReferenceSkeleton& RefSkeleton = BodyMesh->SkeletalMesh->RefSkeleton;
	const TArray<FTransform>& RefPoseSpaceBaseTMs = RefSkeleton.GetRefBonePose();
	const int32 NumSpaceBases = ComponentSpaceTMs.Num();

	// return false if don't have valid mesh
	if (NumSpaceBases == 0)
	{
		UE_LOG(LogCaptureDevice, Log, TEXT("[GetSkeletalMeshPose]: Invalid skeletal mesh."));
		ReturnValue.bIsValid = false;
		return;
	}

	// initialize FPoseSnapshot struct
	ReturnValue.SkeletalMeshName = SkeletalMeshName;
	ReturnValue.bIsValid = true;
	// update arrays size
	ReturnValue.LocalTransforms.Reset(NumSpaceBases);
	ReturnValue.LocalTransforms.AddUninitialized(NumSpaceBases);
	ReturnValue.BoneNames.Reset(NumSpaceBases);
	ReturnValue.BoneNames.AddUninitialized(NumSpaceBases);

	// if need to show ref pose
	if (bShowRefPose)
	{
		BodyMesh->SetWorldLocationAndRotation(FVector::ZeroVector, FRotator(0.f, 0.f, 0.f));

		for (int32 ComponentSpaceIdx = 0; ComponentSpaceIdx < NumSpaceBases; ++ComponentSpaceIdx)
		{
			ReturnValue.BoneNames[ComponentSpaceIdx] = RefSkeleton.GetBoneName(ComponentSpaceIdx);
			ReturnValue.LocalTransforms[ComponentSpaceIdx] = RefPoseSpaceBaseTMs[ComponentSpaceIdx];
		}

		return;
	}

	const FVector CurrentBodyScale = BodyMesh->GetRelativeTransform().GetScale3D();

	FTransform tr_bone, tr_parent;
	FName RootBoneName = SkeletonBonesMap[EHumanoidBone::Root];
	FTransform tr_component = CapturedBody.Root;
	TArray<int32> ScaledBones;
	ScaledBones.SetNum(3);

	// get component transform
	tr_component.SetRotation(ComponentRotation.Quaternion());

	BodyMesh->SetWorldTransform(FTransform(ComponentRotation, tr_component.GetTranslation()));
	tr_component = BodyMesh->GetComponentTransform();
	tr_component.SetScale3D(FVector::OneVector);

	// set transform of root bone
	const FName PelvisBoneName = SkeletonBonesMap[EHumanoidBone::Pelvis];
	if (bHasRootBone)
	{
		ReturnValue.BoneNames[0] = SkeletonBonesMap[EHumanoidBone::Root];
		ReturnValue.LocalTransforms[0] = CapturedBody.Root.GetRelativeTransform(tr_component);
	}
	else
	{
		ReturnValue.BoneNames[0] = PelvisBoneName;
		ReturnValue.LocalTransforms[0] = CapturedBody.Pelvis.GetRelativeTransform(tr_component);
	}

	TArray<int32> AttachedSocketBones;

	// in case of additional bone between root and hip
	// sometimes it's easier to add a workaround then to explain user where's his mistake
	int32 StartBoneIndex = 1;
	FTransform PelvisParentTransform = bHasRootBone ? CapturedBody.Root : tr_component;

	// skip dummy bones between root and pelvis
	FName NextBoneName = RefSkeleton.GetBoneName(StartBoneIndex);
	if (bHasRootBone)
	{
		while (NextBoneName != PelvisBoneName)
		{
			ReturnValue.BoneNames[StartBoneIndex] = NextBoneName;
			ReturnValue.LocalTransforms[StartBoneIndex] = RefPoseSpaceBaseTMs[StartBoneIndex];
			NextBoneName = RefSkeleton.GetBoneName(++StartBoneIndex);
			PelvisParentTransform = RefPoseSpaceBaseTMs[StartBoneIndex] * PelvisParentTransform;
		}
	}

	// fore each bone
	for (int32 ComponentSpaceIdx = StartBoneIndex; ComponentSpaceIdx < NumSpaceBases; ++ComponentSpaceIdx)
	{
		// bone name
		const FName BoneName = RefSkeleton.GetBoneName(ComponentSpaceIdx);
		ReturnValue.BoneNames[ComponentSpaceIdx] = BoneName;

		// parent bone index
		const int32 ParentIndex = RefSkeleton.GetParentIndex(ComponentSpaceIdx);
		// get bone transform if bone is evaluated in a UCaptureDevice Component
		bool bBoneHasEvaluated = iGetCalculatedBoneTransform(BoneName, tr_bone);

		// find bone in the list of IK target bones
		const FSocketInfo* SocketBone = bBoneHasEvaluated ? nullptr : SocketsInfo.Find(BoneName);

		// use ref pose if legs wasn't tracked
		if (bBoneHasEvaluated)
		{
			if (!bHasFootR && !bHasCalfR && !bHasThighR)
			{
				if (BoneName == SkeletonBonesMap[EHumanoidBone::FootRight] || BoneName == SkeletonBonesMap[EHumanoidBone::CalfRight] || BoneName == SkeletonBonesMap[EHumanoidBone::ThighRight])
				{
					bBoneHasEvaluated = false;
				}
			}
			if (!bHasFootL && !bHasCalfL && !bHasThighL)
			{
				if (BoneName == SkeletonBonesMap[EHumanoidBone::FootLeft] || BoneName == SkeletonBonesMap[EHumanoidBone::CalfLeft] || BoneName == SkeletonBonesMap[EHumanoidBone::ThighLeft])
				{
					bBoneHasEvaluated = false;
				}
			}
		}

		// updating socket bone
		if (SocketBone != nullptr)
		{
			if (!SocketBone->bIsLocator)
			{
				AttachedSocketBones.Add(ComponentSpaceIdx);
				continue;
			}

			// independent bones are relative to component transform
			tr_bone = SocketBone->CurrentPosition;

			if (iGetCalculatedBoneTransform(SocketBone->RootParentBone, tr_parent))
			{
				tr_parent = SocketBone->OffsetToRootParentBone * tr_parent;
			}
			else
			{
				const FSocketInfo* SocketParentBone = SocketsInfo.Find(SocketBone->RootParentBone);

				if (SocketParentBone != nullptr)
				{
					tr_parent = SocketBone->OffsetToRootParentBone * SocketParentBone->CurrentPosition;
				}
				else
				{
					tr_parent = SocketBone->OffsetToRootParentBone * tr_component;
				}
			}

			ReturnValue.LocalTransforms[ComponentSpaceIdx] = tr_bone.GetRelativeTransform(tr_parent);
		}
		// updating normal bone
		else if (bIsCapturing && bBoneHasEvaluated)
		{
			// get parent bone transform
			if (BoneName == SkeletonBonesMap[EHumanoidBone::Pelvis])
			{
				// no scaling required, use calculated position
				if (!iGetCalculatedBoneTransform(RefSkeleton.GetBoneName(ParentIndex), tr_parent))
				{
					// check parent's parent bone (one-level straight hierarchy for limbis - unwanted usually, but possible)
					if (ParentIndex != INDEX_NONE)
					{
						if (BoneName == SkeletonBonesMap[EHumanoidBone::Pelvis])
						{
							tr_parent = PelvisParentTransform;
						}
						else
						{
							const int32 ParentsParentIndex = RefSkeleton.GetParentIndex(ParentIndex);
							if (ParentsParentIndex != INDEX_NONE && !iGetCalculatedBoneTransform(RefSkeleton.GetBoneName(ParentsParentIndex), tr_parent))
							{
								// if parent bone isn't evaluated use component transform as parent
								tr_parent = tr_component;
							}
						}
					}
				}
			}
			else
			{
				// mesh is scaled, recalculate for current parent bone transform
				tr_parent = iRestoreSkeletonBoneTransform(ReturnValue, RefSkeleton, ComponentSpaceIdx)
					* (bHasRootBone ? CapturedBody.Root : CapturedBody.Pelvis);

				// restore hand IK after scaling
				if (BoneName == SkeletonBonesMap[EHumanoidBone::UpperarmRight])
				{
					// get upperarm world transform

					FTransform ShoulderRight = tr_parent;// CapturedBody.ShoulderRight;
					const FVector SpineScale = GetScaleInDirection(PelvisRotation.ForwardAxis, RuntimeMeshScale.Z);
					const FVector HandScale = ShoulderRightInitScale * GetScaleInDirection(RightHandRotation.ForwardAxis, RuntimeMeshScale.X);
					const FVector From = ShoulderRight.GetTranslation() + ShoulderRight.Rotator().RotateVector(UpperarmToShoulderRight.GetTranslation() * HandScale);

					//const FVector From = BodyMesh->GetSocketLocation(SkeletonBonesMap[EHumanoidBone::UpperarmRight]);
					if (SkeletonType == ESkeletonBonesOrientation::SBO_Default)
					{
						CalculateTwoBoneIK(From,
							CapturedBody.PalmRight.GetTranslation(),							// chain start, chain end
							ElbowTargetRight,													// joint target
							fUpperarmLength * RuntimeMeshScale.X, fForearmLength * RuntimeMeshScale.X,		// upperarm and lowerarm size
							CapturedBody.UpperarmRight, CapturedBody.ForearmRight,				// output transforms
							RightHandRotation,
							false,
							bInvertElbows);														// hand orientation
					}
					else
					{
						CalculateTwoBoneIK_CS(From,
							CapturedBody.PalmRight.GetTranslation(),
							ElbowTargetRight,
							fUpperarmLength * RuntimeMeshScale.X, fForearmLength * RuntimeMeshScale.X,
							CapturedBody.UpperarmRight, CapturedBody.ForearmRight,
							true /*right*/, true /*hand*/, bInvertElbows);
					}

					// avoid stretching
					CapturedBody.PalmRight.SetTranslation(CapturedBody.ForearmRight.GetTranslation() + RightHandForwardVector(CapturedBody.ForearmRight.Rotator()) * fForearmLength);
					tr_bone = CapturedBody.UpperarmRight;
				}
				else if (BoneName == SkeletonBonesMap[EHumanoidBone::UpperarmLeft])
				{
					// get upperarm world transform

					FTransform ShoulderLeft = tr_parent;
					const FVector SpineScale = GetScaleInDirection(PelvisRotation.ForwardAxis, RuntimeMeshScale.Z);
					const FVector HandScale = ShoulderLeftInitScale * GetScaleInDirection(LeftHandRotation.ForwardAxis, RuntimeMeshScale.X);
					const FVector From = ShoulderLeft.GetTranslation() + ShoulderLeft.Rotator().RotateVector(UpperarmToShoulderLeft.GetTranslation() * HandScale);

					if (SkeletonType == ESkeletonBonesOrientation::SBO_Default)
					{
						CalculateTwoBoneIK(From,
							CapturedBody.PalmLeft.GetTranslation(),								// chain start, chain end
							ElbowTargetLeft,													// joint target
							fUpperarmLength * RuntimeMeshScale.X, fForearmLength * RuntimeMeshScale.X,		// upperarm and lowerarm size
							CapturedBody.UpperarmLeft, CapturedBody.ForearmLeft,				// output transforms
							LeftHandRotation,
							false,
							bInvertElbows);														// hand orientation
					}
					else
					{
						CalculateTwoBoneIK_CS(From,
							CapturedBody.PalmLeft.GetTranslation(),
							ElbowTargetLeft,
							fUpperarmLength * RuntimeMeshScale.X, fForearmLength * RuntimeMeshScale.X,
							CapturedBody.UpperarmLeft, CapturedBody.ForearmLeft,
							false /*left*/, true /*hand*/, bInvertElbows);
					}

					// avoid stretching
					CapturedBody.PalmLeft.SetTranslation(CapturedBody.ForearmLeft.GetTranslation() + LeftHandForwardVector(CapturedBody.ForearmLeft.Rotator()) * fForearmLength);
					tr_bone = CapturedBody.UpperarmLeft;
				}
				else if (bLimbsFKSolver)
				{
					if (BoneName == SkeletonBonesMap[EHumanoidBone::ThighRight] && bHasCalfR)
					{
						const FTransform& calf_tr = CapturedBody.CalfRight;
						const FTransform thigh_tr = ThighToPelvisRight * tr_parent;
						const FVector thigh_2_calf = (calf_tr.GetTranslation() - thigh_tr.GetTranslation()).GetSafeNormal();

						tr_bone.SetTranslation(thigh_tr.GetTranslation());
						tr_bone.SetRotation(
							MakeRotByTwoAxes
							(
								RightLegRotation.ForwardAxis, thigh_2_calf * RightLegRotation.ForwardDirection,
								RightLegRotation.VerticalAxis, RightLegRightVector(calf_tr.Rotator()) * RightLegRotation.UpDirection * -1.f
							).Quaternion()
						);

					}
					else if (BoneName == SkeletonBonesMap[EHumanoidBone::ThighLeft] && bHasCalfL)
					{
						const FTransform& calf_tr = CapturedBody.CalfLeft;
						const FTransform thigh_tr = ThighToPelvisLeft * tr_parent;
						const FVector thigh_2_calf = (calf_tr.GetTranslation() - thigh_tr.GetTranslation()).GetSafeNormal();

						tr_bone.SetTranslation(thigh_tr.GetTranslation());
						tr_bone.SetRotation(
							MakeRotByTwoAxes
							(
								LeftLegRotation.ForwardAxis, thigh_2_calf * LeftLegRotation.ForwardDirection,
								LeftLegRotation.VerticalAxis, LeftLegRightVector(calf_tr.Rotator()) * LeftLegRotation.UpDirection * -1.f
							).Quaternion()
						);
					}
				}
			}

			// calc bone transform relative to parent bone
			ReturnValue.LocalTransforms[ComponentSpaceIdx] = tr_bone.GetRelativeTransform(tr_parent);

			// Reset relative translation to default for all bones except pelvis: it moves relative to root bone.
			if (BoneName != SkeletonBonesMap[EHumanoidBone::Pelvis])
			{
				ReturnValue.LocalTransforms[ComponentSpaceIdx].SetTranslation(RefPoseSpaceBaseTMs[ComponentSpaceIdx].GetTranslation());
			}
			else
			{
				const FTransform PelvisTransform = CapturedBody.Pelvis;
				// if scaling is enabled: recalculate pelvis without scale
				if (bDisablePelvisPositionScale && bHasRootBone)
				{
					ReturnValue.LocalTransforms[ComponentSpaceIdx] = PelvisTransform.GetRelativeTransform(PelvisParentTransform);
				}
				else
				{
					ReturnValue.LocalTransforms[ComponentSpaceIdx] = PelvisTransform.GetRelativeTransform(ReturnValue.LocalTransforms[0] * BodyMesh->GetComponentTransform());
				}
			}

			/**/
			if (ComponentSpaceIdx == PelvisBoneIndex)
			{
				FVector PelvisScale = PelvisInitScale * GetScaleInDirection(PelvisRotation.ForwardAxis, RuntimeMeshScale.Z);
				/****/ if (PelvisRotation.ForwardAxis == EAxis::X) {
					PelvisScale.Y *= RuntimeMeshScale.X; PelvisScale.Z *= RuntimeMeshScale.X;
				}
				else if (PelvisRotation.ForwardAxis == EAxis::Y) {
					PelvisScale.X *= RuntimeMeshScale.X; PelvisScale.Z *= RuntimeMeshScale.X;
				}
				else if (PelvisRotation.ForwardAxis == EAxis::Z) {
					PelvisScale.X *= RuntimeMeshScale.X; PelvisScale.Y *= RuntimeMeshScale.X;
				}
				ReturnValue.LocalTransforms[ComponentSpaceIdx].SetScale3D(PelvisScale);
				ScaledBones[0] = ComponentSpaceIdx;
			}
			else if (ComponentSpaceIdx == ShoulderRightIndex)
			{
				const FVector SpineScale = GetScaleInDirection(PelvisRotation.ForwardAxis, RuntimeMeshScale.Z);
				ReturnValue.LocalTransforms[ComponentSpaceIdx].SetScale3D(ShoulderRightInitScale * GetScaleInDirection(RightHandRotation.ForwardAxis, RuntimeMeshScale.X) / SpineScale);
				ScaledBones[1] = ComponentSpaceIdx;
			}
			else if (ComponentSpaceIdx == ShoulderLeftIndex)
			{
				const FVector SpineScale = GetScaleInDirection(PelvisRotation.ForwardAxis, RuntimeMeshScale.Z);
				ReturnValue.LocalTransforms[ComponentSpaceIdx].SetScale3D(ShoulderLeftInitScale * GetScaleInDirection(LeftHandRotation.ForwardAxis, RuntimeMeshScale.X) / SpineScale);
				ScaledBones[2] = ComponentSpaceIdx;
			}
			else
			{
				bool bScaled = false;

				if (bAdjustScaleWithLegFKSolver)
				{
					if (BoneName == SkeletonBonesMap[EHumanoidBone::ThighRight] && bHasCalfR && bHasFootR)
					{
						ReturnValue.LocalTransforms[ComponentSpaceIdx].SetScale3D(RuntimeThighScaleR);
						bScaled = true;
					}
					else if (BoneName == SkeletonBonesMap[EHumanoidBone::CalfRight] && bHasCalfR && bHasFootR)
					{
						ReturnValue.LocalTransforms[ComponentSpaceIdx].SetScale3D(RuntimeCalfScaleR);
						bScaled = true;
					}
					else if (BoneName == SkeletonBonesMap[EHumanoidBone::ThighLeft] && bHasCalfL && bHasFootL)
					{
						ReturnValue.LocalTransforms[ComponentSpaceIdx].SetScale3D(RuntimeThighScaleL);
						bScaled = true;
					}
					else if (BoneName == SkeletonBonesMap[EHumanoidBone::CalfLeft] && bHasCalfL && bHasFootL)
					{
						ReturnValue.LocalTransforms[ComponentSpaceIdx].SetScale3D(RuntimeCalfScaleL);
						bScaled = true;
					}
				}

				if (!bScaled)
				{
					ReturnValue.LocalTransforms[ComponentSpaceIdx].SetScale3D(RefPoseSpaceBaseTMs[ComponentSpaceIdx].GetScale3D());
				}
			}
		}
		else if (RefPoseSpaceBaseTMs.IsValidIndex(ComponentSpaceIdx))
		{
			// check in twist bones map
			const FTwistBone* tb = ActiveTwists.Find(BoneName);

			// use default transform
			ReturnValue.LocalTransforms[ComponentSpaceIdx] = RefPoseSpaceBaseTMs[ComponentSpaceIdx];

			if (tb)
			{
				const float TwistValue = FMath::Clamp(tb->Multiplier * (*tb->TwistSource), -TwistLimit, TwistLimit);

				FRotator NewRot = RefPoseSpaceBaseTMs[ComponentSpaceIdx].Rotator();

				switch (tb->Axis) {
				case EAxis::Type::X: NewRot.Roll += TwistValue; break;
				case EAxis::Type::Y: NewRot.Pitch += TwistValue; break;
				case EAxis::Type::Z: NewRot.Yaw += TwistValue; break;
				}
				ReturnValue.LocalTransforms[ComponentSpaceIdx] = RefPoseSpaceBaseTMs[ComponentSpaceIdx];
				ReturnValue.LocalTransforms[ComponentSpaceIdx].SetRotation(NewRot.Quaternion());
			}
		}
	}

	// unscale mesh with preserved pose
	if (!bEnableScaling)
	{
		for (int32 ComponentSpaceIdx = StartBoneIndex; ComponentSpaceIdx < NumSpaceBases; ++ComponentSpaceIdx)
		{
			// for pelvis, we need to scale translation in accordance with default scale
			if (ComponentSpaceIdx == PelvisBoneIndex)
			{
				const FVector ReScale = PelvisInitScale / ReturnValue.LocalTransforms[ComponentSpaceIdx].GetScale3D();
				ReturnValue.LocalTransforms[ComponentSpaceIdx].ScaleTranslation(ReScale);
			}
			ReturnValue.LocalTransforms[ComponentSpaceIdx].SetScale3D(RefPoseSpaceBaseTMs[ComponentSpaceIdx].GetScale3D());
		}
	}

	// should update fingers?
	if (bFingersInput)
	{
		HandSolverRight->UpdatePoseSnapshot(ReturnValue);
		HandSolverLeft->UpdatePoseSnapshot(ReturnValue);
	}

	// Update socket bones based on final real bones transforms
	for (auto ComponentSpaceIdx : AttachedSocketBones)
	{
		// bone name
		const FName BoneName = RefSkeleton.GetBoneName(ComponentSpaceIdx);
		ReturnValue.BoneNames[ComponentSpaceIdx] = BoneName;

		// parent bone index

		// find bone in the list of IK target bones
		FSocketInfo* SocketBone = SocketsInfo.Find(BoneName);

		// calculate world transform transform
		if (SkeletonBonesMap.Contains(SocketBone->AttachmentBone))
		{
			FName AttachmentBone = SkeletonBonesMap[SocketBone->AttachmentBone];
			int32 TransformIndex = ReturnValue.BoneNames.Find(AttachmentBone);	// index of attachment bone
			int32 ParentIndex = RefSkeleton.GetParentIndex(TransformIndex);		// index of parent bone for attachment bone

			tr_bone = SocketBone->OffsetToBone * ReturnValue.LocalTransforms[TransformIndex];
			while (ParentIndex != INDEX_NONE && ParentIndex != 0) {
				TransformIndex = ParentIndex;
				tr_bone = tr_bone * ReturnValue.LocalTransforms[TransformIndex];

				ParentIndex = RefSkeleton.GetParentIndex(TransformIndex);
			}
			// add root
			tr_bone = tr_bone * CapturedBody.Root;

			// update struct value
			SocketBone->CurrentPosition = tr_bone;
		}
		else
		{
			tr_bone = SocketBone->CurrentPosition;
		}

		tr_parent = iRestoreSkeletonBoneTransform(ReturnValue, RefSkeleton, ComponentSpaceIdx)
			* (bHasRootBone ? CapturedBody.Root : CapturedBody.Pelvis);
		ReturnValue.LocalTransforms[ComponentSpaceIdx] = tr_bone.GetRelativeTransform(tr_parent);
	}
}

bool UCaptureDevice::GetVRHandPosition(EControllerHand Hand, FVector& Location, FRotator& Rotation)
{
	if (bUseComponentsInput)
	{
		const int32 HandIndex = (Hand == EControllerHand::Right) ? RightHandComponentIndex : LeftHandComponentIndex;
		if (!InputComponents.IsValidIndex(HandIndex) || !IsValid(InputComponents[HandIndex]))
		{
			return false;
		}

		const FTransform r = InputComponents[HandIndex]->GetRelativeTransform();
		Location = r.GetTranslation();
		Rotation = r.Rotator();
	}
	else if (bUseComponentsForHandsOnly)
	{
		const int32 HandIndex = (Hand == EControllerHand::Right) ? RightHandComponentIndex : LeftHandComponentIndex;
		if (!InputComponents.IsValidIndex(HandIndex) || !IsValid(InputComponents[HandIndex]))
		{
			return false;
		}

		const int32 LowerarmIndex = (Hand == EControllerHand::Right) ? RightHandLowerarmId : LeftHandLowerarmId;
		USteamVRFunctionLibrary::GetTrackedDevicePositionAndOrientation(LowerarmIndex, Location, Rotation);
		Rotation = InputComponents[RightHandComponentIndex]->GetComponentRotation();
	}
	else
	{
		//USteamVRFunctionLibrary::GetHandPositionAndOrientation(0, Hand, Location, Rotation);

		// Bug: USteamVRFunctionLibrary::GetHandPositionAndOrientation doesn't work
		// Need to use platform-independent IXRMotionController

		TArray<IMotionController*> MotionControllers = IModularFeatures::Get().GetModularFeatureImplementations<IMotionController>(IMotionController::GetModularFeatureName());
		const FName MotionSource = (Hand == EControllerHand::Right ? FXRMotionControllerBase::RightHandSourceId : FXRMotionControllerBase::LeftHandSourceId);
		for (auto MotionController : MotionControllers)
		{
			if (MotionController != nullptr && MotionController->GetControllerOrientationAndPosition(0, MotionSource, Rotation, Location, 100.f))
			{
				return true;
			}
		}

		return false;
	}

	return true;
}

bool UCaptureDevice::GetVRTrackerPosition(int32 TrackerId, FVector& Location, FRotator& Rotation)
{
	if (bUseComponentsInput)
	{
		if (!InputComponents.IsValidIndex(TrackerId) || !IsValid(InputComponents[TrackerId]))
		{
			return false;
		}

		const FTransform r = InputComponents[TrackerId]->GetRelativeTransform();
		Location = r.GetTranslation();
		Rotation = r.Rotator();
	}
	else
	{
		if (TrackerId == HEADKEY && bUseVRHeadsetForHead)
		{
			const FTransform h = iGetHeadTransform(false);
			Location = h.GetTranslation(); Rotation = h.Rotator();
		}
		else if (TrackerId == RIGHTVIRTUALKEY && bUseComponentsForHandsOnly && RightHandLowerarmId != INVALIDKEY)
		{
			FTransform VirtualBoneTr = InputComponents[RightHandComponentIndex]->GetRelativeTransform();

			if (VirtualBoneTr.GetTranslation().IsZero())
			{
				USteamVRFunctionLibrary::GetTrackedDevicePositionAndOrientation(RightHandLowerarmId, Location, Rotation);
				Location = (RightVirtualTrackerOffset * FTransform(Rotation, Location)).GetTranslation();
			}
			else
			{
				Location = VirtualBoneTr.GetTranslation();

				FVector LowerarmLoc; FRotator LowerarmRot;
				USteamVRFunctionLibrary::GetTrackedDevicePositionAndOrientation(RightHandLowerarmId, LowerarmLoc, LowerarmRot);
				RightVirtualTrackerOffset = VirtualBoneTr.GetRelativeTransform(FTransform(LowerarmRot, LowerarmLoc));
			}
			Rotation = VirtualBoneTr.Rotator();

			if (bDrawDebugGeometry)
			{
				DrawDebugLine(GetWorld(), Location, Location + Rotation.Quaternion().GetForwardVector() * 15.f, FColor::Red, false, 0.1f, 0, 0.5f);
				DrawDebugLine(GetWorld(), Location, Location + Rotation.Quaternion().GetRightVector() * 15.f, FColor::Green, false, 0.1f, 0, 0.5f);
			}
		}
		else if (TrackerId == LEFTVIRTUALKEY && bUseComponentsForHandsOnly && LeftHandLowerarmId != INVALIDKEY)
		{
			FTransform VirtualBoneTr = InputComponents[LeftHandComponentIndex]->GetRelativeTransform();

			if (VirtualBoneTr.GetTranslation().IsZero())
			{
				USteamVRFunctionLibrary::GetTrackedDevicePositionAndOrientation(LeftHandLowerarmId, Location, Rotation);
				Location = (LeftVirtualTrackerOffset * FTransform(Rotation, Location)).GetTranslation();
			}
			else
			{
				Location = VirtualBoneTr.GetTranslation();

				FVector LowerarmLoc; FRotator LowerarmRot;
				USteamVRFunctionLibrary::GetTrackedDevicePositionAndOrientation(LeftHandLowerarmId, LowerarmLoc, LowerarmRot);
				LeftVirtualTrackerOffset = VirtualBoneTr.GetRelativeTransform(FTransform(LowerarmRot, LowerarmLoc));
			}
			Rotation = VirtualBoneTr.Rotator();

			if (bDrawDebugGeometry)
			{
				DrawDebugLine(GetWorld(), Location, Location + Rotation.Quaternion().GetForwardVector() * 15.f, FColor::Red, false, 0.1f, 0, 0.5f);
				DrawDebugLine(GetWorld(), Location, Location + Rotation.Quaternion().GetRightVector() * 15.f, FColor::Green, false, 0.1f, 0, 0.5f);
			}
		}
		else
		{
			USteamVRFunctionLibrary::GetTrackedDevicePositionAndOrientation(TrackerId, Location, Rotation);
		}
	}
	return true;
}

bool UCaptureDevice::GetVRTrackerPositionFiltered(int32 TrackerId, FVector& Location, FRotator& Rotation)
{
	if (Filter == ECaptureFilter::CF_None || FrameIndex == 0xff)
	{
		return GetVRTrackerPosition(TrackerId, Location, Rotation);
	}

	if (Filter == ECaptureFilter::CF_SimpleSmooth)
	{
		const FTransform* a = TrackersData[TrackerId].Frames;
		Location = (a->GetTranslation() + (a + 1)->GetTranslation() + (a + 2)->GetTranslation()) / 3.f;
		FQuat q1 = FQuat::FastLerp(a->GetRotation(), (a + 1)->GetRotation(), 0.5f);
		Rotation = FQuat::FastLerp(q1, (a + 2)->GetRotation(), 0.33f).Rotator();

	}
	else if (Filter == ECaptureFilter::CF_ExtremumCut)
	{
		const int32 MiddleIndex = __prev_frame(FrameIndex);
		const int32 FirstIndex = __prev_frame(MiddleIndex);
		const FTransform& s = TrackersData[TrackerId].Frames[FirstIndex];
		FTransform& m = TrackersData[TrackerId].Frames[MiddleIndex];
		const FTransform& e = TrackersData[TrackerId].Frames[FrameIndex];

		// Location
		Location = m.GetTranslation();
		if ((Location.X < s.GetTranslation().X && Location.X < e.GetTranslation().X) ||
			(Location.X > s.GetTranslation().X && Location.X > e.GetTranslation().X))
		{
			Location.X = (s.GetTranslation().X + e.GetTranslation().X) * 0.5f;
		}
		if ((Location.Y < s.GetTranslation().Y && Location.Y < e.GetTranslation().Y) ||
			(Location.Y > s.GetTranslation().Y && Location.Y > e.GetTranslation().Y))
		{
			Location.Y = (s.GetTranslation().Y + e.GetTranslation().Y) * 0.5f;
		}
		if ((Location.Z < s.GetTranslation().Z && Location.Z < e.GetTranslation().Z) ||
			(Location.Z > s.GetTranslation().Z && Location.Z > e.GetTranslation().Z))
		{
			Location.Z = (s.GetTranslation().Z + e.GetTranslation().Z) * 0.5f;
		}

		// Rotation X
		FVector RotationS1 = s.GetRotation().Vector();
		FVector RotationM1 = m.GetRotation().Vector();
		FVector RotationE1 = e.GetRotation().Vector();

		if ((RotationM1.X < RotationS1.X && RotationM1.X < RotationE1.X) || (RotationM1.X > RotationS1.X && RotationM1.X > RotationE1.X))
		{
			RotationM1.X = (RotationS1.X + RotationE1.X) * 0.5f;
		}
		if ((RotationM1.Y < RotationS1.Y && RotationM1.Y < RotationE1.Y) || (RotationM1.Y > RotationS1.Y && RotationM1.Y > RotationE1.Y))
		{
			RotationM1.Y = (RotationS1.Y + RotationE1.Y) * 0.5f;
		}
		if ((RotationM1.Z < RotationS1.Z && RotationM1.Z < RotationE1.Z) || (RotationM1.Z > RotationS1.Z && RotationM1.Z > RotationE1.Z))
		{
			RotationM1.Z = (RotationS1.Z + RotationE1.Z) * 0.5f;
		}

		// Rotation Z
		FVector RotationS2 = s.GetRotation().GetUpVector();
		FVector RotationM2 = m.GetRotation().GetUpVector();
		FVector RotationE2 = e.GetRotation().GetUpVector();

		if ((RotationM2.X < RotationS2.X && RotationM2.X < RotationE2.X) || (RotationM2.X > RotationS2.X && RotationM2.X > RotationE2.X))
		{
			RotationM2.X = (RotationS2.X + RotationE2.X) * 0.5f;
		}
		if ((RotationM2.Y < RotationS2.Y && RotationM2.Y < RotationE2.Y) || (RotationM2.Y > RotationS2.Y && RotationM2.Y > RotationE2.Y))
		{
			RotationM2.Y = (RotationS2.Y + RotationE2.Y) * 0.5f;
		}
		if ((RotationM2.Z < RotationS2.Z && RotationM2.Z < RotationE2.Z) || (RotationM2.Z > RotationS2.Z && RotationM2.Z > RotationE2.Z))
		{
			RotationM2.Z = (RotationS2.Z + RotationE2.Z) * 0.5f;
		}

		Rotation = UKismetMathLibrary::MakeRotFromXZ(RotationM1.GetSafeNormal(), RotationM2.GetSafeNormal());
		m.SetRotation(Rotation.Quaternion());

		m.SetTranslation(Location);
		m.SetRotation(Rotation.Quaternion());
	}

	return true;
}

bool UCaptureDevice::GetVRTrackerPositionByNumber(uint8 TrackerNumber, FVector& Location, FRotator& Rotation)
{
	TArray<int32> Devices;
	GetVRTrackingDeviceIDs(ESteamVRTrackedDeviceType::Other, Devices);

	if (bUseComponentsForHandsOnly)
	{
		GetVRTrackingDeviceIDs(ESteamVRTrackedDeviceType::Controller, Devices);
	}

	if (Devices.IsValidIndex(TrackerNumber))
	{
		GetVRTrackerPosition(Devices[TrackerNumber], Location, Rotation);
		return true;
	}
	else
	{
		return false;
	}
}

bool UCaptureDevice::GetVRTrackingDeviceIDs(ESteamVRTrackedDeviceType DeviceType, TArray<int32>& OutIds)
{
	if (bUseComponentsInput)
	{
		// hand controllers
		if (DeviceType == ESteamVRTrackedDeviceType::Controller)
		{
			if (InputComponents.IsValidIndex(RightHandComponentIndex)) OutIds.Add(RightHandComponentIndex);
			if (InputComponents.IsValidIndex(LeftHandComponentIndex)) OutIds.Add(LeftHandComponentIndex);
		}
		// i. e. Vive Trackers
		else if (DeviceType == ESteamVRTrackedDeviceType::Other)
		{
			int32 Controllers = 0;
			if (InputComponents.IsValidIndex(RightHandComponentIndex)) Controllers++;
			if (InputComponents.IsValidIndex(LeftHandComponentIndex)) Controllers++;

			OutIds.SetNum(InputComponents.Num() - Controllers);

			// don't need cache, because this function is only called in CalibrateBones
			int32 OutIndex = 0;
			for (int32 Index = 0; Index < InputComponents.Num(); Index++)
			{
				if (Index != RightHandComponentIndex && Index != LeftHandComponentIndex)
				{
					OutIds[OutIndex++] = Index;
				}
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		USteamVRFunctionLibrary::GetValidTrackedDeviceIds(DeviceType, OutIds);
	}

	return true;
}

uint8 UCaptureDevice::AddTwistBonesToMap(const TMap<FName, float>& TwistBonesMap, float* TwistValueVariable, EAxis::Type ForwardAxis)
{
	const uint8 Num = TwistBonesMap.Num();
	FTwistBone t;
	t.TwistSource = TwistValueVariable;
	t.Axis = ForwardAxis;

	for (const auto& Bone : TwistBonesMap)
	{
		t.Multiplier = Bone.Value;
		ActiveTwists.Add(Bone.Key, t);
	}

	return Num;
}

// ------------------------------------------------------------------------------------------------------ //
// --------------------------------------------- Networking --------------------------------------------- //
// ------------------------------------------------------------------------------------------------------ //

/* Get current Tracker Position from network-replicated variable */
void UCaptureDevice::GetNetworkingTrackerValue(int32 TrackerKey, FVector& Location, FRotator& Rotation)
{
	const uint8* ArrayIndPtr = NT_TrackersMap.Find(TrackerKey);
	uint8 ArrayInd = 0xff;

	if (ArrayIndPtr) {
		ArrayInd = *ArrayIndPtr;

		if (NT_Trackers[ArrayInd].TrackerIndex != TrackerKey) {
			NT_TrackersMap.Remove(TrackerKey);
			ArrayInd = 0xff;
		}
	}

	if (ArrayInd == 0xff) {
		for (int i = 0; i < NT_Trackers.Num(); i++) {
			if (NT_Trackers[i].TrackerIndex == TrackerKey) {
				NT_TrackersMap.Add(TrackerKey, i);

				ArrayInd = i;

				break;
			}
		}
	}

	if (NT_Trackers.IsValidIndex(ArrayInd)) {
		Location = NT_Trackers[ArrayInd].Location;
		Rotation = NT_Trackers[ArrayInd].Rotation;
	}
}

/* Update relative transform of the bone for the Tracker */
void UCaptureDevice::SetNetworkingTrackerValue(int32 TrackerKey, const FVector& Location, const FRotator& Rotation)
{
	if (TrackerKey == HEADKEY)
	{
		NT_Head_Local.TrackerIndex = HEADKEY;
		NT_Head_Local.Location = Location;
		NT_Head_Local.Rotation = Rot2Vec(Rotation);
	}
	else
	{
		const uint8* ArrayIndPtr = NT_TrackersMap.Find(TrackerKey);
		uint8 ArrayInd = 0xff;

		if (ArrayIndPtr)
		{
			ArrayInd = *ArrayIndPtr;
		}
		else
		{
			// Find NT_Trackers_Local index
			for (int i = 0; i < NT_Trackers_Local.Num(); i++)
			{
				if (NT_Trackers_Local[i].TrackerIndex == TrackerKey)
				{
					NT_TrackersMap.Add(TrackerKey, i);
					ArrayInd = i;
				}
			}

			// Can't find - add item
			if (ArrayInd == 0xff)
			{
				FVMK_NT_Transform p;
				p.TrackerIndex = TrackerKey;

				ArrayInd = NT_Trackers_Local.Num();
				NT_Trackers_Local.Add(p);
				NT_TrackersMap.Add(TrackerKey, ArrayInd);
			}
		}

		// Additional check
		if (NT_Trackers_Local.IsValidIndex(ArrayInd))
		{
			// Save finally
			NT_Trackers_Local[ArrayInd].TrackerIndex = TrackerKey;
			NT_Trackers_Local[ArrayInd].Location = Location;
			NT_Trackers_Local[ArrayInd].Rotation = Rot2Vec(Rotation);
		}
	}
}

void UCaptureDevice::ServerUpdateInput_Implementation(const FVMK_NT_Transform& Head, const TArray<FVMK_NT_Transform>& Trackers)
{
	// Head
	NT_Head_Target.SetLocation(Head.Location);
	NT_Head_Target.SetRotation(Vec2Rot(Head.Rotation).Quaternion());

	// Trackers
	NT_Trackers_Target = Trackers;
}

/* Server: initialize bone */
void UCaptureDevice::ServerInitializeTrackerBone_Implementation(int32 Key, EHumanoidBone Bone, FTransform RelativeOffset)
{
	if (!bIsLocal)
	{
		InitializeTracker(Key, Bone);
		TrackersData[Key].RelativeOffset = RelativeOffset;
		SetBoneFlag(Bone, true);
	}

	Clinets_InitializeTrackerBone(Key, Bone, RelativeOffset);
}

/* Multicasted to all clients: initialize bone */
void UCaptureDevice::Clinets_InitializeTrackerBone_Implementation(int32 Key, EHumanoidBone Bone, FTransform RelativeOffset)
{
	if (!bIsLocal)
	{
		InitializeTracker(Key, Bone);
		TrackersData[Key].RelativeOffset = RelativeOffset;
		SetBoneFlag(Bone, true);
	}
}

/* Server: update (recalibrate) bone */
void UCaptureDevice::ServerUpdateTrackerBone_Implementation(int32 Key, EHumanoidBone Bone, FTransform RelativeOffset)
{
	if (TrackersData.Contains(Key))
	{
		SetBoneFlag(TrackersData[Key].Bone, false);
		SetBoneFlag(Bone, true);
		TrackersData[Key].Bone = Bone;
	}

	Clients_UpdateTrackerBone(Key, Bone, RelativeOffset);
}

/* Multicasted to all clients: update (recalibrate) bone */
void UCaptureDevice::Clients_UpdateTrackerBone_Implementation(int32 Key, EHumanoidBone Bone, FTransform RelativeOffset)
{
	if (TrackersData.Contains(Key))
	{
		SetBoneFlag(TrackersData[Key].Bone, false);
		SetBoneFlag(Bone, true);
		TrackersData[Key].Bone = Bone;
	}
}

void UCaptureDevice::ServerUpdateMeshScale_Implementation(float NewUpperarmLength, float NewForearmLength, float NewThighLength, float NewCalfLength, float NewShoulderLength, FRotator ShoulderRightOffset, FRotator ShoulderLeftOffset, FVector NewMeshScale)
{
	LocalUpdateMeshScale(NewUpperarmLength, NewForearmLength, NewThighLength, NewCalfLength, NewShoulderLength, ShoulderRightOffset, ShoulderLeftOffset, NewMeshScale);
	Clients_UpdateMeshScale(NewUpperarmLength, NewForearmLength, NewThighLength, NewCalfLength, NewShoulderLength, ShoulderRightOffset, ShoulderLeftOffset, NewMeshScale);
}

void UCaptureDevice::Clients_UpdateMeshScale_Implementation(float NewUpperarmLength, float NewForearmLength, float NewThighLength, float NewCalfLength, float NewShoulderLength, FRotator ShoulderRightOffset, FRotator ShoulderLeftOffset, FVector NewMeshScale)
{
	LocalUpdateMeshScale(NewUpperarmLength, NewForearmLength, NewThighLength, NewCalfLength, NewShoulderLength, ShoulderRightOffset, ShoulderLeftOffset, NewMeshScale);
}

void UCaptureDevice::LocalUpdateMeshScale(float NewUpperarmLength, float NewForearmLength, float NewThighLength, float NewCalfLength, float NewShoulderLength, FRotator ShoulderRightOffset, FRotator ShoulderLeftOffset, FVector NewMeshScale)
{
	fUpperarmLength = NewUpperarmLength; fForearmLength = NewForearmLength; fThighLength = NewThighLength; fCalfLength = NewCalfLength; fShoulderLength = NewShoulderLength;
	RightShoulderRotatorOffset = FTransform(ShoulderRightOffset); LeftShoulderRotatorOffset = FTransform(ShoulderLeftOffset);
	MeshScale = NewMeshScale;
	bIsCalibrated = true;
}

void UCaptureDevice::ServerToggleCapture_Implementation(bool IsEnabled)
{
	if (IsEnabled && FullSpineBones.Num() == 0)
	{
		UpdateSkeletonSetup();
	}
	bIsCapturing = IsEnabled;
	SetComponentTickEnabled(bIsCapturing);
	Clients_ToggleCapture(IsEnabled);
}

void UCaptureDevice::Clients_ToggleCapture_Implementation(bool IsEnabled)
{
	if (!bIsLocal)
	{
		if (IsEnabled && FullSpineBones.Num() == 0)
		{
			UpdateSkeletonSetup();
		}
		bIsCapturing = IsEnabled;
		SetComponentTickEnabled(bIsCapturing);
	}
}