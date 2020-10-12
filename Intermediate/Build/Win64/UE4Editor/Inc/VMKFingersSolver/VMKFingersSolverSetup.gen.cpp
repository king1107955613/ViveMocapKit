// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VMKFingersSolver/Public/VMKFingersSolverSetup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVMKFingersSolverSetup() {}
// Cross Module References
	VMKFINGERSSOLVER_API UClass* Z_Construct_UClass_UVMKFingersSolverSetup_NoRegister();
	VMKFINGERSSOLVER_API UClass* Z_Construct_UClass_UVMKFingersSolverSetup();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_VMKFingersSolver();
	VMKFINGERSSOLVER_API UEnum* Z_Construct_UEnum_VMKFingersSolver_EVMK_FingerName();
	VMKFINGERSSOLVER_API UScriptStruct* Z_Construct_UScriptStruct_FVMK_FingerSolver();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	VMKFINGERSSOLVER_API UEnum* Z_Construct_UEnum_VMKFingersSolver_EVMK_VRHand();
// End Cross Module References
	void UVMKFingersSolverSetup::StaticRegisterNativesUVMKFingersSolverSetup()
	{
	}
	UClass* Z_Construct_UClass_UVMKFingersSolverSetup_NoRegister()
	{
		return UVMKFingersSolverSetup::StaticClass();
	}
	struct Z_Construct_UClass_UVMKFingersSolverSetup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fingers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Fingers;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Fingers_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Fingers_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Fingers_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosesInterpolationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PosesInterpolationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputMaxRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputMaxRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputMinRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputMinRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTraceByObjectType_MetaData[];
#endif
		static void NewProp_bTraceByObjectType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceByObjectType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceHalfDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceHalfDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVMKFingersSolverSetup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_VMKFingersSolver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersSolverSetup_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Global fingers settings. Create separate objects for all hands.\n */" },
		{ "IncludePath", "VMKFingersSolverSetup.h" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverSetup.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Global fingers settings. Create separate objects for all hands." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_Fingers_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/**\n\x09* Fingers settings.\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverSetup.h" },
		{ "ToolTip", "Fingers settings." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_Fingers = { "Fingers", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMKFingersSolverSetup, Fingers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_Fingers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_Fingers_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_Fingers_Key_KeyProp = { "Fingers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_VMKFingersSolver_EVMK_FingerName, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_Fingers_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_Fingers_ValueProp = { "Fingers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVMK_FingerSolver, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_PosesInterpolationSpeed_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/**\n\x09* Interpolatoin speed for processing poses applied by SetFingersPose function\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverSetup.h" },
		{ "ToolTip", "Interpolatoin speed for processing poses applied by SetFingersPose function" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_PosesInterpolationSpeed = { "PosesInterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMKFingersSolverSetup, PosesInterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_PosesInterpolationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_PosesInterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_InputMaxRotation_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/**\n\x09* Upper border for VR input (in degrees). VR input values (0..1) are interpolated to (InputMinRotation, InputMaxRotation)\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverSetup.h" },
		{ "ToolTip", "Upper border for VR input (in degrees). VR input values (0..1) are interpolated to (InputMinRotation, InputMaxRotation)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_InputMaxRotation = { "InputMaxRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMKFingersSolverSetup, InputMaxRotation), METADATA_PARAMS(Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_InputMaxRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_InputMaxRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_InputMinRotation_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/**\n\x09* Lower border for VR input (in degrees). VR input values (0..1) are interpolated to (InputMinRotation, InputMaxRotation)\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverSetup.h" },
		{ "ToolTip", "Lower border for VR input (in degrees). VR input values (0..1) are interpolated to (InputMinRotation, InputMaxRotation)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_InputMinRotation = { "InputMinRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMKFingersSolverSetup, InputMinRotation), METADATA_PARAMS(Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_InputMinRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_InputMinRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_bTraceByObjectType_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/**\n\x09* Should trace by trace channel (false) or object type (true)\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverSetup.h" },
		{ "ToolTip", "Should trace by trace channel (false) or object type (true)" },
	};
#endif
	void Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_bTraceByObjectType_SetBit(void* Obj)
	{
		((UVMKFingersSolverSetup*)Obj)->bTraceByObjectType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_bTraceByObjectType = { "bTraceByObjectType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVMKFingersSolverSetup), &Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_bTraceByObjectType_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_bTraceByObjectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_bTraceByObjectType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/**\n\x09* Trace channel to probe: Visible, Camera etc\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverSetup.h" },
		{ "ToolTip", "Trace channel to probe: Visible, Camera etc" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMKFingersSolverSetup, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_TraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_TraceHalfDistance_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/**\n\x09* Trace distance from knuckle to inside and outside\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverSetup.h" },
		{ "ToolTip", "Trace distance from knuckle to inside and outside" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_TraceHalfDistance = { "TraceHalfDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMKFingersSolverSetup, TraceHalfDistance), METADATA_PARAMS(Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_TraceHalfDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_TraceHalfDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_Hand_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/**\n\x09* Hand side associated with this asset\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersSolverSetup.h" },
		{ "ToolTip", "Hand side associated with this asset" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMKFingersSolverSetup, Hand), Z_Construct_UEnum_VMKFingersSolver_EVMK_VRHand, METADATA_PARAMS(Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_Hand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVMKFingersSolverSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_Fingers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_Fingers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_Fingers_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_Fingers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_PosesInterpolationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_InputMaxRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_InputMinRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_bTraceByObjectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_TraceHalfDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersSolverSetup_Statics::NewProp_Hand_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVMKFingersSolverSetup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVMKFingersSolverSetup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVMKFingersSolverSetup_Statics::ClassParams = {
		&UVMKFingersSolverSetup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVMKFingersSolverSetup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersSolverSetup_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVMKFingersSolverSetup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersSolverSetup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVMKFingersSolverSetup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVMKFingersSolverSetup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVMKFingersSolverSetup, 125605537);
	template<> VMKFINGERSSOLVER_API UClass* StaticClass<UVMKFingersSolverSetup>()
	{
		return UVMKFingersSolverSetup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVMKFingersSolverSetup(Z_Construct_UClass_UVMKFingersSolverSetup, &UVMKFingersSolverSetup::StaticClass, TEXT("/Script/VMKFingersSolver"), TEXT("UVMKFingersSolverSetup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVMKFingersSolverSetup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
