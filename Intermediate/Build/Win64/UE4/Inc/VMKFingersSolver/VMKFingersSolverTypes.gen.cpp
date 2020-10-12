// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VMKFingersSolver/Public/VMKFingersSolverTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVMKFingersSolverTypes() {}
// Cross Module References
	VMKFINGERSSOLVER_API UEnum* Z_Construct_UEnum_VMKFingersSolver_EVMK_FingerName();
	UPackage* Z_Construct_UPackage__Script_VMKFingersSolver();
	VMKFINGERSSOLVER_API UEnum* Z_Construct_UEnum_VMKFingersSolver_EVMK_BoneOrientationAxis();
	VMKFINGERSSOLVER_API UEnum* Z_Construct_UEnum_VMKFingersSolver_EVMK_HandStyle();
	VMKFINGERSSOLVER_API UEnum* Z_Construct_UEnum_VMKFingersSolver_EVMK_VRHand();
	VMKFINGERSSOLVER_API UScriptStruct* Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo();
	VMKFINGERSSOLVER_API UScriptStruct* Z_Construct_UScriptStruct_FVMK_FingerRotation();
	VMKFINGERSSOLVER_API UScriptStruct* Z_Construct_UScriptStruct_FVMK_FingersPosePreset();
	VMKFINGERSSOLVER_API UScriptStruct* Z_Construct_UScriptStruct_FVMK_TwistData();
	VMKFINGERSSOLVER_API UScriptStruct* Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer();
	VMKFINGERSSOLVER_API UScriptStruct* Z_Construct_UScriptStruct_FVMK_FingerSolver();
	VMKFINGERSSOLVER_API UScriptStruct* Z_Construct_UScriptStruct_FVMK_Knuckle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	static UEnum* EVMK_FingerName_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VMKFingersSolver_EVMK_FingerName, Z_Construct_UPackage__Script_VMKFingersSolver(), TEXT("EVMK_FingerName"));
		}
		return Singleton;
	}
	template<> VMKFINGERSSOLVER_API UEnum* StaticEnum<EVMK_FingerName>()
	{
		return EVMK_FingerName_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVMK_FingerName(EVMK_FingerName_StaticEnum, TEXT("/Script/VMKFingersSolver"), TEXT("EVMK_FingerName"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VMKFingersSolver_EVMK_FingerName_Hash() { return 1274216724U; }
	UEnum* Z_Construct_UEnum_VMKFingersSolver_EVMK_FingerName()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VMKFingersSolver();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVMK_FingerName"), 0, Get_Z_Construct_UEnum_VMKFingersSolver_EVMK_FingerName_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVMK_FingerName::FN_Thumb", (int64)EVMK_FingerName::FN_Thumb },
				{ "EVMK_FingerName::FN_Index", (int64)EVMK_FingerName::FN_Index },
				{ "EVMK_FingerName::FN_Middle", (int64)EVMK_FingerName::FN_Middle },
				{ "EVMK_FingerName::FN_Ring", (int64)EVMK_FingerName::FN_Ring },
				{ "EVMK_FingerName::FN_Pinky", (int64)EVMK_FingerName::FN_Pinky },
				{ "EVMK_FingerName::EFingerName_MAX", (int64)EVMK_FingerName::EFingerName_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n* Humanoid fingers\n*/" },
				{ "EFingerName_MAX.Hidden", "" },
				{ "EFingerName_MAX.Name", "EVMK_FingerName::EFingerName_MAX" },
				{ "FN_Index.DisplayName", "Index Finger" },
				{ "FN_Index.Name", "EVMK_FingerName::FN_Index" },
				{ "FN_Middle.DisplayName", "Middle Finger" },
				{ "FN_Middle.Name", "EVMK_FingerName::FN_Middle" },
				{ "FN_Pinky.DisplayName", "Pinky Finger" },
				{ "FN_Pinky.Name", "EVMK_FingerName::FN_Pinky" },
				{ "FN_Ring.DisplayName", "Ring Finger" },
				{ "FN_Ring.Name", "EVMK_FingerName::FN_Ring" },
				{ "FN_Thumb.DisplayName", "Thumb Finger" },
				{ "FN_Thumb.Name", "EVMK_FingerName::FN_Thumb" },
				{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
				{ "ToolTip", "Humanoid fingers" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VMKFingersSolver,
				nullptr,
				"EVMK_FingerName",
				"EVMK_FingerName",
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
	static UEnum* EVMK_BoneOrientationAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VMKFingersSolver_EVMK_BoneOrientationAxis, Z_Construct_UPackage__Script_VMKFingersSolver(), TEXT("EVMK_BoneOrientationAxis"));
		}
		return Singleton;
	}
	template<> VMKFINGERSSOLVER_API UEnum* StaticEnum<EVMK_BoneOrientationAxis>()
	{
		return EVMK_BoneOrientationAxis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVMK_BoneOrientationAxis(EVMK_BoneOrientationAxis_StaticEnum, TEXT("/Script/VMKFingersSolver"), TEXT("EVMK_BoneOrientationAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VMKFingersSolver_EVMK_BoneOrientationAxis_Hash() { return 1598980748U; }
	UEnum* Z_Construct_UEnum_VMKFingersSolver_EVMK_BoneOrientationAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VMKFingersSolver();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVMK_BoneOrientationAxis"), 0, Get_Z_Construct_UEnum_VMKFingersSolver_EVMK_BoneOrientationAxis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVMK_BoneOrientationAxis::X", (int64)EVMK_BoneOrientationAxis::X },
				{ "EVMK_BoneOrientationAxis::Y", (int64)EVMK_BoneOrientationAxis::Y },
				{ "EVMK_BoneOrientationAxis::Z", (int64)EVMK_BoneOrientationAxis::Z },
				{ "EVMK_BoneOrientationAxis::X_Neg", (int64)EVMK_BoneOrientationAxis::X_Neg },
				{ "EVMK_BoneOrientationAxis::Y_Neg", (int64)EVMK_BoneOrientationAxis::Y_Neg },
				{ "EVMK_BoneOrientationAxis::Z_Neg", (int64)EVMK_BoneOrientationAxis::Z_Neg },
				{ "EVMK_BoneOrientationAxis::BOA_MAX", (int64)EVMK_BoneOrientationAxis::BOA_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BOA_MAX.Hidden", "" },
				{ "BOA_MAX.Name", "EVMK_BoneOrientationAxis::BOA_MAX" },
				{ "Comment", "/**\n* Bone axis value\n*/" },
				{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
				{ "ToolTip", "Bone axis value" },
				{ "X.DisplayName", "X+" },
				{ "X.Name", "EVMK_BoneOrientationAxis::X" },
				{ "X_Neg.DisplayName", "X-" },
				{ "X_Neg.Name", "EVMK_BoneOrientationAxis::X_Neg" },
				{ "Y.DisplayName", "Y+" },
				{ "Y.Name", "EVMK_BoneOrientationAxis::Y" },
				{ "Y_Neg.DisplayName", "Y-" },
				{ "Y_Neg.Name", "EVMK_BoneOrientationAxis::Y_Neg" },
				{ "Z.DisplayName", "Z+" },
				{ "Z.Name", "EVMK_BoneOrientationAxis::Z" },
				{ "Z_Neg.DisplayName", "Z-" },
				{ "Z_Neg.Name", "EVMK_BoneOrientationAxis::Z_Neg" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VMKFingersSolver,
				nullptr,
				"EVMK_BoneOrientationAxis",
				"EVMK_BoneOrientationAxis",
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
	static UEnum* EVMK_HandStyle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VMKFingersSolver_EVMK_HandStyle, Z_Construct_UPackage__Script_VMKFingersSolver(), TEXT("EVMK_HandStyle"));
		}
		return Singleton;
	}
	template<> VMKFINGERSSOLVER_API UEnum* StaticEnum<EVMK_HandStyle>()
	{
		return EVMK_HandStyle_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVMK_HandStyle(EVMK_HandStyle_StaticEnum, TEXT("/Script/VMKFingersSolver"), TEXT("EVMK_HandStyle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VMKFingersSolver_EVMK_HandStyle_Hash() { return 1840142667U; }
	UEnum* Z_Construct_UEnum_VMKFingersSolver_EVMK_HandStyle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VMKFingersSolver();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVMK_HandStyle"), 0, Get_Z_Construct_UEnum_VMKFingersSolver_EVMK_HandStyle_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVMK_HandStyle::HS_FullArm", (int64)EVMK_HandStyle::HS_FullArm },
				{ "EVMK_HandStyle::HS_Lowerarm", (int64)EVMK_HandStyle::HS_Lowerarm },
				{ "EVMK_HandStyle::HS_HandOnly", (int64)EVMK_HandStyle::HS_HandOnly },
				{ "EVMK_HandStyle::HS_MAX", (int64)EVMK_HandStyle::HS_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n* Arm visibility\n*/" },
				{ "DisplayName", "VR Hand Style" },
				{ "HS_FullArm.DisplayName", "Full Arm" },
				{ "HS_FullArm.Name", "EVMK_HandStyle::HS_FullArm" },
				{ "HS_HandOnly.DisplayName", "Hand Only" },
				{ "HS_HandOnly.Name", "EVMK_HandStyle::HS_HandOnly" },
				{ "HS_Lowerarm.DisplayName", "Lowerarm" },
				{ "HS_Lowerarm.Name", "EVMK_HandStyle::HS_Lowerarm" },
				{ "HS_MAX.Hidden", "" },
				{ "HS_MAX.Name", "EVMK_HandStyle::HS_MAX" },
				{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
				{ "ToolTip", "Arm visibility" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VMKFingersSolver,
				nullptr,
				"EVMK_HandStyle",
				"EVMK_HandStyle",
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
	static UEnum* EVMK_VRHand_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VMKFingersSolver_EVMK_VRHand, Z_Construct_UPackage__Script_VMKFingersSolver(), TEXT("EVMK_VRHand"));
		}
		return Singleton;
	}
	template<> VMKFINGERSSOLVER_API UEnum* StaticEnum<EVMK_VRHand>()
	{
		return EVMK_VRHand_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVMK_VRHand(EVMK_VRHand_StaticEnum, TEXT("/Script/VMKFingersSolver"), TEXT("EVMK_VRHand"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VMKFingersSolver_EVMK_VRHand_Hash() { return 3364456939U; }
	UEnum* Z_Construct_UEnum_VMKFingersSolver_EVMK_VRHand()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VMKFingersSolver();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVMK_VRHand"), 0, Get_Z_Construct_UEnum_VMKFingersSolver_EVMK_VRHand_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVMK_VRHand::VRH_Left", (int64)EVMK_VRHand::VRH_Left },
				{ "EVMK_VRHand::VRH_Right", (int64)EVMK_VRHand::VRH_Right },
				{ "EVMK_VRHand::VRH_MAX", (int64)EVMK_VRHand::VRH_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n* Humanoid hand side, left or right\n*/" },
				{ "DisplayName", "VR Hand" },
				{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
				{ "ToolTip", "Humanoid hand side, left or right" },
				{ "VRH_Left.DisplayName", "Left" },
				{ "VRH_Left.Name", "EVMK_VRHand::VRH_Left" },
				{ "VRH_MAX.Hidden", "" },
				{ "VRH_MAX.Name", "EVMK_VRHand::VRH_MAX" },
				{ "VRH_Right.DisplayName", "Right" },
				{ "VRH_Right.Name", "EVMK_VRHand::VRH_Right" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VMKFingersSolver,
				nullptr,
				"EVMK_VRHand",
				"EVMK_VRHand",
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
class UScriptStruct* FVMK_FingersDetailedInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VMKFINGERSSOLVER_API uint32 Get_Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo, Z_Construct_UPackage__Script_VMKFingersSolver(), TEXT("VMK_FingersDetailedInfo"), sizeof(FVMK_FingersDetailedInfo), Get_Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Hash());
	}
	return Singleton;
}
template<> VMKFINGERSSOLVER_API UScriptStruct* StaticStruct<FVMK_FingersDetailedInfo>()
{
	return FVMK_FingersDetailedInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVMK_FingersDetailedInfo(FVMK_FingersDetailedInfo::StaticStruct, TEXT("/Script/VMKFingersSolver"), TEXT("VMK_FingersDetailedInfo"), false, nullptr, nullptr);
static struct FScriptStruct_VMKFingersSolver_StaticRegisterNativesFVMK_FingersDetailedInfo
{
	FScriptStruct_VMKFingersSolver_StaticRegisterNativesFVMK_FingersDetailedInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VMK_FingersDetailedInfo")),new UScriptStruct::TCppStructOps<FVMK_FingersDetailedInfo>);
	}
} ScriptStruct_VMKFingersSolver_StaticRegisterNativesFVMK_FingersDetailedInfo;
	struct Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinkyBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PinkyBones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinkyBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RingBones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RingBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MiddleBones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MiddleBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IndexBones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IndexBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ThumbBones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThumbBones_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Local rotations of all bones of human hand. Applied to VR Input Reference Pose by ApplyDetailedVRInput function.\n*/" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Local rotations of all bones of human hand. Applied to VR Input Reference Pose by ApplyDetailedVRInput function." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVMK_FingersDetailedInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_PinkyBones_MetaData[] = {
		{ "Category", "Fingers Detailed Info" },
		{ "Comment", "/** Local rotations of pinky finger bones in degrees (relative to VR Input Reference Pose or previous bone) */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Local rotations of pinky finger bones in degrees (relative to VR Input Reference Pose or previous bone)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_PinkyBones = { "PinkyBones", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_FingersDetailedInfo, PinkyBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_PinkyBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_PinkyBones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_PinkyBones_Inner = { "PinkyBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVMK_FingerRotation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_RingBones_MetaData[] = {
		{ "Category", "Fingers Detailed Info" },
		{ "Comment", "/** Local rotations of ring finger bones in degrees (relative to VR Input Reference Pose or previous bone) */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Local rotations of ring finger bones in degrees (relative to VR Input Reference Pose or previous bone)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_RingBones = { "RingBones", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_FingersDetailedInfo, RingBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_RingBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_RingBones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_RingBones_Inner = { "RingBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVMK_FingerRotation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_MiddleBones_MetaData[] = {
		{ "Category", "Fingers Detailed Info" },
		{ "Comment", "/** Local rotations of middle finger bones in degrees (relative to VR Input Reference Pose or previous bone) */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Local rotations of middle finger bones in degrees (relative to VR Input Reference Pose or previous bone)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_MiddleBones = { "MiddleBones", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_FingersDetailedInfo, MiddleBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_MiddleBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_MiddleBones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_MiddleBones_Inner = { "MiddleBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVMK_FingerRotation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_IndexBones_MetaData[] = {
		{ "Category", "Fingers Detailed Info" },
		{ "Comment", "/** Local rotations of index bones in degrees (relative to VR Input Reference Pose or previous bone) */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Local rotations of index bones in degrees (relative to VR Input Reference Pose or previous bone)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_IndexBones = { "IndexBones", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_FingersDetailedInfo, IndexBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_IndexBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_IndexBones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_IndexBones_Inner = { "IndexBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVMK_FingerRotation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_ThumbBones_MetaData[] = {
		{ "Category", "Fingers Detailed Info" },
		{ "Comment", "/** Local rotations of thumb bones in degrees (relative to VR Input Reference Pose or previous bone) */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Local rotations of thumb bones in degrees (relative to VR Input Reference Pose or previous bone)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_ThumbBones = { "ThumbBones", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_FingersDetailedInfo, ThumbBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_ThumbBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_ThumbBones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_ThumbBones_Inner = { "ThumbBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVMK_FingerRotation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_PinkyBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_PinkyBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_RingBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_RingBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_MiddleBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_MiddleBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_IndexBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_IndexBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_ThumbBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::NewProp_ThumbBones_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VMKFingersSolver,
		nullptr,
		&NewStructOps,
		"VMK_FingersDetailedInfo",
		sizeof(FVMK_FingersDetailedInfo),
		alignof(FVMK_FingersDetailedInfo),
		Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VMKFingersSolver();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VMK_FingersDetailedInfo"), sizeof(FVMK_FingersDetailedInfo), Get_Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo_Hash() { return 2403205840U; }
class UScriptStruct* FVMK_FingersPosePreset::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VMKFINGERSSOLVER_API uint32 Get_Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVMK_FingersPosePreset, Z_Construct_UPackage__Script_VMKFingersSolver(), TEXT("VMK_FingersPosePreset"), sizeof(FVMK_FingersPosePreset), Get_Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Hash());
	}
	return Singleton;
}
template<> VMKFINGERSSOLVER_API UScriptStruct* StaticStruct<FVMK_FingersPosePreset>()
{
	return FVMK_FingersPosePreset::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVMK_FingersPosePreset(FVMK_FingersPosePreset::StaticStruct, TEXT("/Script/VMKFingersSolver"), TEXT("VMK_FingersPosePreset"), false, nullptr, nullptr);
static struct FScriptStruct_VMKFingersSolver_StaticRegisterNativesFVMK_FingersPosePreset
{
	FScriptStruct_VMKFingersSolver_StaticRegisterNativesFVMK_FingersPosePreset()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VMK_FingersPosePreset")),new UScriptStruct::TCppStructOps<FVMK_FingersPosePreset>);
	}
} ScriptStruct_VMKFingersSolver_StaticRegisterNativesFVMK_FingersPosePreset;
	struct Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinkyRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinkyRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RingRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MiddleRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IndexRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThumbRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Fingers pose description: rotation of all fingers */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Fingers pose description: rotation of all fingers" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVMK_FingersPosePreset>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewProp_PinkyRotation_MetaData[] = {
		{ "Category", "Finger Solver" },
		{ "Comment", "/** Pinky finger rotation. Set curl value and others if necessary. */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Pinky finger rotation. Set curl value and others if necessary." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewProp_PinkyRotation = { "PinkyRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_FingersPosePreset, PinkyRotation), Z_Construct_UScriptStruct_FVMK_FingerRotation, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewProp_PinkyRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewProp_PinkyRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewProp_RingRotation_MetaData[] = {
		{ "Category", "Finger Solver" },
		{ "Comment", "/** Ring finger rotation. Set curl value and others if necessary. */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Ring finger rotation. Set curl value and others if necessary." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewProp_RingRotation = { "RingRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_FingersPosePreset, RingRotation), Z_Construct_UScriptStruct_FVMK_FingerRotation, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewProp_RingRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewProp_RingRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewProp_MiddleRotation_MetaData[] = {
		{ "Category", "Finger Solver" },
		{ "Comment", "/** Middle finger rotation. Set curl value and others if necessary. */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Middle finger rotation. Set curl value and others if necessary." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewProp_MiddleRotation = { "MiddleRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_FingersPosePreset, MiddleRotation), Z_Construct_UScriptStruct_FVMK_FingerRotation, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewProp_MiddleRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewProp_MiddleRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewProp_IndexRotation_MetaData[] = {
		{ "Category", "Finger Solver" },
		{ "Comment", "/** Index finger rotation. Set curl value and others if necessary. */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Index finger rotation. Set curl value and others if necessary." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewProp_IndexRotation = { "IndexRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_FingersPosePreset, IndexRotation), Z_Construct_UScriptStruct_FVMK_FingerRotation, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewProp_IndexRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewProp_IndexRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewProp_ThumbRotation_MetaData[] = {
		{ "Category", "Finger Solver" },
		{ "Comment", "/** Thumb rotation. All axes usually require adjustment. */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Thumb rotation. All axes usually require adjustment." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewProp_ThumbRotation = { "ThumbRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_FingersPosePreset, ThumbRotation), Z_Construct_UScriptStruct_FVMK_FingerRotation, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewProp_ThumbRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewProp_ThumbRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewProp_PinkyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewProp_RingRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewProp_MiddleRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewProp_IndexRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::NewProp_ThumbRotation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VMKFingersSolver,
		nullptr,
		&NewStructOps,
		"VMK_FingersPosePreset",
		sizeof(FVMK_FingersPosePreset),
		alignof(FVMK_FingersPosePreset),
		Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVMK_FingersPosePreset()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VMKFingersSolver();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VMK_FingersPosePreset"), sizeof(FVMK_FingersPosePreset), Get_Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVMK_FingersPosePreset_Hash() { return 344731947U; }
class UScriptStruct* FVMK_TwistData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VMKFINGERSSOLVER_API uint32 Get_Z_Construct_UScriptStruct_FVMK_TwistData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVMK_TwistData, Z_Construct_UPackage__Script_VMKFingersSolver(), TEXT("VMK_TwistData"), sizeof(FVMK_TwistData), Get_Z_Construct_UScriptStruct_FVMK_TwistData_Hash());
	}
	return Singleton;
}
template<> VMKFINGERSSOLVER_API UScriptStruct* StaticStruct<FVMK_TwistData>()
{
	return FVMK_TwistData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVMK_TwistData(FVMK_TwistData::StaticStruct, TEXT("/Script/VMKFingersSolver"), TEXT("VMK_TwistData"), false, nullptr, nullptr);
static struct FScriptStruct_VMKFingersSolver_StaticRegisterNativesFVMK_TwistData
{
	FScriptStruct_VMKFingersSolver_StaticRegisterNativesFVMK_TwistData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VMK_TwistData")),new UScriptStruct::TCppStructOps<FVMK_TwistData>);
	}
} ScriptStruct_VMKFingersSolver_StaticRegisterNativesFVMK_TwistData;
	struct Z_Construct_UScriptStruct_FVMK_TwistData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mulitplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mulitplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_TwistData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct to get twist rotation by bone index */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Struct to get twist rotation by bone index" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVMK_TwistData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVMK_TwistData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_TwistData_Statics::NewProp_Mulitplier_MetaData[] = {
		{ "Comment", "/** Twist multiplier from UHandSkeletalMeshComponent::UpperarmTwists or UHandSkeletalMeshComponent::LowerarmTwists */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Twist multiplier from UHandSkeletalMeshComponent::UpperarmTwists or UHandSkeletalMeshComponent::LowerarmTwists" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVMK_TwistData_Statics::NewProp_Mulitplier = { "Mulitplier", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_TwistData, Mulitplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_TwistData_Statics::NewProp_Mulitplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_TwistData_Statics::NewProp_Mulitplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVMK_TwistData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_TwistData_Statics::NewProp_Mulitplier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVMK_TwistData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VMKFingersSolver,
		nullptr,
		&NewStructOps,
		"VMK_TwistData",
		sizeof(FVMK_TwistData),
		alignof(FVMK_TwistData),
		Z_Construct_UScriptStruct_FVMK_TwistData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_TwistData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_TwistData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_TwistData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVMK_TwistData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVMK_TwistData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VMKFingersSolver();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VMK_TwistData"), sizeof(FVMK_TwistData), Get_Z_Construct_UScriptStruct_FVMK_TwistData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVMK_TwistData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVMK_TwistData_Hash() { return 2730690980U; }
class UScriptStruct* FVMK_FingerKnucklePointer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VMKFINGERSSOLVER_API uint32 Get_Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer, Z_Construct_UPackage__Script_VMKFingersSolver(), TEXT("VMK_FingerKnucklePointer"), sizeof(FVMK_FingerKnucklePointer), Get_Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Hash());
	}
	return Singleton;
}
template<> VMKFINGERSSOLVER_API UScriptStruct* StaticStruct<FVMK_FingerKnucklePointer>()
{
	return FVMK_FingerKnucklePointer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVMK_FingerKnucklePointer(FVMK_FingerKnucklePointer::StaticStruct, TEXT("/Script/VMKFingersSolver"), TEXT("VMK_FingerKnucklePointer"), false, nullptr, nullptr);
static struct FScriptStruct_VMKFingersSolver_StaticRegisterNativesFVMK_FingerKnucklePointer
{
	FScriptStruct_VMKFingersSolver_StaticRegisterNativesFVMK_FingerKnucklePointer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VMK_FingerKnucklePointer")),new UScriptStruct::TCppStructOps<FVMK_FingerKnucklePointer>);
	}
} ScriptStruct_VMKFingersSolver_StaticRegisterNativesFVMK_FingerKnucklePointer;
	struct Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnuckleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KnuckleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FingerId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerId_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct to get knuckle transform by bone index */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Struct to get knuckle transform by bone index" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVMK_FingerKnucklePointer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Statics::NewProp_KnuckleId_MetaData[] = {
		{ "Comment", "/** Index in FVMK_FingerSolver::Knuckles array */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Index in FVMK_FingerSolver::Knuckles array" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Statics::NewProp_KnuckleId = { "KnuckleId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_FingerKnucklePointer, KnuckleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Statics::NewProp_KnuckleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Statics::NewProp_KnuckleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Statics::NewProp_FingerId_MetaData[] = {
		{ "Comment", "/** Name of finger in UHandSkeletalMeshComponent::Fingers map */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Name of finger in UHandSkeletalMeshComponent::Fingers map" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Statics::NewProp_FingerId = { "FingerId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_FingerKnucklePointer, FingerId), Z_Construct_UEnum_VMKFingersSolver_EVMK_FingerName, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Statics::NewProp_FingerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Statics::NewProp_FingerId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Statics::NewProp_FingerId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Statics::NewProp_KnuckleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Statics::NewProp_FingerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Statics::NewProp_FingerId_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VMKFingersSolver,
		nullptr,
		&NewStructOps,
		"VMK_FingerKnucklePointer",
		sizeof(FVMK_FingerKnucklePointer),
		alignof(FVMK_FingerKnucklePointer),
		Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VMKFingersSolver();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VMK_FingerKnucklePointer"), sizeof(FVMK_FingerKnucklePointer), Get_Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVMK_FingerKnucklePointer_Hash() { return 1024668348U; }
class UScriptStruct* FVMK_FingerSolver::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VMKFINGERSSOLVER_API uint32 Get_Z_Construct_UScriptStruct_FVMK_FingerSolver_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVMK_FingerSolver, Z_Construct_UPackage__Script_VMKFingersSolver(), TEXT("VMK_FingerSolver"), sizeof(FVMK_FingerSolver), Get_Z_Construct_UScriptStruct_FVMK_FingerSolver_Hash());
	}
	return Singleton;
}
template<> VMKFINGERSSOLVER_API UScriptStruct* StaticStruct<FVMK_FingerSolver>()
{
	return FVMK_FingerSolver::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVMK_FingerSolver(FVMK_FingerSolver::StaticStruct, TEXT("/Script/VMKFingersSolver"), TEXT("VMK_FingerSolver"), false, nullptr, nullptr);
static struct FScriptStruct_VMKFingersSolver_StaticRegisterNativesFVMK_FingerSolver
{
	FScriptStruct_VMKFingersSolver_StaticRegisterNativesFVMK_FingerSolver()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VMK_FingerSolver")),new UScriptStruct::TCppStructOps<FVMK_FingerSolver>);
	}
} ScriptStruct_VMKFingersSolver_StaticRegisterNativesFVMK_FingerSolver;
	struct Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RootBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Knuckles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Knuckles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Knuckles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutwardAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutwardAxis;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutwardAxis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RootRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TipRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnucklesNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KnucklesNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TipBoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Figer description. Used both for input and output\n*/" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Figer description. Used both for input and output" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVMK_FingerSolver>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_RootBoneName_MetaData[] = {
		{ "Comment", "/** Calculated: hand bone name */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Calculated: hand bone name" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_RootBoneName = { "RootBoneName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_FingerSolver, RootBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_RootBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_RootBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_Knuckles_MetaData[] = {
		{ "Comment", "/** Calculated: array of knuckles */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Calculated: array of knuckles" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_Knuckles = { "Knuckles", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_FingerSolver, Knuckles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_Knuckles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_Knuckles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_Knuckles_Inner = { "Knuckles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVMK_Knuckle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Finger Solver" },
		{ "Comment", "/** Current alpha to blend between input finger pose and calculated finger pose */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Current alpha to blend between input finger pose and calculated finger pose" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_FingerSolver, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Finger Solver" },
		{ "Comment", "/** Should solver process this finger? */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Should solver process this finger?" },
	};
#endif
	void Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FVMK_FingerSolver*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVMK_FingerSolver), &Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_OutwardAxis_MetaData[] = {
		{ "Category", "Finger Solver" },
		{ "Comment", "/** Outward local axis of the finger (normal to fingers plane) */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Outward local axis of the finger (normal to fingers plane)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_OutwardAxis = { "OutwardAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_FingerSolver, OutwardAxis), Z_Construct_UEnum_VMKFingersSolver_EVMK_BoneOrientationAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_OutwardAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_OutwardAxis_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_OutwardAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_RootRadius_MetaData[] = {
		{ "Category", "Finger Solver" },
		{ "Comment", "/** Radius of first bone */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Radius of first bone" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_RootRadius = { "RootRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_FingerSolver, RootRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_RootRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_RootRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_TipRadius_MetaData[] = {
		{ "Category", "Finger Solver" },
		{ "Comment", "/** Radius of tip bone (smallest) */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Radius of tip bone (smallest)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_TipRadius = { "TipRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_FingerSolver, TipRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_TipRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_TipRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_KnucklesNum_MetaData[] = {
		{ "Category", "Finger Solver" },
		{ "Comment", "/** Number of knuckles */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Number of knuckles" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_KnucklesNum = { "KnucklesNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_FingerSolver, KnucklesNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_KnucklesNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_KnucklesNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_TipBoneName_MetaData[] = {
		{ "Category", "Finger Solver" },
		{ "Comment", "/** Name of last knuckle bone */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Name of last knuckle bone" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_TipBoneName = { "TipBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_FingerSolver, TipBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_TipBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_TipBoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_RootBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_Knuckles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_Knuckles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_OutwardAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_OutwardAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_RootRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_TipRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_KnucklesNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::NewProp_TipBoneName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VMKFingersSolver,
		nullptr,
		&NewStructOps,
		"VMK_FingerSolver",
		sizeof(FVMK_FingerSolver),
		alignof(FVMK_FingerSolver),
		Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVMK_FingerSolver()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVMK_FingerSolver_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VMKFingersSolver();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VMK_FingerSolver"), sizeof(FVMK_FingerSolver), Get_Z_Construct_UScriptStruct_FVMK_FingerSolver_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVMK_FingerSolver_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVMK_FingerSolver_Hash() { return 3191049813U; }
class UScriptStruct* FVMK_Knuckle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VMKFINGERSSOLVER_API uint32 Get_Z_Construct_UScriptStruct_FVMK_Knuckle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVMK_Knuckle, Z_Construct_UPackage__Script_VMKFingersSolver(), TEXT("VMK_Knuckle"), sizeof(FVMK_Knuckle), Get_Z_Construct_UScriptStruct_FVMK_Knuckle_Hash());
	}
	return Singleton;
}
template<> VMKFINGERSSOLVER_API UScriptStruct* StaticStruct<FVMK_Knuckle>()
{
	return FVMK_Knuckle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVMK_Knuckle(FVMK_Knuckle::StaticStruct, TEXT("/Script/VMKFingersSolver"), TEXT("VMK_Knuckle"), false, nullptr, nullptr);
static struct FScriptStruct_VMKFingersSolver_StaticRegisterNativesFVMK_Knuckle
{
	FScriptStruct_VMKFingersSolver_StaticRegisterNativesFVMK_Knuckle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VMK_Knuckle")),new UScriptStruct::TCppStructOps<FVMK_Knuckle>);
	}
} ScriptStruct_VMKFingersSolver_StaticRegisterNativesFVMK_Knuckle;
	struct Z_Construct_UScriptStruct_FVMK_Knuckle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputRefPoseRelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputRefPoseRelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceRefPoseRelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceRefPoseRelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefPoseRelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RefPoseRelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Description of finger knuckle. Initialized in UFingerFKIKSolver::Initialize.\n*/" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Description of finger knuckle. Initialized in UFingerFKIKSolver::Initialize." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVMK_Knuckle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_InputRefPoseRelativeTransform_MetaData[] = {
		{ "Category", "Knuckle" },
		{ "Comment", "/** Relative transform for vr input */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Relative transform for vr input" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_InputRefPoseRelativeTransform = { "InputRefPoseRelativeTransform", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_Knuckle, InputRefPoseRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_InputRefPoseRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_InputRefPoseRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_TraceRefPoseRelativeTransform_MetaData[] = {
		{ "Category", "Knuckle" },
		{ "Comment", "/** Relative transform from input animation pose */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Relative transform from input animation pose" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_TraceRefPoseRelativeTransform = { "TraceRefPoseRelativeTransform", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_Knuckle, TraceRefPoseRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_TraceRefPoseRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_TraceRefPoseRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_RefPoseRelativeTransform_MetaData[] = {
		{ "Category", "Knuckle" },
		{ "Comment", "/** Relative transform from input animation skeleton */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Relative transform from input animation skeleton" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_RefPoseRelativeTransform = { "RefPoseRelativeTransform", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_Knuckle, RefPoseRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_RefPoseRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_RefPoseRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "Category", "Knuckle" },
		{ "Comment", "/** Current relative transform */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Current relative transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_Knuckle, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_RelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_RelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "Category", "Knuckle" },
		{ "Comment", "/** Instantaneous transform in world space */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Instantaneous transform in world space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_Knuckle, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_WorldTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "Knuckle" },
		{ "Comment", "/** Distance to the next knuckle (or finger end) */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Distance to the next knuckle (or finger end)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_Knuckle, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Knuckle" },
		{ "Comment", "/** Knuckle radius */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Knuckle radius" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_Knuckle, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_BoneIndex_MetaData[] = {
		{ "Category", "Knuckle" },
		{ "Comment", "/** Index of bone in skeleton */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Index of bone in skeleton" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_Knuckle, BoneIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_BoneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_BoneIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Knuckle" },
		{ "Comment", "/** Name of skeleton bone */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Name of skeleton bone" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_Knuckle, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_BoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_InputRefPoseRelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_TraceRefPoseRelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_RefPoseRelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_RelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_WorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_BoneIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::NewProp_BoneName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VMKFingersSolver,
		nullptr,
		&NewStructOps,
		"VMK_Knuckle",
		sizeof(FVMK_Knuckle),
		alignof(FVMK_Knuckle),
		Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVMK_Knuckle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVMK_Knuckle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VMKFingersSolver();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VMK_Knuckle"), sizeof(FVMK_Knuckle), Get_Z_Construct_UScriptStruct_FVMK_Knuckle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVMK_Knuckle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVMK_Knuckle_Hash() { return 3647590222U; }
class UScriptStruct* FVMK_FingerRotation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VMKFINGERSSOLVER_API uint32 Get_Z_Construct_UScriptStruct_FVMK_FingerRotation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVMK_FingerRotation, Z_Construct_UPackage__Script_VMKFingersSolver(), TEXT("VMK_FingerRotation"), sizeof(FVMK_FingerRotation), Get_Z_Construct_UScriptStruct_FVMK_FingerRotation_Hash());
	}
	return Singleton;
}
template<> VMKFINGERSSOLVER_API UScriptStruct* StaticStruct<FVMK_FingerRotation>()
{
	return FVMK_FingerRotation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVMK_FingerRotation(FVMK_FingerRotation::StaticStruct, TEXT("/Script/VMKFingersSolver"), TEXT("VMK_FingerRotation"), false, nullptr, nullptr);
static struct FScriptStruct_VMKFingersSolver_StaticRegisterNativesFVMK_FingerRotation
{
	FScriptStruct_VMKFingersSolver_StaticRegisterNativesFVMK_FingerRotation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VMK_FingerRotation")),new UScriptStruct::TCppStructOps<FVMK_FingerRotation>);
	}
} ScriptStruct_VMKFingersSolver_StaticRegisterNativesFVMK_FingerRotation;
	struct Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpreadValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpreadValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstKnuckleCurlAddend_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FirstKnuckleCurlAddend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurlValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurlValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Finger 3DOF rotation\n*/" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "Finger 3DOF rotation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVMK_FingerRotation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::NewProp_RollValue_MetaData[] = {
		{ "Category", "Finger Rotation" },
		{ "Comment", "/** One unit is 20 degrees */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "One unit is 20 degrees" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::NewProp_RollValue = { "RollValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_FingerRotation, RollValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::NewProp_RollValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::NewProp_RollValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::NewProp_SpreadValue_MetaData[] = {
		{ "Category", "Finger Rotation" },
		{ "Comment", "/** One unit is 20 degrees */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "One unit is 20 degrees" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::NewProp_SpreadValue = { "SpreadValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_FingerRotation, SpreadValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::NewProp_SpreadValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::NewProp_SpreadValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::NewProp_FirstKnuckleCurlAddend_MetaData[] = {
		{ "Category", "Finger Rotation" },
		{ "Comment", "/** First bone curl addend */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "First bone curl addend" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::NewProp_FirstKnuckleCurlAddend = { "FirstKnuckleCurlAddend", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_FingerRotation, FirstKnuckleCurlAddend), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::NewProp_FirstKnuckleCurlAddend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::NewProp_FirstKnuckleCurlAddend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::NewProp_CurlValue_MetaData[] = {
		{ "Category", "Finger Rotation" },
		{ "Comment", "/** One unit is 90 degrees */" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverTypes.h" },
		{ "ToolTip", "One unit is 90 degrees" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::NewProp_CurlValue = { "CurlValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVMK_FingerRotation, CurlValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::NewProp_CurlValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::NewProp_CurlValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::NewProp_RollValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::NewProp_SpreadValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::NewProp_FirstKnuckleCurlAddend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::NewProp_CurlValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VMKFingersSolver,
		nullptr,
		&NewStructOps,
		"VMK_FingerRotation",
		sizeof(FVMK_FingerRotation),
		alignof(FVMK_FingerRotation),
		Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVMK_FingerRotation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVMK_FingerRotation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VMKFingersSolver();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VMK_FingerRotation"), sizeof(FVMK_FingerRotation), Get_Z_Construct_UScriptStruct_FVMK_FingerRotation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVMK_FingerRotation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVMK_FingerRotation_Hash() { return 1204993951U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
