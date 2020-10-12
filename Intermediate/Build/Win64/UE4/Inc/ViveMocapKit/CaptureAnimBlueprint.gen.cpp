// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViveMocapKit/Public/CaptureAnimBlueprint.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaptureAnimBlueprint() {}
// Cross Module References
	VIVEMOCAPKIT_API UClass* Z_Construct_UClass_UCaptureAnimBlueprint_NoRegister();
	VIVEMOCAPKIT_API UClass* Z_Construct_UClass_UCaptureAnimBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_ViveMocapKit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VIVEMOCAPKIT_API UClass* Z_Construct_UClass_UCaptureDevice_NoRegister();
// End Cross Module References
	void UCaptureAnimBlueprint::StaticRegisterNativesUCaptureAnimBlueprint()
	{
	}
	UClass* Z_Construct_UClass_UCaptureAnimBlueprint_NoRegister()
	{
		return UCaptureAnimBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UCaptureAnimBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoulderLeftRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShoulderLeftRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoulderRightRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShoulderRightRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKTarget_KneeLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKTarget_KneeLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKTarget_KneeRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKTarget_KneeRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKTarget_ElbowLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKTarget_ElbowLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKTarget_ElbowRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKTarget_ElbowRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootLeftRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootLeftRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootLeftLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootLeftLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalfLeftRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CalfLeftRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalfLeftLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CalfLeftLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThighLeftRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThighLeftRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThighLeftLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThighLeftLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootRightRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootRightRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootRightLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootRightLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalfRightRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CalfRightRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalfRightLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CalfRightLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThighRightRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThighRightRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThighRightLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThighRightLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandLeftRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandLeftRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandLeftLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandLeftLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForearmLeftRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForearmLeftRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForearmLeftLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForearmLeftLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperarmLeftNoRollRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpperarmLeftNoRollRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperarmLeftRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpperarmLeftRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperarmLeftLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpperarmLeftLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandRightRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandRightRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandRightLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandRightLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForearmRightRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForearmRightRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForearmRightLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForearmRightLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperarmRightNoRollRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpperarmRightNoRollRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperarmRightRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpperarmRightRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperarmRightLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpperarmRightLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeadRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeadLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RibcageRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RibcageRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RibcageLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RibcageLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PelvisRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PelvisLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableScaling_MetaData[];
#endif
		static void NewProp_bEnableScaling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureDevice_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureDevice;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCaptureAnimBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ViveMocapKit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Parent Anim Instance class to update automatically skeleton state from UCaptureDevice */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "CaptureAnimBlueprint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Parent Anim Instance class to update automatically skeleton state from UCaptureDevice" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CurrentPose_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Current Pose Snapshot (array of bone transforms in local space) */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Current Pose Snapshot (array of bone transforms in local space)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CurrentPose = { "CurrentPose", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, CurrentPose), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CurrentPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CurrentPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ShoulderLeftRotation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Rotation of Left Shoulder Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Rotation of Left Shoulder Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ShoulderLeftRotation = { "ShoulderLeftRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, ShoulderLeftRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ShoulderLeftRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ShoulderLeftRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ShoulderRightRotation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Rotation of Right Shoulder Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Rotation of Right Shoulder Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ShoulderRightRotation = { "ShoulderRightRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, ShoulderRightRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ShoulderRightRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ShoulderRightRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_IKTarget_KneeLeft_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Location of Left Knee joint target in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Location of Left Knee joint target in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_IKTarget_KneeLeft = { "IKTarget_KneeLeft", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, IKTarget_KneeLeft), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_IKTarget_KneeLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_IKTarget_KneeLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_IKTarget_KneeRight_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Location of Right Knee joint target in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Location of Right Knee joint target in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_IKTarget_KneeRight = { "IKTarget_KneeRight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, IKTarget_KneeRight), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_IKTarget_KneeRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_IKTarget_KneeRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_IKTarget_ElbowLeft_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Location of Left Elbow joint target in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Location of Left Elbow joint target in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_IKTarget_ElbowLeft = { "IKTarget_ElbowLeft", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, IKTarget_ElbowLeft), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_IKTarget_ElbowLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_IKTarget_ElbowLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_IKTarget_ElbowRight_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Location of Right Elbow joint target in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Location of Right Elbow joint target in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_IKTarget_ElbowRight = { "IKTarget_ElbowRight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, IKTarget_ElbowRight), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_IKTarget_ElbowRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_IKTarget_ElbowRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_FootLeftRotation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Rotation of Left Foot Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Rotation of Left Foot Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_FootLeftRotation = { "FootLeftRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, FootLeftRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_FootLeftRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_FootLeftRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_FootLeftLocation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Location of Left Foot Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Location of Left Foot Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_FootLeftLocation = { "FootLeftLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, FootLeftLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_FootLeftLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_FootLeftLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CalfLeftRotation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Rotation of Left Calf Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Rotation of Left Calf Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CalfLeftRotation = { "CalfLeftRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, CalfLeftRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CalfLeftRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CalfLeftRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CalfLeftLocation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Location of Left Calf Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Location of Left Calf Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CalfLeftLocation = { "CalfLeftLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, CalfLeftLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CalfLeftLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CalfLeftLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ThighLeftRotation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Rotation of Left Thigh Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Rotation of Left Thigh Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ThighLeftRotation = { "ThighLeftRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, ThighLeftRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ThighLeftRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ThighLeftRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ThighLeftLocation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Location of Left Thigh Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Location of Left Thigh Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ThighLeftLocation = { "ThighLeftLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, ThighLeftLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ThighLeftLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ThighLeftLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_FootRightRotation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Rotation of Right Foot Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Rotation of Right Foot Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_FootRightRotation = { "FootRightRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, FootRightRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_FootRightRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_FootRightRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_FootRightLocation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Location of Right Foot Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Location of Right Foot Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_FootRightLocation = { "FootRightLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, FootRightLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_FootRightLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_FootRightLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CalfRightRotation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Rotation of Right Calf Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Rotation of Right Calf Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CalfRightRotation = { "CalfRightRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, CalfRightRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CalfRightRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CalfRightRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CalfRightLocation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Location of Right Calf Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Location of Right Calf Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CalfRightLocation = { "CalfRightLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, CalfRightLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CalfRightLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CalfRightLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ThighRightRotation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Rotation of Right Thigh Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Rotation of Right Thigh Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ThighRightRotation = { "ThighRightRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, ThighRightRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ThighRightRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ThighRightRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ThighRightLocation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Location of Right Thigh Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Location of Right Thigh Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ThighRightLocation = { "ThighRightLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, ThighRightLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ThighRightLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ThighRightLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HandLeftRotation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Rotation of Left Palm Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Rotation of Left Palm Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HandLeftRotation = { "HandLeftRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, HandLeftRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HandLeftRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HandLeftRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HandLeftLocation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Location of Left Palm Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Location of Left Palm Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HandLeftLocation = { "HandLeftLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, HandLeftLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HandLeftLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HandLeftLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ForearmLeftRotation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Rotation of Left Forearm Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Rotation of Left Forearm Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ForearmLeftRotation = { "ForearmLeftRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, ForearmLeftRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ForearmLeftRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ForearmLeftRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ForearmLeftLocation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Location of Left Forearm Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Location of Left Forearm Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ForearmLeftLocation = { "ForearmLeftLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, ForearmLeftLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ForearmLeftLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ForearmLeftLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmLeftNoRollRotation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Rotation of Left Upperarm Bone in World Space without twist rotation component */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Rotation of Left Upperarm Bone in World Space without twist rotation component" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmLeftNoRollRotation = { "UpperarmLeftNoRollRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, UpperarmLeftNoRollRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmLeftNoRollRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmLeftNoRollRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmLeftRotation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Rotation of Left Upperarm Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Rotation of Left Upperarm Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmLeftRotation = { "UpperarmLeftRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, UpperarmLeftRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmLeftRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmLeftRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmLeftLocation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Location of Left Upperarm Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Location of Left Upperarm Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmLeftLocation = { "UpperarmLeftLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, UpperarmLeftLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmLeftLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmLeftLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HandRightRotation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Rotation of Right Palm Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Rotation of Right Palm Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HandRightRotation = { "HandRightRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, HandRightRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HandRightRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HandRightRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HandRightLocation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Location of Right Palm Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Location of Right Palm Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HandRightLocation = { "HandRightLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, HandRightLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HandRightLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HandRightLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ForearmRightRotation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Rotation of Right Forearm Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Rotation of Right Forearm Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ForearmRightRotation = { "ForearmRightRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, ForearmRightRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ForearmRightRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ForearmRightRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ForearmRightLocation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Location of Right Forearm Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Location of Right Forearm Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ForearmRightLocation = { "ForearmRightLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, ForearmRightLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ForearmRightLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ForearmRightLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmRightNoRollRotation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Rotation of Right Upperarm Bone in World Space without twist rotation component */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Rotation of Right Upperarm Bone in World Space without twist rotation component" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmRightNoRollRotation = { "UpperarmRightNoRollRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, UpperarmRightNoRollRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmRightNoRollRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmRightNoRollRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmRightRotation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Rotation of Right Upperarm Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Rotation of Right Upperarm Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmRightRotation = { "UpperarmRightRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, UpperarmRightRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmRightRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmRightRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmRightLocation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Location of Right Upperarm Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Location of Right Upperarm Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmRightLocation = { "UpperarmRightLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, UpperarmRightLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmRightLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmRightLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HeadRotation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Rotation of Head Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Rotation of Head Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HeadRotation = { "HeadRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, HeadRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HeadRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HeadRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HeadLocation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Location of Head Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Location of Head Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HeadLocation = { "HeadLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, HeadLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HeadLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HeadLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_RibcageRotation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Rotation of Ribcage Bone (last spine bone) in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Rotation of Ribcage Bone (last spine bone) in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_RibcageRotation = { "RibcageRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, RibcageRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_RibcageRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_RibcageRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_RibcageLocation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Location of Ribcage Bone (last spine bone) in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Location of Ribcage Bone (last spine bone) in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_RibcageLocation = { "RibcageLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, RibcageLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_RibcageLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_RibcageLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_PelvisRotation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Rotation of Pelvis Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Rotation of Pelvis Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_PelvisRotation = { "PelvisRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, PelvisRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_PelvisRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_PelvisRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_PelvisLocation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Location of Pelvis Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Location of Pelvis Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_PelvisLocation = { "PelvisLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, PelvisLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_PelvisLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_PelvisLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_RootRotation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Rotation of Root Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Rotation of Root Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_RootRotation = { "RootRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, RootRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_RootRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_RootRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_RootLocation_MetaData[] = {
		{ "Category", "Bones Data" },
		{ "Comment", "/* Location of Root Bone in World Space */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Location of Root Bone in World Space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_RootLocation = { "RootLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, RootLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_RootLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_RootLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_bEnableScaling_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/* Should skeletal mesh be scaled to actor's height? */" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Should skeletal mesh be scaled to actor's height?" },
	};
#endif
	void Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_bEnableScaling_SetBit(void* Obj)
	{
		((UCaptureAnimBlueprint*)Obj)->bEnableScaling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_bEnableScaling = { "bEnableScaling", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCaptureAnimBlueprint), &Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_bEnableScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_bEnableScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_bEnableScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CaptureDevice_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/* Reference to local player's CaptureDevice Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CaptureAnimBlueprint.h" },
		{ "ToolTip", "Reference to local player's CaptureDevice Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CaptureDevice = { "CaptureDevice", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureAnimBlueprint, CaptureDevice), Z_Construct_UClass_UCaptureDevice_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CaptureDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CaptureDevice_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCaptureAnimBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CurrentPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ShoulderLeftRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ShoulderRightRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_IKTarget_KneeLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_IKTarget_KneeRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_IKTarget_ElbowLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_IKTarget_ElbowRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_FootLeftRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_FootLeftLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CalfLeftRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CalfLeftLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ThighLeftRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ThighLeftLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_FootRightRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_FootRightLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CalfRightRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CalfRightLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ThighRightRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ThighRightLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HandLeftRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HandLeftLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ForearmLeftRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ForearmLeftLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmLeftNoRollRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmLeftRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmLeftLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HandRightRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HandRightLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ForearmRightRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_ForearmRightLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmRightNoRollRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmRightRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_UpperarmRightLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HeadRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_HeadLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_RibcageRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_RibcageLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_PelvisRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_PelvisLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_RootRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_RootLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_bEnableScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureAnimBlueprint_Statics::NewProp_CaptureDevice,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCaptureAnimBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCaptureAnimBlueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCaptureAnimBlueprint_Statics::ClassParams = {
		&UCaptureAnimBlueprint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCaptureAnimBlueprint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureAnimBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCaptureAnimBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCaptureAnimBlueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCaptureAnimBlueprint, 2104275599);
	template<> VIVEMOCAPKIT_API UClass* StaticClass<UCaptureAnimBlueprint>()
	{
		return UCaptureAnimBlueprint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCaptureAnimBlueprint(Z_Construct_UClass_UCaptureAnimBlueprint, &UCaptureAnimBlueprint::StaticClass, TEXT("/Script/ViveMocapKit"), TEXT("UCaptureAnimBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCaptureAnimBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
