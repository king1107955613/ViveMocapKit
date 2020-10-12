// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViveMocapKit/Public/AnimationExportFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationExportFunctionLibrary() {}
// Cross Module References
	VIVEMOCAPKIT_API UClass* Z_Construct_UClass_UAnimationExportFunctionLibrary_NoRegister();
	VIVEMOCAPKIT_API UClass* Z_Construct_UClass_UAnimationExportFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ViveMocapKit();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAnimationExportFunctionLibrary::execExportAnimSequenceToBVH)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimSequence);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_UBOOL(Z_Param_bFirstFrameReferencePose);
		P_GET_UBOOL(Z_Param_bOverwrite);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimationExportFunctionLibrary::ExportAnimSequenceToBVH(Z_Param_AnimSequence,Z_Param_FileName,Z_Param_bFirstFrameReferencePose,Z_Param_bOverwrite);
		P_NATIVE_END;
	}
	void UAnimationExportFunctionLibrary::StaticRegisterNativesUAnimationExportFunctionLibrary()
	{
		UClass* Class = UAnimationExportFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExportAnimSequenceToBVH", &UAnimationExportFunctionLibrary::execExportAnimSequenceToBVH },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics
	{
		struct AnimationExportFunctionLibrary_eventExportAnimSequenceToBVH_Parms
		{
			const UAnimSequence* AnimSequence;
			FString FileName;
			bool bFirstFrameReferencePose;
			bool bOverwrite;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bOverwrite_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverwrite;
		static void NewProp_bFirstFrameReferencePose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFirstFrameReferencePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationExportFunctionLibrary_eventExportAnimSequenceToBVH_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimationExportFunctionLibrary_eventExportAnimSequenceToBVH_Parms), &Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::NewProp_bOverwrite_SetBit(void* Obj)
	{
		((AnimationExportFunctionLibrary_eventExportAnimSequenceToBVH_Parms*)Obj)->bOverwrite = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::NewProp_bOverwrite = { "bOverwrite", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimationExportFunctionLibrary_eventExportAnimSequenceToBVH_Parms), &Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::NewProp_bOverwrite_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::NewProp_bFirstFrameReferencePose_SetBit(void* Obj)
	{
		((AnimationExportFunctionLibrary_eventExportAnimSequenceToBVH_Parms*)Obj)->bFirstFrameReferencePose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::NewProp_bFirstFrameReferencePose = { "bFirstFrameReferencePose", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimationExportFunctionLibrary_eventExportAnimSequenceToBVH_Parms), &Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::NewProp_bFirstFrameReferencePose_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationExportFunctionLibrary_eventExportAnimSequenceToBVH_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationExportFunctionLibrary_eventExportAnimSequenceToBVH_Parms, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::NewProp_AnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::NewProp_AnimSequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::NewProp_bOverwrite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::NewProp_bFirstFrameReferencePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::NewProp_AnimSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation Export Function Library" },
		{ "Comment", "/* Export Anim Sequence asset to BVH animation file\n\x09* @param AnimSequence\x09\x09\x09\x09\x09""Animation sequence to export\n\x09* @param FileName\x09\x09\x09\x09\x09\x09""Full file name to create/save\n\x09* @param bFirstFrameReferencePose\x09\x09Should insert first frame with reference pose?\n\x09* @param bOverwrite\x09\x09\x09\x09\x09\x09Should overwrite existing file?\n\x09*/" },
		{ "CPP_Default_bFirstFrameReferencePose", "true" },
		{ "CPP_Default_bOverwrite", "true" },
		{ "ModuleRelativePath", "Public/AnimationExportFunctionLibrary.h" },
		{ "ToolTip", "Export Anim Sequence asset to BVH animation file\n      * @param AnimSequence                                   Animation sequence to export\n      * @param FileName                                               Full file name to create/save\n      * @param bFirstFrameReferencePose               Should insert first frame with reference pose?\n      * @param bOverwrite                                             Should overwrite existing file?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationExportFunctionLibrary, nullptr, "ExportAnimSequenceToBVH", nullptr, nullptr, sizeof(AnimationExportFunctionLibrary_eventExportAnimSequenceToBVH_Parms), Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimationExportFunctionLibrary_NoRegister()
	{
		return UAnimationExportFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationExportFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationExportFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ViveMocapKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationExportFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationExportFunctionLibrary_ExportAnimSequenceToBVH, "ExportAnimSequenceToBVH" }, // 561281882
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationExportFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library to export/import UE4 animation to/from additional formats\n */" },
		{ "IncludePath", "AnimationExportFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AnimationExportFunctionLibrary.h" },
		{ "ToolTip", "Function library to export/import UE4 animation to/from additional formats" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationExportFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationExportFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationExportFunctionLibrary_Statics::ClassParams = {
		&UAnimationExportFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationExportFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationExportFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationExportFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationExportFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationExportFunctionLibrary, 3837637188);
	template<> VIVEMOCAPKIT_API UClass* StaticClass<UAnimationExportFunctionLibrary>()
	{
		return UAnimationExportFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationExportFunctionLibrary(Z_Construct_UClass_UAnimationExportFunctionLibrary, &UAnimationExportFunctionLibrary::StaticClass, TEXT("/Script/ViveMocapKit"), TEXT("UAnimationExportFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationExportFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
