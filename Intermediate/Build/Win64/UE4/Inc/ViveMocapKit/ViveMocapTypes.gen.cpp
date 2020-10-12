// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViveMocapKit/Public/ViveMocapTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViveMocapTypes() {}
// Cross Module References
	VIVEMOCAPKIT_API UEnum* Z_Construct_UEnum_ViveMocapKit_EKneeOrientationSetup();
	UPackage* Z_Construct_UPackage__Script_ViveMocapKit();
	VIVEMOCAPKIT_API UEnum* Z_Construct_UEnum_ViveMocapKit_EBodySideRole();
	VIVEMOCAPKIT_API UEnum* Z_Construct_UEnum_ViveMocapKit_ETrackingDeviceRole();
	VIVEMOCAPKIT_API UEnum* Z_Construct_UEnum_ViveMocapKit_EHumanoidBone();
	VIVEMOCAPKIT_API UEnum* Z_Construct_UEnum_ViveMocapKit_ESkeletonBonesOrientation();
	VIVEMOCAPKIT_API UEnum* Z_Construct_UEnum_ViveMocapKit_ECaptureFilter();
	VIVEMOCAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FBodyCalibrationData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	VIVEMOCAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FTrackerSetup();
	VIVEMOCAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FTwistBone();
	VIVEMOCAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSmartCalibrationData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	VIVEMOCAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSmartTrackerCalibration();
	VIVEMOCAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAdditionalBoneState();
	VIVEMOCAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletonBasicPreset();
	VIVEMOCAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FCaptureBodyState();
	VIVEMOCAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSocketInfo();
	VIVEMOCAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FVMK_NT_PureTransform();
	VIVEMOCAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FVMK_NT_Transform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
// End Cross Module References
	static UEnum* EKneeOrientationSetup_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ViveMocapKit_EKneeOrientationSetup, Z_Construct_UPackage__Script_ViveMocapKit(), TEXT("EKneeOrientationSetup"));
		}
		return Singleton;
	}
	template<> VIVEMOCAPKIT_API UEnum* StaticEnum<EKneeOrientationSetup>()
	{
		return EKneeOrientationSetup_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKneeOrientationSetup(EKneeOrientationSetup_StaticEnum, TEXT("/Script/ViveMocapKit"), TEXT("EKneeOrientationSetup"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ViveMocapKit_EKneeOrientationSetup_Hash() { return 3870055522U; }
	UEnum* Z_Construct_UEnum_ViveMocapKit_EKneeOrientationSetup()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ViveMocapKit();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKneeOrientationSetup"), 0, Get_Z_Construct_UEnum_ViveMocapKit_EKneeOrientationSetup_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKneeOrientationSetup::AsPelvis", (int64)EKneeOrientationSetup::AsPelvis },
				{ "EKneeOrientationSetup::AsFoot", (int64)EKneeOrientationSetup::AsFoot },
				{ "EKneeOrientationSetup::Mixed", (int64)EKneeOrientationSetup::Mixed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AsFoot.Name", "EKneeOrientationSetup::AsFoot" },
				{ "AsPelvis.Name", "EKneeOrientationSetup::AsPelvis" },
				{ "BlueprintType", "true" },
				{ "Comment", "/* Enum describing a way to calculate knee orientation */" },
				{ "Mixed.Name", "EKneeOrientationSetup::Mixed" },
				{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
				{ "ToolTip", "Enum describing a way to calculate knee orientation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ViveMocapKit,
				nullptr,
				"EKneeOrientationSetup",
				"EKneeOrientationSetup",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBodySideRole_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ViveMocapKit_EBodySideRole, Z_Construct_UPackage__Script_ViveMocapKit(), TEXT("EBodySideRole"));
		}
		return Singleton;
	}
	template<> VIVEMOCAPKIT_API UEnum* StaticEnum<EBodySideRole>()
	{
		return EBodySideRole_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBodySideRole(EBodySideRole_StaticEnum, TEXT("/Script/ViveMocapKit"), TEXT("EBodySideRole"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ViveMocapKit_EBodySideRole_Hash() { return 1035312066U; }
	UEnum* Z_Construct_UEnum_ViveMocapKit_EBodySideRole()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ViveMocapKit();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBodySideRole"), 0, Get_Z_Construct_UEnum_ViveMocapKit_EBodySideRole_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBodySideRole::BSR_Disabled", (int64)EBodySideRole::BSR_Disabled },
				{ "EBodySideRole::BSR_Right", (int64)EBodySideRole::BSR_Right },
				{ "EBodySideRole::BSR_Left", (int64)EBodySideRole::BSR_Left },
				{ "EBodySideRole::BSR_Both", (int64)EBodySideRole::BSR_Both },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BSR_Both.DisplayName", "Both" },
				{ "BSR_Both.Name", "EBodySideRole::BSR_Both" },
				{ "BSR_Disabled.DisplayName", "Disabled" },
				{ "BSR_Disabled.Name", "EBodySideRole::BSR_Disabled" },
				{ "BSR_Left.DisplayName", "Left" },
				{ "BSR_Left.Name", "EBodySideRole::BSR_Left" },
				{ "BSR_Right.DisplayName", "Right" },
				{ "BSR_Right.Name", "EBodySideRole::BSR_Right" },
				{ "Comment", "/* Enum describing all tracked or calculated bones */" },
				{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
				{ "ToolTip", "Enum describing all tracked or calculated bones" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ViveMocapKit,
				nullptr,
				"EBodySideRole",
				"EBodySideRole",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETrackingDeviceRole_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ViveMocapKit_ETrackingDeviceRole, Z_Construct_UPackage__Script_ViveMocapKit(), TEXT("ETrackingDeviceRole"));
		}
		return Singleton;
	}
	template<> VIVEMOCAPKIT_API UEnum* StaticEnum<ETrackingDeviceRole>()
	{
		return ETrackingDeviceRole_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETrackingDeviceRole(ETrackingDeviceRole_StaticEnum, TEXT("/Script/ViveMocapKit"), TEXT("ETrackingDeviceRole"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ViveMocapKit_ETrackingDeviceRole_Hash() { return 2939392012U; }
	UEnum* Z_Construct_UEnum_ViveMocapKit_ETrackingDeviceRole()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ViveMocapKit();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETrackingDeviceRole"), 0, Get_Z_Construct_UEnum_ViveMocapKit_ETrackingDeviceRole_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETrackingDeviceRole::DontUse", (int64)ETrackingDeviceRole::DontUse },
				{ "ETrackingDeviceRole::HandsOnly", (int64)ETrackingDeviceRole::HandsOnly },
				{ "ETrackingDeviceRole::AnyRole", (int64)ETrackingDeviceRole::AnyRole },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnyRole.DisplayName", "Any Role" },
				{ "AnyRole.Name", "ETrackingDeviceRole::AnyRole" },
				{ "BlueprintType", "true" },
				{ "Comment", "/* Enum describing all tracked or calculated bones */" },
				{ "DontUse.DisplayName", "Don't Use" },
				{ "DontUse.Name", "ETrackingDeviceRole::DontUse" },
				{ "HandsOnly.DisplayName", "Hand Only" },
				{ "HandsOnly.Name", "ETrackingDeviceRole::HandsOnly" },
				{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
				{ "ToolTip", "Enum describing all tracked or calculated bones" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ViveMocapKit,
				nullptr,
				"ETrackingDeviceRole",
				"ETrackingDeviceRole",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHumanoidBone_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ViveMocapKit_EHumanoidBone, Z_Construct_UPackage__Script_ViveMocapKit(), TEXT("EHumanoidBone"));
		}
		return Singleton;
	}
	template<> VIVEMOCAPKIT_API UEnum* StaticEnum<EHumanoidBone>()
	{
		return EHumanoidBone_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHumanoidBone(EHumanoidBone_StaticEnum, TEXT("/Script/ViveMocapKit"), TEXT("EHumanoidBone"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ViveMocapKit_EHumanoidBone_Hash() { return 2533010544U; }
	UEnum* Z_Construct_UEnum_ViveMocapKit_EHumanoidBone()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ViveMocapKit();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHumanoidBone"), 0, Get_Z_Construct_UEnum_ViveMocapKit_EHumanoidBone_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHumanoidBone::Root", (int64)EHumanoidBone::Root },
				{ "EHumanoidBone::Pelvis", (int64)EHumanoidBone::Pelvis },
				{ "EHumanoidBone::Ribcage", (int64)EHumanoidBone::Ribcage },
				{ "EHumanoidBone::Head", (int64)EHumanoidBone::Head },
				{ "EHumanoidBone::ThighRight", (int64)EHumanoidBone::ThighRight },
				{ "EHumanoidBone::CalfRight", (int64)EHumanoidBone::CalfRight },
				{ "EHumanoidBone::FootRight", (int64)EHumanoidBone::FootRight },
				{ "EHumanoidBone::ThighLeft", (int64)EHumanoidBone::ThighLeft },
				{ "EHumanoidBone::CalfLeft", (int64)EHumanoidBone::CalfLeft },
				{ "EHumanoidBone::FootLeft", (int64)EHumanoidBone::FootLeft },
				{ "EHumanoidBone::ShoulderRight", (int64)EHumanoidBone::ShoulderRight },
				{ "EHumanoidBone::UpperarmRight", (int64)EHumanoidBone::UpperarmRight },
				{ "EHumanoidBone::ForearmRight", (int64)EHumanoidBone::ForearmRight },
				{ "EHumanoidBone::PalmRight", (int64)EHumanoidBone::PalmRight },
				{ "EHumanoidBone::ShoulderLeft", (int64)EHumanoidBone::ShoulderLeft },
				{ "EHumanoidBone::UpperarmLeft", (int64)EHumanoidBone::UpperarmLeft },
				{ "EHumanoidBone::ForearmLeft", (int64)EHumanoidBone::ForearmLeft },
				{ "EHumanoidBone::PalmLeft", (int64)EHumanoidBone::PalmLeft },
				{ "EHumanoidBone::Locator_ElbowRight", (int64)EHumanoidBone::Locator_ElbowRight },
				{ "EHumanoidBone::Locator_ElbowLeft", (int64)EHumanoidBone::Locator_ElbowLeft },
				{ "EHumanoidBone::Locator_KneeRight", (int64)EHumanoidBone::Locator_KneeRight },
				{ "EHumanoidBone::Locator_KneeLeft", (int64)EHumanoidBone::Locator_KneeLeft },
				{ "EHumanoidBone::HMD", (int64)EHumanoidBone::HMD },
				{ "EHumanoidBone::MotionControllerRight", (int64)EHumanoidBone::MotionControllerRight },
				{ "EHumanoidBone::MotionControllerLeft", (int64)EHumanoidBone::MotionControllerLeft },
				{ "EHumanoidBone::_TrackedDevices", (int64)EHumanoidBone::_TrackedDevices },
				{ "EHumanoidBone::TrackedDevice1", (int64)EHumanoidBone::TrackedDevice1 },
				{ "EHumanoidBone::TrackedDevice2", (int64)EHumanoidBone::TrackedDevice2 },
				{ "EHumanoidBone::TrackedDevice3", (int64)EHumanoidBone::TrackedDevice3 },
				{ "EHumanoidBone::TrackedDevice4", (int64)EHumanoidBone::TrackedDevice4 },
				{ "EHumanoidBone::TrackedDevice5", (int64)EHumanoidBone::TrackedDevice5 },
				{ "EHumanoidBone::TrackedDevice6", (int64)EHumanoidBone::TrackedDevice6 },
				{ "EHumanoidBone::TrackedDevice7", (int64)EHumanoidBone::TrackedDevice7 },
				{ "EHumanoidBone::TrackedDevice8", (int64)EHumanoidBone::TrackedDevice8 },
				{ "EHumanoidBone::MAX", (int64)EHumanoidBone::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "_TrackedDevices.Hidden", "" },
				{ "_TrackedDevices.Name", "EHumanoidBone::_TrackedDevices" },
				{ "BlueprintType", "true" },
				{ "CalfLeft.Name", "EHumanoidBone::CalfLeft" },
				{ "CalfRight.Name", "EHumanoidBone::CalfRight" },
				{ "Comment", "/* Enum describing all tracked or calculated bones */" },
				{ "FootLeft.Name", "EHumanoidBone::FootLeft" },
				{ "FootRight.Name", "EHumanoidBone::FootRight" },
				{ "ForearmLeft.Name", "EHumanoidBone::ForearmLeft" },
				{ "ForearmRight.Name", "EHumanoidBone::ForearmRight" },
				{ "Head.Name", "EHumanoidBone::Head" },
				{ "HMD.DisplayName", "[Helper] Head Mounted Display" },
				{ "HMD.Name", "EHumanoidBone::HMD" },
				{ "Locator_ElbowLeft.DisplayName", "[Locator] Elbow Left" },
				{ "Locator_ElbowLeft.Name", "EHumanoidBone::Locator_ElbowLeft" },
				{ "Locator_ElbowRight.DisplayName", "[Locator] Elbow Right" },
				{ "Locator_ElbowRight.Name", "EHumanoidBone::Locator_ElbowRight" },
				{ "Locator_KneeLeft.DisplayName", "[Locator] Knee Left" },
				{ "Locator_KneeLeft.Name", "EHumanoidBone::Locator_KneeLeft" },
				{ "Locator_KneeRight.DisplayName", "[Locator] Knee Right" },
				{ "Locator_KneeRight.Name", "EHumanoidBone::Locator_KneeRight" },
				{ "MAX.Hidden", "" },
				{ "MAX.Name", "EHumanoidBone::MAX" },
				{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
				{ "MotionControllerLeft.DisplayName", "[Helper] Motion Controller Left" },
				{ "MotionControllerLeft.Name", "EHumanoidBone::MotionControllerLeft" },
				{ "MotionControllerRight.DisplayName", "[Helper] Motion Controller Right" },
				{ "MotionControllerRight.Name", "EHumanoidBone::MotionControllerRight" },
				{ "PalmLeft.Name", "EHumanoidBone::PalmLeft" },
				{ "PalmRight.Name", "EHumanoidBone::PalmRight" },
				{ "Pelvis.Name", "EHumanoidBone::Pelvis" },
				{ "Ribcage.Name", "EHumanoidBone::Ribcage" },
				{ "Root.Name", "EHumanoidBone::Root" },
				{ "ShoulderLeft.Name", "EHumanoidBone::ShoulderLeft" },
				{ "ShoulderRight.Name", "EHumanoidBone::ShoulderRight" },
				{ "ThighLeft.Name", "EHumanoidBone::ThighLeft" },
				{ "ThighRight.Name", "EHumanoidBone::ThighRight" },
				{ "ToolTip", "Enum describing all tracked or calculated bones" },
				{ "TrackedDevice1.DisplayName", "[Helper] Tracked Device #1" },
				{ "TrackedDevice1.Name", "EHumanoidBone::TrackedDevice1" },
				{ "TrackedDevice2.DisplayName", "[Helper] Tracked Device #2" },
				{ "TrackedDevice2.Name", "EHumanoidBone::TrackedDevice2" },
				{ "TrackedDevice3.DisplayName", "[Helper] Tracked Device #3" },
				{ "TrackedDevice3.Name", "EHumanoidBone::TrackedDevice3" },
				{ "TrackedDevice4.DisplayName", "[Helper] Tracked Device #4" },
				{ "TrackedDevice4.Name", "EHumanoidBone::TrackedDevice4" },
				{ "TrackedDevice5.DisplayName", "[Helper] Tracked Device #5" },
				{ "TrackedDevice5.Name", "EHumanoidBone::TrackedDevice5" },
				{ "TrackedDevice6.DisplayName", "[Helper] Tracked Device #6" },
				{ "TrackedDevice6.Name", "EHumanoidBone::TrackedDevice6" },
				{ "TrackedDevice7.DisplayName", "[Helper] Tracked Device #7" },
				{ "TrackedDevice7.Name", "EHumanoidBone::TrackedDevice7" },
				{ "TrackedDevice8.DisplayName", "[Helper] Tracked Device #8" },
				{ "TrackedDevice8.Name", "EHumanoidBone::TrackedDevice8" },
				{ "UpperarmLeft.Name", "EHumanoidBone::UpperarmLeft" },
				{ "UpperarmRight.Name", "EHumanoidBone::UpperarmRight" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ViveMocapKit,
				nullptr,
				"EHumanoidBone",
				"EHumanoidBone",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESkeletonBonesOrientation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ViveMocapKit_ESkeletonBonesOrientation, Z_Construct_UPackage__Script_ViveMocapKit(), TEXT("ESkeletonBonesOrientation"));
		}
		return Singleton;
	}
	template<> VIVEMOCAPKIT_API UEnum* StaticEnum<ESkeletonBonesOrientation>()
	{
		return ESkeletonBonesOrientation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESkeletonBonesOrientation(ESkeletonBonesOrientation_StaticEnum, TEXT("/Script/ViveMocapKit"), TEXT("ESkeletonBonesOrientation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ViveMocapKit_ESkeletonBonesOrientation_Hash() { return 2155023775U; }
	UEnum* Z_Construct_UEnum_ViveMocapKit_ESkeletonBonesOrientation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ViveMocapKit();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESkeletonBonesOrientation"), 0, Get_Z_Construct_UEnum_ViveMocapKit_ESkeletonBonesOrientation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESkeletonBonesOrientation::SBO_Default", (int64)ESkeletonBonesOrientation::SBO_Default },
				{ "ESkeletonBonesOrientation::SBO_ComponentSpaceBones", (int64)ESkeletonBonesOrientation::SBO_ComponentSpaceBones },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Some skeletons have non-standard orientation of bones which should be considered when exporting Pose Snapshot */" },
				{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
				{ "SBO_ComponentSpaceBones.DisplayName", "Component Space (DAZ3D Genesis)" },
				{ "SBO_ComponentSpaceBones.Name", "ESkeletonBonesOrientation::SBO_ComponentSpaceBones" },
				{ "SBO_Default.DisplayName", "Default" },
				{ "SBO_Default.Name", "ESkeletonBonesOrientation::SBO_Default" },
				{ "ToolTip", "Some skeletons have non-standard orientation of bones which should be considered when exporting Pose Snapshot" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ViveMocapKit,
				nullptr,
				"ESkeletonBonesOrientation",
				"ESkeletonBonesOrientation",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECaptureFilter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ViveMocapKit_ECaptureFilter, Z_Construct_UPackage__Script_ViveMocapKit(), TEXT("ECaptureFilter"));
		}
		return Singleton;
	}
	template<> VIVEMOCAPKIT_API UEnum* StaticEnum<ECaptureFilter>()
	{
		return ECaptureFilter_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECaptureFilter(ECaptureFilter_StaticEnum, TEXT("/Script/ViveMocapKit"), TEXT("ECaptureFilter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ViveMocapKit_ECaptureFilter_Hash() { return 450676654U; }
	UEnum* Z_Construct_UEnum_ViveMocapKit_ECaptureFilter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ViveMocapKit();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECaptureFilter"), 0, Get_Z_Construct_UEnum_ViveMocapKit_ECaptureFilter_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECaptureFilter::CF_None", (int64)ECaptureFilter::CF_None },
				{ "ECaptureFilter::CF_SimpleSmooth", (int64)ECaptureFilter::CF_SimpleSmooth },
				{ "ECaptureFilter::CF_ExtremumCut", (int64)ECaptureFilter::CF_ExtremumCut },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CF_ExtremumCut.Comment", "// Gives one frame 11 ms delay!\n" },
				{ "CF_ExtremumCut.DisplayName", "Extremum Cut" },
				{ "CF_ExtremumCut.Name", "ECaptureFilter::CF_ExtremumCut" },
				{ "CF_ExtremumCut.ToolTip", "Gives one frame 11 ms delay!" },
				{ "CF_None.Comment", "// Don't apply filters\n" },
				{ "CF_None.DisplayName", "None" },
				{ "CF_None.Name", "ECaptureFilter::CF_None" },
				{ "CF_None.ToolTip", "Don't apply filters" },
				{ "CF_SimpleSmooth.Comment", "// Take simple average of last three frames (good for animation capture with frame rate 30)\n" },
				{ "CF_SimpleSmooth.DisplayName", "Simple Smooth" },
				{ "CF_SimpleSmooth.Name", "ECaptureFilter::CF_SimpleSmooth" },
				{ "CF_SimpleSmooth.ToolTip", "Take simple average of last three frames (good for animation capture with frame rate 30)" },
				{ "Comment", "/** Real-time filters for captured animation */" },
				{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
				{ "ToolTip", "Real-time filters for captured animation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ViveMocapKit,
				nullptr,
				"ECaptureFilter",
				"ECaptureFilter",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FBodyCalibrationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VIVEMOCAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FBodyCalibrationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyCalibrationData, Z_Construct_UPackage__Script_ViveMocapKit(), TEXT("BodyCalibrationData"), sizeof(FBodyCalibrationData), Get_Z_Construct_UScriptStruct_FBodyCalibrationData_Hash());
	}
	return Singleton;
}
template<> VIVEMOCAPKIT_API UScriptStruct* StaticStruct<FBodyCalibrationData>()
{
	return FBodyCalibrationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBodyCalibrationData(FBodyCalibrationData::StaticStruct, TEXT("/Script/ViveMocapKit"), TEXT("BodyCalibrationData"), false, nullptr, nullptr);
static struct FScriptStruct_ViveMocapKit_StaticRegisterNativesFBodyCalibrationData
{
	FScriptStruct_ViveMocapKit_StaticRegisterNativesFBodyCalibrationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BodyCalibrationData")),new UScriptStruct::TCppStructOps<FBodyCalibrationData>);
	}
} ScriptStruct_ViveMocapKit_StaticRegisterNativesFBodyCalibrationData;
	struct Z_Construct_UScriptStruct_FBodyCalibrationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshSizeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshSizeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoulderLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShoulderLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalfLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CalfLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThighLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThighLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForearmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForearmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperarmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpperarmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollarboneLeftOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollarboneLeftOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollarboneRightOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollarboneRightOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackersData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TrackersData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackersData_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackersData_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* All data required for body calibration */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "All data required for body calibration" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyCalibrationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_MeshSizeScale_MetaData[] = {
		{ "Category", "Body Calibration Data" },
		{ "Comment", "/* Scaled mesh size */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Scaled mesh size" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_MeshSizeScale = { "MeshSizeScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyCalibrationData, MeshSizeScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_MeshSizeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_MeshSizeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_ShoulderLength_MetaData[] = {
		{ "Category", "Body Calibration Data" },
		{ "Comment", "/* Scaled collarbone size */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Scaled collarbone size" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_ShoulderLength = { "ShoulderLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyCalibrationData, ShoulderLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_ShoulderLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_ShoulderLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_CalfLength_MetaData[] = {
		{ "Category", "Body Calibration Data" },
		{ "Comment", "/* Scaled calf size */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Scaled calf size" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_CalfLength = { "CalfLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyCalibrationData, CalfLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_CalfLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_CalfLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_ThighLength_MetaData[] = {
		{ "Category", "Body Calibration Data" },
		{ "Comment", "/* Scaled thigh size */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Scaled thigh size" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_ThighLength = { "ThighLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyCalibrationData, ThighLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_ThighLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_ThighLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_ForearmLength_MetaData[] = {
		{ "Category", "Body Calibration Data" },
		{ "Comment", "/* Scaled lowerarm size */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Scaled lowerarm size" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_ForearmLength = { "ForearmLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyCalibrationData, ForearmLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_ForearmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_ForearmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_UpperarmLength_MetaData[] = {
		{ "Category", "Body Calibration Data" },
		{ "Comment", "/* Scaled upperarm size */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Scaled upperarm size" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_UpperarmLength = { "UpperarmLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyCalibrationData, UpperarmLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_UpperarmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_UpperarmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_CollarboneLeftOffset_MetaData[] = {
		{ "Category", "Body Calibration Data" },
		{ "Comment", "/* Offset for default collarbone rotation */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Offset for default collarbone rotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_CollarboneLeftOffset = { "CollarboneLeftOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyCalibrationData, CollarboneLeftOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_CollarboneLeftOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_CollarboneLeftOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_CollarboneRightOffset_MetaData[] = {
		{ "Category", "Body Calibration Data" },
		{ "Comment", "/* Offset for default collarbone rotation */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Offset for default collarbone rotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_CollarboneRightOffset = { "CollarboneRightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyCalibrationData, CollarboneRightOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_CollarboneRightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_CollarboneRightOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_TrackersData_MetaData[] = {
		{ "Category", "Body Calibration Data" },
		{ "Comment", "/* Bone-to-tracker map */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Bone-to-tracker map" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_TrackersData = { "TrackersData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBodyCalibrationData, TrackersData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_TrackersData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_TrackersData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_TrackersData_Key_KeyProp = { "TrackersData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_TrackersData_ValueProp = { "TrackersData", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTrackerSetup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_MeshSizeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_ShoulderLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_CalfLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_ThighLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_ForearmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_UpperarmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_CollarboneLeftOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_CollarboneRightOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_TrackersData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_TrackersData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::NewProp_TrackersData_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ViveMocapKit,
		nullptr,
		&NewStructOps,
		"BodyCalibrationData",
		sizeof(FBodyCalibrationData),
		alignof(FBodyCalibrationData),
		Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBodyCalibrationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBodyCalibrationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ViveMocapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BodyCalibrationData"), sizeof(FBodyCalibrationData), Get_Z_Construct_UScriptStruct_FBodyCalibrationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBodyCalibrationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBodyCalibrationData_Hash() { return 3569293407U; }
class UScriptStruct* FTwistBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VIVEMOCAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FTwistBone_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwistBone, Z_Construct_UPackage__Script_ViveMocapKit(), TEXT("TwistBone"), sizeof(FTwistBone), Get_Z_Construct_UScriptStruct_FTwistBone_Hash());
	}
	return Singleton;
}
template<> VIVEMOCAPKIT_API UScriptStruct* StaticStruct<FTwistBone>()
{
	return FTwistBone::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTwistBone(FTwistBone::StaticStruct, TEXT("/Script/ViveMocapKit"), TEXT("TwistBone"), false, nullptr, nullptr);
static struct FScriptStruct_ViveMocapKit_StaticRegisterNativesFTwistBone
{
	FScriptStruct_ViveMocapKit_StaticRegisterNativesFTwistBone()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TwistBone")),new UScriptStruct::TCppStructOps<FTwistBone>);
	}
} ScriptStruct_ViveMocapKit_StaticRegisterNativesFTwistBone;
	struct Z_Construct_UScriptStruct_FTwistBone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwistBone_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/* Twist Bone info (value), key is bone name */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Twist Bone info (value), key is bone name" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwistBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwistBone>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwistBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ViveMocapKit,
		nullptr,
		&NewStructOps,
		"TwistBone",
		sizeof(FTwistBone),
		alignof(FTwistBone),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwistBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwistBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwistBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTwistBone_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ViveMocapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TwistBone"), sizeof(FTwistBone), Get_Z_Construct_UScriptStruct_FTwistBone_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTwistBone_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTwistBone_Hash() { return 237725548U; }
class UScriptStruct* FSmartCalibrationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VIVEMOCAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FSmartCalibrationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartCalibrationData, Z_Construct_UPackage__Script_ViveMocapKit(), TEXT("SmartCalibrationData"), sizeof(FSmartCalibrationData), Get_Z_Construct_UScriptStruct_FSmartCalibrationData_Hash());
	}
	return Singleton;
}
template<> VIVEMOCAPKIT_API UScriptStruct* StaticStruct<FSmartCalibrationData>()
{
	return FSmartCalibrationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSmartCalibrationData(FSmartCalibrationData::StaticStruct, TEXT("/Script/ViveMocapKit"), TEXT("SmartCalibrationData"), false, nullptr, nullptr);
static struct FScriptStruct_ViveMocapKit_StaticRegisterNativesFSmartCalibrationData
{
	FScriptStruct_ViveMocapKit_StaticRegisterNativesFSmartCalibrationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SmartCalibrationData")),new UScriptStruct::TCppStructOps<FSmartCalibrationData>);
	}
} ScriptStruct_ViveMocapKit_StaticRegisterNativesFSmartCalibrationData;
	struct Z_Construct_UScriptStruct_FSmartCalibrationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftVirtualTrackerOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftVirtualTrackerOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightVirtualTrackerOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightVirtualTrackerOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadTrackerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeadTrackerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Relations_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Relations;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Relations_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Relations_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftCollarboneOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftCollarboneOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightCollarboneOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightCollarboneOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackersData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TrackersData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackersData_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackersData_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// New Calibration data struct\n" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "New Calibration data struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartCalibrationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_LeftVirtualTrackerOffset_MetaData[] = {
		{ "Category", "Smart Calibration Data" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_LeftVirtualTrackerOffset = { "LeftVirtualTrackerOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartCalibrationData, LeftVirtualTrackerOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_LeftVirtualTrackerOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_LeftVirtualTrackerOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_RightVirtualTrackerOffset_MetaData[] = {
		{ "Category", "Smart Calibration Data" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_RightVirtualTrackerOffset = { "RightVirtualTrackerOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartCalibrationData, RightVirtualTrackerOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_RightVirtualTrackerOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_RightVirtualTrackerOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_HeadTrackerId_MetaData[] = {
		{ "Category", "Smart Calibration Data" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_HeadTrackerId = { "HeadTrackerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartCalibrationData, HeadTrackerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_HeadTrackerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_HeadTrackerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_Relations_MetaData[] = {
		{ "Category", "Smart Calibration Data" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_Relations = { "Relations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartCalibrationData, Relations), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_Relations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_Relations_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_Relations_Key_KeyProp = { "Relations_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_Relations_ValueProp = { "Relations", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSmartTrackerCalibration, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_LeftCollarboneOffset_MetaData[] = {
		{ "Category", "Smart Calibration Data" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_LeftCollarboneOffset = { "LeftCollarboneOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartCalibrationData, LeftCollarboneOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_LeftCollarboneOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_LeftCollarboneOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_RightCollarboneOffset_MetaData[] = {
		{ "Category", "Smart Calibration Data" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_RightCollarboneOffset = { "RightCollarboneOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartCalibrationData, RightCollarboneOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_RightCollarboneOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_RightCollarboneOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_TrackersData_MetaData[] = {
		{ "Category", "Smart Calibration Data" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_TrackersData = { "TrackersData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartCalibrationData, TrackersData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_TrackersData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_TrackersData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_TrackersData_Key_KeyProp = { "TrackersData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_TrackersData_ValueProp = { "TrackersData", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTrackerSetup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_LeftVirtualTrackerOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_RightVirtualTrackerOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_HeadTrackerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_Relations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_Relations_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_Relations_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_LeftCollarboneOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_RightCollarboneOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_TrackersData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_TrackersData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::NewProp_TrackersData_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ViveMocapKit,
		nullptr,
		&NewStructOps,
		"SmartCalibrationData",
		sizeof(FSmartCalibrationData),
		alignof(FSmartCalibrationData),
		Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartCalibrationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSmartCalibrationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ViveMocapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SmartCalibrationData"), sizeof(FSmartCalibrationData), Get_Z_Construct_UScriptStruct_FSmartCalibrationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSmartCalibrationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSmartCalibrationData_Hash() { return 2196804096U; }
class UScriptStruct* FSmartTrackerCalibration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VIVEMOCAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FSmartTrackerCalibration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartTrackerCalibration, Z_Construct_UPackage__Script_ViveMocapKit(), TEXT("SmartTrackerCalibration"), sizeof(FSmartTrackerCalibration), Get_Z_Construct_UScriptStruct_FSmartTrackerCalibration_Hash());
	}
	return Singleton;
}
template<> VIVEMOCAPKIT_API UScriptStruct* StaticStruct<FSmartTrackerCalibration>()
{
	return FSmartTrackerCalibration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSmartTrackerCalibration(FSmartTrackerCalibration::StaticStruct, TEXT("/Script/ViveMocapKit"), TEXT("SmartTrackerCalibration"), false, nullptr, nullptr);
static struct FScriptStruct_ViveMocapKit_StaticRegisterNativesFSmartTrackerCalibration
{
	FScriptStruct_ViveMocapKit_StaticRegisterNativesFSmartTrackerCalibration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SmartTrackerCalibration")),new UScriptStruct::TCppStructOps<FSmartTrackerCalibration>);
	}
} ScriptStruct_ViveMocapKit_StaticRegisterNativesFSmartTrackerCalibration;
	struct Z_Construct_UScriptStruct_FSmartTrackerCalibration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherTrackers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OtherTrackers;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OtherTrackers_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherTrackers_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartTrackerCalibration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Nested per-tracker relation\n" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Nested per-tracker relation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartTrackerCalibration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartTrackerCalibration>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartTrackerCalibration_Statics::NewProp_OtherTrackers_MetaData[] = {
		{ "Category", "Smart Tracker Calibration" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSmartTrackerCalibration_Statics::NewProp_OtherTrackers = { "OtherTrackers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartTrackerCalibration, OtherTrackers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartTrackerCalibration_Statics::NewProp_OtherTrackers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartTrackerCalibration_Statics::NewProp_OtherTrackers_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSmartTrackerCalibration_Statics::NewProp_OtherTrackers_Key_KeyProp = { "OtherTrackers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartTrackerCalibration_Statics::NewProp_OtherTrackers_ValueProp = { "OtherTrackers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartTrackerCalibration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartTrackerCalibration_Statics::NewProp_OtherTrackers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartTrackerCalibration_Statics::NewProp_OtherTrackers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartTrackerCalibration_Statics::NewProp_OtherTrackers_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartTrackerCalibration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ViveMocapKit,
		nullptr,
		&NewStructOps,
		"SmartTrackerCalibration",
		sizeof(FSmartTrackerCalibration),
		alignof(FSmartTrackerCalibration),
		Z_Construct_UScriptStruct_FSmartTrackerCalibration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartTrackerCalibration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartTrackerCalibration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartTrackerCalibration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartTrackerCalibration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSmartTrackerCalibration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ViveMocapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SmartTrackerCalibration"), sizeof(FSmartTrackerCalibration), Get_Z_Construct_UScriptStruct_FSmartTrackerCalibration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSmartTrackerCalibration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSmartTrackerCalibration_Hash() { return 4144376203U; }
class UScriptStruct* FTrackerSetup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VIVEMOCAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FTrackerSetup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackerSetup, Z_Construct_UPackage__Script_ViveMocapKit(), TEXT("TrackerSetup"), sizeof(FTrackerSetup), Get_Z_Construct_UScriptStruct_FTrackerSetup_Hash());
	}
	return Singleton;
}
template<> VIVEMOCAPKIT_API UScriptStruct* StaticStruct<FTrackerSetup>()
{
	return FTrackerSetup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTrackerSetup(FTrackerSetup::StaticStruct, TEXT("/Script/ViveMocapKit"), TEXT("TrackerSetup"), false, nullptr, nullptr);
static struct FScriptStruct_ViveMocapKit_StaticRegisterNativesFTrackerSetup
{
	FScriptStruct_ViveMocapKit_StaticRegisterNativesFTrackerSetup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TrackerSetup")),new UScriptStruct::TCppStructOps<FTrackerSetup>);
	}
} ScriptStruct_ViveMocapKit_StaticRegisterNativesFTrackerSetup;
	struct Z_Construct_UScriptStruct_FTrackerSetup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherBoneTracker_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBoneTracker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackerSetup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Vive Tracker attachment info */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Vive Tracker attachment info" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrackerSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackerSetup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackerSetup_Statics::NewProp_OtherBoneTracker_MetaData[] = {
		{ "Category", "Tracker Setup" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTrackerSetup_Statics::NewProp_OtherBoneTracker = { "OtherBoneTracker", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackerSetup, OtherBoneTracker), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackerSetup_Statics::NewProp_OtherBoneTracker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackerSetup_Statics::NewProp_OtherBoneTracker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackerSetup_Statics::NewProp_RelativeOffset_MetaData[] = {
		{ "Category", "Tracker Setup" },
		{ "Comment", "/* Transform of the attached bone reelative to Tracked Device */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Transform of the attached bone reelative to Tracked Device" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackerSetup_Statics::NewProp_RelativeOffset = { "RelativeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackerSetup, RelativeOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackerSetup_Statics::NewProp_RelativeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackerSetup_Statics::NewProp_RelativeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackerSetup_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "Tracker Setup" },
		{ "Comment", "/* Tracked Device attached bone */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Tracked Device attached bone" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTrackerSetup_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrackerSetup, Bone), Z_Construct_UEnum_ViveMocapKit_EHumanoidBone, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackerSetup_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackerSetup_Statics::NewProp_Bone_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTrackerSetup_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrackerSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackerSetup_Statics::NewProp_OtherBoneTracker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackerSetup_Statics::NewProp_RelativeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackerSetup_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackerSetup_Statics::NewProp_Bone_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrackerSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ViveMocapKit,
		nullptr,
		&NewStructOps,
		"TrackerSetup",
		sizeof(FTrackerSetup),
		alignof(FTrackerSetup),
		Z_Construct_UScriptStruct_FTrackerSetup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackerSetup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackerSetup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackerSetup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrackerSetup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTrackerSetup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ViveMocapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TrackerSetup"), sizeof(FTrackerSetup), Get_Z_Construct_UScriptStruct_FTrackerSetup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTrackerSetup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTrackerSetup_Hash() { return 1632012118U; }
class UScriptStruct* FAdditionalBoneState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VIVEMOCAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FAdditionalBoneState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdditionalBoneState, Z_Construct_UPackage__Script_ViveMocapKit(), TEXT("AdditionalBoneState"), sizeof(FAdditionalBoneState), Get_Z_Construct_UScriptStruct_FAdditionalBoneState_Hash());
	}
	return Singleton;
}
template<> VIVEMOCAPKIT_API UScriptStruct* StaticStruct<FAdditionalBoneState>()
{
	return FAdditionalBoneState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdditionalBoneState(FAdditionalBoneState::StaticStruct, TEXT("/Script/ViveMocapKit"), TEXT("AdditionalBoneState"), false, nullptr, nullptr);
static struct FScriptStruct_ViveMocapKit_StaticRegisterNativesFAdditionalBoneState
{
	FScriptStruct_ViveMocapKit_StaticRegisterNativesFAdditionalBoneState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AdditionalBoneState")),new UScriptStruct::TCppStructOps<FAdditionalBoneState>);
	}
} ScriptStruct_ViveMocapKit_StaticRegisterNativesFAdditionalBoneState;
	struct Z_Construct_UScriptStruct_FAdditionalBoneState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdditionalBoneState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Struct to calculate neck bones and spine bones */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Struct to calculate neck bones and spine bones" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdditionalBoneState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdditionalBoneState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdditionalBoneState_Statics::NewProp_RelativeOffset_MetaData[] = {
		{ "Comment", "/* Default Bone Transform relative to Parent Bone */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Default Bone Transform relative to Parent Bone" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAdditionalBoneState_Statics::NewProp_RelativeOffset = { "RelativeOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdditionalBoneState, RelativeOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdditionalBoneState_Statics::NewProp_RelativeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdditionalBoneState_Statics::NewProp_RelativeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdditionalBoneState_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "Category", "Additional Bone State" },
		{ "Comment", "/* Current bone world transform */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Current bone world transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAdditionalBoneState_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdditionalBoneState, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdditionalBoneState_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdditionalBoneState_Statics::NewProp_WorldTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdditionalBoneState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdditionalBoneState_Statics::NewProp_RelativeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdditionalBoneState_Statics::NewProp_WorldTransform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdditionalBoneState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ViveMocapKit,
		nullptr,
		&NewStructOps,
		"AdditionalBoneState",
		sizeof(FAdditionalBoneState),
		alignof(FAdditionalBoneState),
		Z_Construct_UScriptStruct_FAdditionalBoneState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdditionalBoneState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdditionalBoneState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdditionalBoneState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdditionalBoneState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdditionalBoneState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ViveMocapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdditionalBoneState"), sizeof(FAdditionalBoneState), Get_Z_Construct_UScriptStruct_FAdditionalBoneState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdditionalBoneState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdditionalBoneState_Hash() { return 1349814112U; }
class UScriptStruct* FSkeletonBasicPreset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VIVEMOCAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FSkeletonBasicPreset_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletonBasicPreset, Z_Construct_UPackage__Script_ViveMocapKit(), TEXT("SkeletonBasicPreset"), sizeof(FSkeletonBasicPreset), Get_Z_Construct_UScriptStruct_FSkeletonBasicPreset_Hash());
	}
	return Singleton;
}
template<> VIVEMOCAPKIT_API UScriptStruct* StaticStruct<FSkeletonBasicPreset>()
{
	return FSkeletonBasicPreset::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletonBasicPreset(FSkeletonBasicPreset::StaticStruct, TEXT("/Script/ViveMocapKit"), TEXT("SkeletonBasicPreset"), false, nullptr, nullptr);
static struct FScriptStruct_ViveMocapKit_StaticRegisterNativesFSkeletonBasicPreset
{
	FScriptStruct_ViveMocapKit_StaticRegisterNativesFSkeletonBasicPreset()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletonBasicPreset")),new UScriptStruct::TCppStructOps<FSkeletonBasicPreset>);
	}
} ScriptStruct_ViveMocapKit_StaticRegisterNativesFSkeletonBasicPreset;
	struct Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThighTwistsLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ThighTwistsLeft;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ThighTwistsLeft_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThighTwistsLeft_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThighTwistsRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ThighTwistsRight;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ThighTwistsRight_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThighTwistsRight_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalfTwistsLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CalfTwistsLeft;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CalfTwistsLeft_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CalfTwistsLeft_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalfTwistsRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CalfTwistsRight;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CalfTwistsRight_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CalfTwistsRight_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperarmTwistsLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_UpperarmTwistsLeft;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UpperarmTwistsLeft_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpperarmTwistsLeft_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperarmTwistsRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_UpperarmTwistsRight;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UpperarmTwistsRight_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpperarmTwistsRight_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForearmTwistsLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ForearmTwistsLeft;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ForearmTwistsLeft_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForearmTwistsLeft_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForearmTwistsRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ForearmTwistsRight;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ForearmTwistsRight_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForearmTwistsRight_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketsMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SocketsMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketsMap_Key_KeyProp;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SocketsMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SocketsMap_ValueProp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonBonesMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SkeletonBonesMap;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SkeletonBonesMap_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkeletonBonesMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SkeletonBonesMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Skeleton Setup struct. Similar to \"Capture Device/Skeleton\" Category */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Skeleton Setup struct. Similar to \"Capture Device/Skeleton\" Category" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletonBasicPreset>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ThighTwistsLeft_MetaData[] = {
		{ "Category", "Skeleton Basic Preset" },
		{ "Comment", "// Left thigh twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)\n" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Left thigh twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ThighTwistsLeft = { "ThighTwistsLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletonBasicPreset, ThighTwistsLeft), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ThighTwistsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ThighTwistsLeft_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ThighTwistsLeft_Key_KeyProp = { "ThighTwistsLeft_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ThighTwistsLeft_ValueProp = { "ThighTwistsLeft", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ThighTwistsRight_MetaData[] = {
		{ "Category", "Skeleton Basic Preset" },
		{ "Comment", "// Right thigh twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)\n" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Right thigh twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ThighTwistsRight = { "ThighTwistsRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletonBasicPreset, ThighTwistsRight), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ThighTwistsRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ThighTwistsRight_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ThighTwistsRight_Key_KeyProp = { "ThighTwistsRight_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ThighTwistsRight_ValueProp = { "ThighTwistsRight", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_CalfTwistsLeft_MetaData[] = {
		{ "Category", "Skeleton Basic Preset" },
		{ "Comment", "// Left calf twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)\n" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Left calf twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_CalfTwistsLeft = { "CalfTwistsLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletonBasicPreset, CalfTwistsLeft), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_CalfTwistsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_CalfTwistsLeft_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_CalfTwistsLeft_Key_KeyProp = { "CalfTwistsLeft_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_CalfTwistsLeft_ValueProp = { "CalfTwistsLeft", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_CalfTwistsRight_MetaData[] = {
		{ "Category", "Skeleton Basic Preset" },
		{ "Comment", "// Right calf twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)\n" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Right calf twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_CalfTwistsRight = { "CalfTwistsRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletonBasicPreset, CalfTwistsRight), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_CalfTwistsRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_CalfTwistsRight_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_CalfTwistsRight_Key_KeyProp = { "CalfTwistsRight_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_CalfTwistsRight_ValueProp = { "CalfTwistsRight", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_UpperarmTwistsLeft_MetaData[] = {
		{ "Category", "Skeleton Basic Preset" },
		{ "Comment", "// Right upperarm twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)\n" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Right upperarm twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_UpperarmTwistsLeft = { "UpperarmTwistsLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletonBasicPreset, UpperarmTwistsLeft), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_UpperarmTwistsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_UpperarmTwistsLeft_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_UpperarmTwistsLeft_Key_KeyProp = { "UpperarmTwistsLeft_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_UpperarmTwistsLeft_ValueProp = { "UpperarmTwistsLeft", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_UpperarmTwistsRight_MetaData[] = {
		{ "Category", "Skeleton Basic Preset" },
		{ "Comment", "// Right upperarm twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)\n" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Right upperarm twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_UpperarmTwistsRight = { "UpperarmTwistsRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletonBasicPreset, UpperarmTwistsRight), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_UpperarmTwistsRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_UpperarmTwistsRight_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_UpperarmTwistsRight_Key_KeyProp = { "UpperarmTwistsRight_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_UpperarmTwistsRight_ValueProp = { "UpperarmTwistsRight", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ForearmTwistsLeft_MetaData[] = {
		{ "Category", "Skeleton Basic Preset" },
		{ "Comment", "// Left forearm twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)\n" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Left forearm twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ForearmTwistsLeft = { "ForearmTwistsLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletonBasicPreset, ForearmTwistsLeft), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ForearmTwistsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ForearmTwistsLeft_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ForearmTwistsLeft_Key_KeyProp = { "ForearmTwistsLeft_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ForearmTwistsLeft_ValueProp = { "ForearmTwistsLeft", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ForearmTwistsRight_MetaData[] = {
		{ "Category", "Skeleton Basic Preset" },
		{ "Comment", "// Right forearm twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)\n" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Right forearm twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ForearmTwistsRight = { "ForearmTwistsRight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletonBasicPreset, ForearmTwistsRight), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ForearmTwistsRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ForearmTwistsRight_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ForearmTwistsRight_Key_KeyProp = { "ForearmTwistsRight_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ForearmTwistsRight_ValueProp = { "ForearmTwistsRight", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_SocketsMap_MetaData[] = {
		{ "Category", "Skeleton Basic Preset" },
		{ "Comment", "/* Map of additional bones with parents to attach */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Map of additional bones with parents to attach" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_SocketsMap = { "SocketsMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletonBasicPreset, SocketsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_SocketsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_SocketsMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_SocketsMap_Key_KeyProp = { "SocketsMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_SocketsMap_ValueProp = { "SocketsMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_ViveMocapKit_EHumanoidBone, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_SocketsMap_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_SkeletonBonesMap_MetaData[] = {
		{ "Category", "Skeleton Basic Preset" },
		{ "Comment", "/* Map of names of major skeleton bones */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Map of names of major skeleton bones" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_SkeletonBonesMap = { "SkeletonBonesMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletonBasicPreset, SkeletonBonesMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_SkeletonBonesMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_SkeletonBonesMap_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_SkeletonBonesMap_Key_KeyProp = { "SkeletonBonesMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ViveMocapKit_EHumanoidBone, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_SkeletonBonesMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_SkeletonBonesMap_ValueProp = { "SkeletonBonesMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ThighTwistsLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ThighTwistsLeft_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ThighTwistsLeft_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ThighTwistsRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ThighTwistsRight_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ThighTwistsRight_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_CalfTwistsLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_CalfTwistsLeft_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_CalfTwistsLeft_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_CalfTwistsRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_CalfTwistsRight_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_CalfTwistsRight_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_UpperarmTwistsLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_UpperarmTwistsLeft_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_UpperarmTwistsLeft_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_UpperarmTwistsRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_UpperarmTwistsRight_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_UpperarmTwistsRight_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ForearmTwistsLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ForearmTwistsLeft_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ForearmTwistsLeft_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ForearmTwistsRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ForearmTwistsRight_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_ForearmTwistsRight_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_SocketsMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_SocketsMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_SocketsMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_SocketsMap_ValueProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_SkeletonBonesMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_SkeletonBonesMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_SkeletonBonesMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::NewProp_SkeletonBonesMap_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ViveMocapKit,
		nullptr,
		&NewStructOps,
		"SkeletonBasicPreset",
		sizeof(FSkeletonBasicPreset),
		alignof(FSkeletonBasicPreset),
		Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletonBasicPreset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletonBasicPreset_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ViveMocapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletonBasicPreset"), sizeof(FSkeletonBasicPreset), Get_Z_Construct_UScriptStruct_FSkeletonBasicPreset_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkeletonBasicPreset_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletonBasicPreset_Hash() { return 3684673691U; }
class UScriptStruct* FCaptureBodyState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VIVEMOCAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FCaptureBodyState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCaptureBodyState, Z_Construct_UPackage__Script_ViveMocapKit(), TEXT("CaptureBodyState"), sizeof(FCaptureBodyState), Get_Z_Construct_UScriptStruct_FCaptureBodyState_Hash());
	}
	return Singleton;
}
template<> VIVEMOCAPKIT_API UScriptStruct* StaticStruct<FCaptureBodyState>()
{
	return FCaptureBodyState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCaptureBodyState(FCaptureBodyState::StaticStruct, TEXT("/Script/ViveMocapKit"), TEXT("CaptureBodyState"), false, nullptr, nullptr);
static struct FScriptStruct_ViveMocapKit_StaticRegisterNativesFCaptureBodyState
{
	FScriptStruct_ViveMocapKit_StaticRegisterNativesFCaptureBodyState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CaptureBodyState")),new UScriptStruct::TCppStructOps<FCaptureBodyState>);
	}
} ScriptStruct_ViveMocapKit_StaticRegisterNativesFCaptureBodyState;
	struct Z_Construct_UScriptStruct_FCaptureBodyState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperarmLeft_NoRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpperarmLeft_NoRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperarmRight_NoRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpperarmRight_NoRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalfLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CalfLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThighLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThighLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalfRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CalfRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThighRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThighRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PalmLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PalmLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForearmLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForearmLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperarmLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpperarmLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PalmRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PalmRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForearmRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForearmRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperarmRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpperarmRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Head;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoulderLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShoulderLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoulderRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShoulderRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ribcage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ribcage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pelvis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pelvis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureBodyState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Captured Bone Transforms in World Space */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Captured Bone Transforms in World Space" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCaptureBodyState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_UpperarmLeft_NoRoll_MetaData[] = {
		{ "Category", "Capture Body State" },
		{ "Comment", "/* Upperarm rotation without rolling. Use it if upperarm twists move lower part of the upperarm */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Upperarm rotation without rolling. Use it if upperarm twists move lower part of the upperarm" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_UpperarmLeft_NoRoll = { "UpperarmLeft_NoRoll", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCaptureBodyState, UpperarmLeft_NoRoll), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_UpperarmLeft_NoRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_UpperarmLeft_NoRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_UpperarmRight_NoRoll_MetaData[] = {
		{ "Category", "Capture Body State" },
		{ "Comment", "/* Upperarm rotation without rolling. Use it if upperarm twists move lower part of the upperarm */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Upperarm rotation without rolling. Use it if upperarm twists move lower part of the upperarm" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_UpperarmRight_NoRoll = { "UpperarmRight_NoRoll", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCaptureBodyState, UpperarmRight_NoRoll), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_UpperarmRight_NoRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_UpperarmRight_NoRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_FootLeft_MetaData[] = {
		{ "Category", "Capture Body State" },
		{ "Comment", "/* Left Foot World Transform */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Left Foot World Transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_FootLeft = { "FootLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCaptureBodyState, FootLeft), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_FootLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_FootLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_CalfLeft_MetaData[] = {
		{ "Category", "Capture Body State" },
		{ "Comment", "/* Left Calf World Transform */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Left Calf World Transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_CalfLeft = { "CalfLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCaptureBodyState, CalfLeft), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_CalfLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_CalfLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ThighLeft_MetaData[] = {
		{ "Category", "Capture Body State" },
		{ "Comment", "/* Left Thigh World Transform */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Left Thigh World Transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ThighLeft = { "ThighLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCaptureBodyState, ThighLeft), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ThighLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ThighLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_FootRight_MetaData[] = {
		{ "Category", "Capture Body State" },
		{ "Comment", "/* Right Foot World Transform */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Right Foot World Transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_FootRight = { "FootRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCaptureBodyState, FootRight), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_FootRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_FootRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_CalfRight_MetaData[] = {
		{ "Category", "Capture Body State" },
		{ "Comment", "/* Right Calf World Transform */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Right Calf World Transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_CalfRight = { "CalfRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCaptureBodyState, CalfRight), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_CalfRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_CalfRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ThighRight_MetaData[] = {
		{ "Category", "Capture Body State" },
		{ "Comment", "/* Right Thigh World Transform */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Right Thigh World Transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ThighRight = { "ThighRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCaptureBodyState, ThighRight), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ThighRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ThighRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_PalmLeft_MetaData[] = {
		{ "Category", "Capture Body State" },
		{ "Comment", "/* Left Palm World Transform */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Left Palm World Transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_PalmLeft = { "PalmLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCaptureBodyState, PalmLeft), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_PalmLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_PalmLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ForearmLeft_MetaData[] = {
		{ "Category", "Capture Body State" },
		{ "Comment", "/* Left Forearm World Transform */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Left Forearm World Transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ForearmLeft = { "ForearmLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCaptureBodyState, ForearmLeft), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ForearmLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ForearmLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_UpperarmLeft_MetaData[] = {
		{ "Category", "Capture Body State" },
		{ "Comment", "/* Left Upperarm World Transform */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Left Upperarm World Transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_UpperarmLeft = { "UpperarmLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCaptureBodyState, UpperarmLeft), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_UpperarmLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_UpperarmLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_PalmRight_MetaData[] = {
		{ "Category", "Capture Body State" },
		{ "Comment", "/* Right Palm World Transform */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Right Palm World Transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_PalmRight = { "PalmRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCaptureBodyState, PalmRight), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_PalmRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_PalmRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ForearmRight_MetaData[] = {
		{ "Category", "Capture Body State" },
		{ "Comment", "/* Right Forearm World Transform */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Right Forearm World Transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ForearmRight = { "ForearmRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCaptureBodyState, ForearmRight), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ForearmRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ForearmRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_UpperarmRight_MetaData[] = {
		{ "Category", "Capture Body State" },
		{ "Comment", "/* Right Upperarm World Transform */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Right Upperarm World Transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_UpperarmRight = { "UpperarmRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCaptureBodyState, UpperarmRight), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_UpperarmRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_UpperarmRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_Head_MetaData[] = {
		{ "Category", "Capture Body State" },
		{ "Comment", "/* Head World Transform */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Head World Transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCaptureBodyState, Head), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_Head_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_Head_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ShoulderLeft_MetaData[] = {
		{ "Category", "Capture Body State" },
		{ "Comment", "/* Left Shoulder World Transform */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Left Shoulder World Transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ShoulderLeft = { "ShoulderLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCaptureBodyState, ShoulderLeft), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ShoulderLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ShoulderLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ShoulderRight_MetaData[] = {
		{ "Category", "Capture Body State" },
		{ "Comment", "/* Right Shoulder World Transform */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Right Shoulder World Transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ShoulderRight = { "ShoulderRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCaptureBodyState, ShoulderRight), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ShoulderRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ShoulderRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_Ribcage_MetaData[] = {
		{ "Category", "Capture Body State" },
		{ "Comment", "/* Ribcage World Transform */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Ribcage World Transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_Ribcage = { "Ribcage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCaptureBodyState, Ribcage), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_Ribcage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_Ribcage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_Pelvis_MetaData[] = {
		{ "Category", "Capture Body State" },
		{ "Comment", "/* Pelvis World Transform */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Pelvis World Transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_Pelvis = { "Pelvis", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCaptureBodyState, Pelvis), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_Pelvis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_Pelvis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "Capture Body State" },
		{ "Comment", "/* Root Bone World Transform */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Root Bone World Transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCaptureBodyState, Root), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCaptureBodyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_UpperarmLeft_NoRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_UpperarmRight_NoRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_FootLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_CalfLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ThighLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_FootRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_CalfRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ThighRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_PalmLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ForearmLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_UpperarmLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_PalmRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ForearmRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_UpperarmRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_Head,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ShoulderLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_ShoulderRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_Ribcage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_Pelvis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCaptureBodyState_Statics::NewProp_Root,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCaptureBodyState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ViveMocapKit,
		nullptr,
		&NewStructOps,
		"CaptureBodyState",
		sizeof(FCaptureBodyState),
		alignof(FCaptureBodyState),
		Z_Construct_UScriptStruct_FCaptureBodyState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureBodyState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCaptureBodyState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCaptureBodyState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ViveMocapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CaptureBodyState"), sizeof(FCaptureBodyState), Get_Z_Construct_UScriptStruct_FCaptureBodyState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCaptureBodyState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCaptureBodyState_Hash() { return 3085682554U; }
class UScriptStruct* FSocketInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VIVEMOCAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FSocketInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSocketInfo, Z_Construct_UPackage__Script_ViveMocapKit(), TEXT("SocketInfo"), sizeof(FSocketInfo), Get_Z_Construct_UScriptStruct_FSocketInfo_Hash());
	}
	return Singleton;
}
template<> VIVEMOCAPKIT_API UScriptStruct* StaticStruct<FSocketInfo>()
{
	return FSocketInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSocketInfo(FSocketInfo::StaticStruct, TEXT("/Script/ViveMocapKit"), TEXT("SocketInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ViveMocapKit_StaticRegisterNativesFSocketInfo
{
	FScriptStruct_ViveMocapKit_StaticRegisterNativesFSocketInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SocketInfo")),new UScriptStruct::TCppStructOps<FSocketInfo>);
	}
} ScriptStruct_ViveMocapKit_StaticRegisterNativesFSocketInfo;
	struct Z_Construct_UScriptStruct_FSocketInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetToRootParentBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetToRootParentBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootParentBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RootParentBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLocator_MetaData[];
#endif
		static void NewProp_bIsLocator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetToBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetToBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttachmentBone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachmentBone_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocketInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* This struct allow to save/update additional bones like IK targets. */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "This struct allow to save/update additional bones like IK targets." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSocketInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSocketInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_OffsetToRootParentBone_MetaData[] = {
		{ "Category", "Socket Info" },
		{ "Comment", "/* Relative offset to RootParentBone */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Relative offset to RootParentBone" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_OffsetToRootParentBone = { "OffsetToRootParentBone", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocketInfo, OffsetToRootParentBone), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_OffsetToRootParentBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_OffsetToRootParentBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_RootParentBone_MetaData[] = {
		{ "Category", "Socket Info" },
		{ "Comment", "/* First evaluated bone in chain of parent bones */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "First evaluated bone in chain of parent bones" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_RootParentBone = { "RootParentBone", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocketInfo, RootParentBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_RootParentBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_RootParentBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_bIsLocator_MetaData[] = {
		{ "Category", "Socket Info" },
		{ "Comment", "/* Internl flag: Is socket bone attached to elbow/knee joint target or not */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Internl flag: Is socket bone attached to elbow/knee joint target or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_bIsLocator_SetBit(void* Obj)
	{
		((FSocketInfo*)Obj)->bIsLocator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_bIsLocator = { "bIsLocator", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSocketInfo), &Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_bIsLocator_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_bIsLocator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_bIsLocator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_CurrentPosition_MetaData[] = {
		{ "Category", "Socket Info" },
		{ "Comment", "/* Current Socket transform in World Space */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Current Socket transform in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_CurrentPosition = { "CurrentPosition", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocketInfo, CurrentPosition), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_CurrentPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_CurrentPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_OffsetToBone_MetaData[] = {
		{ "Category", "Socket Info" },
		{ "Comment", "/* Relative Transform of Socket */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Relative Transform of Socket" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_OffsetToBone = { "OffsetToBone", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocketInfo, OffsetToBone), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_OffsetToBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_OffsetToBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_AttachmentBone_MetaData[] = {
		{ "Category", "Socket Info" },
		{ "Comment", "/* Parent Bone for Socket */" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Parent Bone for Socket" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_AttachmentBone = { "AttachmentBone", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSocketInfo, AttachmentBone), Z_Construct_UEnum_ViveMocapKit_EHumanoidBone, METADATA_PARAMS(Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_AttachmentBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_AttachmentBone_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_AttachmentBone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSocketInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_OffsetToRootParentBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_RootParentBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_bIsLocator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_CurrentPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_OffsetToBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_AttachmentBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocketInfo_Statics::NewProp_AttachmentBone_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSocketInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ViveMocapKit,
		nullptr,
		&NewStructOps,
		"SocketInfo",
		sizeof(FSocketInfo),
		alignof(FSocketInfo),
		Z_Construct_UScriptStruct_FSocketInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocketInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSocketInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocketInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSocketInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSocketInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ViveMocapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SocketInfo"), sizeof(FSocketInfo), Get_Z_Construct_UScriptStruct_FSocketInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSocketInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSocketInfo_Hash() { return 3213428328U; }
class UScriptStruct* FVMK_NT_PureTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VIVEMOCAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVMK_NT_PureTransform, Z_Construct_UPackage__Script_ViveMocapKit(), TEXT("VMK_NT_PureTransform"), sizeof(FVMK_NT_PureTransform), Get_Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Hash());
	}
	return Singleton;
}
template<> VIVEMOCAPKIT_API UScriptStruct* StaticStruct<FVMK_NT_PureTransform>()
{
	return FVMK_NT_PureTransform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVMK_NT_PureTransform(FVMK_NT_PureTransform::StaticStruct, TEXT("/Script/ViveMocapKit"), TEXT("VMK_NT_PureTransform"), false, nullptr, nullptr);
static struct FScriptStruct_ViveMocapKit_StaticRegisterNativesFVMK_NT_PureTransform
{
	FScriptStruct_ViveMocapKit_StaticRegisterNativesFVMK_NT_PureTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VMK_NT_PureTransform")),new UScriptStruct::TCppStructOps<FVMK_NT_PureTransform>);
	}
} ScriptStruct_ViveMocapKit_StaticRegisterNativesFVMK_NT_PureTransform;
	struct Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Vive Tracker position after replication\n" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Vive Tracker position after replication" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVMK_NT_PureTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_NT_PureTransform, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_NT_PureTransform, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics::NewProp_TrackerIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics::NewProp_TrackerIndex = { "TrackerIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_NT_PureTransform, TrackerIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics::NewProp_TrackerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics::NewProp_TrackerIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics::NewProp_TrackerIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ViveMocapKit,
		nullptr,
		&NewStructOps,
		"VMK_NT_PureTransform",
		sizeof(FVMK_NT_PureTransform),
		alignof(FVMK_NT_PureTransform),
		Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVMK_NT_PureTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ViveMocapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VMK_NT_PureTransform"), sizeof(FVMK_NT_PureTransform), Get_Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVMK_NT_PureTransform_Hash() { return 2782003001U; }
class UScriptStruct* FVMK_NT_Transform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VIVEMOCAPKIT_API uint32 Get_Z_Construct_UScriptStruct_FVMK_NT_Transform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVMK_NT_Transform, Z_Construct_UPackage__Script_ViveMocapKit(), TEXT("VMK_NT_Transform"), sizeof(FVMK_NT_Transform), Get_Z_Construct_UScriptStruct_FVMK_NT_Transform_Hash());
	}
	return Singleton;
}
template<> VIVEMOCAPKIT_API UScriptStruct* StaticStruct<FVMK_NT_Transform>()
{
	return FVMK_NT_Transform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVMK_NT_Transform(FVMK_NT_Transform::StaticStruct, TEXT("/Script/ViveMocapKit"), TEXT("VMK_NT_Transform"), false, nullptr, nullptr);
static struct FScriptStruct_ViveMocapKit_StaticRegisterNativesFVMK_NT_Transform
{
	FScriptStruct_ViveMocapKit_StaticRegisterNativesFVMK_NT_Transform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VMK_NT_Transform")),new UScriptStruct::TCppStructOps<FVMK_NT_Transform>);
	}
} ScriptStruct_ViveMocapKit_StaticRegisterNativesFVMK_NT_Transform;
	struct Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Vive Tracker position for replication\n" },
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
		{ "ToolTip", "Vive Tracker position for replication" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVMK_NT_Transform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_NT_Transform, Rotation), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_NT_Transform, Location), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics::NewProp_TrackerIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViveMocapTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics::NewProp_TrackerIndex = { "TrackerIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_NT_Transform, TrackerIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics::NewProp_TrackerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics::NewProp_TrackerIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics::NewProp_TrackerIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ViveMocapKit,
		nullptr,
		&NewStructOps,
		"VMK_NT_Transform",
		sizeof(FVMK_NT_Transform),
		alignof(FVMK_NT_Transform),
		Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVMK_NT_Transform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVMK_NT_Transform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ViveMocapKit();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VMK_NT_Transform"), sizeof(FVMK_NT_Transform), Get_Z_Construct_UScriptStruct_FVMK_NT_Transform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVMK_NT_Transform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVMK_NT_Transform_Hash() { return 2358391118U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
