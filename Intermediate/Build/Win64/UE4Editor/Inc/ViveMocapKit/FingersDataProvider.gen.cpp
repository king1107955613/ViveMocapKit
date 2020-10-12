// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViveMocapKit/Public/FingersDataProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFingersDataProvider() {}
// Cross Module References
	VIVEMOCAPKIT_API UClass* Z_Construct_UClass_UFingersDataProvider_NoRegister();
	VIVEMOCAPKIT_API UClass* Z_Construct_UClass_UFingersDataProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ViveMocapKit();
	VMKFINGERSSOLVER_API UScriptStruct* Z_Construct_UScriptStruct_FVMK_FingersPosePreset();
	VMKFINGERSSOLVER_API UEnum* Z_Construct_UEnum_VMKFingersSolver_EVMK_VRHand();
	VMKFINGERSSOLVER_API UScriptStruct* Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo();
	VIVEMOCAPKIT_API UClass* Z_Construct_UClass_UCaptureDevice_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFingersDataProvider::execGetFingersPose)
	{
		P_GET_ENUM(EVMK_VRHand,Z_Param_Hand);
		P_GET_STRUCT_REF(FVMK_FingersPosePreset,Z_Param_Out_OutFingersPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFingersPose_Implementation(EVMK_VRHand(Z_Param_Hand),Z_Param_Out_OutFingersPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFingersDataProvider::execGetFingersPoseDetailed)
	{
		P_GET_ENUM(EVMK_VRHand,Z_Param_Hand);
		P_GET_STRUCT_REF(FVMK_FingersDetailedInfo,Z_Param_Out_OutFingersPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFingersPoseDetailed_Implementation(EVMK_VRHand(Z_Param_Hand),Z_Param_Out_OutFingersPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFingersDataProvider::execGetReferencePose)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SkeletalMeshName);
		P_GET_STRUCT_REF(FVMK_FingersPosePreset,Z_Param_Out_OutFingersPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetReferencePose_Implementation(Z_Param_Out_SkeletalMeshName,Z_Param_Out_OutFingersPose);
		P_NATIVE_END;
	}
	static FName NAME_UFingersDataProvider_GetFingersPose = FName(TEXT("GetFingersPose"));
	void UFingersDataProvider::GetFingersPose(EVMK_VRHand Hand, FVMK_FingersPosePreset& OutFingersPose)
	{
		FingersDataProvider_eventGetFingersPose_Parms Parms;
		Parms.Hand=Hand;
		Parms.OutFingersPose=OutFingersPose;
		ProcessEvent(FindFunctionChecked(NAME_UFingersDataProvider_GetFingersPose),&Parms);
		OutFingersPose=Parms.OutFingersPose;
	}
	static FName NAME_UFingersDataProvider_GetFingersPoseDetailed = FName(TEXT("GetFingersPoseDetailed"));
	void UFingersDataProvider::GetFingersPoseDetailed(EVMK_VRHand Hand, FVMK_FingersDetailedInfo& OutFingersPose)
	{
		FingersDataProvider_eventGetFingersPoseDetailed_Parms Parms;
		Parms.Hand=Hand;
		Parms.OutFingersPose=OutFingersPose;
		ProcessEvent(FindFunctionChecked(NAME_UFingersDataProvider_GetFingersPoseDetailed),&Parms);
		OutFingersPose=Parms.OutFingersPose;
	}
	static FName NAME_UFingersDataProvider_GetReferencePose = FName(TEXT("GetReferencePose"));
	void UFingersDataProvider::GetReferencePose(FName const& SkeletalMeshName, FVMK_FingersPosePreset& OutFingersPose)
	{
		FingersDataProvider_eventGetReferencePose_Parms Parms;
		Parms.SkeletalMeshName=SkeletalMeshName;
		Parms.OutFingersPose=OutFingersPose;
		ProcessEvent(FindFunctionChecked(NAME_UFingersDataProvider_GetReferencePose),&Parms);
		OutFingersPose=Parms.OutFingersPose;
	}
	void UFingersDataProvider::StaticRegisterNativesUFingersDataProvider()
	{
		UClass* Class = UFingersDataProvider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFingersPose", &UFingersDataProvider::execGetFingersPose },
			{ "GetFingersPoseDetailed", &UFingersDataProvider::execGetFingersPoseDetailed },
			{ "GetReferencePose", &UFingersDataProvider::execGetReferencePose },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFingersDataProvider_GetFingersPose_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutFingersPose;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFingersDataProvider_GetFingersPose_Statics::NewProp_OutFingersPose = { "OutFingersPose", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FingersDataProvider_eventGetFingersPose_Parms, OutFingersPose), Z_Construct_UScriptStruct_FVMK_FingersPosePreset, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFingersDataProvider_GetFingersPose_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FingersDataProvider_eventGetFingersPose_Parms, Hand), Z_Construct_UEnum_VMKFingersSolver_EVMK_VRHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFingersDataProvider_GetFingersPose_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFingersDataProvider_GetFingersPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFingersDataProvider_GetFingersPose_Statics::NewProp_OutFingersPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFingersDataProvider_GetFingersPose_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFingersDataProvider_GetFingersPose_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFingersDataProvider_GetFingersPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fingers Data Provider" },
		{ "Comment", "/*\n\x09* Get hand data. Override this function if bUseDetailedFingerInfo is false.\n\x09* @param\x09Hand\x09\x09left or right hand\n\x09* @return\x09\x09\x09\x09""current fingers pose\n\x09*/" },
		{ "ModuleRelativePath", "Public/FingersDataProvider.h" },
		{ "ToolTip", "* Get hand data. Override this function if bUseDetailedFingerInfo is false.\n* @param        Hand            left or right hand\n* @return                               current fingers pose" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFingersDataProvider_GetFingersPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFingersDataProvider, nullptr, "GetFingersPose", nullptr, nullptr, sizeof(FingersDataProvider_eventGetFingersPose_Parms), Z_Construct_UFunction_UFingersDataProvider_GetFingersPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFingersDataProvider_GetFingersPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFingersDataProvider_GetFingersPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFingersDataProvider_GetFingersPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFingersDataProvider_GetFingersPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFingersDataProvider_GetFingersPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFingersDataProvider_GetFingersPoseDetailed_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutFingersPose;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFingersDataProvider_GetFingersPoseDetailed_Statics::NewProp_OutFingersPose = { "OutFingersPose", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FingersDataProvider_eventGetFingersPoseDetailed_Parms, OutFingersPose), Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFingersDataProvider_GetFingersPoseDetailed_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FingersDataProvider_eventGetFingersPoseDetailed_Parms, Hand), Z_Construct_UEnum_VMKFingersSolver_EVMK_VRHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFingersDataProvider_GetFingersPoseDetailed_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFingersDataProvider_GetFingersPoseDetailed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFingersDataProvider_GetFingersPoseDetailed_Statics::NewProp_OutFingersPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFingersDataProvider_GetFingersPoseDetailed_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFingersDataProvider_GetFingersPoseDetailed_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFingersDataProvider_GetFingersPoseDetailed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fingers Data Provider" },
		{ "Comment", "/*\n\x09* Get detailed hand data. Override this function if bUseDetailedFingerInfo is true.\n\x09* @param\x09Hand\x09\x09left or right hand\n\x09* @return\x09\x09\x09\x09""current fingers pose \n\x09*/" },
		{ "ModuleRelativePath", "Public/FingersDataProvider.h" },
		{ "ToolTip", "* Get detailed hand data. Override this function if bUseDetailedFingerInfo is true.\n* @param        Hand            left or right hand\n* @return                               current fingers pose" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFingersDataProvider_GetFingersPoseDetailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFingersDataProvider, nullptr, "GetFingersPoseDetailed", nullptr, nullptr, sizeof(FingersDataProvider_eventGetFingersPoseDetailed_Parms), Z_Construct_UFunction_UFingersDataProvider_GetFingersPoseDetailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFingersDataProvider_GetFingersPoseDetailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFingersDataProvider_GetFingersPoseDetailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFingersDataProvider_GetFingersPoseDetailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFingersDataProvider_GetFingersPoseDetailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFingersDataProvider_GetFingersPoseDetailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFingersDataProvider_GetReferencePose_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutFingersPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SkeletalMeshName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFingersDataProvider_GetReferencePose_Statics::NewProp_OutFingersPose = { "OutFingersPose", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FingersDataProvider_eventGetReferencePose_Parms, OutFingersPose), Z_Construct_UScriptStruct_FVMK_FingersPosePreset, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFingersDataProvider_GetReferencePose_Statics::NewProp_SkeletalMeshName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFingersDataProvider_GetReferencePose_Statics::NewProp_SkeletalMeshName = { "SkeletalMeshName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FingersDataProvider_eventGetReferencePose_Parms, SkeletalMeshName), METADATA_PARAMS(Z_Construct_UFunction_UFingersDataProvider_GetReferencePose_Statics::NewProp_SkeletalMeshName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFingersDataProvider_GetReferencePose_Statics::NewProp_SkeletalMeshName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFingersDataProvider_GetReferencePose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFingersDataProvider_GetReferencePose_Statics::NewProp_OutFingersPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFingersDataProvider_GetReferencePose_Statics::NewProp_SkeletalMeshName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFingersDataProvider_GetReferencePose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fingers Data Provider" },
		{ "Comment", "/*\n\x09* Initialize input reference pose (depends on used VR gloves or another data provider)\n\x09* By default, reference pose of skeletal mesh is used.\n\x09* @param SkeletalMeshName name of used skeletal mesh, use it to separate reference poses for different meshes when needed\n\x09*/" },
		{ "ModuleRelativePath", "Public/FingersDataProvider.h" },
		{ "ToolTip", "* Initialize input reference pose (depends on used VR gloves or another data provider)\n* By default, reference pose of skeletal mesh is used.\n* @param SkeletalMeshName name of used skeletal mesh, use it to separate reference poses for different meshes when needed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFingersDataProvider_GetReferencePose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFingersDataProvider, nullptr, "GetReferencePose", nullptr, nullptr, sizeof(FingersDataProvider_eventGetReferencePose_Parms), Z_Construct_UFunction_UFingersDataProvider_GetReferencePose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFingersDataProvider_GetReferencePose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFingersDataProvider_GetReferencePose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFingersDataProvider_GetReferencePose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFingersDataProvider_GetReferencePose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFingersDataProvider_GetReferencePose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFingersDataProvider_NoRegister()
	{
		return UFingersDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UFingersDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureDevice_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDetailedFingerInfo_MetaData[];
#endif
		static void NewProp_bUseDetailedFingerInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDetailedFingerInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFingersDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ViveMocapKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFingersDataProvider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFingersDataProvider_GetFingersPose, "GetFingersPose" }, // 2252409146
		{ &Z_Construct_UFunction_UFingersDataProvider_GetFingersPoseDetailed, "GetFingersPoseDetailed" }, // 443157904
		{ &Z_Construct_UFunction_UFingersDataProvider_GetReferencePose, "GetReferencePose" }, // 153854306
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFingersDataProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Providing information about fingers for finger solver\n * Abstract class. Create child classes/blueprints to setup input from different devices.\n */" },
		{ "IncludePath", "FingersDataProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FingersDataProvider.h" },
		{ "ToolTip", "Providing information about fingers for finger solver\nAbstract class. Create child classes/blueprints to setup input from different devices." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFingersDataProvider_Statics::NewProp_CaptureDevice_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/*\n\x09* Reference to capture device component, initialized automatically by parent object\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FingersDataProvider.h" },
		{ "ToolTip", "* Reference to capture device component, initialized automatically by parent object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFingersDataProvider_Statics::NewProp_CaptureDevice = { "CaptureDevice", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFingersDataProvider, CaptureDevice), Z_Construct_UClass_UCaptureDevice_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFingersDataProvider_Statics::NewProp_CaptureDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFingersDataProvider_Statics::NewProp_CaptureDevice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFingersDataProvider_Statics::NewProp_bUseDetailedFingerInfo_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/*\n\x09* Should use detailed or basic input?\n\x09* Detailed input includes 3DOF rotation for each joint in degrees.\n\x09* Basic input gives scalar 0..1 curl value for each finger.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FingersDataProvider.h" },
		{ "ToolTip", "* Should use detailed or basic input?\n* Detailed input includes 3DOF rotation for each joint in degrees.\n* Basic input gives scalar 0..1 curl value for each finger." },
	};
#endif
	void Z_Construct_UClass_UFingersDataProvider_Statics::NewProp_bUseDetailedFingerInfo_SetBit(void* Obj)
	{
		((UFingersDataProvider*)Obj)->bUseDetailedFingerInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFingersDataProvider_Statics::NewProp_bUseDetailedFingerInfo = { "bUseDetailedFingerInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFingersDataProvider), &Z_Construct_UClass_UFingersDataProvider_Statics::NewProp_bUseDetailedFingerInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFingersDataProvider_Statics::NewProp_bUseDetailedFingerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFingersDataProvider_Statics::NewProp_bUseDetailedFingerInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFingersDataProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFingersDataProvider_Statics::NewProp_CaptureDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFingersDataProvider_Statics::NewProp_bUseDetailedFingerInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFingersDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFingersDataProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFingersDataProvider_Statics::ClassParams = {
		&UFingersDataProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFingersDataProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFingersDataProvider_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFingersDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFingersDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFingersDataProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFingersDataProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFingersDataProvider, 4131613889);
	template<> VIVEMOCAPKIT_API UClass* StaticClass<UFingersDataProvider>()
	{
		return UFingersDataProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFingersDataProvider(Z_Construct_UClass_UFingersDataProvider, &UFingersDataProvider::StaticClass, TEXT("/Script/ViveMocapKit"), TEXT("UFingersDataProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFingersDataProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
