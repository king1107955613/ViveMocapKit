// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVMK_FingerRotation;
enum class EVMK_FingerName : uint8;
class UPrimitiveComponent;
struct FVMK_FingersPosePreset;
struct FVMK_Knuckle;
struct FVMK_FingersDetailedInfo;
struct FPoseSnapshot;
class USkinnedMeshComponent;
enum class EVMK_VRHand : uint8;
enum class EVMK_FingerName : uint8; struct FVMK_FingerSolver;
class UVMKFingersFKIKSolver;
class UVMKFingersSolverSetup;
#ifdef VMKFINGERSSOLVER_VMKFingersFKIKSolver_generated_h
#error "VMKFingersFKIKSolver.generated.h already included, missing '#pragma once' in VMKFingersFKIKSolver.h"
#endif
#define VMKFINGERSSOLVER_VMKFingersFKIKSolver_generated_h

#define HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersFKIKSolver_h_22_SPARSE_DATA
#define HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersFKIKSolver_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertFingerRotationFromDegrees); \
	DECLARE_FUNCTION(execConvertFingerRotationToDegrees); \
	DECLARE_FUNCTION(execSetFingerEnabled); \
	DECLARE_FUNCTION(execReleaseObject); \
	DECLARE_FUNCTION(execGrabObject); \
	DECLARE_FUNCTION(execSetVRInputReferencePose); \
	DECLARE_FUNCTION(execSetFingersTraceReferencePose); \
	DECLARE_FUNCTION(execSetFingersPose); \
	DECLARE_FUNCTION(execIsFingerEnabled); \
	DECLARE_FUNCTION(execGetFingerKnuckles); \
	DECLARE_FUNCTION(execGetFingerDescription); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execApplyVRInputDetailed); \
	DECLARE_FUNCTION(execApplyVRInput); \
	DECLARE_FUNCTION(execTrace); \
	DECLARE_FUNCTION(execUpdatePoseSnapshot); \
	DECLARE_FUNCTION(execUpdateFingers); \
	DECLARE_FUNCTION(execCreateFingersFKIKSolverEx); \
	DECLARE_FUNCTION(execCreateFingersFKIKSolver); \
	DECLARE_FUNCTION(execInitialize);


#define HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersFKIKSolver_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertFingerRotationFromDegrees); \
	DECLARE_FUNCTION(execConvertFingerRotationToDegrees); \
	DECLARE_FUNCTION(execSetFingerEnabled); \
	DECLARE_FUNCTION(execReleaseObject); \
	DECLARE_FUNCTION(execGrabObject); \
	DECLARE_FUNCTION(execSetVRInputReferencePose); \
	DECLARE_FUNCTION(execSetFingersTraceReferencePose); \
	DECLARE_FUNCTION(execSetFingersPose); \
	DECLARE_FUNCTION(execIsFingerEnabled); \
	DECLARE_FUNCTION(execGetFingerKnuckles); \
	DECLARE_FUNCTION(execGetFingerDescription); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execApplyVRInputDetailed); \
	DECLARE_FUNCTION(execApplyVRInput); \
	DECLARE_FUNCTION(execTrace); \
	DECLARE_FUNCTION(execUpdatePoseSnapshot); \
	DECLARE_FUNCTION(execUpdateFingers); \
	DECLARE_FUNCTION(execCreateFingersFKIKSolverEx); \
	DECLARE_FUNCTION(execCreateFingersFKIKSolver); \
	DECLARE_FUNCTION(execInitialize);


#define HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersFKIKSolver_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVMKFingersFKIKSolver(); \
	friend struct Z_Construct_UClass_UVMKFingersFKIKSolver_Statics; \
public: \
	DECLARE_CLASS(UVMKFingersFKIKSolver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VMKFingersSolver"), NO_API) \
	DECLARE_SERIALIZER(UVMKFingersFKIKSolver)


#define HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersFKIKSolver_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUVMKFingersFKIKSolver(); \
	friend struct Z_Construct_UClass_UVMKFingersFKIKSolver_Statics; \
public: \
	DECLARE_CLASS(UVMKFingersFKIKSolver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VMKFingersSolver"), NO_API) \
	DECLARE_SERIALIZER(UVMKFingersFKIKSolver)


#define HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersFKIKSolver_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVMKFingersFKIKSolver(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVMKFingersFKIKSolver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVMKFingersFKIKSolver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVMKFingersFKIKSolver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVMKFingersFKIKSolver(UVMKFingersFKIKSolver&&); \
	NO_API UVMKFingersFKIKSolver(const UVMKFingersFKIKSolver&); \
public:


#define HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersFKIKSolver_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVMKFingersFKIKSolver(UVMKFingersFKIKSolver&&); \
	NO_API UVMKFingersFKIKSolver(const UVMKFingersFKIKSolver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVMKFingersFKIKSolver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVMKFingersFKIKSolver); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVMKFingersFKIKSolver)


#define HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersFKIKSolver_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsInitialized() { return STRUCT_OFFSET(UVMKFingersFKIKSolver, bIsInitialized); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(UVMKFingersFKIKSolver, Mesh); } \
	FORCEINLINE static uint32 __PPO__FingersSolverSetup() { return STRUCT_OFFSET(UVMKFingersFKIKSolver, FingersSolverSetup); } \
	FORCEINLINE static uint32 __PPO__TracingStatus() { return STRUCT_OFFSET(UVMKFingersFKIKSolver, TracingStatus); } \
	FORCEINLINE static uint32 __PPO__VRInput() { return STRUCT_OFFSET(UVMKFingersFKIKSolver, VRInput); } \
	FORCEINLINE static uint32 __PPO__VRInputDetailed() { return STRUCT_OFFSET(UVMKFingersFKIKSolver, VRInputDetailed); } \
	FORCEINLINE static uint32 __PPO__bHasVRInputInFrame() { return STRUCT_OFFSET(UVMKFingersFKIKSolver, bHasVRInputInFrame); } \
	FORCEINLINE static uint32 __PPO__bHasDetailedVRInputInFrame() { return STRUCT_OFFSET(UVMKFingersFKIKSolver, bHasDetailedVRInputInFrame); } \
	FORCEINLINE static uint32 __PPO__bUseRuntimeFingersPose() { return STRUCT_OFFSET(UVMKFingersFKIKSolver, bUseRuntimeFingersPose); } \
	FORCEINLINE static uint32 __PPO__TraceStartTime() { return STRUCT_OFFSET(UVMKFingersFKIKSolver, TraceStartTime); } \
	FORCEINLINE static uint32 __PPO__VRStatus() { return STRUCT_OFFSET(UVMKFingersFKIKSolver, VRStatus); } \
	FORCEINLINE static uint32 __PPO__CurrentFingersPose() { return STRUCT_OFFSET(UVMKFingersFKIKSolver, CurrentFingersPose); } \
	FORCEINLINE static uint32 __PPO__HandSideMultiplier() { return STRUCT_OFFSET(UVMKFingersFKIKSolver, HandSideMultiplier); }


#define HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersFKIKSolver_h_19_PROLOG
#define HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersFKIKSolver_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersFKIKSolver_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersFKIKSolver_h_22_SPARSE_DATA \
	HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersFKIKSolver_h_22_RPC_WRAPPERS \
	HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersFKIKSolver_h_22_INCLASS \
	HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersFKIKSolver_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersFKIKSolver_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersFKIKSolver_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersFKIKSolver_h_22_SPARSE_DATA \
	HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersFKIKSolver_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersFKIKSolver_h_22_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersFKIKSolver_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VMKFINGERSSOLVER_API UClass* StaticClass<class UVMKFingersFKIKSolver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ViveMocapKit_Source_VMKFingersSolver_Public_VMKFingersFKIKSolver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
