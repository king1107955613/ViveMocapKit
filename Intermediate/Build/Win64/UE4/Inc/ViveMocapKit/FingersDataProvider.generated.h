// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EVMK_VRHand : uint8;
struct FVMK_FingersPosePreset;
struct FVMK_FingersDetailedInfo;
#ifdef VIVEMOCAPKIT_FingersDataProvider_generated_h
#error "FingersDataProvider.generated.h already included, missing '#pragma once' in FingersDataProvider.h"
#endif
#define VIVEMOCAPKIT_FingersDataProvider_generated_h

#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_19_SPARSE_DATA
#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_19_RPC_WRAPPERS \
	virtual void GetFingersPose_Implementation(EVMK_VRHand Hand, FVMK_FingersPosePreset& OutFingersPose); \
	virtual void GetFingersPoseDetailed_Implementation(EVMK_VRHand Hand, FVMK_FingersDetailedInfo& OutFingersPose); \
	virtual void GetReferencePose_Implementation(FName const& SkeletalMeshName, FVMK_FingersPosePreset& OutFingersPose); \
 \
	DECLARE_FUNCTION(execGetFingersPose); \
	DECLARE_FUNCTION(execGetFingersPoseDetailed); \
	DECLARE_FUNCTION(execGetReferencePose);


#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFingersPose); \
	DECLARE_FUNCTION(execGetFingersPoseDetailed); \
	DECLARE_FUNCTION(execGetReferencePose);


#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_19_EVENT_PARMS \
	struct FingersDataProvider_eventGetFingersPose_Parms \
	{ \
		EVMK_VRHand Hand; \
		FVMK_FingersPosePreset OutFingersPose; \
	}; \
	struct FingersDataProvider_eventGetFingersPoseDetailed_Parms \
	{ \
		EVMK_VRHand Hand; \
		FVMK_FingersDetailedInfo OutFingersPose; \
	}; \
	struct FingersDataProvider_eventGetReferencePose_Parms \
	{ \
		FName SkeletalMeshName; \
		FVMK_FingersPosePreset OutFingersPose; \
	};


#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_19_CALLBACK_WRAPPERS
#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFingersDataProvider(); \
	friend struct Z_Construct_UClass_UFingersDataProvider_Statics; \
public: \
	DECLARE_CLASS(UFingersDataProvider, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ViveMocapKit"), NO_API) \
	DECLARE_SERIALIZER(UFingersDataProvider)


#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUFingersDataProvider(); \
	friend struct Z_Construct_UClass_UFingersDataProvider_Statics; \
public: \
	DECLARE_CLASS(UFingersDataProvider, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ViveMocapKit"), NO_API) \
	DECLARE_SERIALIZER(UFingersDataProvider)


#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFingersDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFingersDataProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFingersDataProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFingersDataProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFingersDataProvider(UFingersDataProvider&&); \
	NO_API UFingersDataProvider(const UFingersDataProvider&); \
public:


#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFingersDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFingersDataProvider(UFingersDataProvider&&); \
	NO_API UFingersDataProvider(const UFingersDataProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFingersDataProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFingersDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFingersDataProvider)


#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_19_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_16_PROLOG \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_19_EVENT_PARMS


#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_19_SPARSE_DATA \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_19_RPC_WRAPPERS \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_19_CALLBACK_WRAPPERS \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_19_INCLASS \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_19_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_19_SPARSE_DATA \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_19_CALLBACK_WRAPPERS \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_19_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIVEMOCAPKIT_API UClass* StaticClass<class UFingersDataProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ViveMocapKit_Source_ViveMocapKit_Public_FingersDataProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
