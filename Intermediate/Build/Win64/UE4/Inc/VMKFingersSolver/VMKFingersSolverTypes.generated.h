// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VMKFINGERSSOLVER_VMKFingersSolverTypes_generated_h
#error "VMKFingersSolverTypes.generated.h already included, missing '#pragma once' in VMKFingersSolverTypes.h"
#endif
#define VMKFINGERSSOLVER_VMKFingersSolverTypes_generated_h

#define HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersSolverTypes_h_466_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VMKFINGERSSOLVER_API UScriptStruct* StaticStruct<struct FVMK_FingersDetailedInfo>();

#define HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersSolverTypes_h_437_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VMKFINGERSSOLVER_API UScriptStruct* StaticStruct<struct FVMK_FingersPosePreset>();

#define HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersSolverTypes_h_423_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVMK_TwistData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VMKFINGERSSOLVER_API UScriptStruct* StaticStruct<struct FVMK_TwistData>();

#define HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersSolverTypes_h_408_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VMKFINGERSSOLVER_API UScriptStruct* StaticStruct<struct FVMK_FingerKnucklePointer>();

#define HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersSolverTypes_h_356_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VMKFINGERSSOLVER_API UScriptStruct* StaticStruct<struct FVMK_FingerSolver>();

#define HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersSolverTypes_h_311_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVMK_Knuckle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VMKFINGERSSOLVER_API UScriptStruct* StaticStruct<struct FVMK_Knuckle>();

#define HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersSolverTypes_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VMKFINGERSSOLVER_API UScriptStruct* StaticStruct<struct FVMK_FingerRotation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersSolverTypes_h


#define FOREACH_ENUM_EVMK_FINGERNAME(op) \
	op(EVMK_FingerName::FN_Thumb) \
	op(EVMK_FingerName::FN_Index) \
	op(EVMK_FingerName::FN_Middle) \
	op(EVMK_FingerName::FN_Ring) \
	op(EVMK_FingerName::FN_Pinky) \
	op(EVMK_FingerName::EFingerName_MAX) 

enum class EVMK_FingerName : uint8;
template<> VMKFINGERSSOLVER_API UEnum* StaticEnum<EVMK_FingerName>();

#define FOREACH_ENUM_EVMK_BONEORIENTATIONAXIS(op) \
	op(EVMK_BoneOrientationAxis::X) \
	op(EVMK_BoneOrientationAxis::Y) \
	op(EVMK_BoneOrientationAxis::Z) \
	op(EVMK_BoneOrientationAxis::X_Neg) \
	op(EVMK_BoneOrientationAxis::Y_Neg) \
	op(EVMK_BoneOrientationAxis::Z_Neg) \
	op(EVMK_BoneOrientationAxis::BOA_MAX) 

enum class EVMK_BoneOrientationAxis : uint8;
template<> VMKFINGERSSOLVER_API UEnum* StaticEnum<EVMK_BoneOrientationAxis>();

#define FOREACH_ENUM_EVMK_HANDSTYLE(op) \
	op(EVMK_HandStyle::HS_FullArm) \
	op(EVMK_HandStyle::HS_Lowerarm) \
	op(EVMK_HandStyle::HS_HandOnly) 

enum class EVMK_HandStyle : uint8;
template<> VMKFINGERSSOLVER_API UEnum* StaticEnum<EVMK_HandStyle>();

#define FOREACH_ENUM_EVMK_VRHAND(op) \
	op(EVMK_VRHand::VRH_Left) \
	op(EVMK_VRHand::VRH_Right) 

enum class EVMK_VRHand : uint8;
template<> VMKFINGERSSOLVER_API UEnum* StaticEnum<EVMK_VRHand>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
