// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VMKFingersSolver/Public/VMKFingersFKIKSolver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVMKFingersFKIKSolver() {}
// Cross Module References
	VMKFINGERSSOLVER_API UClass* Z_Construct_UClass_UVMKFingersFKIKSolver_NoRegister();
	VMKFINGERSSOLVER_API UClass* Z_Construct_UClass_UVMKFingersFKIKSolver();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VMKFingersSolver();
	VMKFINGERSSOLVER_API UScriptStruct* Z_Construct_UScriptStruct_FVMK_FingersPosePreset();
	VMKFINGERSSOLVER_API UScriptStruct* Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo();
	VMKFINGERSSOLVER_API UScriptStruct* Z_Construct_UScriptStruct_FVMK_FingerRotation();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
	VMKFINGERSSOLVER_API UClass* Z_Construct_UClass_UVMKFingersSolverSetup_NoRegister();
	VMKFINGERSSOLVER_API UEnum* Z_Construct_UEnum_VMKFingersSolver_EVMK_FingerName();
	VMKFINGERSSOLVER_API UScriptStruct* Z_Construct_UScriptStruct_FVMK_FingerSolver();
	VMKFINGERSSOLVER_API UEnum* Z_Construct_UEnum_VMKFingersSolver_EVMK_VRHand();
	VMKFINGERSSOLVER_API UScriptStruct* Z_Construct_UScriptStruct_FVMK_Knuckle();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshot();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	DEFINE_FUNCTION(UVMKFingersFKIKSolver::execConvertFingerRotationFromDegrees)
	{
		P_GET_STRUCT_REF(FVMK_FingerRotation,Z_Param_Out_InFingerRot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVMK_FingerRotation*)Z_Param__Result=UVMKFingersFKIKSolver::ConvertFingerRotationFromDegrees(Z_Param_Out_InFingerRot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVMKFingersFKIKSolver::execConvertFingerRotationToDegrees)
	{
		P_GET_STRUCT_REF(FVMK_FingerRotation,Z_Param_Out_InFingerRot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVMK_FingerRotation*)Z_Param__Result=UVMKFingersFKIKSolver::ConvertFingerRotationToDegrees(Z_Param_Out_InFingerRot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVMKFingersFKIKSolver::execSetFingerEnabled)
	{
		P_GET_ENUM(EVMK_FingerName,Z_Param_FingerName);
		P_GET_UBOOL(Z_Param_bNewEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFingerEnabled(EVMK_FingerName(Z_Param_FingerName),Z_Param_bNewEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVMKFingersFKIKSolver::execReleaseObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVMKFingersFKIKSolver::execGrabObject)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrabObject(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVMKFingersFKIKSolver::execSetVRInputReferencePose)
	{
		P_GET_STRUCT_REF(FVMK_FingersPosePreset,Z_Param_Out_NewRefPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetVRInputReferencePose(Z_Param_Out_NewRefPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVMKFingersFKIKSolver::execSetFingersTraceReferencePose)
	{
		P_GET_STRUCT_REF(FVMK_FingersPosePreset,Z_Param_Out_NewRefPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetFingersTraceReferencePose(Z_Param_Out_NewRefPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVMKFingersFKIKSolver::execSetFingersPose)
	{
		P_GET_STRUCT_REF(FVMK_FingersPosePreset,Z_Param_Out_NewPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetFingersPose(Z_Param_Out_NewPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVMKFingersFKIKSolver::execIsFingerEnabled)
	{
		P_GET_ENUM(EVMK_FingerName,Z_Param_FingerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFingerEnabled(EVMK_FingerName(Z_Param_FingerName));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVMKFingersFKIKSolver::execGetFingerKnuckles)
	{
		P_GET_ENUM(EVMK_FingerName,Z_Param_FingerName);
		P_GET_TARRAY_REF(FVMK_Knuckle,Z_Param_Out_OutKnuckles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFingerKnuckles(EVMK_FingerName(Z_Param_FingerName),Z_Param_Out_OutKnuckles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVMKFingersFKIKSolver::execGetFingerDescription)
	{
		P_GET_ENUM(EVMK_FingerName,Z_Param_FingerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFingerDescription(EVMK_FingerName(Z_Param_FingerName));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVMKFingersFKIKSolver::execIsInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInitialized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVMKFingersFKIKSolver::execApplyVRInputDetailed)
	{
		P_GET_STRUCT_REF(FVMK_FingersDetailedInfo,Z_Param_Out_NewFingersRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyVRInputDetailed(Z_Param_Out_NewFingersRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVMKFingersFKIKSolver::execApplyVRInput)
	{
		P_GET_STRUCT_REF(FVMK_FingersPosePreset,Z_Param_Out_NewFingersRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyVRInput(Z_Param_Out_NewFingersRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVMKFingersFKIKSolver::execTrace)
	{
		P_GET_UBOOL(Z_Param_bTracingInTick);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Trace(Z_Param_bTracingInTick);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVMKFingersFKIKSolver::execUpdatePoseSnapshot)
	{
		P_GET_STRUCT_REF(FPoseSnapshot,Z_Param_Out_OutPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePoseSnapshot(Z_Param_Out_OutPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVMKFingersFKIKSolver::execUpdateFingers)
	{
		P_GET_UBOOL(Z_Param_bTrace);
		P_GET_UBOOL(Z_Param_bUpdateFingersPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateFingers(Z_Param_bTrace,Z_Param_bUpdateFingersPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVMKFingersFKIKSolver::execCreateFingersFKIKSolverEx)
	{
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkeletalMeshComp);
		P_GET_ENUM(EVMK_VRHand,Z_Param_InHand);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InInputMinRotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InInputMaxRotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPosesInterpolationSpeed);
		P_GET_TMAP_REF(EVMK_FingerName,FVMK_FingerSolver,Z_Param_Out_InFingersSetup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVMKFingersFKIKSolver**)Z_Param__Result=UVMKFingersFKIKSolver::CreateFingersFKIKSolverEx(Z_Param_SkeletalMeshComp,EVMK_VRHand(Z_Param_InHand),Z_Param_InInputMinRotation,Z_Param_InInputMaxRotation,Z_Param_InPosesInterpolationSpeed,Z_Param_Out_InFingersSetup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVMKFingersFKIKSolver::execCreateFingersFKIKSolver)
	{
		P_GET_OBJECT(UVMKFingersSolverSetup,Z_Param_SolverSetup);
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkeletalMeshComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVMKFingersFKIKSolver**)Z_Param__Result=UVMKFingersFKIKSolver::CreateFingersFKIKSolver(Z_Param_SolverSetup,Z_Param_SkeletalMeshComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVMKFingersFKIKSolver::execInitialize)
	{
		P_GET_OBJECT(UVMKFingersSolverSetup,Z_Param_SolverSetup);
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkeletalMeshComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Initialize(Z_Param_SolverSetup,Z_Param_SkeletalMeshComp);
		P_NATIVE_END;
	}
	void UVMKFingersFKIKSolver::StaticRegisterNativesUVMKFingersFKIKSolver()
	{
		UClass* Class = UVMKFingersFKIKSolver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyVRInput", &UVMKFingersFKIKSolver::execApplyVRInput },
			{ "ApplyVRInputDetailed", &UVMKFingersFKIKSolver::execApplyVRInputDetailed },
			{ "ConvertFingerRotationFromDegrees", &UVMKFingersFKIKSolver::execConvertFingerRotationFromDegrees },
			{ "ConvertFingerRotationToDegrees", &UVMKFingersFKIKSolver::execConvertFingerRotationToDegrees },
			{ "CreateFingersFKIKSolver", &UVMKFingersFKIKSolver::execCreateFingersFKIKSolver },
			{ "CreateFingersFKIKSolverEx", &UVMKFingersFKIKSolver::execCreateFingersFKIKSolverEx },
			{ "GetFingerDescription", &UVMKFingersFKIKSolver::execGetFingerDescription },
			{ "GetFingerKnuckles", &UVMKFingersFKIKSolver::execGetFingerKnuckles },
			{ "GrabObject", &UVMKFingersFKIKSolver::execGrabObject },
			{ "Initialize", &UVMKFingersFKIKSolver::execInitialize },
			{ "IsFingerEnabled", &UVMKFingersFKIKSolver::execIsFingerEnabled },
			{ "IsInitialized", &UVMKFingersFKIKSolver::execIsInitialized },
			{ "ReleaseObject", &UVMKFingersFKIKSolver::execReleaseObject },
			{ "SetFingerEnabled", &UVMKFingersFKIKSolver::execSetFingerEnabled },
			{ "SetFingersPose", &UVMKFingersFKIKSolver::execSetFingersPose },
			{ "SetFingersTraceReferencePose", &UVMKFingersFKIKSolver::execSetFingersTraceReferencePose },
			{ "SetVRInputReferencePose", &UVMKFingersFKIKSolver::execSetVRInputReferencePose },
			{ "Trace", &UVMKFingersFKIKSolver::execTrace },
			{ "UpdateFingers", &UVMKFingersFKIKSolver::execUpdateFingers },
			{ "UpdatePoseSnapshot", &UVMKFingersFKIKSolver::execUpdatePoseSnapshot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInput_Statics
	{
		struct VMKFingersFKIKSolver_eventApplyVRInput_Parms
		{
			FVMK_FingersPosePreset NewFingersRotation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewFingersRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewFingersRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInput_Statics::NewProp_NewFingersRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInput_Statics::NewProp_NewFingersRotation = { "NewFingersRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventApplyVRInput_Parms, NewFingersRotation), Z_Construct_UScriptStruct_FVMK_FingersPosePreset, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInput_Statics::NewProp_NewFingersRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInput_Statics::NewProp_NewFingersRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInput_Statics::NewProp_NewFingersRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fingers Solver" },
		{ "Comment", "/**\n\x09* Apply fingers curl values from Valve Knuckles or Oculus Touch controllers. This function should be called every Tick.\n\x09* @param\x09ThumbCurl\x09\x09""Curl value returned by curresponding input axis for thumb finger\n\x09* @param\x09IndexCurl\x09\x09""Curl value returned by curresponding input axis for index finger\n\x09* @param\x09MiddleCurl\x09\x09""Curl value returned by curresponding input axis for middle finger\n\x09* @param\x09""AnnularCurl\x09\x09""Curl value returned by curresponding input axis for ring finger\n\x09* @param\x09MercurialCurl\x09""Curl value returned by curresponding input axis for pinky finger\n\x09*/" },
		{ "DisplayName", "Apply VR Input" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Apply fingers curl values from Valve Knuckles or Oculus Touch controllers. This function should be called every Tick.\n@param        ThumbCurl               Curl value returned by curresponding input axis for thumb finger\n@param        IndexCurl               Curl value returned by curresponding input axis for index finger\n@param        MiddleCurl              Curl value returned by curresponding input axis for middle finger\n@param        AnnularCurl             Curl value returned by curresponding input axis for ring finger\n@param        MercurialCurl   Curl value returned by curresponding input axis for pinky finger" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMKFingersFKIKSolver, nullptr, "ApplyVRInput", nullptr, nullptr, sizeof(VMKFingersFKIKSolver_eventApplyVRInput_Parms), Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInputDetailed_Statics
	{
		struct VMKFingersFKIKSolver_eventApplyVRInputDetailed_Parms
		{
			FVMK_FingersDetailedInfo NewFingersRotation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewFingersRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewFingersRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInputDetailed_Statics::NewProp_NewFingersRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInputDetailed_Statics::NewProp_NewFingersRotation = { "NewFingersRotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventApplyVRInputDetailed_Parms, NewFingersRotation), Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInputDetailed_Statics::NewProp_NewFingersRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInputDetailed_Statics::NewProp_NewFingersRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInputDetailed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInputDetailed_Statics::NewProp_NewFingersRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInputDetailed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fingers Solver" },
		{ "Comment", "/**\n\x09* Input values in degrees for all bones of all fingers\n\x09*/" },
		{ "DisplayName", "Apply VR Input Detailed" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Input values in degrees for all bones of all fingers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInputDetailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMKFingersFKIKSolver, nullptr, "ApplyVRInputDetailed", nullptr, nullptr, sizeof(VMKFingersFKIKSolver_eventApplyVRInputDetailed_Parms), Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInputDetailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInputDetailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInputDetailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInputDetailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInputDetailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInputDetailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationFromDegrees_Statics
	{
		struct VMKFingersFKIKSolver_eventConvertFingerRotationFromDegrees_Parms
		{
			FVMK_FingerRotation InFingerRot;
			FVMK_FingerRotation ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFingerRot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFingerRot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationFromDegrees_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventConvertFingerRotationFromDegrees_Parms, ReturnValue), Z_Construct_UScriptStruct_FVMK_FingerRotation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationFromDegrees_Statics::NewProp_InFingerRot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationFromDegrees_Statics::NewProp_InFingerRot = { "InFingerRot", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventConvertFingerRotationFromDegrees_Parms, InFingerRot), Z_Construct_UScriptStruct_FVMK_FingerRotation, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationFromDegrees_Statics::NewProp_InFingerRot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationFromDegrees_Statics::NewProp_InFingerRot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationFromDegrees_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationFromDegrees_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationFromDegrees_Statics::NewProp_InFingerRot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationFromDegrees_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fingers Solver" },
		{ "Comment", "/**\n\x09* Convert finger orientation in degrees (used in detailed VR input) to multiplier-based (used in poses, VR input)\n\x09* @param\x09InFingerRot\x09\x09""Finger orientation in degree\n\x09* @return\x09\x09\x09\x09\x09""Finger orientation with values from 0 to 1\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Convert finger orientation in degrees (used in detailed VR input) to multiplier-based (used in poses, VR input)\n@param        InFingerRot             Finger orientation in degree\n@return                                       Finger orientation with values from 0 to 1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationFromDegrees_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMKFingersFKIKSolver, nullptr, "ConvertFingerRotationFromDegrees", nullptr, nullptr, sizeof(VMKFingersFKIKSolver_eventConvertFingerRotationFromDegrees_Parms), Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationFromDegrees_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationFromDegrees_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationFromDegrees_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationFromDegrees_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationFromDegrees()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationFromDegrees_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationToDegrees_Statics
	{
		struct VMKFingersFKIKSolver_eventConvertFingerRotationToDegrees_Parms
		{
			FVMK_FingerRotation InFingerRot;
			FVMK_FingerRotation ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFingerRot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFingerRot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationToDegrees_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventConvertFingerRotationToDegrees_Parms, ReturnValue), Z_Construct_UScriptStruct_FVMK_FingerRotation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationToDegrees_Statics::NewProp_InFingerRot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationToDegrees_Statics::NewProp_InFingerRot = { "InFingerRot", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventConvertFingerRotationToDegrees_Parms, InFingerRot), Z_Construct_UScriptStruct_FVMK_FingerRotation, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationToDegrees_Statics::NewProp_InFingerRot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationToDegrees_Statics::NewProp_InFingerRot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationToDegrees_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationToDegrees_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationToDegrees_Statics::NewProp_InFingerRot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationToDegrees_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fingers Solver" },
		{ "Comment", "/**\n\x09* Convert multiplier-based finger orientation (used in poses, VR input) to degrees (used in detailed VR input)\n\x09* @param\x09InFingerRot\x09\x09""Finger orientation with values from 0 to 1\n\x09* @return\x09\x09\x09\x09\x09""Finger orientation in degrees\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Convert multiplier-based finger orientation (used in poses, VR input) to degrees (used in detailed VR input)\n@param        InFingerRot             Finger orientation with values from 0 to 1\n@return                                       Finger orientation in degrees" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationToDegrees_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMKFingersFKIKSolver, nullptr, "ConvertFingerRotationToDegrees", nullptr, nullptr, sizeof(VMKFingersFKIKSolver_eventConvertFingerRotationToDegrees_Parms), Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationToDegrees_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationToDegrees_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationToDegrees_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationToDegrees_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationToDegrees()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationToDegrees_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolver_Statics
	{
		struct VMKFingersFKIKSolver_eventCreateFingersFKIKSolver_Parms
		{
			UVMKFingersSolverSetup* SolverSetup;
			USkinnedMeshComponent* SkeletalMeshComp;
			UVMKFingersFKIKSolver* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SolverSetup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventCreateFingersFKIKSolver_Parms, ReturnValue), Z_Construct_UClass_UVMKFingersFKIKSolver_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolver_Statics::NewProp_SkeletalMeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolver_Statics::NewProp_SkeletalMeshComp = { "SkeletalMeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventCreateFingersFKIKSolver_Parms, SkeletalMeshComp), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolver_Statics::NewProp_SkeletalMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolver_Statics::NewProp_SkeletalMeshComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolver_Statics::NewProp_SolverSetup = { "SolverSetup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventCreateFingersFKIKSolver_Parms, SolverSetup), Z_Construct_UClass_UVMKFingersSolverSetup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolver_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolver_Statics::NewProp_SkeletalMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolver_Statics::NewProp_SolverSetup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fingers Solver" },
		{ "Comment", "/**\n\x09* Create and initialize new FingersFKIKSolver object\n\x09* @param\x09SolverSetup\x09\x09\x09Reference to FingersSolverSetup object wtih information about fingers for this hand.\n\x09* @param\x09SkeletalMeshComp\x09Reference to controlled skeletal mesh component\n\x09*/" },
		{ "DisplayName", "Create Fingers FK/IK Solver" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Create and initialize new FingersFKIKSolver object\n@param        SolverSetup                     Reference to FingersSolverSetup object wtih information about fingers for this hand.\n@param        SkeletalMeshComp        Reference to controlled skeletal mesh component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMKFingersFKIKSolver, nullptr, "CreateFingersFKIKSolver", nullptr, nullptr, sizeof(VMKFingersFKIKSolver_eventCreateFingersFKIKSolver_Parms), Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics
	{
		struct VMKFingersFKIKSolver_eventCreateFingersFKIKSolverEx_Parms
		{
			USkinnedMeshComponent* SkeletalMeshComp;
			EVMK_VRHand InHand;
			float InInputMinRotation;
			float InInputMaxRotation;
			float InPosesInterpolationSpeed;
			TMap<EVMK_FingerName,FVMK_FingerSolver> InFingersSetup;
			UVMKFingersFKIKSolver* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFingersSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_InFingersSetup;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InFingersSetup_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InFingersSetup_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFingersSetup_ValueProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InPosesInterpolationSpeed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InInputMaxRotation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InInputMinRotation;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventCreateFingersFKIKSolverEx_Parms, ReturnValue), Z_Construct_UClass_UVMKFingersFKIKSolver_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_InFingersSetup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_InFingersSetup = { "InFingersSetup", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventCreateFingersFKIKSolverEx_Parms, InFingersSetup), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_InFingersSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_InFingersSetup_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_InFingersSetup_Key_KeyProp = { "InFingersSetup_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_VMKFingersSolver_EVMK_FingerName, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_InFingersSetup_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_InFingersSetup_ValueProp = { "InFingersSetup", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVMK_FingerSolver, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_InPosesInterpolationSpeed = { "InPosesInterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventCreateFingersFKIKSolverEx_Parms, InPosesInterpolationSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_InInputMaxRotation = { "InInputMaxRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventCreateFingersFKIKSolverEx_Parms, InInputMaxRotation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_InInputMinRotation = { "InInputMinRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventCreateFingersFKIKSolverEx_Parms, InInputMinRotation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_InHand = { "InHand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventCreateFingersFKIKSolverEx_Parms, InHand), Z_Construct_UEnum_VMKFingersSolver_EVMK_VRHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_InHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_SkeletalMeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_SkeletalMeshComp = { "SkeletalMeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventCreateFingersFKIKSolverEx_Parms, SkeletalMeshComp), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_SkeletalMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_SkeletalMeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_InFingersSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_InFingersSetup_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_InFingersSetup_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_InFingersSetup_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_InPosesInterpolationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_InInputMaxRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_InInputMinRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_InHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_InHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::NewProp_SkeletalMeshComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fingers Solver" },
		{ "Comment", "/**\n\x09* Create and initialize new FingersFKIKSolver object\n\x09* @param\x09SkeletalMeshComp\x09Reference to controlled skeletal mesh component\n\x09*/" },
		{ "DisplayName", "Create Fingers FK/IK Solver Ex" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Create and initialize new FingersFKIKSolver object\n@param        SkeletalMeshComp        Reference to controlled skeletal mesh component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMKFingersFKIKSolver, nullptr, "CreateFingersFKIKSolverEx", nullptr, nullptr, sizeof(VMKFingersFKIKSolver_eventCreateFingersFKIKSolverEx_Parms), Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerDescription_Statics
	{
		struct VMKFingersFKIKSolver_eventGetFingerDescription_Parms
		{
			EVMK_FingerName FingerName;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FingerName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerName_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventGetFingerDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerDescription_Statics::NewProp_FingerName = { "FingerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventGetFingerDescription_Parms, FingerName), Z_Construct_UEnum_VMKFingersSolver_EVMK_FingerName, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerDescription_Statics::NewProp_FingerName_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerDescription_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerDescription_Statics::NewProp_FingerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerDescription_Statics::NewProp_FingerName_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fingers Solver" },
		{ "Comment", "/**\n\x09* Debug function, returns relative transforms of finger knuckles in String\n\x09* @param\x09""FingerName\x09\x09Name of finger to check\n\x09* @return\x09\x09\x09\x09\x09String formatted as A [<Alpha>] <KnuckleBone1> [loc=<RelaiveLocation> rol=<RelativeRotation>] <KnuckleBone2> [loc=<RelaiveLocation> rol=<RelativeRotation>] ...\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Debug function, returns relative transforms of finger knuckles in String\n@param        FingerName              Name of finger to check\n@return                                       String formatted as A [<Alpha>] <KnuckleBone1> [loc=<RelaiveLocation> rol=<RelativeRotation>] <KnuckleBone2> [loc=<RelaiveLocation> rol=<RelativeRotation>] ..." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMKFingersFKIKSolver, nullptr, "GetFingerDescription", nullptr, nullptr, sizeof(VMKFingersFKIKSolver_eventGetFingerDescription_Parms), Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerKnuckles_Statics
	{
		struct VMKFingersFKIKSolver_eventGetFingerKnuckles_Parms
		{
			EVMK_FingerName FingerName;
			TArray<FVMK_Knuckle> OutKnuckles;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutKnuckles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutKnuckles_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FingerName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerName_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerKnuckles_Statics::NewProp_OutKnuckles = { "OutKnuckles", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventGetFingerKnuckles_Parms, OutKnuckles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerKnuckles_Statics::NewProp_OutKnuckles_Inner = { "OutKnuckles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVMK_Knuckle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerKnuckles_Statics::NewProp_FingerName = { "FingerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventGetFingerKnuckles_Parms, FingerName), Z_Construct_UEnum_VMKFingersSolver_EVMK_FingerName, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerKnuckles_Statics::NewProp_FingerName_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerKnuckles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerKnuckles_Statics::NewProp_OutKnuckles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerKnuckles_Statics::NewProp_OutKnuckles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerKnuckles_Statics::NewProp_FingerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerKnuckles_Statics::NewProp_FingerName_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerKnuckles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fingers Solver" },
		{ "Comment", "/**\n\x09* Get information about knuckles for specified finger\n\x09* @param\x09""FingerName\x09\x09Name of finger to check\n\x09* @return\x09\x09\x09\x09\x09""Array of knuckles with transforms and bone names\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Get information about knuckles for specified finger\n@param        FingerName              Name of finger to check\n@return                                       Array of knuckles with transforms and bone names" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerKnuckles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMKFingersFKIKSolver, nullptr, "GetFingerKnuckles", nullptr, nullptr, sizeof(VMKFingersFKIKSolver_eventGetFingerKnuckles_Parms), Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerKnuckles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerKnuckles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerKnuckles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerKnuckles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerKnuckles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerKnuckles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVMKFingersFKIKSolver_GrabObject_Statics
	{
		struct VMKFingersFKIKSolver_eventGrabObject_Parms
		{
			UPrimitiveComponent* Object;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_GrabObject_Statics::NewProp_Object_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_GrabObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventGrabObject_Parms, Object), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_GrabObject_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_GrabObject_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVMKFingersFKIKSolver_GrabObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_GrabObject_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_GrabObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VR Hands" },
		{ "Comment", "/**\n\x09* Grab gameplay object by hand. The function doesn't attach object to hand mesh and only apply rotation to fingers.\n\x09* @param GrabReferencePose\x09Name (key in FingerPoses map) of tracing reference pose. This pose will be adjusted by tracing\n\x09* @param Object\x09\x09\x09\x09""Component to grab\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Grab gameplay object by hand. The function doesn't attach object to hand mesh and only apply rotation to fingers.\n@param GrabReferencePose      Name (key in FingerPoses map) of tracing reference pose. This pose will be adjusted by tracing\n@param Object                         Component to grab" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMKFingersFKIKSolver_GrabObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMKFingersFKIKSolver, nullptr, "GrabObject", nullptr, nullptr, sizeof(VMKFingersFKIKSolver_eventGrabObject_Parms), Z_Construct_UFunction_UVMKFingersFKIKSolver_GrabObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_GrabObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_GrabObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_GrabObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMKFingersFKIKSolver_GrabObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMKFingersFKIKSolver_GrabObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVMKFingersFKIKSolver_Initialize_Statics
	{
		struct VMKFingersFKIKSolver_eventInitialize_Parms
		{
			UVMKFingersSolverSetup* SolverSetup;
			USkinnedMeshComponent* SkeletalMeshComp;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SolverSetup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVMKFingersFKIKSolver_Initialize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VMKFingersFKIKSolver_eventInitialize_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_Initialize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VMKFingersFKIKSolver_eventInitialize_Parms), &Z_Construct_UFunction_UVMKFingersFKIKSolver_Initialize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_Initialize_Statics::NewProp_SkeletalMeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_Initialize_Statics::NewProp_SkeletalMeshComp = { "SkeletalMeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventInitialize_Parms, SkeletalMeshComp), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_Initialize_Statics::NewProp_SkeletalMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_Initialize_Statics::NewProp_SkeletalMeshComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_Initialize_Statics::NewProp_SolverSetup = { "SolverSetup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventInitialize_Parms, SolverSetup), Z_Construct_UClass_UVMKFingersSolverSetup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVMKFingersFKIKSolver_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_Initialize_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_Initialize_Statics::NewProp_SkeletalMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_Initialize_Statics::NewProp_SolverSetup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Initialize object. Should be called before using.\n\x09* @param\x09SolverSetup\x09\x09\x09Reference to FingersSolverSetup object wtih information about fingers for this hand.\n\x09* @param\x09SkeletalMeshComp\x09Reference to controlled skeletal mesh component\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Initialize object. Should be called before using.\n@param        SolverSetup                     Reference to FingersSolverSetup object wtih information about fingers for this hand.\n@param        SkeletalMeshComp        Reference to controlled skeletal mesh component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMKFingersFKIKSolver_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMKFingersFKIKSolver, nullptr, "Initialize", nullptr, nullptr, sizeof(VMKFingersFKIKSolver_eventInitialize_Parms), Z_Construct_UFunction_UVMKFingersFKIKSolver_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMKFingersFKIKSolver_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMKFingersFKIKSolver_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVMKFingersFKIKSolver_IsFingerEnabled_Statics
	{
		struct VMKFingersFKIKSolver_eventIsFingerEnabled_Parms
		{
			EVMK_FingerName FingerName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FingerName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerName_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVMKFingersFKIKSolver_IsFingerEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VMKFingersFKIKSolver_eventIsFingerEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_IsFingerEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VMKFingersFKIKSolver_eventIsFingerEnabled_Parms), &Z_Construct_UFunction_UVMKFingersFKIKSolver_IsFingerEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_IsFingerEnabled_Statics::NewProp_FingerName = { "FingerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventIsFingerEnabled_Parms, FingerName), Z_Construct_UEnum_VMKFingersSolver_EVMK_FingerName, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_IsFingerEnabled_Statics::NewProp_FingerName_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVMKFingersFKIKSolver_IsFingerEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_IsFingerEnabled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_IsFingerEnabled_Statics::NewProp_FingerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_IsFingerEnabled_Statics::NewProp_FingerName_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_IsFingerEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fingers Solver" },
		{ "Comment", "/**\n\x09* Check if finger enabled\n\x09* @param\x09""FingerName\x09\x09Name of finger to check\n\x09* @return\x09\x09\x09\x09\x09True if finger was enabled in the solver\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Check if finger enabled\n@param        FingerName              Name of finger to check\n@return                                       True if finger was enabled in the solver" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMKFingersFKIKSolver_IsFingerEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMKFingersFKIKSolver, nullptr, "IsFingerEnabled", nullptr, nullptr, sizeof(VMKFingersFKIKSolver_eventIsFingerEnabled_Parms), Z_Construct_UFunction_UVMKFingersFKIKSolver_IsFingerEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_IsFingerEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_IsFingerEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_IsFingerEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMKFingersFKIKSolver_IsFingerEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMKFingersFKIKSolver_IsFingerEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVMKFingersFKIKSolver_IsInitialized_Statics
	{
		struct VMKFingersFKIKSolver_eventIsInitialized_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVMKFingersFKIKSolver_IsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VMKFingersFKIKSolver_eventIsInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_IsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VMKFingersFKIKSolver_eventIsInitialized_Parms), &Z_Construct_UFunction_UVMKFingersFKIKSolver_IsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVMKFingersFKIKSolver_IsInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_IsInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_IsInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fingers Solver" },
		{ "Comment", "/**\n\x09* Was object initialized successfully?\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Was object initialized successfully?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMKFingersFKIKSolver_IsInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMKFingersFKIKSolver, nullptr, "IsInitialized", nullptr, nullptr, sizeof(VMKFingersFKIKSolver_eventIsInitialized_Parms), Z_Construct_UFunction_UVMKFingersFKIKSolver_IsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_IsInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_IsInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_IsInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMKFingersFKIKSolver_IsInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMKFingersFKIKSolver_IsInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVMKFingersFKIKSolver_ReleaseObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_ReleaseObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VR Hands" },
		{ "Comment", "/** Return fingers rotation from traced to current pose. */" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Return fingers rotation from traced to current pose." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMKFingersFKIKSolver_ReleaseObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMKFingersFKIKSolver, nullptr, "ReleaseObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_ReleaseObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_ReleaseObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMKFingersFKIKSolver_ReleaseObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMKFingersFKIKSolver_ReleaseObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingerEnabled_Statics
	{
		struct VMKFingersFKIKSolver_eventSetFingerEnabled_Parms
		{
			EVMK_FingerName FingerName;
			bool bNewEnabled;
		};
		static void NewProp_bNewEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewEnabled;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FingerName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerName_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingerEnabled_Statics::NewProp_bNewEnabled_SetBit(void* Obj)
	{
		((VMKFingersFKIKSolver_eventSetFingerEnabled_Parms*)Obj)->bNewEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingerEnabled_Statics::NewProp_bNewEnabled = { "bNewEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VMKFingersFKIKSolver_eventSetFingerEnabled_Parms), &Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingerEnabled_Statics::NewProp_bNewEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingerEnabled_Statics::NewProp_FingerName = { "FingerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventSetFingerEnabled_Parms, FingerName), Z_Construct_UEnum_VMKFingersSolver_EVMK_FingerName, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingerEnabled_Statics::NewProp_FingerName_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingerEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingerEnabled_Statics::NewProp_bNewEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingerEnabled_Statics::NewProp_FingerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingerEnabled_Statics::NewProp_FingerName_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingerEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fingers Solver" },
		{ "Comment", "/**\n\x09* Enable or disable finger solving\n\x09* @param\x09""FingerName\x09\x09Name of finger to enable or disable\n\x09* @param\x09""bNewEnabled\x09\x09Value to set\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Enable or disable finger solving\n@param        FingerName              Name of finger to enable or disable\n@param        bNewEnabled             Value to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingerEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMKFingersFKIKSolver, nullptr, "SetFingerEnabled", nullptr, nullptr, sizeof(VMKFingersFKIKSolver_eventSetFingerEnabled_Parms), Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingerEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingerEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingerEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingerEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingerEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingerEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersPose_Statics
	{
		struct VMKFingersFKIKSolver_eventSetFingersPose_Parms
		{
			FVMK_FingersPosePreset NewPose;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VMKFingersFKIKSolver_eventSetFingersPose_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VMKFingersFKIKSolver_eventSetFingersPose_Parms), &Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersPose_Statics::NewProp_NewPose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersPose_Statics::NewProp_NewPose = { "NewPose", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventSetFingersPose_Parms, NewPose), Z_Construct_UScriptStruct_FVMK_FingersPosePreset, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersPose_Statics::NewProp_NewPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersPose_Statics::NewProp_NewPose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersPose_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersPose_Statics::NewProp_NewPose,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "VR Hands" },
		{ "Comment", "/**\n\x09* Set fingers pose from FingerPoses map by name.\n\x09* @param PoseName Key in FingerPoses map\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Set fingers pose from FingerPoses map by name.\n@param PoseName Key in FingerPoses map" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMKFingersFKIKSolver, nullptr, "SetFingersPose", nullptr, nullptr, sizeof(VMKFingersFKIKSolver_eventSetFingersPose_Parms), Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersTraceReferencePose_Statics
	{
		struct VMKFingersFKIKSolver_eventSetFingersTraceReferencePose_Parms
		{
			FVMK_FingersPosePreset NewRefPose;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewRefPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRefPose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersTraceReferencePose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VMKFingersFKIKSolver_eventSetFingersTraceReferencePose_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersTraceReferencePose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VMKFingersFKIKSolver_eventSetFingersTraceReferencePose_Parms), &Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersTraceReferencePose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersTraceReferencePose_Statics::NewProp_NewRefPose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersTraceReferencePose_Statics::NewProp_NewRefPose = { "NewRefPose", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventSetFingersTraceReferencePose_Parms, NewRefPose), Z_Construct_UScriptStruct_FVMK_FingersPosePreset, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersTraceReferencePose_Statics::NewProp_NewRefPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersTraceReferencePose_Statics::NewProp_NewRefPose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersTraceReferencePose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersTraceReferencePose_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersTraceReferencePose_Statics::NewProp_NewRefPose,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersTraceReferencePose_Statics::Function_MetaDataParams[] = {
		{ "Category", "VR Hands" },
		{ "Comment", "/**\n\x09* Set reference pose for fingers tracing. It should be 'grabbing' pose which need\n\x09* to be adjusted to attached object by tracing.\n\x09* @param PoseName Key in FingerPoses map\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Set reference pose for fingers tracing. It should be 'grabbing' pose which need\nto be adjusted to attached object by tracing.\n@param PoseName Key in FingerPoses map" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersTraceReferencePose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMKFingersFKIKSolver, nullptr, "SetFingersTraceReferencePose", nullptr, nullptr, sizeof(VMKFingersFKIKSolver_eventSetFingersTraceReferencePose_Parms), Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersTraceReferencePose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersTraceReferencePose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersTraceReferencePose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersTraceReferencePose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersTraceReferencePose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersTraceReferencePose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVMKFingersFKIKSolver_SetVRInputReferencePose_Statics
	{
		struct VMKFingersFKIKSolver_eventSetVRInputReferencePose_Parms
		{
			FVMK_FingersPosePreset NewRefPose;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewRefPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRefPose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVMKFingersFKIKSolver_SetVRInputReferencePose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VMKFingersFKIKSolver_eventSetVRInputReferencePose_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_SetVRInputReferencePose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VMKFingersFKIKSolver_eventSetVRInputReferencePose_Parms), &Z_Construct_UFunction_UVMKFingersFKIKSolver_SetVRInputReferencePose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_SetVRInputReferencePose_Statics::NewProp_NewRefPose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_SetVRInputReferencePose_Statics::NewProp_NewRefPose = { "NewRefPose", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventSetVRInputReferencePose_Parms, NewRefPose), Z_Construct_UScriptStruct_FVMK_FingersPosePreset, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_SetVRInputReferencePose_Statics::NewProp_NewRefPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_SetVRInputReferencePose_Statics::NewProp_NewRefPose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVMKFingersFKIKSolver_SetVRInputReferencePose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_SetVRInputReferencePose_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_SetVRInputReferencePose_Statics::NewProp_NewRefPose,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_SetVRInputReferencePose_Statics::Function_MetaDataParams[] = {
		{ "Category", "VR Hands" },
		{ "Comment", "/**\n\x09* Set reference pose for VR input from Valve Knuckles or Oculus Touch. It should be pose of fully open hand.\n\x09* @param PoseName Key in FingerPoses map\n\x09*/" },
		{ "DisplayName", "Set VR Input Reference Pose" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Set reference pose for VR input from Valve Knuckles or Oculus Touch. It should be pose of fully open hand.\n@param PoseName Key in FingerPoses map" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMKFingersFKIKSolver_SetVRInputReferencePose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMKFingersFKIKSolver, nullptr, "SetVRInputReferencePose", nullptr, nullptr, sizeof(VMKFingersFKIKSolver_eventSetVRInputReferencePose_Parms), Z_Construct_UFunction_UVMKFingersFKIKSolver_SetVRInputReferencePose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_SetVRInputReferencePose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_SetVRInputReferencePose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_SetVRInputReferencePose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMKFingersFKIKSolver_SetVRInputReferencePose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMKFingersFKIKSolver_SetVRInputReferencePose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVMKFingersFKIKSolver_Trace_Statics
	{
		struct VMKFingersFKIKSolver_eventTrace_Parms
		{
			bool bTracingInTick;
		};
		static void NewProp_bTracingInTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTracingInTick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVMKFingersFKIKSolver_Trace_Statics::NewProp_bTracingInTick_SetBit(void* Obj)
	{
		((VMKFingersFKIKSolver_eventTrace_Parms*)Obj)->bTracingInTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_Trace_Statics::NewProp_bTracingInTick = { "bTracingInTick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VMKFingersFKIKSolver_eventTrace_Parms), &Z_Construct_UFunction_UVMKFingersFKIKSolver_Trace_Statics::NewProp_bTracingInTick_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVMKFingersFKIKSolver_Trace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_Trace_Statics::NewProp_bTracingInTick,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_Trace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fingers Solver" },
		{ "Comment", "/**\n\x09* Trace scene to find object to grab and update fingers positions. Don't call this function directly.\n\x09* @param\x09""bTracingInTick\x09\x09Notifies if function called every tick. If true, interpolation would be used to soften fingers movement. Otherwise, position would be updated instantly.\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Trace scene to find object to grab and update fingers positions. Don't call this function directly.\n@param        bTracingInTick          Notifies if function called every tick. If true, interpolation would be used to soften fingers movement. Otherwise, position would be updated instantly." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMKFingersFKIKSolver_Trace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMKFingersFKIKSolver, nullptr, "Trace", nullptr, nullptr, sizeof(VMKFingersFKIKSolver_eventTrace_Parms), Z_Construct_UFunction_UVMKFingersFKIKSolver_Trace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_Trace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_Trace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_Trace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMKFingersFKIKSolver_Trace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMKFingersFKIKSolver_Trace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdateFingers_Statics
	{
		struct VMKFingersFKIKSolver_eventUpdateFingers_Parms
		{
			bool bTrace;
			bool bUpdateFingersPose;
		};
		static void NewProp_bUpdateFingersPose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateFingersPose;
		static void NewProp_bTrace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTrace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdateFingers_Statics::NewProp_bUpdateFingersPose_SetBit(void* Obj)
	{
		((VMKFingersFKIKSolver_eventUpdateFingers_Parms*)Obj)->bUpdateFingersPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdateFingers_Statics::NewProp_bUpdateFingersPose = { "bUpdateFingersPose", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VMKFingersFKIKSolver_eventUpdateFingers_Parms), &Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdateFingers_Statics::NewProp_bUpdateFingersPose_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdateFingers_Statics::NewProp_bTrace_SetBit(void* Obj)
	{
		((VMKFingersFKIKSolver_eventUpdateFingers_Parms*)Obj)->bTrace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdateFingers_Statics::NewProp_bTrace = { "bTrace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VMKFingersFKIKSolver_eventUpdateFingers_Parms), &Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdateFingers_Statics::NewProp_bTrace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdateFingers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdateFingers_Statics::NewProp_bUpdateFingersPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdateFingers_Statics::NewProp_bTrace,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdateFingers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fingers Solver" },
		{ "Comment", "/**\n\x09* Update current fingers transform. Call this function at the end of the Update() event in animation blueprint.\n\x09* @param\x09""bTrace\x09\x09\x09\x09Should do tracing to detect object in hand (reference pose should be initiaized)?\n\x09* @param\x09""bUpdateFingersPose\x09Should apply fingers pose initialized by SetFingersPose(...)?\n\x09*/" },
		{ "CPP_Default_bTrace", "false" },
		{ "CPP_Default_bUpdateFingersPose", "true" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Update current fingers transform. Call this function at the end of the Update() event in animation blueprint.\n@param        bTrace                          Should do tracing to detect object in hand (reference pose should be initiaized)?\n@param        bUpdateFingersPose      Should apply fingers pose initialized by SetFingersPose(...)?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdateFingers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMKFingersFKIKSolver, nullptr, "UpdateFingers", nullptr, nullptr, sizeof(VMKFingersFKIKSolver_eventUpdateFingers_Parms), Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdateFingers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdateFingers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdateFingers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdateFingers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdateFingers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdateFingers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdatePoseSnapshot_Statics
	{
		struct VMKFingersFKIKSolver_eventUpdatePoseSnapshot_Parms
		{
			FPoseSnapshot OutPose;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdatePoseSnapshot_Statics::NewProp_OutPose = { "OutPose", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VMKFingersFKIKSolver_eventUpdatePoseSnapshot_Parms, OutPose), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdatePoseSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdatePoseSnapshot_Statics::NewProp_OutPose,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdatePoseSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fingers Solver" },
		{ "Comment", "/**\n\x09* Copy current fingers rotation to pose snapshot object\n\x09* @param OutPose\x09""already initialized PoseSnapshot object, should be filled with valid pose\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Copy current fingers rotation to pose snapshot object\n@param OutPose        already initialized PoseSnapshot object, should be filled with valid pose" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdatePoseSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVMKFingersFKIKSolver, nullptr, "UpdatePoseSnapshot", nullptr, nullptr, sizeof(VMKFingersFKIKSolver_eventUpdatePoseSnapshot_Parms), Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdatePoseSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdatePoseSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdatePoseSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdatePoseSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdatePoseSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdatePoseSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVMKFingersFKIKSolver_NoRegister()
	{
		return UVMKFingersFKIKSolver::StaticClass();
	}
	struct Z_Construct_UClass_UVMKFingersFKIKSolver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandSideMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HandSideMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFingersPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentFingersPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_VRStatus;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VRStatus_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VRStatus_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VRStatus_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRuntimeFingersPose_MetaData[];
#endif
		static void NewProp_bUseRuntimeFingersPose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRuntimeFingersPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasDetailedVRInputInFrame_MetaData[];
#endif
		static void NewProp_bHasDetailedVRInputInFrame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasDetailedVRInputInFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasVRInputInFrame_MetaData[];
#endif
		static void NewProp_bHasVRInputInFrame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasVRInputInFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRInputDetailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VRInputDetailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VRInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TracingStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TracingStatus;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TracingStatus_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TracingStatus_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TracingStatus_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingersSolverSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FingersSolverSetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugGeometry_MetaData[];
#endif
		static void NewProp_bDrawDebugGeometry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugGeometry;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FilterObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fingers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Fingers;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Fingers_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Fingers_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Fingers_ValueProp;
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
	UObject* (*const Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VMKFingersSolver,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInput, "ApplyVRInput" }, // 3534979642
		{ &Z_Construct_UFunction_UVMKFingersFKIKSolver_ApplyVRInputDetailed, "ApplyVRInputDetailed" }, // 966475946
		{ &Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationFromDegrees, "ConvertFingerRotationFromDegrees" }, // 3548399971
		{ &Z_Construct_UFunction_UVMKFingersFKIKSolver_ConvertFingerRotationToDegrees, "ConvertFingerRotationToDegrees" }, // 1189673061
		{ &Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolver, "CreateFingersFKIKSolver" }, // 3976128638
		{ &Z_Construct_UFunction_UVMKFingersFKIKSolver_CreateFingersFKIKSolverEx, "CreateFingersFKIKSolverEx" }, // 1990127911
		{ &Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerDescription, "GetFingerDescription" }, // 4414964
		{ &Z_Construct_UFunction_UVMKFingersFKIKSolver_GetFingerKnuckles, "GetFingerKnuckles" }, // 2984049390
		{ &Z_Construct_UFunction_UVMKFingersFKIKSolver_GrabObject, "GrabObject" }, // 318384448
		{ &Z_Construct_UFunction_UVMKFingersFKIKSolver_Initialize, "Initialize" }, // 1011026552
		{ &Z_Construct_UFunction_UVMKFingersFKIKSolver_IsFingerEnabled, "IsFingerEnabled" }, // 3377406802
		{ &Z_Construct_UFunction_UVMKFingersFKIKSolver_IsInitialized, "IsInitialized" }, // 145518730
		{ &Z_Construct_UFunction_UVMKFingersFKIKSolver_ReleaseObject, "ReleaseObject" }, // 4071574092
		{ &Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingerEnabled, "SetFingerEnabled" }, // 221786686
		{ &Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersPose, "SetFingersPose" }, // 3627479452
		{ &Z_Construct_UFunction_UVMKFingersFKIKSolver_SetFingersTraceReferencePose, "SetFingersTraceReferencePose" }, // 349990711
		{ &Z_Construct_UFunction_UVMKFingersFKIKSolver_SetVRInputReferencePose, "SetVRInputReferencePose" }, // 2360233465
		{ &Z_Construct_UFunction_UVMKFingersFKIKSolver_Trace, "Trace" }, // 1252065453
		{ &Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdateFingers, "UpdateFingers" }, // 3481075451
		{ &Z_Construct_UFunction_UVMKFingersFKIKSolver_UpdatePoseSnapshot, "UpdatePoseSnapshot" }, // 1052422925
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Trace and calculate fingers transforms\n * Result saved in FVMK_Knuckle::RelativeTransform\n */" },
		{ "IncludePath", "VMKFingersFKIKSolver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Trace and calculate fingers transforms\nResult saved in FVMK_Knuckle::RelativeTransform" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_HandSideMultiplier_MetaData[] = {
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_HandSideMultiplier = { "HandSideMultiplier", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMKFingersFKIKSolver, HandSideMultiplier), METADATA_PARAMS(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_HandSideMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_HandSideMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_CurrentFingersPose_MetaData[] = {
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_CurrentFingersPose = { "CurrentFingersPose", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMKFingersFKIKSolver, CurrentFingersPose), Z_Construct_UScriptStruct_FVMK_FingersPosePreset, METADATA_PARAMS(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_CurrentFingersPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_CurrentFingersPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_VRStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_VRStatus = { "VRStatus", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMKFingersFKIKSolver, VRStatus), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_VRStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_VRStatus_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_VRStatus_Key_KeyProp = { "VRStatus_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_VMKFingersSolver_EVMK_FingerName, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_VRStatus_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_VRStatus_ValueProp = { "VRStatus", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TraceStartTime_MetaData[] = {
		{ "Comment", "/** Trace start time when grabbing object */" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Trace start time when grabbing object" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TraceStartTime = { "TraceStartTime", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMKFingersFKIKSolver, TraceStartTime), METADATA_PARAMS(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TraceStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TraceStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bUseRuntimeFingersPose_MetaData[] = {
		{ "Comment", "/** Has traced pose for fingers? */" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Has traced pose for fingers?" },
	};
#endif
	void Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bUseRuntimeFingersPose_SetBit(void* Obj)
	{
		((UVMKFingersFKIKSolver*)Obj)->bUseRuntimeFingersPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bUseRuntimeFingersPose = { "bUseRuntimeFingersPose", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVMKFingersFKIKSolver), &Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bUseRuntimeFingersPose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bUseRuntimeFingersPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bUseRuntimeFingersPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bHasDetailedVRInputInFrame_MetaData[] = {
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
	};
#endif
	void Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bHasDetailedVRInputInFrame_SetBit(void* Obj)
	{
		((UVMKFingersFKIKSolver*)Obj)->bHasDetailedVRInputInFrame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bHasDetailedVRInputInFrame = { "bHasDetailedVRInputInFrame", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVMKFingersFKIKSolver), &Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bHasDetailedVRInputInFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bHasDetailedVRInputInFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bHasDetailedVRInputInFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bHasVRInputInFrame_MetaData[] = {
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
	};
#endif
	void Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bHasVRInputInFrame_SetBit(void* Obj)
	{
		((UVMKFingersFKIKSolver*)Obj)->bHasVRInputInFrame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bHasVRInputInFrame = { "bHasVRInputInFrame", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVMKFingersFKIKSolver), &Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bHasVRInputInFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bHasVRInputInFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bHasVRInputInFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_VRInputDetailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_VRInputDetailed = { "VRInputDetailed", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMKFingersFKIKSolver, VRInputDetailed), Z_Construct_UScriptStruct_FVMK_FingersDetailedInfo, METADATA_PARAMS(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_VRInputDetailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_VRInputDetailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_VRInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_VRInput = { "VRInput", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMKFingersFKIKSolver, VRInput), Z_Construct_UScriptStruct_FVMK_FingersPosePreset, METADATA_PARAMS(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_VRInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_VRInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TracingStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TracingStatus = { "TracingStatus", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMKFingersFKIKSolver, TracingStatus), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TracingStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TracingStatus_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TracingStatus_Key_KeyProp = { "TracingStatus_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_VMKFingersSolver_EVMK_FingerName, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TracingStatus_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TracingStatus_ValueProp = { "TracingStatus", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_FingersSolverSetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_FingersSolverSetup = { "FingersSolverSetup", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMKFingersFKIKSolver, FingersSolverSetup), Z_Construct_UClass_UVMKFingersSolverSetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_FingersSolverSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_FingersSolverSetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMKFingersFKIKSolver, Mesh), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
	};
#endif
	void Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((UVMKFingersFKIKSolver*)Obj)->bIsInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVMKFingersFKIKSolver), &Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bIsInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bDrawDebugGeometry_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/**\n\x09* Should draw debug lines for tracing?\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Should draw debug lines for tracing?" },
	};
#endif
	void Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bDrawDebugGeometry_SetBit(void* Obj)
	{
		((UVMKFingersFKIKSolver*)Obj)->bDrawDebugGeometry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bDrawDebugGeometry = { "bDrawDebugGeometry", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVMKFingersFKIKSolver), &Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bDrawDebugGeometry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bDrawDebugGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bDrawDebugGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_PosesInterpolationSpeed_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/**\n\x09* Interpolatoin speed for processing poses applied by SetFingersPose function\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Interpolatoin speed for processing poses applied by SetFingersPose function" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_PosesInterpolationSpeed = { "PosesInterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMKFingersFKIKSolver, PosesInterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_PosesInterpolationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_PosesInterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_InputMaxRotation_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/**\n\x09* Upper border for VR input (in degrees). VR input values (0..1) are interpolated to (InputMinRotation, InputMaxRotation)\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Upper border for VR input (in degrees). VR input values (0..1) are interpolated to (InputMinRotation, InputMaxRotation)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_InputMaxRotation = { "InputMaxRotation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMKFingersFKIKSolver, InputMaxRotation), METADATA_PARAMS(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_InputMaxRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_InputMaxRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_InputMinRotation_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/**\n\x09* Lower border for VR input (in degrees). VR input values (0..1) are interpolated to (InputMinRotation, InputMaxRotation)\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Lower border for VR input (in degrees). VR input values (0..1) are interpolated to (InputMinRotation, InputMaxRotation)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_InputMinRotation = { "InputMinRotation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMKFingersFKIKSolver, InputMinRotation), METADATA_PARAMS(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_InputMinRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_InputMinRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_FilterObject_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/**\n\x09* If valid, Trace() function would ignore all objects but this\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "If valid, Trace() function would ignore all objects but this" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_FilterObject = { "FilterObject", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMKFingersFKIKSolver, FilterObject), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_FilterObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_FilterObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_Fingers_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/**\n\x09* Out fingers data. Initialized from UFingersSolverSetup object.\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Out fingers data. Initialized from UFingersSolverSetup object." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_Fingers = { "Fingers", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMKFingersFKIKSolver, Fingers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_Fingers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_Fingers_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_Fingers_Key_KeyProp = { "Fingers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_VMKFingersSolver_EVMK_FingerName, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_Fingers_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_Fingers_ValueProp = { "Fingers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVMK_FingerSolver, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bTraceByObjectType_MetaData[] = {
		{ "Category", "VR Hand" },
		{ "Comment", "/**\n\x09* Should trace by trace channel (false) or object type (true)\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Should trace by trace channel (false) or object type (true)" },
	};
#endif
	void Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bTraceByObjectType_SetBit(void* Obj)
	{
		((UVMKFingersFKIKSolver*)Obj)->bTraceByObjectType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bTraceByObjectType = { "bTraceByObjectType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVMKFingersFKIKSolver), &Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bTraceByObjectType_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bTraceByObjectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bTraceByObjectType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/**\n\x09* Trace channel to probe: Visible, Camera etc\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Trace channel to probe: Visible, Camera etc" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMKFingersFKIKSolver, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TraceHalfDistance_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/**\n\x09* Trace distance from knuckle to inside and outside\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Trace distance from knuckle to inside and outside" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TraceHalfDistance = { "TraceHalfDistance", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMKFingersFKIKSolver, TraceHalfDistance), METADATA_PARAMS(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TraceHalfDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TraceHalfDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_Hand_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/**\n\x09* Hand side associated with this object\n\x09*/" },
		{ "ModuleRelativePath", "Public/VMKFingersFKIKSolver.h" },
		{ "ToolTip", "Hand side associated with this object" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVMKFingersFKIKSolver, Hand), Z_Construct_UEnum_VMKFingersSolver_EVMK_VRHand, METADATA_PARAMS(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_Hand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_HandSideMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_CurrentFingersPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_VRStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_VRStatus_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_VRStatus_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_VRStatus_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TraceStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bUseRuntimeFingersPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bHasDetailedVRInputInFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bHasVRInputInFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_VRInputDetailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_VRInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TracingStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TracingStatus_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TracingStatus_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TracingStatus_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_FingersSolverSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bIsInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bDrawDebugGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_PosesInterpolationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_InputMaxRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_InputMinRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_FilterObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_Fingers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_Fingers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_Fingers_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_Fingers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_bTraceByObjectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_TraceHalfDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::NewProp_Hand_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVMKFingersFKIKSolver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::ClassParams = {
		&UVMKFingersFKIKSolver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVMKFingersFKIKSolver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVMKFingersFKIKSolver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVMKFingersFKIKSolver, 2459427893);
	template<> VMKFINGERSSOLVER_API UClass* StaticClass<UVMKFingersFKIKSolver>()
	{
		return UVMKFingersFKIKSolver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVMKFingersFKIKSolver(Z_Construct_UClass_UVMKFingersFKIKSolver, &UVMKFingersFKIKSolver::StaticClass, TEXT("/Script/VMKFingersSolver"), TEXT("UVMKFingersFKIKSolver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVMKFingersFKIKSolver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
