// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VMKFingersSolver/Public/AnimNode_VMKFingersSolver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_VMKFingersSolver() {}
// Cross Module References
	VMKFINGERSSOLVER_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver();
	UPackage* Z_Construct_UPackage__Script_VMKFingersSolver();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	VMKFINGERSSOLVER_API UClass* Z_Construct_UClass_UVMKFingersFKIKSolver_NoRegister();
	VMKFINGERSSOLVER_API UEnum* Z_Construct_UEnum_VMKFingersSolver_EVMK_FingerName();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_VMKFingersSolver::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VMKFINGERSSOLVER_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver, Z_Construct_UPackage__Script_VMKFingersSolver(), TEXT("AnimNode_VMKFingersSolver"), sizeof(FAnimNode_VMKFingersSolver), Get_Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Hash());
	}
	return Singleton;
}
template<> VMKFINGERSSOLVER_API UScriptStruct* StaticStruct<FAnimNode_VMKFingersSolver>()
{
	return FAnimNode_VMKFingersSolver::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_VMKFingersSolver(FAnimNode_VMKFingersSolver::StaticStruct, TEXT("/Script/VMKFingersSolver"), TEXT("AnimNode_VMKFingersSolver"), false, nullptr, nullptr);
static struct FScriptStruct_VMKFingersSolver_StaticRegisterNativesFAnimNode_VMKFingersSolver
{
	FScriptStruct_VMKFingersSolver_StaticRegisterNativesFAnimNode_VMKFingersSolver()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_VMKFingersSolver")),new UScriptStruct::TCppStructOps<FAnimNode_VMKFingersSolver>);
	}
} ScriptStruct_VMKFingersSolver_StaticRegisterNativesFAnimNode_VMKFingersSolver;
	struct Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBoneIndicesCached_MetaData[];
#endif
		static void NewProp_bBoneIndicesCached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBoneIndicesCached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Solver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Solver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingerTipBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FingerTipBones;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FingerTipBones_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerTipBones_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FingerTipBones_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputPose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Animation node: apply fingers relative transforms to animation data\n */" },
		{ "ModuleRelativePath", "Public/AnimNode_VMKFingersSolver.h" },
		{ "ToolTip", "Animation node: apply fingers relative transforms to animation data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_VMKFingersSolver>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_bBoneIndicesCached_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_VMKFingersSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_bBoneIndicesCached_SetBit(void* Obj)
	{
		((FAnimNode_VMKFingersSolver*)Obj)->bBoneIndicesCached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_bBoneIndicesCached = { "bBoneIndicesCached", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_VMKFingersSolver), &Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_bBoneIndicesCached_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_bBoneIndicesCached_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_bBoneIndicesCached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Alpha value **/" },
		{ "ModuleRelativePath", "Public/AnimNode_VMKFingersSolver.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Alpha value *" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VMKFingersSolver, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_Solver_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Reference to Finger FK-IK Solver object **/" },
		{ "ModuleRelativePath", "Public/AnimNode_VMKFingersSolver.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Reference to Finger FK-IK Solver object *" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_Solver = { "Solver", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VMKFingersSolver, Solver), Z_Construct_UClass_UVMKFingersFKIKSolver_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_Solver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_Solver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_FingerTipBones_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Names of finger tip bones **/" },
		{ "ModuleRelativePath", "Public/AnimNode_VMKFingersSolver.h" },
		{ "ToolTip", "Names of finger tip bones *" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_FingerTipBones = { "FingerTipBones", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VMKFingersSolver, FingerTipBones), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_FingerTipBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_FingerTipBones_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_FingerTipBones_Key_KeyProp = { "FingerTipBones_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_VMKFingersSolver_EVMK_FingerName, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_FingerTipBones_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_FingerTipBones_ValueProp = { "FingerTipBones", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_InputPose_MetaData[] = {
		{ "Category", "Links" },
		{ "Comment", "/** Input animation. Can contain different initial poses, but they all generally should be open (not in fist) **/" },
		{ "ModuleRelativePath", "Public/AnimNode_VMKFingersSolver.h" },
		{ "ToolTip", "Input animation. Can contain different initial poses, but they all generally should be open (not in fist) *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_InputPose = { "InputPose", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VMKFingersSolver, InputPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_InputPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_InputPose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_bBoneIndicesCached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_Solver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_FingerTipBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_FingerTipBones_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_FingerTipBones_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_FingerTipBones_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::NewProp_InputPose,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VMKFingersSolver,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_VMKFingersSolver",
		sizeof(FAnimNode_VMKFingersSolver),
		alignof(FAnimNode_VMKFingersSolver),
		Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VMKFingersSolver();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_VMKFingersSolver"), sizeof(FAnimNode_VMKFingersSolver), Get_Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_VMKFingersSolver_Hash() { return 932143012U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
