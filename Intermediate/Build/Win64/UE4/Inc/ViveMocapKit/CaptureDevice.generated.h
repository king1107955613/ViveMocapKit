// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EHumanoidBone : uint8;
struct FTransform;
struct FRotator;
struct FVector;
struct FVMK_NT_Transform;
class UVMKFingersFKIKSolver;
enum class EControllerHand : uint8;
struct FBodyCalibrationData;
class USceneComponent;
 struct FTrackerSetup;
struct FSmartCalibrationData;
struct FSkeletonBasicPreset;
class USkinnedMeshComponent;
struct FPoseSnapshot;
enum class EVMK_FingerName : uint8; struct FVMK_FingerSolver;
 enum class EHumanoidBone : uint8;
#ifdef VIVEMOCAPKIT_CaptureDevice_generated_h
#error "CaptureDevice.generated.h already included, missing '#pragma once' in CaptureDevice.h"
#endif
#define VIVEMOCAPKIT_CaptureDevice_generated_h

#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_30_SPARSE_DATA
#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_30_RPC_WRAPPERS \
	virtual void Clients_ToggleCapture_Implementation(bool IsEnabled); \
	virtual bool ServerToggleCapture_Validate(bool ); \
	virtual void ServerToggleCapture_Implementation(bool IsEnabled); \
	virtual void Clients_UpdateTrackerBone_Implementation(int32 Key, EHumanoidBone Bone, FTransform RelativeOffset); \
	virtual bool ServerUpdateTrackerBone_Validate(int32 , EHumanoidBone , FTransform ); \
	virtual void ServerUpdateTrackerBone_Implementation(int32 Key, EHumanoidBone Bone, FTransform RelativeOffset); \
	virtual void Clinets_InitializeTrackerBone_Implementation(int32 Key, EHumanoidBone Bone, FTransform RelativeOffset); \
	virtual bool ServerInitializeTrackerBone_Validate(int32 , EHumanoidBone , FTransform ); \
	virtual void ServerInitializeTrackerBone_Implementation(int32 Key, EHumanoidBone Bone, FTransform RelativeOffset); \
	virtual void Clients_UpdateMeshScale_Implementation(float NewUpperarmLength, float NewForearmLength, float NewThighLength, float NewCalfLength, float NewShoulderLength, FRotator ShoulderRightOffset, FRotator ShoulderLeftOffset, FVector NewMeshScale); \
	virtual bool ServerUpdateMeshScale_Validate(float , float , float , float , float , FRotator , FRotator , FVector ); \
	virtual void ServerUpdateMeshScale_Implementation(float NewUpperarmLength, float NewForearmLength, float NewThighLength, float NewCalfLength, float NewShoulderLength, FRotator ShoulderRightOffset, FRotator ShoulderLeftOffset, FVector NewMeshScale); \
	virtual bool ServerUpdateInput_Validate(FVMK_NT_Transform const& , TArray<FVMK_NT_Transform> const& ); \
	virtual void ServerUpdateInput_Implementation(FVMK_NT_Transform const& Head, TArray<FVMK_NT_Transform> const& Trackers); \
	virtual void SendCalibrationToServer_Implementation(); \
 \
	DECLARE_FUNCTION(execClients_ToggleCapture); \
	DECLARE_FUNCTION(execServerToggleCapture); \
	DECLARE_FUNCTION(execClients_UpdateTrackerBone); \
	DECLARE_FUNCTION(execServerUpdateTrackerBone); \
	DECLARE_FUNCTION(execClinets_InitializeTrackerBone); \
	DECLARE_FUNCTION(execServerInitializeTrackerBone); \
	DECLARE_FUNCTION(execClients_UpdateMeshScale); \
	DECLARE_FUNCTION(execServerUpdateMeshScale); \
	DECLARE_FUNCTION(execServerUpdateInput); \
	DECLARE_FUNCTION(execGetFingersSolverLeft); \
	DECLARE_FUNCTION(execGetFingersSolverRight); \
	DECLARE_FUNCTION(execGetBodyParameters); \
	DECLARE_FUNCTION(execSendCalibrationToServer); \
	DECLARE_FUNCTION(execIsCalibrated); \
	DECLARE_FUNCTION(execPredictCollarboneDefaultOffset); \
	DECLARE_FUNCTION(execGetBoneTransformWithGenericOrientation); \
	DECLARE_FUNCTION(execApplyCurrentCalibration); \
	DECLARE_FUNCTION(execGetCurrentCalibration); \
	DECLARE_FUNCTION(execGetCollarbonesCalibration); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execGetInputComponent); \
	DECLARE_FUNCTION(execGetTrackingDevicesNum); \
	DECLARE_FUNCTION(execGetArmsScaleMultiplier); \
	DECLARE_FUNCTION(execGetMeshHeightMultiplier); \
	DECLARE_FUNCTION(execSetTrackersData); \
	DECLARE_FUNCTION(execGetHeadTransform); \
	DECLARE_FUNCTION(execIsCapturing); \
	DECLARE_FUNCTION(execResetCalibration); \
	DECLARE_FUNCTION(execGetCalibratedDataInTPose); \
	DECLARE_FUNCTION(execLoadCalibratedDataInTPoseEx); \
	DECLARE_FUNCTION(execLoadCalibratedDataInTPose); \
	DECLARE_FUNCTION(execAddTrackingDeviceSource); \
	DECLARE_FUNCTION(execExcludeComponentFromInput); \
	DECLARE_FUNCTION(execInitializeVirtualTrackersForHands); \
	DECLARE_FUNCTION(execInitializeInputFromComponents); \
	DECLARE_FUNCTION(execUpdateSkeletonSetup); \
	DECLARE_FUNCTION(execLoadSkeletonSetupFromStruct); \
	DECLARE_FUNCTION(execUpdateTrackerBone); \
	DECLARE_FUNCTION(execUpdateTrackerTransform); \
	DECLARE_FUNCTION(execBoneToName); \
	DECLARE_FUNCTION(execGetBoneTransformByName); \
	DECLARE_FUNCTION(execUpdatePoseableMesh); \
	DECLARE_FUNCTION(execGetSkeletalMeshPose); \
	DECLARE_FUNCTION(execProcessFingers); \
	DECLARE_FUNCTION(execInitializeFingersEx); \
	DECLARE_FUNCTION(execInitializeFingers); \
	DECLARE_FUNCTION(execInitializeReferences); \
	DECLARE_FUNCTION(execToggleCapture); \
	DECLARE_FUNCTION(execInitializeTracker); \
	DECLARE_FUNCTION(execPredictBonesCalibration); \
	DECLARE_FUNCTION(execGetCalibrationBindingRules); \
	DECLARE_FUNCTION(execResetPreCalibrationBinding); \
	DECLARE_FUNCTION(execUnbindPreCalibrationTracker); \
	DECLARE_FUNCTION(execBindPreCalibrationTracker); \
	DECLARE_FUNCTION(execCalibrateBones); \
	DECLARE_FUNCTION(execPrepareForCalibration); \
	DECLARE_FUNCTION(execPrepareForCalibrationWithHandsForward);


#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Clients_UpdateTrackerBone_Implementation(int32 Key, EHumanoidBone Bone, FTransform RelativeOffset); \
	virtual void ServerUpdateTrackerBone_Implementation(int32 Key, EHumanoidBone Bone, FTransform RelativeOffset); \
	virtual void Clinets_InitializeTrackerBone_Implementation(int32 Key, EHumanoidBone Bone, FTransform RelativeOffset); \
	virtual void ServerInitializeTrackerBone_Implementation(int32 Key, EHumanoidBone Bone, FTransform RelativeOffset); \
	virtual void ServerUpdateInput_Implementation(FVMK_NT_Transform const& Head, TArray<FVMK_NT_Transform> const& Trackers); \
 \
	DECLARE_FUNCTION(execClients_ToggleCapture); \
	DECLARE_FUNCTION(execServerToggleCapture); \
	DECLARE_FUNCTION(execClients_UpdateTrackerBone); \
	DECLARE_FUNCTION(execServerUpdateTrackerBone); \
	DECLARE_FUNCTION(execClinets_InitializeTrackerBone); \
	DECLARE_FUNCTION(execServerInitializeTrackerBone); \
	DECLARE_FUNCTION(execClients_UpdateMeshScale); \
	DECLARE_FUNCTION(execServerUpdateMeshScale); \
	DECLARE_FUNCTION(execServerUpdateInput); \
	DECLARE_FUNCTION(execGetFingersSolverLeft); \
	DECLARE_FUNCTION(execGetFingersSolverRight); \
	DECLARE_FUNCTION(execGetBodyParameters); \
	DECLARE_FUNCTION(execSendCalibrationToServer); \
	DECLARE_FUNCTION(execIsCalibrated); \
	DECLARE_FUNCTION(execPredictCollarboneDefaultOffset); \
	DECLARE_FUNCTION(execGetBoneTransformWithGenericOrientation); \
	DECLARE_FUNCTION(execApplyCurrentCalibration); \
	DECLARE_FUNCTION(execGetCurrentCalibration); \
	DECLARE_FUNCTION(execGetCollarbonesCalibration); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execGetInputComponent); \
	DECLARE_FUNCTION(execGetTrackingDevicesNum); \
	DECLARE_FUNCTION(execGetArmsScaleMultiplier); \
	DECLARE_FUNCTION(execGetMeshHeightMultiplier); \
	DECLARE_FUNCTION(execSetTrackersData); \
	DECLARE_FUNCTION(execGetHeadTransform); \
	DECLARE_FUNCTION(execIsCapturing); \
	DECLARE_FUNCTION(execResetCalibration); \
	DECLARE_FUNCTION(execGetCalibratedDataInTPose); \
	DECLARE_FUNCTION(execLoadCalibratedDataInTPoseEx); \
	DECLARE_FUNCTION(execLoadCalibratedDataInTPose); \
	DECLARE_FUNCTION(execAddTrackingDeviceSource); \
	DECLARE_FUNCTION(execExcludeComponentFromInput); \
	DECLARE_FUNCTION(execInitializeVirtualTrackersForHands); \
	DECLARE_FUNCTION(execInitializeInputFromComponents); \
	DECLARE_FUNCTION(execUpdateSkeletonSetup); \
	DECLARE_FUNCTION(execLoadSkeletonSetupFromStruct); \
	DECLARE_FUNCTION(execUpdateTrackerBone); \
	DECLARE_FUNCTION(execUpdateTrackerTransform); \
	DECLARE_FUNCTION(execBoneToName); \
	DECLARE_FUNCTION(execGetBoneTransformByName); \
	DECLARE_FUNCTION(execUpdatePoseableMesh); \
	DECLARE_FUNCTION(execGetSkeletalMeshPose); \
	DECLARE_FUNCTION(execProcessFingers); \
	DECLARE_FUNCTION(execInitializeFingersEx); \
	DECLARE_FUNCTION(execInitializeFingers); \
	DECLARE_FUNCTION(execInitializeReferences); \
	DECLARE_FUNCTION(execToggleCapture); \
	DECLARE_FUNCTION(execInitializeTracker); \
	DECLARE_FUNCTION(execPredictBonesCalibration); \
	DECLARE_FUNCTION(execGetCalibrationBindingRules); \
	DECLARE_FUNCTION(execResetPreCalibrationBinding); \
	DECLARE_FUNCTION(execUnbindPreCalibrationTracker); \
	DECLARE_FUNCTION(execBindPreCalibrationTracker); \
	DECLARE_FUNCTION(execCalibrateBones); \
	DECLARE_FUNCTION(execPrepareForCalibration); \
	DECLARE_FUNCTION(execPrepareForCalibrationWithHandsForward);


#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_30_EVENT_PARMS \
	struct CaptureDevice_eventClients_ToggleCapture_Parms \
	{ \
		bool IsEnabled; \
	}; \
	struct CaptureDevice_eventClients_UpdateMeshScale_Parms \
	{ \
		float NewUpperarmLength; \
		float NewForearmLength; \
		float NewThighLength; \
		float NewCalfLength; \
		float NewShoulderLength; \
		FRotator ShoulderRightOffset; \
		FRotator ShoulderLeftOffset; \
		FVector NewMeshScale; \
	}; \
	struct CaptureDevice_eventClients_UpdateTrackerBone_Parms \
	{ \
		int32 Key; \
		EHumanoidBone Bone; \
		FTransform RelativeOffset; \
	}; \
	struct CaptureDevice_eventClinets_InitializeTrackerBone_Parms \
	{ \
		int32 Key; \
		EHumanoidBone Bone; \
		FTransform RelativeOffset; \
	}; \
	struct CaptureDevice_eventServerInitializeTrackerBone_Parms \
	{ \
		int32 Key; \
		EHumanoidBone Bone; \
		FTransform RelativeOffset; \
	}; \
	struct CaptureDevice_eventServerToggleCapture_Parms \
	{ \
		bool IsEnabled; \
	}; \
	struct CaptureDevice_eventServerUpdateInput_Parms \
	{ \
		FVMK_NT_Transform Head; \
		TArray<FVMK_NT_Transform> Trackers; \
	}; \
	struct CaptureDevice_eventServerUpdateMeshScale_Parms \
	{ \
		float NewUpperarmLength; \
		float NewForearmLength; \
		float NewThighLength; \
		float NewCalfLength; \
		float NewShoulderLength; \
		FRotator ShoulderRightOffset; \
		FRotator ShoulderLeftOffset; \
		FVector NewMeshScale; \
	}; \
	struct CaptureDevice_eventServerUpdateTrackerBone_Parms \
	{ \
		int32 Key; \
		EHumanoidBone Bone; \
		FTransform RelativeOffset; \
	};


#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_30_CALLBACK_WRAPPERS
#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCaptureDevice(); \
	friend struct Z_Construct_UClass_UCaptureDevice_Statics; \
public: \
	DECLARE_CLASS(UCaptureDevice, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ViveMocapKit"), NO_API) \
	DECLARE_SERIALIZER(UCaptureDevice) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		fUpperarmLength=NETFIELD_REP_START, \
		fForearmLength, \
		fThighLength, \
		fCalfLength, \
		fShoulderLength, \
		NT_Head_Target, \
		NT_Trackers_Target, \
		NETFIELD_REP_END=NT_Trackers_Target	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUCaptureDevice(); \
	friend struct Z_Construct_UClass_UCaptureDevice_Statics; \
public: \
	DECLARE_CLASS(UCaptureDevice, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ViveMocapKit"), NO_API) \
	DECLARE_SERIALIZER(UCaptureDevice) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		fUpperarmLength=NETFIELD_REP_START, \
		fForearmLength, \
		fThighLength, \
		fCalfLength, \
		fShoulderLength, \
		NT_Head_Target, \
		NT_Trackers_Target, \
		NETFIELD_REP_END=NT_Trackers_Target	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCaptureDevice(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCaptureDevice) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCaptureDevice); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCaptureDevice); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCaptureDevice(UCaptureDevice&&); \
	NO_API UCaptureDevice(const UCaptureDevice&); \
public:


#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCaptureDevice(UCaptureDevice&&); \
	NO_API UCaptureDevice(const UCaptureDevice&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCaptureDevice); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCaptureDevice); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCaptureDevice)


#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BodyMesh() { return STRUCT_OFFSET(UCaptureDevice, BodyMesh); } \
	FORCEINLINE static uint32 __PPO__FingersDataProvider() { return STRUCT_OFFSET(UCaptureDevice, FingersDataProvider); } \
	FORCEINLINE static uint32 __PPO__HandSolverRight() { return STRUCT_OFFSET(UCaptureDevice, HandSolverRight); } \
	FORCEINLINE static uint32 __PPO__HandSolverLeft() { return STRUCT_OFFSET(UCaptureDevice, HandSolverLeft); } \
	FORCEINLINE static uint32 __PPO__NeckBones() { return STRUCT_OFFSET(UCaptureDevice, NeckBones); } \
	FORCEINLINE static uint32 __PPO__SpineBones() { return STRUCT_OFFSET(UCaptureDevice, SpineBones); } \
	FORCEINLINE static uint32 __PPO__FullSpineBones() { return STRUCT_OFFSET(UCaptureDevice, FullSpineBones); } \
	FORCEINLINE static uint32 __PPO__OutPoseSnapshot() { return STRUCT_OFFSET(UCaptureDevice, OutPoseSnapshot); } \
	FORCEINLINE static uint32 __PPO__InputComponents() { return STRUCT_OFFSET(UCaptureDevice, InputComponents); } \
	FORCEINLINE static uint32 __PPO__SocketTrackers() { return STRUCT_OFFSET(UCaptureDevice, SocketTrackers); } \
	FORCEINLINE static uint32 __PPO__ActiveTwists() { return STRUCT_OFFSET(UCaptureDevice, ActiveTwists); } \
	FORCEINLINE static uint32 __PPO__MeshSpineLength() { return STRUCT_OFFSET(UCaptureDevice, MeshSpineLength); } \
	FORCEINLINE static uint32 __PPO__MeshUpperarmLength() { return STRUCT_OFFSET(UCaptureDevice, MeshUpperarmLength); } \
	FORCEINLINE static uint32 __PPO__MeshForearmLength() { return STRUCT_OFFSET(UCaptureDevice, MeshForearmLength); } \
	FORCEINLINE static uint32 __PPO__MeshHandsFullLength() { return STRUCT_OFFSET(UCaptureDevice, MeshHandsFullLength); } \
	FORCEINLINE static uint32 __PPO__MeshHeight() { return STRUCT_OFFSET(UCaptureDevice, MeshHeight); } \
	FORCEINLINE static uint32 __PPO__MeshLegsLength() { return STRUCT_OFFSET(UCaptureDevice, MeshLegsLength); } \
	FORCEINLINE static uint32 __PPO__HeadToNeck() { return STRUCT_OFFSET(UCaptureDevice, HeadToNeck); } \
	FORCEINLINE static uint32 __PPO__RibcageToHead() { return STRUCT_OFFSET(UCaptureDevice, RibcageToHead); } \
	FORCEINLINE static uint32 __PPO__ShoulderToRibcageRight() { return STRUCT_OFFSET(UCaptureDevice, ShoulderToRibcageRight); } \
	FORCEINLINE static uint32 __PPO__ShoulderToRibcageLeft() { return STRUCT_OFFSET(UCaptureDevice, ShoulderToRibcageLeft); } \
	FORCEINLINE static uint32 __PPO__UpperarmToShoulderRight() { return STRUCT_OFFSET(UCaptureDevice, UpperarmToShoulderRight); } \
	FORCEINLINE static uint32 __PPO__UpperarmToShoulderLeft() { return STRUCT_OFFSET(UCaptureDevice, UpperarmToShoulderLeft); } \
	FORCEINLINE static uint32 __PPO__ThighToPelvisRight() { return STRUCT_OFFSET(UCaptureDevice, ThighToPelvisRight); } \
	FORCEINLINE static uint32 __PPO__ThighToPelvisLeft() { return STRUCT_OFFSET(UCaptureDevice, ThighToPelvisLeft); } \
	FORCEINLINE static uint32 __PPO__FootBoneToGroundZ() { return STRUCT_OFFSET(UCaptureDevice, FootBoneToGroundZ); } \
	FORCEINLINE static uint32 __PPO__fUpperarmLength() { return STRUCT_OFFSET(UCaptureDevice, fUpperarmLength); } \
	FORCEINLINE static uint32 __PPO__fForearmLength() { return STRUCT_OFFSET(UCaptureDevice, fForearmLength); } \
	FORCEINLINE static uint32 __PPO__fThighLength() { return STRUCT_OFFSET(UCaptureDevice, fThighLength); } \
	FORCEINLINE static uint32 __PPO__fCalfLength() { return STRUCT_OFFSET(UCaptureDevice, fCalfLength); } \
	FORCEINLINE static uint32 __PPO__fShoulderLength() { return STRUCT_OFFSET(UCaptureDevice, fShoulderLength); } \
	FORCEINLINE static uint32 __PPO__NT_Head_Target() { return STRUCT_OFFSET(UCaptureDevice, NT_Head_Target); } \
	FORCEINLINE static uint32 __PPO__NT_Trackers_Target() { return STRUCT_OFFSET(UCaptureDevice, NT_Trackers_Target); } \
	FORCEINLINE static uint32 __PPO__NT_TrackersMap() { return STRUCT_OFFSET(UCaptureDevice, NT_TrackersMap); }


#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_27_PROLOG \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_30_EVENT_PARMS


#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_30_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_30_SPARSE_DATA \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_30_RPC_WRAPPERS \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_30_CALLBACK_WRAPPERS \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_30_INCLASS \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_30_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_30_SPARSE_DATA \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_30_CALLBACK_WRAPPERS \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_30_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIVEMOCAPKIT_API UClass* StaticClass<class UCaptureDevice>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureDevice_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
