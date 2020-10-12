// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VMKFingersSolverEditor/Public/AnimGraphNode_VMKFingersSolver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_VMKFingersSolver() {}
// Cross Module References
	VMKFINGERSSOLVEREDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_VMKFingersSolver_NoRegister();
	VMKFINGERSSOLVEREDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_VMKFingersSolver();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_VMKFingersSolverEditor();
	VMKFINGERSSOLVER_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver();
// End Cross Module References
	void UAnimGraphNode_VMKFingersSolver::StaticRegisterNativesUAnimGraphNode_VMKFingersSolver()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_VMKFingersSolver_NoRegister()
	{
		return UAnimGraphNode_VMKFingersSolver::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_VMKFingersSolver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_VMKFingersSolver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_VMKFingersSolverEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VMKFingersSolver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AnimGraphNode_VMKFingersSolver.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_VMKFingersSolver.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VMKFingersSolver_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_VMKFingersSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_VMKFingersSolver_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_VMKFingersSolver, Node), Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_VMKFingersSolver_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VMKFingersSolver_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_VMKFingersSolver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VMKFingersSolver_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_VMKFingersSolver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_VMKFingersSolver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_VMKFingersSolver_Statics::ClassParams = {
		&UAnimGraphNode_VMKFingersSolver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_VMKFingersSolver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VMKFingersSolver_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_VMKFingersSolver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VMKFingersSolver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_VMKFingersSolver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_VMKFingersSolver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_VMKFingersSolver, 1042017306);
	template<> VMKFINGERSSOLVEREDITOR_API UClass* StaticClass<UAnimGraphNode_VMKFingersSolver>()
	{
		return UAnimGraphNode_VMKFingersSolver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_VMKFingersSolver(Z_Construct_UClass_UAnimGraphNode_VMKFingersSolver, &UAnimGraphNode_VMKFingersSolver::StaticClass, TEXT("/Script/VMKFingersSolverEditor"), TEXT("UAnimGraphNode_VMKFingersSolver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_VMKFingersSolver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
