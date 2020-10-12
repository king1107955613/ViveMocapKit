// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIVEMOCAPKIT_ViveMocapTypes_generated_h
#error "ViveMocapTypes.generated.h already included, missing '#pragma once' in ViveMocapTypes.h"
#endif
#define VIVEMOCAPKIT_ViveMocapTypes_generated_h

#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_ViveMocapTypes_h_413_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBodyCalibrationData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VIVEMOCAPKIT_API UScriptStruct* StaticStruct<struct FBodyCalibrationData>();

#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_ViveMocapTypes_h_391_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTwistBone_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VIVEMOCAPKIT_API UScriptStruct* StaticStruct<struct FTwistBone>();

#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_ViveMocapTypes_h_363_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSmartCalibrationData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VIVEMOCAPKIT_API UScriptStruct* StaticStruct<struct FSmartCalibrationData>();

#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_ViveMocapTypes_h_353_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSmartTrackerCalibration_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VIVEMOCAPKIT_API UScriptStruct* StaticStruct<struct FSmartTrackerCalibration>();

#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_ViveMocapTypes_h_329_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrackerSetup_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VIVEMOCAPKIT_API UScriptStruct* StaticStruct<struct FTrackerSetup>();

#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_ViveMocapTypes_h_316_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAdditionalBoneState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VIVEMOCAPKIT_API UScriptStruct* StaticStruct<struct FAdditionalBoneState>();

#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_ViveMocapTypes_h_276_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VIVEMOCAPKIT_API UScriptStruct* StaticStruct<struct FSkeletonBasicPreset>();

#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_ViveMocapTypes_h_208_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCaptureBodyState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VIVEMOCAPKIT_API UScriptStruct* StaticStruct<struct FCaptureBodyState>();

#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_ViveMocapTypes_h_182_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSocketInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VIVEMOCAPKIT_API UScriptStruct* StaticStruct<struct FSocketInfo>();

#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_ViveMocapTypes_h_117_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VIVEMOCAPKIT_API UScriptStruct* StaticStruct<struct FVMK_NT_PureTransform>();

#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_ViveMocapTypes_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VIVEMOCAPKIT_API UScriptStruct* StaticStruct<struct FVMK_NT_Transform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_ViveMocapTypes_h


#define FOREACH_ENUM_EKNEEORIENTATIONSETUP(op) \
	op(EKneeOrientationSetup::AsPelvis) \
	op(EKneeOrientationSetup::AsFoot) \
	op(EKneeOrientationSetup::Mixed) 

enum class EKneeOrientationSetup : uint8;
template<> VIVEMOCAPKIT_API UEnum* StaticEnum<EKneeOrientationSetup>();

#define FOREACH_ENUM_EBODYSIDEROLE(op) \
	op(EBodySideRole::BSR_Disabled) \
	op(EBodySideRole::BSR_Right) \
	op(EBodySideRole::BSR_Left) \
	op(EBodySideRole::BSR_Both) 

enum class EBodySideRole : uint8;
template<> VIVEMOCAPKIT_API UEnum* StaticEnum<EBodySideRole>();

#define FOREACH_ENUM_ETRACKINGDEVICEROLE(op) \
	op(ETrackingDeviceRole::DontUse) \
	op(ETrackingDeviceRole::HandsOnly) \
	op(ETrackingDeviceRole::AnyRole) 

enum class ETrackingDeviceRole : uint8;
template<> VIVEMOCAPKIT_API UEnum* StaticEnum<ETrackingDeviceRole>();

#define FOREACH_ENUM_EHUMANOIDBONE(op) \
	op(EHumanoidBone::Root) \
	op(EHumanoidBone::Pelvis) \
	op(EHumanoidBone::Ribcage) \
	op(EHumanoidBone::Head) \
	op(EHumanoidBone::ThighRight) \
	op(EHumanoidBone::CalfRight) \
	op(EHumanoidBone::FootRight) \
	op(EHumanoidBone::ThighLeft) \
	op(EHumanoidBone::CalfLeft) \
	op(EHumanoidBone::FootLeft) \
	op(EHumanoidBone::ShoulderRight) \
	op(EHumanoidBone::UpperarmRight) \
	op(EHumanoidBone::ForearmRight) \
	op(EHumanoidBone::PalmRight) \
	op(EHumanoidBone::ShoulderLeft) \
	op(EHumanoidBone::UpperarmLeft) \
	op(EHumanoidBone::ForearmLeft) \
	op(EHumanoidBone::PalmLeft) \
	op(EHumanoidBone::Locator_ElbowRight) \
	op(EHumanoidBone::Locator_ElbowLeft) \
	op(EHumanoidBone::Locator_KneeRight) \
	op(EHumanoidBone::Locator_KneeLeft) \
	op(EHumanoidBone::HMD) \
	op(EHumanoidBone::MotionControllerRight) \
	op(EHumanoidBone::MotionControllerLeft) \
	op(EHumanoidBone::_TrackedDevices) \
	op(EHumanoidBone::TrackedDevice1) \
	op(EHumanoidBone::TrackedDevice2) \
	op(EHumanoidBone::TrackedDevice3) \
	op(EHumanoidBone::TrackedDevice4) \
	op(EHumanoidBone::TrackedDevice5) \
	op(EHumanoidBone::TrackedDevice6) \
	op(EHumanoidBone::TrackedDevice7) \
	op(EHumanoidBone::TrackedDevice8) 

enum class EHumanoidBone : uint8;
template<> VIVEMOCAPKIT_API UEnum* StaticEnum<EHumanoidBone>();

#define FOREACH_ENUM_ESKELETONBONESORIENTATION(op) \
	op(ESkeletonBonesOrientation::SBO_Default) \
	op(ESkeletonBonesOrientation::SBO_ComponentSpaceBones) 

enum class ESkeletonBonesOrientation : uint8;
template<> VIVEMOCAPKIT_API UEnum* StaticEnum<ESkeletonBonesOrientation>();

#define FOREACH_ENUM_ECAPTUREFILTER(op) \
	op(ECaptureFilter::CF_None) \
	op(ECaptureFilter::CF_SimpleSmooth) \
	op(ECaptureFilter::CF_ExtremumCut) 

enum class ECaptureFilter : uint8;
template<> VIVEMOCAPKIT_API UEnum* StaticEnum<ECaptureFilter>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
