// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIVEMOCAPKIT_CaptureAnimBlueprint_generated_h
#error "CaptureAnimBlueprint.generated.h already included, missing '#pragma once' in CaptureAnimBlueprint.h"
#endif
#define VIVEMOCAPKIT_CaptureAnimBlueprint_generated_h

#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureAnimBlueprint_h_15_SPARSE_DATA
#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureAnimBlueprint_h_15_RPC_WRAPPERS
#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureAnimBlueprint_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureAnimBlueprint_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCaptureAnimBlueprint(); \
	friend struct Z_Construct_UClass_UCaptureAnimBlueprint_Statics; \
public: \
	DECLARE_CLASS(UCaptureAnimBlueprint, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ViveMocapKit"), NO_API) \
	DECLARE_SERIALIZER(UCaptureAnimBlueprint)


#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureAnimBlueprint_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCaptureAnimBlueprint(); \
	friend struct Z_Construct_UClass_UCaptureAnimBlueprint_Statics; \
public: \
	DECLARE_CLASS(UCaptureAnimBlueprint, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ViveMocapKit"), NO_API) \
	DECLARE_SERIALIZER(UCaptureAnimBlueprint)


#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureAnimBlueprint_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCaptureAnimBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCaptureAnimBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCaptureAnimBlueprint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCaptureAnimBlueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCaptureAnimBlueprint(UCaptureAnimBlueprint&&); \
	NO_API UCaptureAnimBlueprint(const UCaptureAnimBlueprint&); \
public:


#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureAnimBlueprint_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCaptureAnimBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCaptureAnimBlueprint(UCaptureAnimBlueprint&&); \
	NO_API UCaptureAnimBlueprint(const UCaptureAnimBlueprint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCaptureAnimBlueprint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCaptureAnimBlueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCaptureAnimBlueprint)


#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureAnimBlueprint_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CaptureDevice() { return STRUCT_OFFSET(UCaptureAnimBlueprint, CaptureDevice); } \
	FORCEINLINE static uint32 __PPO__bEnableScaling() { return STRUCT_OFFSET(UCaptureAnimBlueprint, bEnableScaling); } \
	FORCEINLINE static uint32 __PPO__RootLocation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, RootLocation); } \
	FORCEINLINE static uint32 __PPO__RootRotation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, RootRotation); } \
	FORCEINLINE static uint32 __PPO__PelvisLocation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, PelvisLocation); } \
	FORCEINLINE static uint32 __PPO__PelvisRotation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, PelvisRotation); } \
	FORCEINLINE static uint32 __PPO__RibcageLocation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, RibcageLocation); } \
	FORCEINLINE static uint32 __PPO__RibcageRotation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, RibcageRotation); } \
	FORCEINLINE static uint32 __PPO__HeadLocation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, HeadLocation); } \
	FORCEINLINE static uint32 __PPO__HeadRotation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, HeadRotation); } \
	FORCEINLINE static uint32 __PPO__UpperarmRightLocation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, UpperarmRightLocation); } \
	FORCEINLINE static uint32 __PPO__UpperarmRightRotation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, UpperarmRightRotation); } \
	FORCEINLINE static uint32 __PPO__UpperarmRightNoRollRotation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, UpperarmRightNoRollRotation); } \
	FORCEINLINE static uint32 __PPO__ForearmRightLocation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, ForearmRightLocation); } \
	FORCEINLINE static uint32 __PPO__ForearmRightRotation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, ForearmRightRotation); } \
	FORCEINLINE static uint32 __PPO__HandRightLocation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, HandRightLocation); } \
	FORCEINLINE static uint32 __PPO__HandRightRotation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, HandRightRotation); } \
	FORCEINLINE static uint32 __PPO__UpperarmLeftLocation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, UpperarmLeftLocation); } \
	FORCEINLINE static uint32 __PPO__UpperarmLeftRotation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, UpperarmLeftRotation); } \
	FORCEINLINE static uint32 __PPO__UpperarmLeftNoRollRotation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, UpperarmLeftNoRollRotation); } \
	FORCEINLINE static uint32 __PPO__ForearmLeftLocation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, ForearmLeftLocation); } \
	FORCEINLINE static uint32 __PPO__ForearmLeftRotation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, ForearmLeftRotation); } \
	FORCEINLINE static uint32 __PPO__HandLeftLocation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, HandLeftLocation); } \
	FORCEINLINE static uint32 __PPO__HandLeftRotation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, HandLeftRotation); } \
	FORCEINLINE static uint32 __PPO__ThighRightLocation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, ThighRightLocation); } \
	FORCEINLINE static uint32 __PPO__ThighRightRotation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, ThighRightRotation); } \
	FORCEINLINE static uint32 __PPO__CalfRightLocation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, CalfRightLocation); } \
	FORCEINLINE static uint32 __PPO__CalfRightRotation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, CalfRightRotation); } \
	FORCEINLINE static uint32 __PPO__FootRightLocation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, FootRightLocation); } \
	FORCEINLINE static uint32 __PPO__FootRightRotation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, FootRightRotation); } \
	FORCEINLINE static uint32 __PPO__ThighLeftLocation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, ThighLeftLocation); } \
	FORCEINLINE static uint32 __PPO__ThighLeftRotation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, ThighLeftRotation); } \
	FORCEINLINE static uint32 __PPO__CalfLeftLocation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, CalfLeftLocation); } \
	FORCEINLINE static uint32 __PPO__CalfLeftRotation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, CalfLeftRotation); } \
	FORCEINLINE static uint32 __PPO__FootLeftLocation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, FootLeftLocation); } \
	FORCEINLINE static uint32 __PPO__FootLeftRotation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, FootLeftRotation); } \
	FORCEINLINE static uint32 __PPO__IKTarget_ElbowRight() { return STRUCT_OFFSET(UCaptureAnimBlueprint, IKTarget_ElbowRight); } \
	FORCEINLINE static uint32 __PPO__IKTarget_ElbowLeft() { return STRUCT_OFFSET(UCaptureAnimBlueprint, IKTarget_ElbowLeft); } \
	FORCEINLINE static uint32 __PPO__IKTarget_KneeRight() { return STRUCT_OFFSET(UCaptureAnimBlueprint, IKTarget_KneeRight); } \
	FORCEINLINE static uint32 __PPO__IKTarget_KneeLeft() { return STRUCT_OFFSET(UCaptureAnimBlueprint, IKTarget_KneeLeft); } \
	FORCEINLINE static uint32 __PPO__ShoulderRightRotation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, ShoulderRightRotation); } \
	FORCEINLINE static uint32 __PPO__ShoulderLeftRotation() { return STRUCT_OFFSET(UCaptureAnimBlueprint, ShoulderLeftRotation); } \
	FORCEINLINE static uint32 __PPO__CurrentPose() { return STRUCT_OFFSET(UCaptureAnimBlueprint, CurrentPose); }


#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureAnimBlueprint_h_12_PROLOG
#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureAnimBlueprint_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureAnimBlueprint_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureAnimBlueprint_h_15_SPARSE_DATA \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureAnimBlueprint_h_15_RPC_WRAPPERS \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureAnimBlueprint_h_15_INCLASS \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureAnimBlueprint_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureAnimBlueprint_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureAnimBlueprint_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureAnimBlueprint_h_15_SPARSE_DATA \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureAnimBlueprint_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureAnimBlueprint_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureAnimBlueprint_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIVEMOCAPKIT_API UClass* StaticClass<class UCaptureAnimBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_CaptureAnimBlueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
