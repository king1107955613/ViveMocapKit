// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViveMocapKit/Public/CaptureDevice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaptureDevice() {}
// Cross Module References
	VIVEMOCAPKIT_API UClass* Z_Construct_UClass_UCaptureDevice_NoRegister();
	VIVEMOCAPKIT_API UClass* Z_Construct_UClass_UCaptureDevice();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ViveMocapKit();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VIVEMOCAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FBodyCalibrationData();
	VIVEMOCAPKIT_API UEnum* Z_Construct_UEnum_ViveMocapKit_EHumanoidBone();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	VIVEMOCAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSmartCalibrationData();
	VMKFINGERSSOLVER_API UClass* Z_Construct_UClass_UVMKFingersFKIKSolver_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshot();
	VIVEMOCAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSocketInfo();
	VMKFINGERSSOLVER_API UEnum* Z_Construct_UEnum_VMKFingersSolver_EVMK_FingerName();
	VMKFINGERSSOLVER_API UScriptStruct* Z_Construct_UScriptStruct_FVMK_FingerSolver();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
	VIVEMOCAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FTrackerSetup();
	VIVEMOCAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletonBasicPreset();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	VIVEMOCAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FVMK_NT_Transform();
	VIVEMOCAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FTwistBone();
	VIVEMOCAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAdditionalBoneState();
	VIVEMOCAPKIT_API UClass* Z_Construct_UClass_UFingersDataProvider_NoRegister();
	VIVEMOCAPKIT_API UScriptStruct* Z_Construct_UScriptStruct_FCaptureBodyState();
	VIVEMOCAPKIT_API UEnum* Z_Construct_UEnum_ViveMocapKit_ECaptureFilter();
	VMKFINGERSSOLVER_API UClass* Z_Construct_UClass_UVMKFingersSolverSetup_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	VIVEMOCAPKIT_API UEnum* Z_Construct_UEnum_ViveMocapKit_EBodySideRole();
	VIVEMOCAPKIT_API UEnum* Z_Construct_UEnum_ViveMocapKit_EKneeOrientationSetup();
	VIVEMOCAPKIT_API UEnum* Z_Construct_UEnum_ViveMocapKit_ETrackingDeviceRole();
	VIVEMOCAPKIT_API UEnum* Z_Construct_UEnum_ViveMocapKit_ESkeletonBonesOrientation();
// End Cross Module References
	DEFINE_FUNCTION(UCaptureDevice::execClients_ToggleCapture)
	{
		P_GET_UBOOL(Z_Param_IsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clients_ToggleCapture_Implementation(Z_Param_IsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execServerToggleCapture)
	{
		P_GET_UBOOL(Z_Param_IsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerToggleCapture_Validate(Z_Param_IsEnabled))
		{
			RPC_ValidateFailed(TEXT("ServerToggleCapture_Validate"));
			return;
		}
		P_THIS->ServerToggleCapture_Implementation(Z_Param_IsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execClients_UpdateTrackerBone)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Key);
		P_GET_ENUM(EHumanoidBone,Z_Param_Bone);
		P_GET_STRUCT(FTransform,Z_Param_RelativeOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clients_UpdateTrackerBone_Implementation(Z_Param_Key,EHumanoidBone(Z_Param_Bone),Z_Param_RelativeOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execServerUpdateTrackerBone)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Key);
		P_GET_ENUM(EHumanoidBone,Z_Param_Bone);
		P_GET_STRUCT(FTransform,Z_Param_RelativeOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdateTrackerBone_Validate(Z_Param_Key,EHumanoidBone(Z_Param_Bone),Z_Param_RelativeOffset))
		{
			RPC_ValidateFailed(TEXT("ServerUpdateTrackerBone_Validate"));
			return;
		}
		P_THIS->ServerUpdateTrackerBone_Implementation(Z_Param_Key,EHumanoidBone(Z_Param_Bone),Z_Param_RelativeOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execClinets_InitializeTrackerBone)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Key);
		P_GET_ENUM(EHumanoidBone,Z_Param_Bone);
		P_GET_STRUCT(FTransform,Z_Param_RelativeOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clinets_InitializeTrackerBone_Implementation(Z_Param_Key,EHumanoidBone(Z_Param_Bone),Z_Param_RelativeOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execServerInitializeTrackerBone)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Key);
		P_GET_ENUM(EHumanoidBone,Z_Param_Bone);
		P_GET_STRUCT(FTransform,Z_Param_RelativeOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerInitializeTrackerBone_Validate(Z_Param_Key,EHumanoidBone(Z_Param_Bone),Z_Param_RelativeOffset))
		{
			RPC_ValidateFailed(TEXT("ServerInitializeTrackerBone_Validate"));
			return;
		}
		P_THIS->ServerInitializeTrackerBone_Implementation(Z_Param_Key,EHumanoidBone(Z_Param_Bone),Z_Param_RelativeOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execClients_UpdateMeshScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewUpperarmLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewForearmLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewThighLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewCalfLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewShoulderLength);
		P_GET_STRUCT(FRotator,Z_Param_ShoulderRightOffset);
		P_GET_STRUCT(FRotator,Z_Param_ShoulderLeftOffset);
		P_GET_STRUCT(FVector,Z_Param_NewMeshScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clients_UpdateMeshScale_Implementation(Z_Param_NewUpperarmLength,Z_Param_NewForearmLength,Z_Param_NewThighLength,Z_Param_NewCalfLength,Z_Param_NewShoulderLength,Z_Param_ShoulderRightOffset,Z_Param_ShoulderLeftOffset,Z_Param_NewMeshScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execServerUpdateMeshScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewUpperarmLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewForearmLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewThighLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewCalfLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewShoulderLength);
		P_GET_STRUCT(FRotator,Z_Param_ShoulderRightOffset);
		P_GET_STRUCT(FRotator,Z_Param_ShoulderLeftOffset);
		P_GET_STRUCT(FVector,Z_Param_NewMeshScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdateMeshScale_Validate(Z_Param_NewUpperarmLength,Z_Param_NewForearmLength,Z_Param_NewThighLength,Z_Param_NewCalfLength,Z_Param_NewShoulderLength,Z_Param_ShoulderRightOffset,Z_Param_ShoulderLeftOffset,Z_Param_NewMeshScale))
		{
			RPC_ValidateFailed(TEXT("ServerUpdateMeshScale_Validate"));
			return;
		}
		P_THIS->ServerUpdateMeshScale_Implementation(Z_Param_NewUpperarmLength,Z_Param_NewForearmLength,Z_Param_NewThighLength,Z_Param_NewCalfLength,Z_Param_NewShoulderLength,Z_Param_ShoulderRightOffset,Z_Param_ShoulderLeftOffset,Z_Param_NewMeshScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execServerUpdateInput)
	{
		P_GET_STRUCT(FVMK_NT_Transform,Z_Param_Head);
		P_GET_TARRAY(FVMK_NT_Transform,Z_Param_Trackers);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdateInput_Validate(Z_Param_Head,Z_Param_Trackers))
		{
			RPC_ValidateFailed(TEXT("ServerUpdateInput_Validate"));
			return;
		}
		P_THIS->ServerUpdateInput_Implementation(Z_Param_Head,Z_Param_Trackers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execMeasureVerticalAdjustment)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FootHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MeasureVerticalAdjustment(Z_Param_FootHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execGetSocketsSetup)
	{
		P_GET_TMAP_REF(FName,FSocketInfo,Z_Param_Out_OutSocketsSetup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSocketsSetup(Z_Param_Out_OutSocketsSetup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execGetFingersSolverLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVMKFingersFKIKSolver**)Z_Param__Result=P_THIS->GetFingersSolverLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execGetFingersSolverRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVMKFingersFKIKSolver**)Z_Param__Result=P_THIS->GetFingersSolverRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execGetBodyParameters)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutMeshScale);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutUpperarmLength);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutForearmLength);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutThighLength);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutCalfLength);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutShoulderLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBodyParameters(Z_Param_Out_OutMeshScale,Z_Param_Out_OutUpperarmLength,Z_Param_Out_OutForearmLength,Z_Param_Out_OutThighLength,Z_Param_Out_OutCalfLength,Z_Param_Out_OutShoulderLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execSendCalibrationToServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendCalibrationToServer_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execIsCalibrated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCalibrated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execPredictCollarboneDefaultOffset)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->PredictCollarboneDefaultOffset(EControllerHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execGetBoneTransformWithGenericOrientation)
	{
		P_GET_ENUM(EHumanoidBone,Z_Param_Bone);
		P_GET_UBOOL(Z_Param_bInLocalSpace);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutBonePosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBoneTransformWithGenericOrientation(EHumanoidBone(Z_Param_Bone),Z_Param_bInLocalSpace,Z_Param_Out_OutBonePosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execApplyCurrentCalibration)
	{
		P_GET_STRUCT_REF(FBodyCalibrationData,Z_Param_Out_BodyCalibration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyCurrentCalibration(Z_Param_Out_BodyCalibration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execGetCurrentCalibration)
	{
		P_GET_STRUCT_REF(FBodyCalibrationData,Z_Param_Out_OutBodyCalibration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCurrentCalibration(Z_Param_Out_OutBodyCalibration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execGetCollarbonesCalibration)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRightCollarbone);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutLeftCollarbone);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCollarbonesCalibration(Z_Param_Out_OutRightCollarbone,Z_Param_Out_OutLeftCollarbone);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execIsInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInitialized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execGetInputComponent)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_DeviceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetInputComponent(Z_Param_DeviceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execGetTrackingDevicesNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTrackingDevicesNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execGetArmsScaleMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetArmsScaleMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execGetMeshHeightMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMeshHeightMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execSetTrackersData)
	{
		P_GET_TMAP_REF(uint8,FTrackerSetup,Z_Param_Out_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrackersData(Z_Param_Out_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execGetHeadTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetHeadTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execIsCapturing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCapturing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execResetCalibration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCalibration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execGetCalibratedDataInTPose)
	{
		P_GET_STRUCT_REF(FSmartCalibrationData,Z_Param_Out_OutCalibrationData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCalibratedDataInTPose(Z_Param_Out_OutCalibrationData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execLoadCalibratedDataInTPoseEx)
	{
		P_GET_STRUCT_REF(FSmartCalibrationData,Z_Param_Out_CalibrationData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadCalibratedDataInTPoseEx(Z_Param_Out_CalibrationData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execLoadCalibratedDataInTPose)
	{
		P_GET_TMAP_REF(uint8,FTrackerSetup,Z_Param_Out_CalibratedData);
		P_GET_STRUCT(FRotator,Z_Param_RightCollarboneOffset);
		P_GET_STRUCT(FRotator,Z_Param_LeftCollarboneOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadCalibratedDataInTPose(Z_Param_Out_CalibratedData,Z_Param_RightCollarboneOffset,Z_Param_LeftCollarboneOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execAddTrackingDeviceSource)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_SourceNumber);
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTrackingDeviceSource(Z_Param_SourceNumber,Z_Param_SceneComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execExcludeComponentFromInput)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_MotionControllerComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ExcludeComponentFromInput(Z_Param_MotionControllerComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execInitializeVirtualTrackersForHands)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_PositionOffset);
		P_GET_OBJECT(USceneComponent,Z_Param_RightRotationSource);
		P_GET_OBJECT(USceneComponent,Z_Param_LeftRotationSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitializeVirtualTrackersForHands(Z_Param_PositionOffset,Z_Param_RightRotationSource,Z_Param_LeftRotationSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execInitializeInputFromComponents)
	{
		P_GET_TARRAY(USceneComponent*,Z_Param_MotionControllerComponents);
		P_GET_PROPERTY(FByteProperty,Z_Param_RightHandIndex);
		P_GET_PROPERTY(FByteProperty,Z_Param_LeftHandIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitializeInputFromComponents(Z_Param_MotionControllerComponents,Z_Param_RightHandIndex,Z_Param_LeftHandIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execUpdateSkeletonSetup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSkeletonSetup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execLoadSkeletonSetupFromStruct)
	{
		P_GET_STRUCT(FSkeletonBasicPreset,Z_Param_Preset);
		P_GET_UBOOL(Z_Param_AutoUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadSkeletonSetupFromStruct(Z_Param_Preset,Z_Param_AutoUpdate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execUpdateTrackerBone)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_TrackerId);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EHumanoidBone*)Z_Param__Result=P_THIS->UpdateTrackerBone(Z_Param_TrackerId,Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execUpdateTrackerTransform)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_TrackerId);
		P_GET_STRUCT(FTransform,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTrackerTransform(Z_Param_TrackerId,Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execBoneToName)
	{
		P_GET_ENUM(EHumanoidBone,Z_Param_Bone);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->BoneToName(EHumanoidBone(Z_Param_Bone));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execGetBoneTransformByName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBoneTransformByName(Z_Param_Out_BoneName,Z_Param_Out_WorldTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execUpdatePoseableMesh)
	{
		P_GET_UBOOL(Z_Param_bEnableScaling);
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_MeshOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePoseableMesh(Z_Param_bEnableScaling,Z_Param_MeshOverride);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execGetLastSkeletalMeshPose)
	{
		P_GET_STRUCT_REF(FPoseSnapshot,Z_Param_Out_ReturnValue);
		P_GET_UBOOL(Z_Param_bUnscaleSnapshot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLastSkeletalMeshPose(Z_Param_Out_ReturnValue,Z_Param_bUnscaleSnapshot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execGetSkeletalMeshPose)
	{
		P_GET_STRUCT_REF(FPoseSnapshot,Z_Param_Out_ReturnValue);
		P_GET_UBOOL(Z_Param_bEnableScaling);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSkeletalMeshPose(Z_Param_Out_ReturnValue,Z_Param_bEnableScaling);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execProcessFingers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessFingers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execInitializeFingersEx)
	{
		P_GET_TMAP_REF(EVMK_FingerName,FVMK_FingerSolver,Z_Param_Out_FingersSetupRight);
		P_GET_TMAP_REF(EVMK_FingerName,FVMK_FingerSolver,Z_Param_Out_FingersSetupLeft);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinRotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeed);
		P_GET_UBOOL(Z_Param_bRecreateObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeFingersEx(Z_Param_Out_FingersSetupRight,Z_Param_Out_FingersSetupLeft,Z_Param_MinRotation,Z_Param_MaxRotation,Z_Param_InterpSpeed,Z_Param_bRecreateObjects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execInitializeFingers)
	{
		P_GET_UBOOL(Z_Param_bRecreateObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeFingers(Z_Param_bRecreateObjects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execInitializeReferences)
	{
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_ControlledMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeReferences(Z_Param_ControlledMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execToggleCapture)
	{
		P_GET_UBOOL(Z_Param_IsEnabled);
		P_GET_UBOOL(Z_Param_bForceUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleCapture(Z_Param_IsEnabled,Z_Param_bForceUpdate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execInitializeTracker)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Index);
		P_GET_ENUM(EHumanoidBone,Z_Param_Bone);
		P_GET_UBOOL(Z_Param_bSaveInPrivateArray);
		P_GET_UBOOL(Z_Param_bAllowShared);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeTracker(Z_Param_Index,EHumanoidBone(Z_Param_Bone),Z_Param_bSaveInPrivateArray,Z_Param_bAllowShared);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execPredictBonesCalibration)
	{
		P_GET_TMAP_REF(uint8,FTrackerSetup,Z_Param_Out_PredictedTrackersData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PredictBonesCalibration(Z_Param_Out_PredictedTrackersData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execGetCalibrationBindingRules)
	{
		P_GET_TMAP_REF(int32,EHumanoidBone,Z_Param_Out_OutBindingRules);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCalibrationBindingRules(Z_Param_Out_OutBindingRules);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execResetPreCalibrationBinding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetPreCalibrationBinding();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execUnbindPreCalibrationTracker)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TrackerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindPreCalibrationTracker(Z_Param_TrackerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execBindPreCalibrationTracker)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TrackerId);
		P_GET_ENUM(EHumanoidBone,Z_Param_Bone);
		P_GET_UBOOL(Z_Param_bAllowSharedBone);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BindPreCalibrationTracker(Z_Param_TrackerId,EHumanoidBone(Z_Param_Bone),Z_Param_bAllowSharedBone);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execCalibrateBones)
	{
		P_GET_UBOOL(Z_Param_bPredictOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalibrateBones(Z_Param_bPredictOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execPrepareForCalibration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrepareForCalibration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCaptureDevice::execPrepareForCalibrationWithHandsForward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrepareForCalibrationWithHandsForward();
		P_NATIVE_END;
	}
	static FName NAME_UCaptureDevice_Clients_ToggleCapture = FName(TEXT("Clients_ToggleCapture"));
	void UCaptureDevice::Clients_ToggleCapture(bool IsEnabled)
	{
		CaptureDevice_eventClients_ToggleCapture_Parms Parms;
		Parms.IsEnabled=IsEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCaptureDevice_Clients_ToggleCapture),&Parms);
	}
	static FName NAME_UCaptureDevice_Clients_UpdateMeshScale = FName(TEXT("Clients_UpdateMeshScale"));
	void UCaptureDevice::Clients_UpdateMeshScale(float NewUpperarmLength, float NewForearmLength, float NewThighLength, float NewCalfLength, float NewShoulderLength, FRotator ShoulderRightOffset, FRotator ShoulderLeftOffset, FVector NewMeshScale)
	{
		CaptureDevice_eventClients_UpdateMeshScale_Parms Parms;
		Parms.NewUpperarmLength=NewUpperarmLength;
		Parms.NewForearmLength=NewForearmLength;
		Parms.NewThighLength=NewThighLength;
		Parms.NewCalfLength=NewCalfLength;
		Parms.NewShoulderLength=NewShoulderLength;
		Parms.ShoulderRightOffset=ShoulderRightOffset;
		Parms.ShoulderLeftOffset=ShoulderLeftOffset;
		Parms.NewMeshScale=NewMeshScale;
		ProcessEvent(FindFunctionChecked(NAME_UCaptureDevice_Clients_UpdateMeshScale),&Parms);
	}
	static FName NAME_UCaptureDevice_Clients_UpdateTrackerBone = FName(TEXT("Clients_UpdateTrackerBone"));
	void UCaptureDevice::Clients_UpdateTrackerBone(int32 Key, EHumanoidBone Bone, FTransform RelativeOffset)
	{
		CaptureDevice_eventClients_UpdateTrackerBone_Parms Parms;
		Parms.Key=Key;
		Parms.Bone=Bone;
		Parms.RelativeOffset=RelativeOffset;
		ProcessEvent(FindFunctionChecked(NAME_UCaptureDevice_Clients_UpdateTrackerBone),&Parms);
	}
	static FName NAME_UCaptureDevice_Clinets_InitializeTrackerBone = FName(TEXT("Clinets_InitializeTrackerBone"));
	void UCaptureDevice::Clinets_InitializeTrackerBone(int32 Key, EHumanoidBone Bone, FTransform RelativeOffset)
	{
		CaptureDevice_eventClinets_InitializeTrackerBone_Parms Parms;
		Parms.Key=Key;
		Parms.Bone=Bone;
		Parms.RelativeOffset=RelativeOffset;
		ProcessEvent(FindFunctionChecked(NAME_UCaptureDevice_Clinets_InitializeTrackerBone),&Parms);
	}
	static FName NAME_UCaptureDevice_SendCalibrationToServer = FName(TEXT("SendCalibrationToServer"));
	void UCaptureDevice::SendCalibrationToServer()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCaptureDevice_SendCalibrationToServer),NULL);
	}
	static FName NAME_UCaptureDevice_ServerInitializeTrackerBone = FName(TEXT("ServerInitializeTrackerBone"));
	void UCaptureDevice::ServerInitializeTrackerBone(int32 Key, EHumanoidBone Bone, FTransform RelativeOffset)
	{
		CaptureDevice_eventServerInitializeTrackerBone_Parms Parms;
		Parms.Key=Key;
		Parms.Bone=Bone;
		Parms.RelativeOffset=RelativeOffset;
		ProcessEvent(FindFunctionChecked(NAME_UCaptureDevice_ServerInitializeTrackerBone),&Parms);
	}
	static FName NAME_UCaptureDevice_ServerToggleCapture = FName(TEXT("ServerToggleCapture"));
	void UCaptureDevice::ServerToggleCapture(bool IsEnabled)
	{
		CaptureDevice_eventServerToggleCapture_Parms Parms;
		Parms.IsEnabled=IsEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCaptureDevice_ServerToggleCapture),&Parms);
	}
	static FName NAME_UCaptureDevice_ServerUpdateInput = FName(TEXT("ServerUpdateInput"));
	void UCaptureDevice::ServerUpdateInput(FVMK_NT_Transform const& Head, TArray<FVMK_NT_Transform> const& Trackers)
	{
		CaptureDevice_eventServerUpdateInput_Parms Parms;
		Parms.Head=Head;
		Parms.Trackers=Trackers;
		ProcessEvent(FindFunctionChecked(NAME_UCaptureDevice_ServerUpdateInput),&Parms);
	}
	static FName NAME_UCaptureDevice_ServerUpdateMeshScale = FName(TEXT("ServerUpdateMeshScale"));
	void UCaptureDevice::ServerUpdateMeshScale(float NewUpperarmLength, float NewForearmLength, float NewThighLength, float NewCalfLength, float NewShoulderLength, FRotator ShoulderRightOffset, FRotator ShoulderLeftOffset, FVector NewMeshScale)
	{
		CaptureDevice_eventServerUpdateMeshScale_Parms Parms;
		Parms.NewUpperarmLength=NewUpperarmLength;
		Parms.NewForearmLength=NewForearmLength;
		Parms.NewThighLength=NewThighLength;
		Parms.NewCalfLength=NewCalfLength;
		Parms.NewShoulderLength=NewShoulderLength;
		Parms.ShoulderRightOffset=ShoulderRightOffset;
		Parms.ShoulderLeftOffset=ShoulderLeftOffset;
		Parms.NewMeshScale=NewMeshScale;
		ProcessEvent(FindFunctionChecked(NAME_UCaptureDevice_ServerUpdateMeshScale),&Parms);
	}
	static FName NAME_UCaptureDevice_ServerUpdateTrackerBone = FName(TEXT("ServerUpdateTrackerBone"));
	void UCaptureDevice::ServerUpdateTrackerBone(int32 Key, EHumanoidBone Bone, FTransform RelativeOffset)
	{
		CaptureDevice_eventServerUpdateTrackerBone_Parms Parms;
		Parms.Key=Key;
		Parms.Bone=Bone;
		Parms.RelativeOffset=RelativeOffset;
		ProcessEvent(FindFunctionChecked(NAME_UCaptureDevice_ServerUpdateTrackerBone),&Parms);
	}
	void UCaptureDevice::StaticRegisterNativesUCaptureDevice()
	{
		UClass* Class = UCaptureDevice::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTrackingDeviceSource", &UCaptureDevice::execAddTrackingDeviceSource },
			{ "ApplyCurrentCalibration", &UCaptureDevice::execApplyCurrentCalibration },
			{ "BindPreCalibrationTracker", &UCaptureDevice::execBindPreCalibrationTracker },
			{ "BoneToName", &UCaptureDevice::execBoneToName },
			{ "CalibrateBones", &UCaptureDevice::execCalibrateBones },
			{ "Clients_ToggleCapture", &UCaptureDevice::execClients_ToggleCapture },
			{ "Clients_UpdateMeshScale", &UCaptureDevice::execClients_UpdateMeshScale },
			{ "Clients_UpdateTrackerBone", &UCaptureDevice::execClients_UpdateTrackerBone },
			{ "Clinets_InitializeTrackerBone", &UCaptureDevice::execClinets_InitializeTrackerBone },
			{ "ExcludeComponentFromInput", &UCaptureDevice::execExcludeComponentFromInput },
			{ "GetArmsScaleMultiplier", &UCaptureDevice::execGetArmsScaleMultiplier },
			{ "GetBodyParameters", &UCaptureDevice::execGetBodyParameters },
			{ "GetBoneTransformByName", &UCaptureDevice::execGetBoneTransformByName },
			{ "GetBoneTransformWithGenericOrientation", &UCaptureDevice::execGetBoneTransformWithGenericOrientation },
			{ "GetCalibratedDataInTPose", &UCaptureDevice::execGetCalibratedDataInTPose },
			{ "GetCalibrationBindingRules", &UCaptureDevice::execGetCalibrationBindingRules },
			{ "GetCollarbonesCalibration", &UCaptureDevice::execGetCollarbonesCalibration },
			{ "GetCurrentCalibration", &UCaptureDevice::execGetCurrentCalibration },
			{ "GetFingersSolverLeft", &UCaptureDevice::execGetFingersSolverLeft },
			{ "GetFingersSolverRight", &UCaptureDevice::execGetFingersSolverRight },
			{ "GetHeadTransform", &UCaptureDevice::execGetHeadTransform },
			{ "GetInputComponent", &UCaptureDevice::execGetInputComponent },
			{ "GetLastSkeletalMeshPose", &UCaptureDevice::execGetLastSkeletalMeshPose },
			{ "GetMeshHeightMultiplier", &UCaptureDevice::execGetMeshHeightMultiplier },
			{ "GetSkeletalMeshPose", &UCaptureDevice::execGetSkeletalMeshPose },
			{ "GetSocketsSetup", &UCaptureDevice::execGetSocketsSetup },
			{ "GetTrackingDevicesNum", &UCaptureDevice::execGetTrackingDevicesNum },
			{ "InitializeFingers", &UCaptureDevice::execInitializeFingers },
			{ "InitializeFingersEx", &UCaptureDevice::execInitializeFingersEx },
			{ "InitializeInputFromComponents", &UCaptureDevice::execInitializeInputFromComponents },
			{ "InitializeReferences", &UCaptureDevice::execInitializeReferences },
			{ "InitializeTracker", &UCaptureDevice::execInitializeTracker },
			{ "InitializeVirtualTrackersForHands", &UCaptureDevice::execInitializeVirtualTrackersForHands },
			{ "IsCalibrated", &UCaptureDevice::execIsCalibrated },
			{ "IsCapturing", &UCaptureDevice::execIsCapturing },
			{ "IsInitialized", &UCaptureDevice::execIsInitialized },
			{ "LoadCalibratedDataInTPose", &UCaptureDevice::execLoadCalibratedDataInTPose },
			{ "LoadCalibratedDataInTPoseEx", &UCaptureDevice::execLoadCalibratedDataInTPoseEx },
			{ "LoadSkeletonSetupFromStruct", &UCaptureDevice::execLoadSkeletonSetupFromStruct },
			{ "MeasureVerticalAdjustment", &UCaptureDevice::execMeasureVerticalAdjustment },
			{ "PredictBonesCalibration", &UCaptureDevice::execPredictBonesCalibration },
			{ "PredictCollarboneDefaultOffset", &UCaptureDevice::execPredictCollarboneDefaultOffset },
			{ "PrepareForCalibration", &UCaptureDevice::execPrepareForCalibration },
			{ "PrepareForCalibrationWithHandsForward", &UCaptureDevice::execPrepareForCalibrationWithHandsForward },
			{ "ProcessFingers", &UCaptureDevice::execProcessFingers },
			{ "ResetCalibration", &UCaptureDevice::execResetCalibration },
			{ "ResetPreCalibrationBinding", &UCaptureDevice::execResetPreCalibrationBinding },
			{ "SendCalibrationToServer", &UCaptureDevice::execSendCalibrationToServer },
			{ "ServerInitializeTrackerBone", &UCaptureDevice::execServerInitializeTrackerBone },
			{ "ServerToggleCapture", &UCaptureDevice::execServerToggleCapture },
			{ "ServerUpdateInput", &UCaptureDevice::execServerUpdateInput },
			{ "ServerUpdateMeshScale", &UCaptureDevice::execServerUpdateMeshScale },
			{ "ServerUpdateTrackerBone", &UCaptureDevice::execServerUpdateTrackerBone },
			{ "SetTrackersData", &UCaptureDevice::execSetTrackersData },
			{ "ToggleCapture", &UCaptureDevice::execToggleCapture },
			{ "UnbindPreCalibrationTracker", &UCaptureDevice::execUnbindPreCalibrationTracker },
			{ "UpdatePoseableMesh", &UCaptureDevice::execUpdatePoseableMesh },
			{ "UpdateSkeletonSetup", &UCaptureDevice::execUpdateSkeletonSetup },
			{ "UpdateTrackerBone", &UCaptureDevice::execUpdateTrackerBone },
			{ "UpdateTrackerTransform", &UCaptureDevice::execUpdateTrackerTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCaptureDevice_AddTrackingDeviceSource_Statics
	{
		struct CaptureDevice_eventAddTrackingDeviceSource_Parms
		{
			uint8 SourceNumber;
			USceneComponent* SceneComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_AddTrackingDeviceSource_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCaptureDevice_AddTrackingDeviceSource_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventAddTrackingDeviceSource_Parms, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_AddTrackingDeviceSource_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_AddTrackingDeviceSource_Statics::NewProp_SceneComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCaptureDevice_AddTrackingDeviceSource_Statics::NewProp_SourceNumber = { "SourceNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventAddTrackingDeviceSource_Parms, SourceNumber), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_AddTrackingDeviceSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_AddTrackingDeviceSource_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_AddTrackingDeviceSource_Statics::NewProp_SourceNumber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_AddTrackingDeviceSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** \n\x09* Initializing alien source to capture its position to a socket bone initialized in the SocketsMap.\n\x09* Overrides default components or Vive Trackers with the same Id.\n\x09* @param SourceNumber\x09\x09Id of tracked device from 1 to 8.\n\x09* @param SceneComponent\x09\x09Scene Component as a source of location and rotation\n\x09*/" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Initializing alien source to capture its position to a socket bone initialized in the SocketsMap.\nOverrides default components or Vive Trackers with the same Id.\n@param SourceNumber           Id of tracked device from 1 to 8.\n@param SceneComponent         Scene Component as a source of location and rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_AddTrackingDeviceSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "AddTrackingDeviceSource", nullptr, nullptr, sizeof(CaptureDevice_eventAddTrackingDeviceSource_Parms), Z_Construct_UFunction_UCaptureDevice_AddTrackingDeviceSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_AddTrackingDeviceSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_AddTrackingDeviceSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_AddTrackingDeviceSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_AddTrackingDeviceSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_AddTrackingDeviceSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_ApplyCurrentCalibration_Statics
	{
		struct CaptureDevice_eventApplyCurrentCalibration_Parms
		{
			FBodyCalibrationData BodyCalibration;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyCalibration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyCalibration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_ApplyCurrentCalibration_Statics::NewProp_BodyCalibration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_ApplyCurrentCalibration_Statics::NewProp_BodyCalibration = { "BodyCalibration", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventApplyCurrentCalibration_Parms, BodyCalibration), Z_Construct_UScriptStruct_FBodyCalibrationData, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_ApplyCurrentCalibration_Statics::NewProp_BodyCalibration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_ApplyCurrentCalibration_Statics::NewProp_BodyCalibration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_ApplyCurrentCalibration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_ApplyCurrentCalibration_Statics::NewProp_BodyCalibration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_ApplyCurrentCalibration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Calibration" },
		{ "Comment", "// Apply body calibration data to current player. BodyCalibration object must be created within the same session.\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Apply body calibration data to current player. BodyCalibration object must be created within the same session." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_ApplyCurrentCalibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "ApplyCurrentCalibration", nullptr, nullptr, sizeof(CaptureDevice_eventApplyCurrentCalibration_Parms), Z_Construct_UFunction_UCaptureDevice_ApplyCurrentCalibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_ApplyCurrentCalibration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_ApplyCurrentCalibration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_ApplyCurrentCalibration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_ApplyCurrentCalibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_ApplyCurrentCalibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_BindPreCalibrationTracker_Statics
	{
		struct CaptureDevice_eventBindPreCalibrationTracker_Parms
		{
			int32 TrackerId;
			EHumanoidBone Bone;
			bool bAllowSharedBone;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bAllowSharedBone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowSharedBone;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCaptureDevice_BindPreCalibrationTracker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CaptureDevice_eventBindPreCalibrationTracker_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_BindPreCalibrationTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventBindPreCalibrationTracker_Parms), &Z_Construct_UFunction_UCaptureDevice_BindPreCalibrationTracker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCaptureDevice_BindPreCalibrationTracker_Statics::NewProp_bAllowSharedBone_SetBit(void* Obj)
	{
		((CaptureDevice_eventBindPreCalibrationTracker_Parms*)Obj)->bAllowSharedBone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_BindPreCalibrationTracker_Statics::NewProp_bAllowSharedBone = { "bAllowSharedBone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventBindPreCalibrationTracker_Parms), &Z_Construct_UFunction_UCaptureDevice_BindPreCalibrationTracker_Statics::NewProp_bAllowSharedBone_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCaptureDevice_BindPreCalibrationTracker_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventBindPreCalibrationTracker_Parms, Bone), Z_Construct_UEnum_ViveMocapKit_EHumanoidBone, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCaptureDevice_BindPreCalibrationTracker_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCaptureDevice_BindPreCalibrationTracker_Statics::NewProp_TrackerId = { "TrackerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventBindPreCalibrationTracker_Parms, TrackerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_BindPreCalibrationTracker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_BindPreCalibrationTracker_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_BindPreCalibrationTracker_Statics::NewProp_bAllowSharedBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_BindPreCalibrationTracker_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_BindPreCalibrationTracker_Statics::NewProp_Bone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_BindPreCalibrationTracker_Statics::NewProp_TrackerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_BindPreCalibrationTracker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "Comment", "/* Force CalibrateBones() function to use specified tracker to track specified bone */" },
		{ "CPP_Default_bAllowSharedBone", "false" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Force CalibrateBones() function to use specified tracker to track specified bone" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_BindPreCalibrationTracker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "BindPreCalibrationTracker", nullptr, nullptr, sizeof(CaptureDevice_eventBindPreCalibrationTracker_Parms), Z_Construct_UFunction_UCaptureDevice_BindPreCalibrationTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_BindPreCalibrationTracker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_BindPreCalibrationTracker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_BindPreCalibrationTracker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_BindPreCalibrationTracker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_BindPreCalibrationTracker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_BoneToName_Statics
	{
		struct CaptureDevice_eventBoneToName_Parms
		{
			EHumanoidBone Bone;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCaptureDevice_BoneToName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventBoneToName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCaptureDevice_BoneToName_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventBoneToName_Parms, Bone), Z_Construct_UEnum_ViveMocapKit_EHumanoidBone, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCaptureDevice_BoneToName_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_BoneToName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_BoneToName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_BoneToName_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_BoneToName_Statics::NewProp_Bone_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_BoneToName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "Comment", "// Helper function. Returns text descrition of the specified bone\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Helper function. Returns text descrition of the specified bone" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_BoneToName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "BoneToName", nullptr, nullptr, sizeof(CaptureDevice_eventBoneToName_Parms), Z_Construct_UFunction_UCaptureDevice_BoneToName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_BoneToName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_BoneToName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_BoneToName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_BoneToName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_BoneToName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_CalibrateBones_Statics
	{
		struct CaptureDevice_eventCalibrateBones_Parms
		{
			bool bPredictOnly;
		};
		static void NewProp_bPredictOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPredictOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCaptureDevice_CalibrateBones_Statics::NewProp_bPredictOnly_SetBit(void* Obj)
	{
		((CaptureDevice_eventCalibrateBones_Parms*)Obj)->bPredictOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_CalibrateBones_Statics::NewProp_bPredictOnly = { "bPredictOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventCalibrateBones_Parms), &Z_Construct_UFunction_UCaptureDevice_CalibrateBones_Statics::NewProp_bPredictOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_CalibrateBones_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_CalibrateBones_Statics::NewProp_bPredictOnly,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_CalibrateBones_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "Comment", "/* Connect all existing trackers and HMD to skeleton bones.\n\x09Replication Note: must be called on locally controlled Pawn */" },
		{ "CPP_Default_bPredictOnly", "false" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Connect all existing trackers and HMD to skeleton bones.\n      Replication Note: must be called on locally controlled Pawn" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_CalibrateBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "CalibrateBones", nullptr, nullptr, sizeof(CaptureDevice_eventCalibrateBones_Parms), Z_Construct_UFunction_UCaptureDevice_CalibrateBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_CalibrateBones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_CalibrateBones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_CalibrateBones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_CalibrateBones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_CalibrateBones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_Clients_ToggleCapture_Statics
	{
		static void NewProp_IsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCaptureDevice_Clients_ToggleCapture_Statics::NewProp_IsEnabled_SetBit(void* Obj)
	{
		((CaptureDevice_eventClients_ToggleCapture_Parms*)Obj)->IsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_Clients_ToggleCapture_Statics::NewProp_IsEnabled = { "IsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventClients_ToggleCapture_Parms), &Z_Construct_UFunction_UCaptureDevice_Clients_ToggleCapture_Statics::NewProp_IsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_Clients_ToggleCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_Clients_ToggleCapture_Statics::NewProp_IsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_Clients_ToggleCapture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_Clients_ToggleCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "Clients_ToggleCapture", nullptr, nullptr, sizeof(CaptureDevice_eventClients_ToggleCapture_Parms), Z_Construct_UFunction_UCaptureDevice_Clients_ToggleCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_Clients_ToggleCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_Clients_ToggleCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_Clients_ToggleCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_Clients_ToggleCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_Clients_ToggleCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewMeshScale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShoulderLeftOffset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShoulderRightOffset;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewShoulderLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewCalfLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewThighLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewForearmLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewUpperarmLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale_Statics::NewProp_NewMeshScale = { "NewMeshScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventClients_UpdateMeshScale_Parms, NewMeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale_Statics::NewProp_ShoulderLeftOffset = { "ShoulderLeftOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventClients_UpdateMeshScale_Parms, ShoulderLeftOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale_Statics::NewProp_ShoulderRightOffset = { "ShoulderRightOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventClients_UpdateMeshScale_Parms, ShoulderRightOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale_Statics::NewProp_NewShoulderLength = { "NewShoulderLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventClients_UpdateMeshScale_Parms, NewShoulderLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale_Statics::NewProp_NewCalfLength = { "NewCalfLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventClients_UpdateMeshScale_Parms, NewCalfLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale_Statics::NewProp_NewThighLength = { "NewThighLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventClients_UpdateMeshScale_Parms, NewThighLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale_Statics::NewProp_NewForearmLength = { "NewForearmLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventClients_UpdateMeshScale_Parms, NewForearmLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale_Statics::NewProp_NewUpperarmLength = { "NewUpperarmLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventClients_UpdateMeshScale_Parms, NewUpperarmLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale_Statics::NewProp_NewMeshScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale_Statics::NewProp_ShoulderLeftOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale_Statics::NewProp_ShoulderRightOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale_Statics::NewProp_NewShoulderLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale_Statics::NewProp_NewCalfLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale_Statics::NewProp_NewThighLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale_Statics::NewProp_NewForearmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale_Statics::NewProp_NewUpperarmLength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "Clients_UpdateMeshScale", nullptr, nullptr, sizeof(CaptureDevice_eventClients_UpdateMeshScale_Parms), Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_Clients_UpdateTrackerBone_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeOffset;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_Clients_UpdateTrackerBone_Statics::NewProp_RelativeOffset = { "RelativeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventClients_UpdateTrackerBone_Parms, RelativeOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCaptureDevice_Clients_UpdateTrackerBone_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventClients_UpdateTrackerBone_Parms, Bone), Z_Construct_UEnum_ViveMocapKit_EHumanoidBone, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCaptureDevice_Clients_UpdateTrackerBone_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCaptureDevice_Clients_UpdateTrackerBone_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventClients_UpdateTrackerBone_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_Clients_UpdateTrackerBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_Clients_UpdateTrackerBone_Statics::NewProp_RelativeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_Clients_UpdateTrackerBone_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_Clients_UpdateTrackerBone_Statics::NewProp_Bone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_Clients_UpdateTrackerBone_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_Clients_UpdateTrackerBone_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// manually replicating TrackersData map (maps aren't replicated)\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "manually replicating TrackersData map (maps aren't replicated)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_Clients_UpdateTrackerBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "Clients_UpdateTrackerBone", nullptr, nullptr, sizeof(CaptureDevice_eventClients_UpdateTrackerBone_Parms), Z_Construct_UFunction_UCaptureDevice_Clients_UpdateTrackerBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_Clients_UpdateTrackerBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_Clients_UpdateTrackerBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_Clients_UpdateTrackerBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_Clients_UpdateTrackerBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_Clients_UpdateTrackerBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_Clinets_InitializeTrackerBone_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeOffset;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_Clinets_InitializeTrackerBone_Statics::NewProp_RelativeOffset = { "RelativeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventClinets_InitializeTrackerBone_Parms, RelativeOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCaptureDevice_Clinets_InitializeTrackerBone_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventClinets_InitializeTrackerBone_Parms, Bone), Z_Construct_UEnum_ViveMocapKit_EHumanoidBone, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCaptureDevice_Clinets_InitializeTrackerBone_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCaptureDevice_Clinets_InitializeTrackerBone_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventClinets_InitializeTrackerBone_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_Clinets_InitializeTrackerBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_Clinets_InitializeTrackerBone_Statics::NewProp_RelativeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_Clinets_InitializeTrackerBone_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_Clinets_InitializeTrackerBone_Statics::NewProp_Bone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_Clinets_InitializeTrackerBone_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_Clinets_InitializeTrackerBone_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// manually replicating TrackersData map (maps aren't replicated)\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "manually replicating TrackersData map (maps aren't replicated)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_Clinets_InitializeTrackerBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "Clinets_InitializeTrackerBone", nullptr, nullptr, sizeof(CaptureDevice_eventClinets_InitializeTrackerBone_Parms), Z_Construct_UFunction_UCaptureDevice_Clinets_InitializeTrackerBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_Clinets_InitializeTrackerBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_Clinets_InitializeTrackerBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_Clinets_InitializeTrackerBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_Clinets_InitializeTrackerBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_Clinets_InitializeTrackerBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_ExcludeComponentFromInput_Statics
	{
		struct CaptureDevice_eventExcludeComponentFromInput_Parms
		{
			USceneComponent* MotionControllerComponent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionControllerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionControllerComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCaptureDevice_ExcludeComponentFromInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CaptureDevice_eventExcludeComponentFromInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_ExcludeComponentFromInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventExcludeComponentFromInput_Parms), &Z_Construct_UFunction_UCaptureDevice_ExcludeComponentFromInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_ExcludeComponentFromInput_Statics::NewProp_MotionControllerComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCaptureDevice_ExcludeComponentFromInput_Statics::NewProp_MotionControllerComponent = { "MotionControllerComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventExcludeComponentFromInput_Parms, MotionControllerComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_ExcludeComponentFromInput_Statics::NewProp_MotionControllerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_ExcludeComponentFromInput_Statics::NewProp_MotionControllerComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_ExcludeComponentFromInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_ExcludeComponentFromInput_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_ExcludeComponentFromInput_Statics::NewProp_MotionControllerComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_ExcludeComponentFromInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Don't use specified component for motion capture. SHould be called\n\x09* after InitializeInputFromComponents(...) and before calibration\n\x09*/" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Don't use specified component for motion capture. SHould be called\nafter InitializeInputFromComponents(...) and before calibration" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_ExcludeComponentFromInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "ExcludeComponentFromInput", nullptr, nullptr, sizeof(CaptureDevice_eventExcludeComponentFromInput_Parms), Z_Construct_UFunction_UCaptureDevice_ExcludeComponentFromInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_ExcludeComponentFromInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_ExcludeComponentFromInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_ExcludeComponentFromInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_ExcludeComponentFromInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_ExcludeComponentFromInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_GetArmsScaleMultiplier_Statics
	{
		struct CaptureDevice_eventGetArmsScaleMultiplier_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptureDevice_GetArmsScaleMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetArmsScaleMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_GetArmsScaleMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetArmsScaleMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_GetArmsScaleMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Get scale multiplier applied to arms of skeletal mesh\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Get scale multiplier applied to arms of skeletal mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_GetArmsScaleMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "GetArmsScaleMultiplier", nullptr, nullptr, sizeof(CaptureDevice_eventGetArmsScaleMultiplier_Parms), Z_Construct_UFunction_UCaptureDevice_GetArmsScaleMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetArmsScaleMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_GetArmsScaleMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetArmsScaleMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_GetArmsScaleMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_GetArmsScaleMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_GetBodyParameters_Statics
	{
		struct CaptureDevice_eventGetBodyParameters_Parms
		{
			FVector OutMeshScale;
			float OutUpperarmLength;
			float OutForearmLength;
			float OutThighLength;
			float OutCalfLength;
			float OutShoulderLength;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutShoulderLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutCalfLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutThighLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutForearmLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutUpperarmLength;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutMeshScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptureDevice_GetBodyParameters_Statics::NewProp_OutShoulderLength = { "OutShoulderLength", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetBodyParameters_Parms, OutShoulderLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptureDevice_GetBodyParameters_Statics::NewProp_OutCalfLength = { "OutCalfLength", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetBodyParameters_Parms, OutCalfLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptureDevice_GetBodyParameters_Statics::NewProp_OutThighLength = { "OutThighLength", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetBodyParameters_Parms, OutThighLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptureDevice_GetBodyParameters_Statics::NewProp_OutForearmLength = { "OutForearmLength", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetBodyParameters_Parms, OutForearmLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptureDevice_GetBodyParameters_Statics::NewProp_OutUpperarmLength = { "OutUpperarmLength", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetBodyParameters_Parms, OutUpperarmLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_GetBodyParameters_Statics::NewProp_OutMeshScale = { "OutMeshScale", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetBodyParameters_Parms, OutMeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_GetBodyParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetBodyParameters_Statics::NewProp_OutShoulderLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetBodyParameters_Statics::NewProp_OutCalfLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetBodyParameters_Statics::NewProp_OutThighLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetBodyParameters_Statics::NewProp_OutForearmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetBodyParameters_Statics::NewProp_OutUpperarmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetBodyParameters_Statics::NewProp_OutMeshScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_GetBodyParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09* Get private body calibration parameters\n\x09*/" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Get private body calibration parameters" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_GetBodyParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "GetBodyParameters", nullptr, nullptr, sizeof(CaptureDevice_eventGetBodyParameters_Parms), Z_Construct_UFunction_UCaptureDevice_GetBodyParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetBodyParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_GetBodyParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetBodyParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_GetBodyParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_GetBodyParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_GetBoneTransformByName_Statics
	{
		struct CaptureDevice_eventGetBoneTransformByName_Parms
		{
			FName BoneName;
			FTransform WorldTransform;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCaptureDevice_GetBoneTransformByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CaptureDevice_eventGetBoneTransformByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_GetBoneTransformByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventGetBoneTransformByName_Parms), &Z_Construct_UFunction_UCaptureDevice_GetBoneTransformByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_GetBoneTransformByName_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetBoneTransformByName_Parms, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_GetBoneTransformByName_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCaptureDevice_GetBoneTransformByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetBoneTransformByName_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_GetBoneTransformByName_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetBoneTransformByName_Statics::NewProp_BoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_GetBoneTransformByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetBoneTransformByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetBoneTransformByName_Statics::NewProp_WorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetBoneTransformByName_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_GetBoneTransformByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Output Function. Returns Socket, Spine or Neck Bone Transform\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Output Function. Returns Socket, Spine or Neck Bone Transform" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_GetBoneTransformByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "GetBoneTransformByName", nullptr, nullptr, sizeof(CaptureDevice_eventGetBoneTransformByName_Parms), Z_Construct_UFunction_UCaptureDevice_GetBoneTransformByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetBoneTransformByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_GetBoneTransformByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetBoneTransformByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_GetBoneTransformByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_GetBoneTransformByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_GetBoneTransformWithGenericOrientation_Statics
	{
		struct CaptureDevice_eventGetBoneTransformWithGenericOrientation_Parms
		{
			EHumanoidBone Bone;
			bool bInLocalSpace;
			FTransform OutBonePosition;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutBonePosition;
		static void NewProp_bInLocalSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInLocalSpace;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_GetBoneTransformWithGenericOrientation_Statics::NewProp_OutBonePosition = { "OutBonePosition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetBoneTransformWithGenericOrientation_Parms, OutBonePosition), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCaptureDevice_GetBoneTransformWithGenericOrientation_Statics::NewProp_bInLocalSpace_SetBit(void* Obj)
	{
		((CaptureDevice_eventGetBoneTransformWithGenericOrientation_Parms*)Obj)->bInLocalSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_GetBoneTransformWithGenericOrientation_Statics::NewProp_bInLocalSpace = { "bInLocalSpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventGetBoneTransformWithGenericOrientation_Parms), &Z_Construct_UFunction_UCaptureDevice_GetBoneTransformWithGenericOrientation_Statics::NewProp_bInLocalSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCaptureDevice_GetBoneTransformWithGenericOrientation_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetBoneTransformWithGenericOrientation_Parms, Bone), Z_Construct_UEnum_ViveMocapKit_EHumanoidBone, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCaptureDevice_GetBoneTransformWithGenericOrientation_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_GetBoneTransformWithGenericOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetBoneTransformWithGenericOrientation_Statics::NewProp_OutBonePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetBoneTransformWithGenericOrientation_Statics::NewProp_bInLocalSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetBoneTransformWithGenericOrientation_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetBoneTransformWithGenericOrientation_Statics::NewProp_Bone_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_GetBoneTransformWithGenericOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "/**\n\x09* All skeletons have different local bones orientation. This function returns current transform for a specified bone with generic orientation,\n\x09* i.e. torso, legs and head have X = forward axis and Z = up axis in T-Pose\n\x09* Hands have X = lengthwise axis and Z = up axis (in T-pose)\n\x09*/" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "All skeletons have different local bones orientation. This function returns current transform for a specified bone with generic orientation,\ni.e. torso, legs and head have X = forward axis and Z = up axis in T-Pose\nHands have X = lengthwise axis and Z = up axis (in T-pose)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_GetBoneTransformWithGenericOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "GetBoneTransformWithGenericOrientation", nullptr, nullptr, sizeof(CaptureDevice_eventGetBoneTransformWithGenericOrientation_Parms), Z_Construct_UFunction_UCaptureDevice_GetBoneTransformWithGenericOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetBoneTransformWithGenericOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_GetBoneTransformWithGenericOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetBoneTransformWithGenericOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_GetBoneTransformWithGenericOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_GetBoneTransformWithGenericOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_GetCalibratedDataInTPose_Statics
	{
		struct CaptureDevice_eventGetCalibratedDataInTPose_Parms
		{
			FSmartCalibrationData OutCalibrationData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutCalibrationData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCaptureDevice_GetCalibratedDataInTPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CaptureDevice_eventGetCalibratedDataInTPose_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_GetCalibratedDataInTPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventGetCalibratedDataInTPose_Parms), &Z_Construct_UFunction_UCaptureDevice_GetCalibratedDataInTPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_GetCalibratedDataInTPose_Statics::NewProp_OutCalibrationData = { "OutCalibrationData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetCalibratedDataInTPose_Parms, OutCalibrationData), Z_Construct_UScriptStruct_FSmartCalibrationData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_GetCalibratedDataInTPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetCalibratedDataInTPose_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetCalibratedDataInTPose_Statics::NewProp_OutCalibrationData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_GetCalibratedDataInTPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "Comment", "/**\n\x09* Load calibrateion for future use in LoadCalibratedDataInTPoseEx\n\x09*/" },
		{ "DisplayName", "Get Calibrated Data in T-pose" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Load calibrateion for future use in LoadCalibratedDataInTPoseEx" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_GetCalibratedDataInTPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "GetCalibratedDataInTPose", nullptr, nullptr, sizeof(CaptureDevice_eventGetCalibratedDataInTPose_Parms), Z_Construct_UFunction_UCaptureDevice_GetCalibratedDataInTPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetCalibratedDataInTPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_GetCalibratedDataInTPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetCalibratedDataInTPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_GetCalibratedDataInTPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_GetCalibratedDataInTPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_GetCalibrationBindingRules_Statics
	{
		struct CaptureDevice_eventGetCalibrationBindingRules_Parms
		{
			TMap<int32,EHumanoidBone> OutBindingRules;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OutBindingRules;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutBindingRules_Key_KeyProp;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutBindingRules_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutBindingRules_ValueProp_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCaptureDevice_GetCalibrationBindingRules_Statics::NewProp_OutBindingRules = { "OutBindingRules", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetCalibrationBindingRules_Parms, OutBindingRules), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCaptureDevice_GetCalibrationBindingRules_Statics::NewProp_OutBindingRules_Key_KeyProp = { "OutBindingRules_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCaptureDevice_GetCalibrationBindingRules_Statics::NewProp_OutBindingRules_ValueProp = { "OutBindingRules", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_ViveMocapKit_EHumanoidBone, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCaptureDevice_GetCalibrationBindingRules_Statics::NewProp_OutBindingRules_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_GetCalibrationBindingRules_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetCalibrationBindingRules_Statics::NewProp_OutBindingRules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetCalibrationBindingRules_Statics::NewProp_OutBindingRules_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetCalibrationBindingRules_Statics::NewProp_OutBindingRules_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetCalibrationBindingRules_Statics::NewProp_OutBindingRules_ValueProp_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_GetCalibrationBindingRules_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "Comment", "/* Get active calibration binding rules */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Get active calibration binding rules" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_GetCalibrationBindingRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "GetCalibrationBindingRules", nullptr, nullptr, sizeof(CaptureDevice_eventGetCalibrationBindingRules_Parms), Z_Construct_UFunction_UCaptureDevice_GetCalibrationBindingRules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetCalibrationBindingRules_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_GetCalibrationBindingRules_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetCalibrationBindingRules_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_GetCalibrationBindingRules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_GetCalibrationBindingRules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_GetCollarbonesCalibration_Statics
	{
		struct CaptureDevice_eventGetCollarbonesCalibration_Parms
		{
			FRotator OutRightCollarbone;
			FRotator OutLeftCollarbone;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutLeftCollarbone;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRightCollarbone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCaptureDevice_GetCollarbonesCalibration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CaptureDevice_eventGetCollarbonesCalibration_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_GetCollarbonesCalibration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventGetCollarbonesCalibration_Parms), &Z_Construct_UFunction_UCaptureDevice_GetCollarbonesCalibration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_GetCollarbonesCalibration_Statics::NewProp_OutLeftCollarbone = { "OutLeftCollarbone", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetCollarbonesCalibration_Parms, OutLeftCollarbone), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_GetCollarbonesCalibration_Statics::NewProp_OutRightCollarbone = { "OutRightCollarbone", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetCollarbonesCalibration_Parms, OutRightCollarbone), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_GetCollarbonesCalibration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetCollarbonesCalibration_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetCollarbonesCalibration_Statics::NewProp_OutLeftCollarbone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetCollarbonesCalibration_Statics::NewProp_OutRightCollarbone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_GetCollarbonesCalibration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Get calibrated rotation offset for collarbones, used to save and load calibration data.\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Get calibrated rotation offset for collarbones, used to save and load calibration data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_GetCollarbonesCalibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "GetCollarbonesCalibration", nullptr, nullptr, sizeof(CaptureDevice_eventGetCollarbonesCalibration_Parms), Z_Construct_UFunction_UCaptureDevice_GetCollarbonesCalibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetCollarbonesCalibration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_GetCollarbonesCalibration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetCollarbonesCalibration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_GetCollarbonesCalibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_GetCollarbonesCalibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_GetCurrentCalibration_Statics
	{
		struct CaptureDevice_eventGetCurrentCalibration_Parms
		{
			FBodyCalibrationData OutBodyCalibration;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutBodyCalibration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCaptureDevice_GetCurrentCalibration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CaptureDevice_eventGetCurrentCalibration_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_GetCurrentCalibration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventGetCurrentCalibration_Parms), &Z_Construct_UFunction_UCaptureDevice_GetCurrentCalibration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_GetCurrentCalibration_Statics::NewProp_OutBodyCalibration = { "OutBodyCalibration", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetCurrentCalibration_Parms, OutBodyCalibration), Z_Construct_UScriptStruct_FBodyCalibrationData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_GetCurrentCalibration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetCurrentCalibration_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetCurrentCalibration_Statics::NewProp_OutBodyCalibration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_GetCurrentCalibration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Calibration" },
		{ "Comment", "// Gather data structure describing currently calibrated body\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Gather data structure describing currently calibrated body" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_GetCurrentCalibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "GetCurrentCalibration", nullptr, nullptr, sizeof(CaptureDevice_eventGetCurrentCalibration_Parms), Z_Construct_UFunction_UCaptureDevice_GetCurrentCalibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetCurrentCalibration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_GetCurrentCalibration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetCurrentCalibration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_GetCurrentCalibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_GetCurrentCalibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_GetFingersSolverLeft_Statics
	{
		struct CaptureDevice_eventGetFingersSolverLeft_Parms
		{
			UVMKFingersFKIKSolver* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCaptureDevice_GetFingersSolverLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetFingersSolverLeft_Parms, ReturnValue), Z_Construct_UClass_UVMKFingersFKIKSolver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_GetFingersSolverLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetFingersSolverLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_GetFingersSolverLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fingers" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_GetFingersSolverLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "GetFingersSolverLeft", nullptr, nullptr, sizeof(CaptureDevice_eventGetFingersSolverLeft_Parms), Z_Construct_UFunction_UCaptureDevice_GetFingersSolverLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetFingersSolverLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_GetFingersSolverLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetFingersSolverLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_GetFingersSolverLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_GetFingersSolverLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_GetFingersSolverRight_Statics
	{
		struct CaptureDevice_eventGetFingersSolverRight_Parms
		{
			UVMKFingersFKIKSolver* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCaptureDevice_GetFingersSolverRight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetFingersSolverRight_Parms, ReturnValue), Z_Construct_UClass_UVMKFingersFKIKSolver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_GetFingersSolverRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetFingersSolverRight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_GetFingersSolverRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fingers" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_GetFingersSolverRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "GetFingersSolverRight", nullptr, nullptr, sizeof(CaptureDevice_eventGetFingersSolverRight_Parms), Z_Construct_UFunction_UCaptureDevice_GetFingersSolverRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetFingersSolverRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_GetFingersSolverRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetFingersSolverRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_GetFingersSolverRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_GetFingersSolverRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_GetHeadTransform_Statics
	{
		struct CaptureDevice_eventGetHeadTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_GetHeadTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetHeadTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_GetHeadTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetHeadTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_GetHeadTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Get current head transform, return (0) if capturing is disabled\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Get current head transform, return (0) if capturing is disabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_GetHeadTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "GetHeadTransform", nullptr, nullptr, sizeof(CaptureDevice_eventGetHeadTransform_Parms), Z_Construct_UFunction_UCaptureDevice_GetHeadTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetHeadTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_GetHeadTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetHeadTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_GetHeadTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_GetHeadTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_GetInputComponent_Statics
	{
		struct CaptureDevice_eventGetInputComponent_Parms
		{
			uint8 DeviceID;
			USceneComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_GetInputComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCaptureDevice_GetInputComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetInputComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_GetInputComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetInputComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCaptureDevice_GetInputComponent_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetInputComponent_Parms, DeviceID), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_GetInputComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetInputComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetInputComponent_Statics::NewProp_DeviceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_GetInputComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Get reference to input Scene Component corresponding to its index (not Optitrack Device ID)\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Get reference to input Scene Component corresponding to its index (not Optitrack Device ID)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_GetInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "GetInputComponent", nullptr, nullptr, sizeof(CaptureDevice_eventGetInputComponent_Parms), Z_Construct_UFunction_UCaptureDevice_GetInputComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetInputComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_GetInputComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_GetInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_GetInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_GetLastSkeletalMeshPose_Statics
	{
		struct CaptureDevice_eventGetLastSkeletalMeshPose_Parms
		{
			FPoseSnapshot ReturnValue;
			bool bUnscaleSnapshot;
		};
		static void NewProp_bUnscaleSnapshot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUnscaleSnapshot;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCaptureDevice_GetLastSkeletalMeshPose_Statics::NewProp_bUnscaleSnapshot_SetBit(void* Obj)
	{
		((CaptureDevice_eventGetLastSkeletalMeshPose_Parms*)Obj)->bUnscaleSnapshot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_GetLastSkeletalMeshPose_Statics::NewProp_bUnscaleSnapshot = { "bUnscaleSnapshot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventGetLastSkeletalMeshPose_Parms), &Z_Construct_UFunction_UCaptureDevice_GetLastSkeletalMeshPose_Statics::NewProp_bUnscaleSnapshot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_GetLastSkeletalMeshPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetLastSkeletalMeshPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_GetLastSkeletalMeshPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetLastSkeletalMeshPose_Statics::NewProp_bUnscaleSnapshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetLastSkeletalMeshPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_GetLastSkeletalMeshPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/** MultiMeshUpdate should be enabled */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "MultiMeshUpdate should be enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_GetLastSkeletalMeshPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "GetLastSkeletalMeshPose", nullptr, nullptr, sizeof(CaptureDevice_eventGetLastSkeletalMeshPose_Parms), Z_Construct_UFunction_UCaptureDevice_GetLastSkeletalMeshPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetLastSkeletalMeshPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_GetLastSkeletalMeshPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetLastSkeletalMeshPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_GetLastSkeletalMeshPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_GetLastSkeletalMeshPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_GetMeshHeightMultiplier_Statics
	{
		struct CaptureDevice_eventGetMeshHeightMultiplier_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptureDevice_GetMeshHeightMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetMeshHeightMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_GetMeshHeightMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetMeshHeightMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_GetMeshHeightMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Get height scale multiplier applied to skeletal mesh\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Get height scale multiplier applied to skeletal mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_GetMeshHeightMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "GetMeshHeightMultiplier", nullptr, nullptr, sizeof(CaptureDevice_eventGetMeshHeightMultiplier_Parms), Z_Construct_UFunction_UCaptureDevice_GetMeshHeightMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetMeshHeightMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_GetMeshHeightMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetMeshHeightMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_GetMeshHeightMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_GetMeshHeightMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_GetSkeletalMeshPose_Statics
	{
		struct CaptureDevice_eventGetSkeletalMeshPose_Parms
		{
			FPoseSnapshot ReturnValue;
			bool bEnableScaling;
		};
		static void NewProp_bEnableScaling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableScaling;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCaptureDevice_GetSkeletalMeshPose_Statics::NewProp_bEnableScaling_SetBit(void* Obj)
	{
		((CaptureDevice_eventGetSkeletalMeshPose_Parms*)Obj)->bEnableScaling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_GetSkeletalMeshPose_Statics::NewProp_bEnableScaling = { "bEnableScaling", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventGetSkeletalMeshPose_Parms), &Z_Construct_UFunction_UCaptureDevice_GetSkeletalMeshPose_Statics::NewProp_bEnableScaling_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_GetSkeletalMeshPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetSkeletalMeshPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_GetSkeletalMeshPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetSkeletalMeshPose_Statics::NewProp_bEnableScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetSkeletalMeshPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_GetSkeletalMeshPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/** Update pose snapshot for a currently captured data\n\x09* @param bEnableScaling makrs if bones should be scaled to fit capture actor or unscaled (used for animation capture and save)\n\x09* @return Pose Snapshot for skeletal mesh pose in Anim Blueprint\n\x09*/" },
		{ "CPP_Default_bEnableScaling", "false" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Update pose snapshot for a currently captured data\n@param bEnableScaling makrs if bones should be scaled to fit capture actor or unscaled (used for animation capture and save)\n@return Pose Snapshot for skeletal mesh pose in Anim Blueprint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_GetSkeletalMeshPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "GetSkeletalMeshPose", nullptr, nullptr, sizeof(CaptureDevice_eventGetSkeletalMeshPose_Parms), Z_Construct_UFunction_UCaptureDevice_GetSkeletalMeshPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetSkeletalMeshPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_GetSkeletalMeshPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetSkeletalMeshPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_GetSkeletalMeshPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_GetSkeletalMeshPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_GetSocketsSetup_Statics
	{
		struct CaptureDevice_eventGetSocketsSetup_Parms
		{
			TMap<FName,FSocketInfo> OutSocketsSetup;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OutSocketsSetup;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutSocketsSetup_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutSocketsSetup_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCaptureDevice_GetSocketsSetup_Statics::NewProp_OutSocketsSetup = { "OutSocketsSetup", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetSocketsSetup_Parms, OutSocketsSetup), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCaptureDevice_GetSocketsSetup_Statics::NewProp_OutSocketsSetup_Key_KeyProp = { "OutSocketsSetup_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_GetSocketsSetup_Statics::NewProp_OutSocketsSetup_ValueProp = { "OutSocketsSetup", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSocketInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_GetSocketsSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetSocketsSetup_Statics::NewProp_OutSocketsSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetSocketsSetup_Statics::NewProp_OutSocketsSetup_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetSocketsSetup_Statics::NewProp_OutSocketsSetup_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_GetSocketsSetup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_GetSocketsSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "GetSocketsSetup", nullptr, nullptr, sizeof(CaptureDevice_eventGetSocketsSetup_Parms), Z_Construct_UFunction_UCaptureDevice_GetSocketsSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetSocketsSetup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_GetSocketsSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetSocketsSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_GetSocketsSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_GetSocketsSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_GetTrackingDevicesNum_Statics
	{
		struct CaptureDevice_eventGetTrackingDevicesNum_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCaptureDevice_GetTrackingDevicesNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventGetTrackingDevicesNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_GetTrackingDevicesNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_GetTrackingDevicesNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_GetTrackingDevicesNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Get number of active devices used for input (either SteamVR devices or Scene Components)\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Get number of active devices used for input (either SteamVR devices or Scene Components)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_GetTrackingDevicesNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "GetTrackingDevicesNum", nullptr, nullptr, sizeof(CaptureDevice_eventGetTrackingDevicesNum_Parms), Z_Construct_UFunction_UCaptureDevice_GetTrackingDevicesNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetTrackingDevicesNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_GetTrackingDevicesNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_GetTrackingDevicesNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_GetTrackingDevicesNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_GetTrackingDevicesNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_InitializeFingers_Statics
	{
		struct CaptureDevice_eventInitializeFingers_Parms
		{
			bool bRecreateObjects;
		};
		static void NewProp_bRecreateObjects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecreateObjects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCaptureDevice_InitializeFingers_Statics::NewProp_bRecreateObjects_SetBit(void* Obj)
	{
		((CaptureDevice_eventInitializeFingers_Parms*)Obj)->bRecreateObjects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeFingers_Statics::NewProp_bRecreateObjects = { "bRecreateObjects", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventInitializeFingers_Parms), &Z_Construct_UFunction_UCaptureDevice_InitializeFingers_Statics::NewProp_bRecreateObjects_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_InitializeFingers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeFingers_Statics::NewProp_bRecreateObjects,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_InitializeFingers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fingers" },
		{ "Comment", "/** Initialize fingers solver (if needed) */" },
		{ "CPP_Default_bRecreateObjects", "false" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Initialize fingers solver (if needed)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_InitializeFingers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "InitializeFingers", nullptr, nullptr, sizeof(CaptureDevice_eventInitializeFingers_Parms), Z_Construct_UFunction_UCaptureDevice_InitializeFingers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_InitializeFingers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_InitializeFingers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_InitializeFingers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_InitializeFingers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_InitializeFingers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics
	{
		struct CaptureDevice_eventInitializeFingersEx_Parms
		{
			TMap<EVMK_FingerName,FVMK_FingerSolver> FingersSetupRight;
			TMap<EVMK_FingerName,FVMK_FingerSolver> FingersSetupLeft;
			float MinRotation;
			float MaxRotation;
			float InterpSpeed;
			bool bRecreateObjects;
		};
		static void NewProp_bRecreateObjects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecreateObjects;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRotation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingersSetupLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FingersSetupLeft;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FingersSetupLeft_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingersSetupLeft_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FingersSetupLeft_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingersSetupRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FingersSetupRight;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FingersSetupRight_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingersSetupRight_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FingersSetupRight_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_bRecreateObjects_SetBit(void* Obj)
	{
		((CaptureDevice_eventInitializeFingersEx_Parms*)Obj)->bRecreateObjects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_bRecreateObjects = { "bRecreateObjects", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventInitializeFingersEx_Parms), &Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_bRecreateObjects_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventInitializeFingersEx_Parms, InterpSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_MaxRotation = { "MaxRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventInitializeFingersEx_Parms, MaxRotation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_MinRotation = { "MinRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventInitializeFingersEx_Parms, MinRotation), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_FingersSetupLeft_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_FingersSetupLeft = { "FingersSetupLeft", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventInitializeFingersEx_Parms, FingersSetupLeft), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_FingersSetupLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_FingersSetupLeft_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_FingersSetupLeft_Key_KeyProp = { "FingersSetupLeft_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_VMKFingersSolver_EVMK_FingerName, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_FingersSetupLeft_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_FingersSetupLeft_ValueProp = { "FingersSetupLeft", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVMK_FingerSolver, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_FingersSetupRight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_FingersSetupRight = { "FingersSetupRight", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventInitializeFingersEx_Parms, FingersSetupRight), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_FingersSetupRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_FingersSetupRight_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_FingersSetupRight_Key_KeyProp = { "FingersSetupRight_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_VMKFingersSolver_EVMK_FingerName, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_FingersSetupRight_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_FingersSetupRight_ValueProp = { "FingersSetupRight", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVMK_FingerSolver, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_bRecreateObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_InterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_MaxRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_MinRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_FingersSetupLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_FingersSetupLeft_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_FingersSetupLeft_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_FingersSetupLeft_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_FingersSetupRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_FingersSetupRight_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_FingersSetupRight_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::NewProp_FingersSetupRight_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fingers" },
		{ "Comment", "/** Initialize fingers solver (if needed) */" },
		{ "CPP_Default_bRecreateObjects", "false" },
		{ "CPP_Default_InterpSpeed", "12.000000" },
		{ "CPP_Default_MaxRotation", "75.000000" },
		{ "CPP_Default_MinRotation", "0.000000" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Initialize fingers solver (if needed)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "InitializeFingersEx", nullptr, nullptr, sizeof(CaptureDevice_eventInitializeFingersEx_Parms), Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents_Statics
	{
		struct CaptureDevice_eventInitializeInputFromComponents_Parms
		{
			TArray<USceneComponent*> MotionControllerComponents;
			uint8 RightHandIndex;
			uint8 LeftHandIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LeftHandIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RightHandIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionControllerComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MotionControllerComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionControllerComponents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CaptureDevice_eventInitializeInputFromComponents_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventInitializeInputFromComponents_Parms), &Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents_Statics::NewProp_LeftHandIndex = { "LeftHandIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventInitializeInputFromComponents_Parms, LeftHandIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents_Statics::NewProp_RightHandIndex = { "RightHandIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventInitializeInputFromComponents_Parms, RightHandIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents_Statics::NewProp_MotionControllerComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents_Statics::NewProp_MotionControllerComponents = { "MotionControllerComponents", nullptr, (EPropertyFlags)0x0010008000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventInitializeInputFromComponents_Parms, MotionControllerComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents_Statics::NewProp_MotionControllerComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents_Statics::NewProp_MotionControllerComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents_Statics::NewProp_MotionControllerComponents_Inner = { "MotionControllerComponents", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents_Statics::NewProp_LeftHandIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents_Statics::NewProp_RightHandIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents_Statics::NewProp_MotionControllerComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents_Statics::NewProp_MotionControllerComponents_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Force CaptureDevice to use scene components as a source of input instead of direct SteamVR functions\n\x09* Must be called at BeginPlay after 'InitializeReferences'\n\x09* @param MotionControllerComponents Array of scene components containing all tracking points except VR Headset\n\x09* @param RightHandIndex Index of right hand controller within the array\n\x09* @param LeftHandIndex Index of left hand controller within the array\n\x09* @return true if succeed\n\x09*/" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Force CaptureDevice to use scene components as a source of input instead of direct SteamVR functions\nMust be called at BeginPlay after 'InitializeReferences'\n@param MotionControllerComponents Array of scene components containing all tracking points except VR Headset\n@param RightHandIndex Index of right hand controller within the array\n@param LeftHandIndex Index of left hand controller within the array\n@return true if succeed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "InitializeInputFromComponents", nullptr, nullptr, sizeof(CaptureDevice_eventInitializeInputFromComponents_Parms), Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_InitializeReferences_Statics
	{
		struct CaptureDevice_eventInitializeReferences_Parms
		{
			USkinnedMeshComponent* ControlledMesh;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlledMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_InitializeReferences_Statics::NewProp_ControlledMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeReferences_Statics::NewProp_ControlledMesh = { "ControlledMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventInitializeReferences_Parms, ControlledMesh), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_InitializeReferences_Statics::NewProp_ControlledMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_InitializeReferences_Statics::NewProp_ControlledMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_InitializeReferences_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeReferences_Statics::NewProp_ControlledMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_InitializeReferences_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Find active trackers and spawn mesh actors\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Find active trackers and spawn mesh actors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_InitializeReferences_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "InitializeReferences", nullptr, nullptr, sizeof(CaptureDevice_eventInitializeReferences_Parms), Z_Construct_UFunction_UCaptureDevice_InitializeReferences_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_InitializeReferences_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_InitializeReferences_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_InitializeReferences_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_InitializeReferences()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_InitializeReferences_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_InitializeTracker_Statics
	{
		struct CaptureDevice_eventInitializeTracker_Parms
		{
			uint8 Index;
			EHumanoidBone Bone;
			bool bSaveInPrivateArray;
			bool bAllowShared;
		};
		static void NewProp_bAllowShared_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowShared;
		static void NewProp_bSaveInPrivateArray_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveInPrivateArray;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCaptureDevice_InitializeTracker_Statics::NewProp_bAllowShared_SetBit(void* Obj)
	{
		((CaptureDevice_eventInitializeTracker_Parms*)Obj)->bAllowShared = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeTracker_Statics::NewProp_bAllowShared = { "bAllowShared", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventInitializeTracker_Parms), &Z_Construct_UFunction_UCaptureDevice_InitializeTracker_Statics::NewProp_bAllowShared_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCaptureDevice_InitializeTracker_Statics::NewProp_bSaveInPrivateArray_SetBit(void* Obj)
	{
		((CaptureDevice_eventInitializeTracker_Parms*)Obj)->bSaveInPrivateArray = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeTracker_Statics::NewProp_bSaveInPrivateArray = { "bSaveInPrivateArray", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventInitializeTracker_Parms), &Z_Construct_UFunction_UCaptureDevice_InitializeTracker_Statics::NewProp_bSaveInPrivateArray_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeTracker_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventInitializeTracker_Parms, Bone), Z_Construct_UEnum_ViveMocapKit_EHumanoidBone, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeTracker_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeTracker_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventInitializeTracker_Parms, Index), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_InitializeTracker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeTracker_Statics::NewProp_bAllowShared,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeTracker_Statics::NewProp_bSaveInPrivateArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeTracker_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeTracker_Statics::NewProp_Bone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeTracker_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_InitializeTracker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "Comment", "// Attach tracker to bone and save relative offset\n" },
		{ "CPP_Default_bAllowShared", "false" },
		{ "CPP_Default_bSaveInPrivateArray", "false" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Attach tracker to bone and save relative offset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_InitializeTracker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "InitializeTracker", nullptr, nullptr, sizeof(CaptureDevice_eventInitializeTracker_Parms), Z_Construct_UFunction_UCaptureDevice_InitializeTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_InitializeTracker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_InitializeTracker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_InitializeTracker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_InitializeTracker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_InitializeTracker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands_Statics
	{
		struct CaptureDevice_eventInitializeVirtualTrackersForHands_Parms
		{
			float PositionOffset;
			USceneComponent* RightRotationSource;
			USceneComponent* LeftRotationSource;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftRotationSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftRotationSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightRotationSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightRotationSource;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositionOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CaptureDevice_eventInitializeVirtualTrackersForHands_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventInitializeVirtualTrackersForHands_Parms), &Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands_Statics::NewProp_LeftRotationSource_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands_Statics::NewProp_LeftRotationSource = { "LeftRotationSource", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventInitializeVirtualTrackersForHands_Parms, LeftRotationSource), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands_Statics::NewProp_LeftRotationSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands_Statics::NewProp_LeftRotationSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands_Statics::NewProp_RightRotationSource_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands_Statics::NewProp_RightRotationSource = { "RightRotationSource", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventInitializeVirtualTrackersForHands_Parms, RightRotationSource), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands_Statics::NewProp_RightRotationSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands_Statics::NewProp_RightRotationSource_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands_Statics::NewProp_PositionOffset = { "PositionOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventInitializeVirtualTrackersForHands_Parms, PositionOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands_Statics::NewProp_LeftRotationSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands_Statics::NewProp_RightRotationSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands_Statics::NewProp_PositionOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Initializing input components for wrists only, use this function for VR gloves with trackers attached to lowerarms (like Noitom Hi5) and Leap Motion\n\x09* For components/sockets used as virtual trackers, X axis should be directed as index/middle finger, Y axis - as thumb finger for left and negative thumb for right.\n\x09* Only works with MotionControllersRole = \"Any Role\" or \"Don't Use\" and UseInputFromComponets = false\n\x09* @param PositionOffset wrist offset from lowerarm tracker\n\x09* @param RightRotationSource component used as a source for wrist rotation\n\x09* @param LeftRotationSource component used as a source for wrist rotation\n\x09*/" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Initializing input components for wrists only, use this function for VR gloves with trackers attached to lowerarms (like Noitom Hi5) and Leap Motion\nFor components/sockets used as virtual trackers, X axis should be directed as index/middle finger, Y axis - as thumb finger for left and negative thumb for right.\nOnly works with MotionControllersRole = \"Any Role\" or \"Don't Use\" and UseInputFromComponets = false\n@param PositionOffset wrist offset from lowerarm tracker\n@param RightRotationSource component used as a source for wrist rotation\n@param LeftRotationSource component used as a source for wrist rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "InitializeVirtualTrackersForHands", nullptr, nullptr, sizeof(CaptureDevice_eventInitializeVirtualTrackersForHands_Parms), Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_IsCalibrated_Statics
	{
		struct CaptureDevice_eventIsCalibrated_Parms
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
	void Z_Construct_UFunction_UCaptureDevice_IsCalibrated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CaptureDevice_eventIsCalibrated_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_IsCalibrated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventIsCalibrated_Parms), &Z_Construct_UFunction_UCaptureDevice_IsCalibrated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_IsCalibrated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_IsCalibrated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_IsCalibrated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/** Is calibration complete? */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Is calibration complete?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_IsCalibrated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "IsCalibrated", nullptr, nullptr, sizeof(CaptureDevice_eventIsCalibrated_Parms), Z_Construct_UFunction_UCaptureDevice_IsCalibrated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_IsCalibrated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_IsCalibrated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_IsCalibrated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_IsCalibrated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_IsCalibrated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_IsCapturing_Statics
	{
		struct CaptureDevice_eventIsCapturing_Parms
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
	void Z_Construct_UFunction_UCaptureDevice_IsCapturing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CaptureDevice_eventIsCapturing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_IsCapturing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventIsCapturing_Parms), &Z_Construct_UFunction_UCaptureDevice_IsCapturing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_IsCapturing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_IsCapturing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_IsCapturing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Is skeleton capturing active?\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Is skeleton capturing active?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_IsCapturing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "IsCapturing", nullptr, nullptr, sizeof(CaptureDevice_eventIsCapturing_Parms), Z_Construct_UFunction_UCaptureDevice_IsCapturing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_IsCapturing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_IsCapturing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_IsCapturing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_IsCapturing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_IsCapturing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_IsInitialized_Statics
	{
		struct CaptureDevice_eventIsInitialized_Parms
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
	void Z_Construct_UFunction_UCaptureDevice_IsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CaptureDevice_eventIsInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_IsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventIsInitialized_Parms), &Z_Construct_UFunction_UCaptureDevice_IsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_IsInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_IsInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_IsInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_IsInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "IsInitialized", nullptr, nullptr, sizeof(CaptureDevice_eventIsInitialized_Parms), Z_Construct_UFunction_UCaptureDevice_IsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_IsInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_IsInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_IsInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_IsInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_IsInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics
	{
		struct CaptureDevice_eventLoadCalibratedDataInTPose_Parms
		{
			TMap<uint8,FTrackerSetup> CalibratedData;
			FRotator RightCollarboneOffset;
			FRotator LeftCollarboneOffset;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftCollarboneOffset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightCollarboneOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalibratedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CalibratedData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CalibratedData_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CalibratedData_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CaptureDevice_eventLoadCalibratedDataInTPose_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventLoadCalibratedDataInTPose_Parms), &Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics::NewProp_LeftCollarboneOffset = { "LeftCollarboneOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventLoadCalibratedDataInTPose_Parms, LeftCollarboneOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics::NewProp_RightCollarboneOffset = { "RightCollarboneOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventLoadCalibratedDataInTPose_Parms, RightCollarboneOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics::NewProp_CalibratedData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics::NewProp_CalibratedData = { "CalibratedData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventLoadCalibratedDataInTPose_Parms, CalibratedData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics::NewProp_CalibratedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics::NewProp_CalibratedData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics::NewProp_CalibratedData_Key_KeyProp = { "CalibratedData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics::NewProp_CalibratedData_ValueProp = { "CalibratedData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTrackerSetup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics::NewProp_LeftCollarboneOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics::NewProp_RightCollarboneOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics::NewProp_CalibratedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics::NewProp_CalibratedData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics::NewProp_CalibratedData_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "Comment", "/**\n\x09* Load calibrated data from archive. Player should be in T-pose to match IDs of trackers.\n\x09* Use ApplyCurrentCalibration function to restore calibration within a session (not requires T pose)/\n\x09*/" },
		{ "CPP_Default_LeftCollarboneOffset", "" },
		{ "CPP_Default_RightCollarboneOffset", "" },
		{ "DisplayName", "Load Calibrated Data in T-pose" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Load calibrated data from archive. Player should be in T-pose to match IDs of trackers.\nUse ApplyCurrentCalibration function to restore calibration within a session (not requires T pose)/" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "LoadCalibratedDataInTPose", nullptr, nullptr, sizeof(CaptureDevice_eventLoadCalibratedDataInTPose_Parms), Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPoseEx_Statics
	{
		struct CaptureDevice_eventLoadCalibratedDataInTPoseEx_Parms
		{
			FSmartCalibrationData CalibrationData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalibrationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CalibrationData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPoseEx_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CaptureDevice_eventLoadCalibratedDataInTPoseEx_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPoseEx_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventLoadCalibratedDataInTPoseEx_Parms), &Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPoseEx_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPoseEx_Statics::NewProp_CalibrationData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPoseEx_Statics::NewProp_CalibrationData = { "CalibrationData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventLoadCalibratedDataInTPoseEx_Parms, CalibrationData), Z_Construct_UScriptStruct_FSmartCalibrationData, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPoseEx_Statics::NewProp_CalibrationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPoseEx_Statics::NewProp_CalibrationData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPoseEx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPoseEx_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPoseEx_Statics::NewProp_CalibrationData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPoseEx_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "Comment", "/**\n\x09* Load calibrated data from archive. Player should be in T-pose to match IDs of trackers.\n\x09* This function uses new algorithm and should support two trackers per bone\n\x09* Use ApplyCurrentCalibration function to restore calibration within a session (not requires T pose)/\n\x09*/" },
		{ "DisplayName", "Load Calibrated Data in T-pose Ex" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Load calibrated data from archive. Player should be in T-pose to match IDs of trackers.\nThis function uses new algorithm and should support two trackers per bone\nUse ApplyCurrentCalibration function to restore calibration within a session (not requires T pose)/" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPoseEx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "LoadCalibratedDataInTPoseEx", nullptr, nullptr, sizeof(CaptureDevice_eventLoadCalibratedDataInTPoseEx_Parms), Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPoseEx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPoseEx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPoseEx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPoseEx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPoseEx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPoseEx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_LoadSkeletonSetupFromStruct_Statics
	{
		struct CaptureDevice_eventLoadSkeletonSetupFromStruct_Parms
		{
			FSkeletonBasicPreset Preset;
			bool AutoUpdate;
		};
		static void NewProp_AutoUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoUpdate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Preset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCaptureDevice_LoadSkeletonSetupFromStruct_Statics::NewProp_AutoUpdate_SetBit(void* Obj)
	{
		((CaptureDevice_eventLoadSkeletonSetupFromStruct_Parms*)Obj)->AutoUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_LoadSkeletonSetupFromStruct_Statics::NewProp_AutoUpdate = { "AutoUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventLoadSkeletonSetupFromStruct_Parms), &Z_Construct_UFunction_UCaptureDevice_LoadSkeletonSetupFromStruct_Statics::NewProp_AutoUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_LoadSkeletonSetupFromStruct_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventLoadSkeletonSetupFromStruct_Parms, Preset), Z_Construct_UScriptStruct_FSkeletonBasicPreset, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_LoadSkeletonSetupFromStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_LoadSkeletonSetupFromStruct_Statics::NewProp_AutoUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_LoadSkeletonSetupFromStruct_Statics::NewProp_Preset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_LoadSkeletonSetupFromStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "Comment", "// Load variables of [Capture Pawn/Skeleton] Category from struct\n" },
		{ "CPP_Default_AutoUpdate", "true" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Load variables of [Capture Pawn/Skeleton] Category from struct" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_LoadSkeletonSetupFromStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "LoadSkeletonSetupFromStruct", nullptr, nullptr, sizeof(CaptureDevice_eventLoadSkeletonSetupFromStruct_Parms), Z_Construct_UFunction_UCaptureDevice_LoadSkeletonSetupFromStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_LoadSkeletonSetupFromStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_LoadSkeletonSetupFromStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_LoadSkeletonSetupFromStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_LoadSkeletonSetupFromStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_LoadSkeletonSetupFromStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_MeasureVerticalAdjustment_Statics
	{
		struct CaptureDevice_eventMeasureVerticalAdjustment_Parms
		{
			float FootHeight;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptureDevice_MeasureVerticalAdjustment_Statics::NewProp_FootHeight = { "FootHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventMeasureVerticalAdjustment_Parms, FootHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_MeasureVerticalAdjustment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_MeasureVerticalAdjustment_Statics::NewProp_FootHeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_MeasureVerticalAdjustment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "Comment", "/* Set Runtime Vertical Offset. Value will be updated with Pose Snapshot. Only for non-scaled meshes. */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Set Runtime Vertical Offset. Value will be updated with Pose Snapshot. Only for non-scaled meshes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_MeasureVerticalAdjustment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "MeasureVerticalAdjustment", nullptr, nullptr, sizeof(CaptureDevice_eventMeasureVerticalAdjustment_Parms), Z_Construct_UFunction_UCaptureDevice_MeasureVerticalAdjustment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_MeasureVerticalAdjustment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_MeasureVerticalAdjustment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_MeasureVerticalAdjustment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_MeasureVerticalAdjustment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_MeasureVerticalAdjustment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_PredictBonesCalibration_Statics
	{
		struct CaptureDevice_eventPredictBonesCalibration_Parms
		{
			TMap<uint8,FTrackerSetup> PredictedTrackersData;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PredictedTrackersData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PredictedTrackersData_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PredictedTrackersData_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCaptureDevice_PredictBonesCalibration_Statics::NewProp_PredictedTrackersData = { "PredictedTrackersData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventPredictBonesCalibration_Parms, PredictedTrackersData), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCaptureDevice_PredictBonesCalibration_Statics::NewProp_PredictedTrackersData_Key_KeyProp = { "PredictedTrackersData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_PredictBonesCalibration_Statics::NewProp_PredictedTrackersData_ValueProp = { "PredictedTrackersData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTrackerSetup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_PredictBonesCalibration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_PredictBonesCalibration_Statics::NewProp_PredictedTrackersData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_PredictBonesCalibration_Statics::NewProp_PredictedTrackersData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_PredictBonesCalibration_Statics::NewProp_PredictedTrackersData_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_PredictBonesCalibration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "Comment", "/* Returns expected calibration result */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Returns expected calibration result" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_PredictBonesCalibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "PredictBonesCalibration", nullptr, nullptr, sizeof(CaptureDevice_eventPredictBonesCalibration_Parms), Z_Construct_UFunction_UCaptureDevice_PredictBonesCalibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_PredictBonesCalibration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_PredictBonesCalibration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_PredictBonesCalibration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_PredictBonesCalibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_PredictBonesCalibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_PredictCollarboneDefaultOffset_Statics
	{
		struct CaptureDevice_eventPredictCollarboneDefaultOffset_Parms
		{
			EControllerHand Hand;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_PredictCollarboneDefaultOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventPredictCollarboneDefaultOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCaptureDevice_PredictCollarboneDefaultOffset_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventPredictCollarboneDefaultOffset_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCaptureDevice_PredictCollarboneDefaultOffset_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_PredictCollarboneDefaultOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_PredictCollarboneDefaultOffset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_PredictCollarboneDefaultOffset_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_PredictCollarboneDefaultOffset_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_PredictCollarboneDefaultOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_PredictCollarboneDefaultOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "PredictCollarboneDefaultOffset", nullptr, nullptr, sizeof(CaptureDevice_eventPredictCollarboneDefaultOffset_Parms), Z_Construct_UFunction_UCaptureDevice_PredictCollarboneDefaultOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_PredictCollarboneDefaultOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_PredictCollarboneDefaultOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_PredictCollarboneDefaultOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_PredictCollarboneDefaultOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_PredictCollarboneDefaultOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_PrepareForCalibration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_PrepareForCalibration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "Comment", "/* Stretch and rotate skeletal mesh to adjust it to player's position and dimentions.\n\x09Replication Note: must be called on locally controlled Pawn */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Stretch and rotate skeletal mesh to adjust it to player's position and dimentions.\n      Replication Note: must be called on locally controlled Pawn" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_PrepareForCalibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "PrepareForCalibration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_PrepareForCalibration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_PrepareForCalibration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_PrepareForCalibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_PrepareForCalibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_PrepareForCalibrationWithHandsForward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_PrepareForCalibrationWithHandsForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "Comment", "/* First step of calibration, only required when using Vive Tracker\n\x09instead of VR headset for tracking head\x09*/" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "First step of calibration, only required when using Vive Tracker\n      instead of VR headset for tracking head" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_PrepareForCalibrationWithHandsForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "PrepareForCalibrationWithHandsForward", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_PrepareForCalibrationWithHandsForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_PrepareForCalibrationWithHandsForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_PrepareForCalibrationWithHandsForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_PrepareForCalibrationWithHandsForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_ProcessFingers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_ProcessFingers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fingers" },
		{ "Comment", "/** Update fingers from provider */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Update fingers from provider" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_ProcessFingers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "ProcessFingers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_ProcessFingers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_ProcessFingers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_ProcessFingers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_ProcessFingers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_ResetCalibration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_ResetCalibration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Reset current calibration data */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Reset current calibration data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_ResetCalibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "ResetCalibration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_ResetCalibration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_ResetCalibration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_ResetCalibration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_ResetCalibration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_ResetPreCalibrationBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_ResetPreCalibrationBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "Comment", "/* Remove all saved pre-calibration bindings */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Remove all saved pre-calibration bindings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_ResetPreCalibrationBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "ResetPreCalibrationBinding", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_ResetPreCalibrationBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_ResetPreCalibrationBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_ResetPreCalibrationBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_ResetPreCalibrationBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_SendCalibrationToServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_SendCalibrationToServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09* Send calibration data to remote instances.\n\x09* This function should be called on server for newly logged players who calibrated before connecting to server.\n\x09* Use OnPostLogin event in game mode class. I recommend to add a delay about .5 seconds.\n\x09*/" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Send calibration data to remote instances.\nThis function should be called on server for newly logged players who calibrated before connecting to server.\nUse OnPostLogin event in game mode class. I recommend to add a delay about .5 seconds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_SendCalibrationToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "SendCalibrationToServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_SendCalibrationToServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_SendCalibrationToServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_SendCalibrationToServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_SendCalibrationToServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_ServerInitializeTrackerBone_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeOffset;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_ServerInitializeTrackerBone_Statics::NewProp_RelativeOffset = { "RelativeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventServerInitializeTrackerBone_Parms, RelativeOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCaptureDevice_ServerInitializeTrackerBone_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventServerInitializeTrackerBone_Parms, Bone), Z_Construct_UEnum_ViveMocapKit_EHumanoidBone, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCaptureDevice_ServerInitializeTrackerBone_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCaptureDevice_ServerInitializeTrackerBone_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventServerInitializeTrackerBone_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_ServerInitializeTrackerBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_ServerInitializeTrackerBone_Statics::NewProp_RelativeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_ServerInitializeTrackerBone_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_ServerInitializeTrackerBone_Statics::NewProp_Bone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_ServerInitializeTrackerBone_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_ServerInitializeTrackerBone_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// init tracker\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "init tracker" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_ServerInitializeTrackerBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "ServerInitializeTrackerBone", nullptr, nullptr, sizeof(CaptureDevice_eventServerInitializeTrackerBone_Parms), Z_Construct_UFunction_UCaptureDevice_ServerInitializeTrackerBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_ServerInitializeTrackerBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A80CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_ServerInitializeTrackerBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_ServerInitializeTrackerBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_ServerInitializeTrackerBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_ServerInitializeTrackerBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_ServerToggleCapture_Statics
	{
		static void NewProp_IsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCaptureDevice_ServerToggleCapture_Statics::NewProp_IsEnabled_SetBit(void* Obj)
	{
		((CaptureDevice_eventServerToggleCapture_Parms*)Obj)->IsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_ServerToggleCapture_Statics::NewProp_IsEnabled = { "IsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventServerToggleCapture_Parms), &Z_Construct_UFunction_UCaptureDevice_ServerToggleCapture_Statics::NewProp_IsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_ServerToggleCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_ServerToggleCapture_Statics::NewProp_IsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_ServerToggleCapture_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// toggle capture\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "toggle capture" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_ServerToggleCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "ServerToggleCapture", nullptr, nullptr, sizeof(CaptureDevice_eventServerToggleCapture_Parms), Z_Construct_UFunction_UCaptureDevice_ServerToggleCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_ServerToggleCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_ServerToggleCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_ServerToggleCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_ServerToggleCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_ServerToggleCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_ServerUpdateInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trackers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Trackers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Trackers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Head;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_ServerUpdateInput_Statics::NewProp_Trackers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCaptureDevice_ServerUpdateInput_Statics::NewProp_Trackers = { "Trackers", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventServerUpdateInput_Parms, Trackers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_ServerUpdateInput_Statics::NewProp_Trackers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_ServerUpdateInput_Statics::NewProp_Trackers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_ServerUpdateInput_Statics::NewProp_Trackers_Inner = { "Trackers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVMK_NT_Transform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_ServerUpdateInput_Statics::NewProp_Head_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_ServerUpdateInput_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventServerUpdateInput_Parms, Head), Z_Construct_UScriptStruct_FVMK_NT_Transform, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_ServerUpdateInput_Statics::NewProp_Head_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_ServerUpdateInput_Statics::NewProp_Head_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_ServerUpdateInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_ServerUpdateInput_Statics::NewProp_Trackers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_ServerUpdateInput_Statics::NewProp_Trackers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_ServerUpdateInput_Statics::NewProp_Head,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_ServerUpdateInput_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// send input transforms (HMD, controllers, trackers) to server\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "send input transforms (HMD, controllers, trackers) to server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_ServerUpdateInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "ServerUpdateInput", nullptr, nullptr, sizeof(CaptureDevice_eventServerUpdateInput_Parms), Z_Construct_UFunction_UCaptureDevice_ServerUpdateInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_ServerUpdateInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_ServerUpdateInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_ServerUpdateInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_ServerUpdateInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_ServerUpdateInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewMeshScale;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShoulderLeftOffset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShoulderRightOffset;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewShoulderLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewCalfLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewThighLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewForearmLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewUpperarmLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale_Statics::NewProp_NewMeshScale = { "NewMeshScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventServerUpdateMeshScale_Parms, NewMeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale_Statics::NewProp_ShoulderLeftOffset = { "ShoulderLeftOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventServerUpdateMeshScale_Parms, ShoulderLeftOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale_Statics::NewProp_ShoulderRightOffset = { "ShoulderRightOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventServerUpdateMeshScale_Parms, ShoulderRightOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale_Statics::NewProp_NewShoulderLength = { "NewShoulderLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventServerUpdateMeshScale_Parms, NewShoulderLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale_Statics::NewProp_NewCalfLength = { "NewCalfLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventServerUpdateMeshScale_Parms, NewCalfLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale_Statics::NewProp_NewThighLength = { "NewThighLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventServerUpdateMeshScale_Parms, NewThighLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale_Statics::NewProp_NewForearmLength = { "NewForearmLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventServerUpdateMeshScale_Parms, NewForearmLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale_Statics::NewProp_NewUpperarmLength = { "NewUpperarmLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventServerUpdateMeshScale_Parms, NewUpperarmLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale_Statics::NewProp_NewMeshScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale_Statics::NewProp_ShoulderLeftOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale_Statics::NewProp_ShoulderRightOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale_Statics::NewProp_NewShoulderLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale_Statics::NewProp_NewCalfLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale_Statics::NewProp_NewThighLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale_Statics::NewProp_NewForearmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale_Statics::NewProp_NewUpperarmLength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// update mesh scale\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "update mesh scale" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "ServerUpdateMeshScale", nullptr, nullptr, sizeof(CaptureDevice_eventServerUpdateMeshScale_Parms), Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A80CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_ServerUpdateTrackerBone_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeOffset;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bone_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_ServerUpdateTrackerBone_Statics::NewProp_RelativeOffset = { "RelativeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventServerUpdateTrackerBone_Parms, RelativeOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCaptureDevice_ServerUpdateTrackerBone_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventServerUpdateTrackerBone_Parms, Bone), Z_Construct_UEnum_ViveMocapKit_EHumanoidBone, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCaptureDevice_ServerUpdateTrackerBone_Statics::NewProp_Bone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCaptureDevice_ServerUpdateTrackerBone_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventServerUpdateTrackerBone_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_ServerUpdateTrackerBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_ServerUpdateTrackerBone_Statics::NewProp_RelativeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_ServerUpdateTrackerBone_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_ServerUpdateTrackerBone_Statics::NewProp_Bone_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_ServerUpdateTrackerBone_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_ServerUpdateTrackerBone_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// update (recalibrate) tracker\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "update (recalibrate) tracker" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_ServerUpdateTrackerBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "ServerUpdateTrackerBone", nullptr, nullptr, sizeof(CaptureDevice_eventServerUpdateTrackerBone_Parms), Z_Construct_UFunction_UCaptureDevice_ServerUpdateTrackerBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_ServerUpdateTrackerBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A80CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_ServerUpdateTrackerBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_ServerUpdateTrackerBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_ServerUpdateTrackerBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_ServerUpdateTrackerBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_SetTrackersData_Statics
	{
		struct CaptureDevice_eventSetTrackersData_Parms
		{
			TMap<uint8,FTrackerSetup> NewValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewValue_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_SetTrackersData_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCaptureDevice_SetTrackersData_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventSetTrackersData_Parms, NewValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_SetTrackersData_Statics::NewProp_NewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_SetTrackersData_Statics::NewProp_NewValue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCaptureDevice_SetTrackersData_Statics::NewProp_NewValue_Key_KeyProp = { "NewValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_SetTrackersData_Statics::NewProp_NewValue_ValueProp = { "NewValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTrackerSetup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_SetTrackersData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_SetTrackersData_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_SetTrackersData_Statics::NewProp_NewValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_SetTrackersData_Statics::NewProp_NewValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_SetTrackersData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Load tracking data from map\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Load tracking data from map" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_SetTrackersData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "SetTrackersData", nullptr, nullptr, sizeof(CaptureDevice_eventSetTrackersData_Parms), Z_Construct_UFunction_UCaptureDevice_SetTrackersData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_SetTrackersData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_SetTrackersData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_SetTrackersData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_SetTrackersData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_SetTrackersData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_ToggleCapture_Statics
	{
		struct CaptureDevice_eventToggleCapture_Parms
		{
			bool IsEnabled;
			bool bForceUpdate;
		};
		static void NewProp_bForceUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceUpdate;
		static void NewProp_IsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCaptureDevice_ToggleCapture_Statics::NewProp_bForceUpdate_SetBit(void* Obj)
	{
		((CaptureDevice_eventToggleCapture_Parms*)Obj)->bForceUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_ToggleCapture_Statics::NewProp_bForceUpdate = { "bForceUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventToggleCapture_Parms), &Z_Construct_UFunction_UCaptureDevice_ToggleCapture_Statics::NewProp_bForceUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCaptureDevice_ToggleCapture_Statics::NewProp_IsEnabled_SetBit(void* Obj)
	{
		((CaptureDevice_eventToggleCapture_Parms*)Obj)->IsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_ToggleCapture_Statics::NewProp_IsEnabled = { "IsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventToggleCapture_Parms), &Z_Construct_UFunction_UCaptureDevice_ToggleCapture_Statics::NewProp_IsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_ToggleCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_ToggleCapture_Statics::NewProp_bForceUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_ToggleCapture_Statics::NewProp_IsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_ToggleCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/* Enable/disable motion data capture.\n\x09Replication Note : must be called on server or locally controlled Pawn */" },
		{ "CPP_Default_bForceUpdate", "false" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Enable/disable motion data capture.\n      Replication Note : must be called on server or locally controlled Pawn" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_ToggleCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "ToggleCapture", nullptr, nullptr, sizeof(CaptureDevice_eventToggleCapture_Parms), Z_Construct_UFunction_UCaptureDevice_ToggleCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_ToggleCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_ToggleCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_ToggleCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_ToggleCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_ToggleCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_UnbindPreCalibrationTracker_Statics
	{
		struct CaptureDevice_eventUnbindPreCalibrationTracker_Parms
		{
			int32 TrackerId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCaptureDevice_UnbindPreCalibrationTracker_Statics::NewProp_TrackerId = { "TrackerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventUnbindPreCalibrationTracker_Parms, TrackerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_UnbindPreCalibrationTracker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_UnbindPreCalibrationTracker_Statics::NewProp_TrackerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_UnbindPreCalibrationTracker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "Comment", "/* Remove pre-calibration hard binding */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Remove pre-calibration hard binding" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_UnbindPreCalibrationTracker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "UnbindPreCalibrationTracker", nullptr, nullptr, sizeof(CaptureDevice_eventUnbindPreCalibrationTracker_Parms), Z_Construct_UFunction_UCaptureDevice_UnbindPreCalibrationTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_UnbindPreCalibrationTracker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_UnbindPreCalibrationTracker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_UnbindPreCalibrationTracker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_UnbindPreCalibrationTracker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_UnbindPreCalibrationTracker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_UpdatePoseableMesh_Statics
	{
		struct CaptureDevice_eventUpdatePoseableMesh_Parms
		{
			bool bEnableScaling;
			USkinnedMeshComponent* MeshOverride;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshOverride;
		static void NewProp_bEnableScaling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableScaling;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_UpdatePoseableMesh_Statics::NewProp_MeshOverride_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCaptureDevice_UpdatePoseableMesh_Statics::NewProp_MeshOverride = { "MeshOverride", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventUpdatePoseableMesh_Parms, MeshOverride), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_UpdatePoseableMesh_Statics::NewProp_MeshOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_UpdatePoseableMesh_Statics::NewProp_MeshOverride_MetaData)) };
	void Z_Construct_UFunction_UCaptureDevice_UpdatePoseableMesh_Statics::NewProp_bEnableScaling_SetBit(void* Obj)
	{
		((CaptureDevice_eventUpdatePoseableMesh_Parms*)Obj)->bEnableScaling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCaptureDevice_UpdatePoseableMesh_Statics::NewProp_bEnableScaling = { "bEnableScaling", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CaptureDevice_eventUpdatePoseableMesh_Parms), &Z_Construct_UFunction_UCaptureDevice_UpdatePoseableMesh_Statics::NewProp_bEnableScaling_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_UpdatePoseableMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_UpdatePoseableMesh_Statics::NewProp_MeshOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_UpdatePoseableMesh_Statics::NewProp_bEnableScaling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_UpdatePoseableMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09* Update bones of poseable mesh component based on current state\n\x09*/" },
		{ "CPP_Default_MeshOverride", "None" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Update bones of poseable mesh component based on current state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_UpdatePoseableMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "UpdatePoseableMesh", nullptr, nullptr, sizeof(CaptureDevice_eventUpdatePoseableMesh_Parms), Z_Construct_UFunction_UCaptureDevice_UpdatePoseableMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_UpdatePoseableMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_UpdatePoseableMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_UpdatePoseableMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_UpdatePoseableMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_UpdatePoseableMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_UpdateSkeletonSetup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_UpdateSkeletonSetup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "Comment", "// Update information about current skeleton. Required before calibration process.\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Update information about current skeleton. Required before calibration process." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_UpdateSkeletonSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "UpdateSkeletonSetup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_UpdateSkeletonSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_UpdateSkeletonSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_UpdateSkeletonSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_UpdateSkeletonSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_UpdateTrackerBone_Statics
	{
		struct CaptureDevice_eventUpdateTrackerBone_Parms
		{
			uint8 TrackerId;
			FName BoneName;
			EHumanoidBone ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCaptureDevice_UpdateTrackerBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventUpdateTrackerBone_Parms, ReturnValue), Z_Construct_UEnum_ViveMocapKit_EHumanoidBone, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCaptureDevice_UpdateTrackerBone_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCaptureDevice_UpdateTrackerBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventUpdateTrackerBone_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCaptureDevice_UpdateTrackerBone_Statics::NewProp_TrackerId = { "TrackerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventUpdateTrackerBone_Parms, TrackerId), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_UpdateTrackerBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_UpdateTrackerBone_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_UpdateTrackerBone_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_UpdateTrackerBone_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_UpdateTrackerBone_Statics::NewProp_TrackerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_UpdateTrackerBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "Comment", "// Manual calibration. Updates bone attached to tracking device, returns a new bone\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Manual calibration. Updates bone attached to tracking device, returns a new bone" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_UpdateTrackerBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "UpdateTrackerBone", nullptr, nullptr, sizeof(CaptureDevice_eventUpdateTrackerBone_Parms), Z_Construct_UFunction_UCaptureDevice_UpdateTrackerBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_UpdateTrackerBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_UpdateTrackerBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_UpdateTrackerBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_UpdateTrackerBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_UpdateTrackerBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCaptureDevice_UpdateTrackerTransform_Statics
	{
		struct CaptureDevice_eventUpdateTrackerTransform_Parms
		{
			uint8 TrackerId;
			FTransform Offset;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCaptureDevice_UpdateTrackerTransform_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventUpdateTrackerTransform_Parms, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCaptureDevice_UpdateTrackerTransform_Statics::NewProp_TrackerId = { "TrackerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CaptureDevice_eventUpdateTrackerTransform_Parms, TrackerId), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCaptureDevice_UpdateTrackerTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_UpdateTrackerTransform_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCaptureDevice_UpdateTrackerTransform_Statics::NewProp_TrackerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCaptureDevice_UpdateTrackerTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "Comment", "// Manual calibration. Updates offset of bone relative to tracking device\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Manual calibration. Updates offset of bone relative to tracking device" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCaptureDevice_UpdateTrackerTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCaptureDevice, nullptr, "UpdateTrackerTransform", nullptr, nullptr, sizeof(CaptureDevice_eventUpdateTrackerTransform_Parms), Z_Construct_UFunction_UCaptureDevice_UpdateTrackerTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_UpdateTrackerTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCaptureDevice_UpdateTrackerTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCaptureDevice_UpdateTrackerTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCaptureDevice_UpdateTrackerTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCaptureDevice_UpdateTrackerTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCaptureDevice_NoRegister()
	{
		return UCaptureDevice::StaticClass();
	}
	struct Z_Construct_UClass_UCaptureDevice_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NT_TrackersMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_NT_TrackersMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NT_TrackersMap_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NT_TrackersMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NT_Trackers_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NT_Trackers_Target;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NT_Trackers_Target_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NT_Head_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NT_Head_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fShoulderLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fShoulderLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fCalfLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fCalfLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fThighLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fThighLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fForearmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fForearmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fUpperarmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fUpperarmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootBoneToGroundZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootBoneToGroundZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThighToPelvisLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThighToPelvisLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThighToPelvisRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThighToPelvisRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperarmToShoulderLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpperarmToShoulderLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperarmToShoulderRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpperarmToShoulderRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoulderToRibcageLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShoulderToRibcageLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoulderToRibcageRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShoulderToRibcageRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RibcageToHead_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RibcageToHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadToNeck_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeadToNeck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshLegsLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeshLegsLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeshHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshHandsFullLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeshHandsFullLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshForearmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeshForearmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshUpperarmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeshUpperarmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshSpineLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeshSpineLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveTwists_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ActiveTwists;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActiveTwists_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveTwists_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketTrackers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SocketTrackers;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SocketTrackers_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SocketTrackers_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeasureFootHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeasureFootHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMeasureVerticalAdjustment_MetaData[];
#endif
		static void NewProp_bMeasureVerticalAdjustment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMeasureVerticalAdjustment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastPoseSnapshot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastPoseSnapshot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutPoseSnapshot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPoseSnapshot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullSpineBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FullSpineBones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FullSpineBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpineBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpineBones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpineBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeckBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NeckBones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NeckBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandSolverLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandSolverLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandSolverRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandSolverRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingersDataProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FingersDataProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalfLeftTwist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CalfLeftTwist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThighLeftTwist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThighLeftTwist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalfRightTwist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CalfRightTwist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThighRightTwist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThighRightTwist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForearmLeftTwist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForearmLeftTwist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperarmLeftTwist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpperarmLeftTwist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForearmRightTwist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForearmRightTwist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperarmRightTwist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpperarmRightTwist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackersData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TrackersData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackersData_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackersData_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KneeTargetLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KneeTargetLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KneeTargetRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KneeTargetRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElbowTargetLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ElbowTargetLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElbowTargetRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ElbowTargetRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapturedBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapturedBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowRefPose_MetaData[];
#endif
		static void NewProp_bShowRefPose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowRefPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateServerFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UpdateServerFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteInterpolationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemoteInterpolationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlexibleSpineFromHead_Z_InterpMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlexibleSpineFromHead_Z_InterpMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlexibleSpineFromHead_X_InterpMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FlexibleSpineFromHead_X_InterpMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugLog_MetaData[];
#endif
		static void NewProp_bDebugLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawTrackingDebug_MetaData[];
#endif
		static void NewProp_bDrawTrackingDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawTrackingDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugGeometry_MetaData[];
#endif
		static void NewProp_bDrawDebugGeometry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisablePelvisPositionScale_MetaData[];
#endif
		static void NewProp_bDisablePelvisPositionScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisablePelvisPositionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKeepFeetAboveGround_MetaData[];
#endif
		static void NewProp_bKeepFeetAboveGround_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepFeetAboveGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Filter_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftHandSetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightHandSetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FingersDataProviderClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FingersDataProviderClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClaviclesPitchOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClaviclesPitchOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClavicleRotationOffset_Pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClavicleRotationOffset_Pitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClavicleRotationOffset_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClavicleRotationOffset_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClavicleRotationLimit_PitchDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClavicleRotationLimit_PitchDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClavicleRotationLimit_PitchUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClavicleRotationLimit_PitchUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClavicleRotationLimit_YawBackward_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClavicleRotationLimit_YawBackward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClavicleRotationLimit_YawForward_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClavicleRotationLimit_YawForward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMultiMeshUpdate_MetaData[];
#endif
		static void NewProp_bMultiMeshUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiMeshUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUniformScaleBasedOnArmSpan_MetaData[];
#endif
		static void NewProp_bUniformScaleBasedOnArmSpan_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUniformScaleBasedOnArmSpan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUniformScaleBasedOnHeight_MetaData[];
#endif
		static void NewProp_bUniformScaleBasedOnHeight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUniformScaleBasedOnHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightCalibrationAdjustment_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightCalibrationAdjustment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmsCalibrationAdjustment_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmsCalibrationAdjustment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightScaleCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightScaleCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmsScaleCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmsScaleCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeVerticalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RuntimeVerticalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TorsoVerticalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TorsoVerticalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCalibrateToPelvisWithOneTorsoTracker_MetaData[];
#endif
		static void NewProp_bCalibrateToPelvisWithOneTorsoTracker_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCalibrateToPelvisWithOneTorsoTracker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlexibleTrosoFromPelvis_MetaData[];
#endif
		static void NewProp_bFlexibleTrosoFromPelvis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlexibleTrosoFromPelvis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeepPreciseKneeLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_KeepPreciseKneeLocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeepPreciseKneeLocation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAdjustScaleWithLegFKSolver_MetaData[];
#endif
		static void NewProp_bAdjustScaleWithLegFKSolver_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdjustScaleWithLegFKSolver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimbsFKSolver_MetaData[];
#endif
		static void NewProp_bLimbsFKSolver_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimbsFKSolver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertKnees_MetaData[];
#endif
		static void NewProp_bInvertKnees_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertKnees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvertElbows_MetaData[];
#endif
		static void NewProp_bInvertElbows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvertElbows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaptureRootMotion_MetaData[];
#endif
		static void NewProp_bCaptureRootMotion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaptureRootMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferableKneeOrientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PreferableKneeOrientation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreferableKneeOrientation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseVRHeadsetForHead_MetaData[];
#endif
		static void NewProp_bUseVRHeadsetForHead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseVRHeadsetForHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionControllersTrackingRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MotionControllersTrackingRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MotionControllersTrackingRole_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowRootBoneAboveSurface_MetaData[];
#endif
		static void NewProp_bAllowRootBoneAboveSurface_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowRootBoneAboveSurface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaptureFullBody_MetaData[];
#endif
		static void NewProp_bCaptureFullBody_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaptureFullBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TwistLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMirrorShouldersRotation_MetaData[];
#endif
		static void NewProp_bMirrorShouldersRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMirrorShouldersRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockShouldersRotation_MetaData[];
#endif
		static void NewProp_bLockShouldersRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockShouldersRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpineBendingMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpineBendingMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SkeletonType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkeletonType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpperTwistFromTorso_MetaData[];
#endif
		static void NewProp_bUpperTwistFromTorso_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpperTwistFromTorso;
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCaptureDevice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ViveMocapKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCaptureDevice_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCaptureDevice_AddTrackingDeviceSource, "AddTrackingDeviceSource" }, // 235411975
		{ &Z_Construct_UFunction_UCaptureDevice_ApplyCurrentCalibration, "ApplyCurrentCalibration" }, // 1748850097
		{ &Z_Construct_UFunction_UCaptureDevice_BindPreCalibrationTracker, "BindPreCalibrationTracker" }, // 1804464089
		{ &Z_Construct_UFunction_UCaptureDevice_BoneToName, "BoneToName" }, // 1928167458
		{ &Z_Construct_UFunction_UCaptureDevice_CalibrateBones, "CalibrateBones" }, // 4018620446
		{ &Z_Construct_UFunction_UCaptureDevice_Clients_ToggleCapture, "Clients_ToggleCapture" }, // 2489434094
		{ &Z_Construct_UFunction_UCaptureDevice_Clients_UpdateMeshScale, "Clients_UpdateMeshScale" }, // 1252796997
		{ &Z_Construct_UFunction_UCaptureDevice_Clients_UpdateTrackerBone, "Clients_UpdateTrackerBone" }, // 2655956877
		{ &Z_Construct_UFunction_UCaptureDevice_Clinets_InitializeTrackerBone, "Clinets_InitializeTrackerBone" }, // 448357973
		{ &Z_Construct_UFunction_UCaptureDevice_ExcludeComponentFromInput, "ExcludeComponentFromInput" }, // 3920683809
		{ &Z_Construct_UFunction_UCaptureDevice_GetArmsScaleMultiplier, "GetArmsScaleMultiplier" }, // 1871396427
		{ &Z_Construct_UFunction_UCaptureDevice_GetBodyParameters, "GetBodyParameters" }, // 3626874496
		{ &Z_Construct_UFunction_UCaptureDevice_GetBoneTransformByName, "GetBoneTransformByName" }, // 4040520040
		{ &Z_Construct_UFunction_UCaptureDevice_GetBoneTransformWithGenericOrientation, "GetBoneTransformWithGenericOrientation" }, // 3455978665
		{ &Z_Construct_UFunction_UCaptureDevice_GetCalibratedDataInTPose, "GetCalibratedDataInTPose" }, // 4246322908
		{ &Z_Construct_UFunction_UCaptureDevice_GetCalibrationBindingRules, "GetCalibrationBindingRules" }, // 1817874065
		{ &Z_Construct_UFunction_UCaptureDevice_GetCollarbonesCalibration, "GetCollarbonesCalibration" }, // 2546144688
		{ &Z_Construct_UFunction_UCaptureDevice_GetCurrentCalibration, "GetCurrentCalibration" }, // 1621169323
		{ &Z_Construct_UFunction_UCaptureDevice_GetFingersSolverLeft, "GetFingersSolverLeft" }, // 2628945071
		{ &Z_Construct_UFunction_UCaptureDevice_GetFingersSolverRight, "GetFingersSolverRight" }, // 1552224555
		{ &Z_Construct_UFunction_UCaptureDevice_GetHeadTransform, "GetHeadTransform" }, // 1820743198
		{ &Z_Construct_UFunction_UCaptureDevice_GetInputComponent, "GetInputComponent" }, // 1087513409
		{ &Z_Construct_UFunction_UCaptureDevice_GetLastSkeletalMeshPose, "GetLastSkeletalMeshPose" }, // 894405659
		{ &Z_Construct_UFunction_UCaptureDevice_GetMeshHeightMultiplier, "GetMeshHeightMultiplier" }, // 2953208985
		{ &Z_Construct_UFunction_UCaptureDevice_GetSkeletalMeshPose, "GetSkeletalMeshPose" }, // 3327782664
		{ &Z_Construct_UFunction_UCaptureDevice_GetSocketsSetup, "GetSocketsSetup" }, // 3370722389
		{ &Z_Construct_UFunction_UCaptureDevice_GetTrackingDevicesNum, "GetTrackingDevicesNum" }, // 1550939610
		{ &Z_Construct_UFunction_UCaptureDevice_InitializeFingers, "InitializeFingers" }, // 398611156
		{ &Z_Construct_UFunction_UCaptureDevice_InitializeFingersEx, "InitializeFingersEx" }, // 841756196
		{ &Z_Construct_UFunction_UCaptureDevice_InitializeInputFromComponents, "InitializeInputFromComponents" }, // 1093560529
		{ &Z_Construct_UFunction_UCaptureDevice_InitializeReferences, "InitializeReferences" }, // 3848746482
		{ &Z_Construct_UFunction_UCaptureDevice_InitializeTracker, "InitializeTracker" }, // 1301174758
		{ &Z_Construct_UFunction_UCaptureDevice_InitializeVirtualTrackersForHands, "InitializeVirtualTrackersForHands" }, // 3673483717
		{ &Z_Construct_UFunction_UCaptureDevice_IsCalibrated, "IsCalibrated" }, // 3965509275
		{ &Z_Construct_UFunction_UCaptureDevice_IsCapturing, "IsCapturing" }, // 2957890165
		{ &Z_Construct_UFunction_UCaptureDevice_IsInitialized, "IsInitialized" }, // 927430859
		{ &Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPose, "LoadCalibratedDataInTPose" }, // 211873905
		{ &Z_Construct_UFunction_UCaptureDevice_LoadCalibratedDataInTPoseEx, "LoadCalibratedDataInTPoseEx" }, // 4248329284
		{ &Z_Construct_UFunction_UCaptureDevice_LoadSkeletonSetupFromStruct, "LoadSkeletonSetupFromStruct" }, // 1704896707
		{ &Z_Construct_UFunction_UCaptureDevice_MeasureVerticalAdjustment, "MeasureVerticalAdjustment" }, // 266330777
		{ &Z_Construct_UFunction_UCaptureDevice_PredictBonesCalibration, "PredictBonesCalibration" }, // 2066241945
		{ &Z_Construct_UFunction_UCaptureDevice_PredictCollarboneDefaultOffset, "PredictCollarboneDefaultOffset" }, // 797864647
		{ &Z_Construct_UFunction_UCaptureDevice_PrepareForCalibration, "PrepareForCalibration" }, // 2308002399
		{ &Z_Construct_UFunction_UCaptureDevice_PrepareForCalibrationWithHandsForward, "PrepareForCalibrationWithHandsForward" }, // 1836439212
		{ &Z_Construct_UFunction_UCaptureDevice_ProcessFingers, "ProcessFingers" }, // 1760414578
		{ &Z_Construct_UFunction_UCaptureDevice_ResetCalibration, "ResetCalibration" }, // 163430352
		{ &Z_Construct_UFunction_UCaptureDevice_ResetPreCalibrationBinding, "ResetPreCalibrationBinding" }, // 1267083560
		{ &Z_Construct_UFunction_UCaptureDevice_SendCalibrationToServer, "SendCalibrationToServer" }, // 769981584
		{ &Z_Construct_UFunction_UCaptureDevice_ServerInitializeTrackerBone, "ServerInitializeTrackerBone" }, // 3030158130
		{ &Z_Construct_UFunction_UCaptureDevice_ServerToggleCapture, "ServerToggleCapture" }, // 1897439219
		{ &Z_Construct_UFunction_UCaptureDevice_ServerUpdateInput, "ServerUpdateInput" }, // 4093727789
		{ &Z_Construct_UFunction_UCaptureDevice_ServerUpdateMeshScale, "ServerUpdateMeshScale" }, // 836199498
		{ &Z_Construct_UFunction_UCaptureDevice_ServerUpdateTrackerBone, "ServerUpdateTrackerBone" }, // 3813422457
		{ &Z_Construct_UFunction_UCaptureDevice_SetTrackersData, "SetTrackersData" }, // 3500957262
		{ &Z_Construct_UFunction_UCaptureDevice_ToggleCapture, "ToggleCapture" }, // 156623173
		{ &Z_Construct_UFunction_UCaptureDevice_UnbindPreCalibrationTracker, "UnbindPreCalibrationTracker" }, // 1269873787
		{ &Z_Construct_UFunction_UCaptureDevice_UpdatePoseableMesh, "UpdatePoseableMesh" }, // 3026674443
		{ &Z_Construct_UFunction_UCaptureDevice_UpdateSkeletonSetup, "UpdateSkeletonSetup" }, // 3477777682
		{ &Z_Construct_UFunction_UCaptureDevice_UpdateTrackerBone, "UpdateTrackerBone" }, // 3522314832
		{ &Z_Construct_UFunction_UCaptureDevice_UpdateTrackerTransform, "UpdateTrackerTransform" }, // 2651037554
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/*\nMain Capture class: 1) calibration to Vive Trackers, 2) Data Capture, 3) Body inverse kinematics calculation\nResult is availabe in Capture Device/Capture output variables and functions (see commens below).\n*/" },
		{ "IncludePath", "CaptureDevice.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Main Capture class: 1) calibration to Vive Trackers, 2) Data Capture, 3) Body inverse kinematics calculation\nResult is availabe in Capture Device/Capture output variables and functions (see commens below)." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NT_TrackersMap_MetaData[] = {
		{ "Comment", "// trackers array map<TrackerIndex, ArrayIndex> - maps can't be replicated :(\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "trackers array map<TrackerIndex, ArrayIndex> - maps can't be replicated :(" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NT_TrackersMap = { "NT_TrackersMap", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, NT_TrackersMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NT_TrackersMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NT_TrackersMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NT_TrackersMap_Key_KeyProp = { "NT_TrackersMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NT_TrackersMap_ValueProp = { "NT_TrackersMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NT_Trackers_Target_MetaData[] = {
		{ "Comment", "// last positions replicated viaserver to remote PCs\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "last positions replicated viaserver to remote PCs" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NT_Trackers_Target = { "NT_Trackers_Target", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, NT_Trackers_Target), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NT_Trackers_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NT_Trackers_Target_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NT_Trackers_Target_Inner = { "NT_Trackers_Target", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVMK_NT_Transform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NT_Head_Target_MetaData[] = {
		{ "Comment", "// last positions replicated via server to remote PCs\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "last positions replicated via server to remote PCs" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NT_Head_Target = { "NT_Head_Target", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, NT_Head_Target), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NT_Head_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NT_Head_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_fShoulderLength_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_fShoulderLength = { "fShoulderLength", nullptr, (EPropertyFlags)0x0020080000000034, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, fShoulderLength), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_fShoulderLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_fShoulderLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_fCalfLength_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_fCalfLength = { "fCalfLength", nullptr, (EPropertyFlags)0x0020080000000034, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, fCalfLength), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_fCalfLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_fCalfLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_fThighLength_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_fThighLength = { "fThighLength", nullptr, (EPropertyFlags)0x0020080000000034, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, fThighLength), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_fThighLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_fThighLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_fForearmLength_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_fForearmLength = { "fForearmLength", nullptr, (EPropertyFlags)0x0020080000000034, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, fForearmLength), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_fForearmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_fForearmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_fUpperarmLength_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "// capture actor' body settings\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "capture actor' body settings" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_fUpperarmLength = { "fUpperarmLength", nullptr, (EPropertyFlags)0x0020080000000034, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, fUpperarmLength), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_fUpperarmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_fUpperarmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FootBoneToGroundZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FootBoneToGroundZ = { "FootBoneToGroundZ", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, FootBoneToGroundZ), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FootBoneToGroundZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FootBoneToGroundZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighToPelvisLeft_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighToPelvisLeft = { "ThighToPelvisLeft", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, ThighToPelvisLeft), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighToPelvisLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighToPelvisLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighToPelvisRight_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighToPelvisRight = { "ThighToPelvisRight", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, ThighToPelvisRight), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighToPelvisRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighToPelvisRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmToShoulderLeft_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmToShoulderLeft = { "UpperarmToShoulderLeft", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, UpperarmToShoulderLeft), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmToShoulderLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmToShoulderLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmToShoulderRight_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmToShoulderRight = { "UpperarmToShoulderRight", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, UpperarmToShoulderRight), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmToShoulderRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmToShoulderRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ShoulderToRibcageLeft_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ShoulderToRibcageLeft = { "ShoulderToRibcageLeft", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, ShoulderToRibcageLeft), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ShoulderToRibcageLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ShoulderToRibcageLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ShoulderToRibcageRight_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// for flexible spine from pelvis\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "for flexible spine from pelvis" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ShoulderToRibcageRight = { "ShoulderToRibcageRight", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, ShoulderToRibcageRight), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ShoulderToRibcageRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ShoulderToRibcageRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_RibcageToHead_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_RibcageToHead = { "RibcageToHead", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, RibcageToHead), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_RibcageToHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_RibcageToHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_HeadToNeck_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// major bones relative offsets (to parent bones)\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "major bones relative offsets (to parent bones)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_HeadToNeck = { "HeadToNeck", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, HeadToNeck), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_HeadToNeck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_HeadToNeck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshLegsLength_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshLegsLength = { "MeshLegsLength", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, MeshLegsLength), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshLegsLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshLegsLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshHeight_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshHeight = { "MeshHeight", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, MeshHeight), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshHandsFullLength_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshHandsFullLength = { "MeshHandsFullLength", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, MeshHandsFullLength), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshHandsFullLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshHandsFullLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshForearmLength_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshForearmLength = { "MeshForearmLength", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, MeshForearmLength), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshForearmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshForearmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshUpperarmLength_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshUpperarmLength = { "MeshUpperarmLength", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, MeshUpperarmLength), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshUpperarmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshUpperarmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshSpineLength_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// skeletal mesh paramsSpineBoneOffsets\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "skeletal mesh paramsSpineBoneOffsets" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshSpineLength = { "MeshSpineLength", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, MeshSpineLength), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshSpineLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshSpineLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ActiveTwists_MetaData[] = {
		{ "Comment", "// output twist bone values\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "output twist bone values" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ActiveTwists = { "ActiveTwists", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, ActiveTwists), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ActiveTwists_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ActiveTwists_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ActiveTwists_Key_KeyProp = { "ActiveTwists_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ActiveTwists_ValueProp = { "ActiveTwists", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTwistBone, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SocketTrackers_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SocketTrackers = { "SocketTrackers", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, SocketTrackers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SocketTrackers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SocketTrackers_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SocketTrackers_Key_KeyProp = { "SocketTrackers_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SocketTrackers_ValueProp = { "SocketTrackers", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_InputComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_InputComponents = { "InputComponents", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, InputComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_InputComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_InputComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_InputComponents_Inner = { "InputComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeasureFootHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeasureFootHeight = { "MeasureFootHeight", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, MeasureFootHeight), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeasureFootHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeasureFootHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bMeasureVerticalAdjustment_MetaData[] = {
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	void Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bMeasureVerticalAdjustment_SetBit(void* Obj)
	{
		((UCaptureDevice*)Obj)->bMeasureVerticalAdjustment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bMeasureVerticalAdjustment = { "bMeasureVerticalAdjustment", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCaptureDevice), &Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bMeasureVerticalAdjustment_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bMeasureVerticalAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bMeasureVerticalAdjustment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_LastPoseSnapshot_MetaData[] = {
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_LastPoseSnapshot = { "LastPoseSnapshot", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, LastPoseSnapshot), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_LastPoseSnapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_LastPoseSnapshot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_OutPoseSnapshot_MetaData[] = {
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_OutPoseSnapshot = { "OutPoseSnapshot", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, OutPoseSnapshot), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_OutPoseSnapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_OutPoseSnapshot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FullSpineBones_MetaData[] = {
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FullSpineBones = { "FullSpineBones", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, FullSpineBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FullSpineBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FullSpineBones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FullSpineBones_Inner = { "FullSpineBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAdditionalBoneState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SpineBones_MetaData[] = {
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SpineBones = { "SpineBones", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, SpineBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SpineBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SpineBones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SpineBones_Inner = { "SpineBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAdditionalBoneState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NeckBones_MetaData[] = {
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NeckBones = { "NeckBones", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, NeckBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NeckBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NeckBones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NeckBones_Inner = { "NeckBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAdditionalBoneState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_HandSolverLeft_MetaData[] = {
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_HandSolverLeft = { "HandSolverLeft", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, HandSolverLeft), Z_Construct_UClass_UVMKFingersFKIKSolver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_HandSolverLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_HandSolverLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_HandSolverRight_MetaData[] = {
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_HandSolverRight = { "HandSolverRight", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, HandSolverRight), Z_Construct_UClass_UVMKFingersFKIKSolver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_HandSolverRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_HandSolverRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FingersDataProvider_MetaData[] = {
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FingersDataProvider = { "FingersDataProvider", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, FingersDataProvider), Z_Construct_UClass_UFingersDataProvider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FingersDataProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FingersDataProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_BodyMesh_MetaData[] = {
		{ "Comment", "// reference to controlled skeletal mesh\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "reference to controlled skeletal mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_BodyMesh = { "BodyMesh", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, BodyMesh), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_BodyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_BodyMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfLeftTwist_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Full twisting value for calf\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Full twisting value for calf" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfLeftTwist = { "CalfLeftTwist", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, CalfLeftTwist), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfLeftTwist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfLeftTwist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighLeftTwist_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Full twisting value for thigh\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Full twisting value for thigh" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighLeftTwist = { "ThighLeftTwist", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, ThighLeftTwist), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighLeftTwist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighLeftTwist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfRightTwist_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Full twisting value for calf\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Full twisting value for calf" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfRightTwist = { "CalfRightTwist", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, CalfRightTwist), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfRightTwist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfRightTwist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighRightTwist_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Full twisting value for thigh\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Full twisting value for thigh" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighRightTwist = { "ThighRightTwist", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, ThighRightTwist), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighRightTwist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighRightTwist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmLeftTwist_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Full twisting value for lowerarm\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Full twisting value for lowerarm" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmLeftTwist = { "ForearmLeftTwist", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, ForearmLeftTwist), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmLeftTwist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmLeftTwist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmLeftTwist_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Full twisting value for upperarm\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Full twisting value for upperarm" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmLeftTwist = { "UpperarmLeftTwist", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, UpperarmLeftTwist), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmLeftTwist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmLeftTwist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmRightTwist_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Full twisting value for lowerarm\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Full twisting value for lowerarm" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmRightTwist = { "ForearmRightTwist", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, ForearmRightTwist), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmRightTwist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmRightTwist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmRightTwist_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Full twisting value for upperarm\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Full twisting value for upperarm" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmRightTwist = { "UpperarmRightTwist", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, UpperarmRightTwist), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmRightTwist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmRightTwist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_TrackersData_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Current captured transform & setups of all tracked devices (excluding HMD)\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Current captured transform & setups of all tracked devices (excluding HMD)" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_TrackersData = { "TrackersData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, TrackersData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_TrackersData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_TrackersData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_TrackersData_Key_KeyProp = { "TrackersData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_TrackersData_ValueProp = { "TrackersData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTrackerSetup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_KneeTargetLeft_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Knee joint target for Two-bone IK\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Knee joint target for Two-bone IK" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_KneeTargetLeft = { "KneeTargetLeft", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, KneeTargetLeft), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_KneeTargetLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_KneeTargetLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_KneeTargetRight_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Knee joint target for Two-bone IK\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Knee joint target for Two-bone IK" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_KneeTargetRight = { "KneeTargetRight", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, KneeTargetRight), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_KneeTargetRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_KneeTargetRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ElbowTargetLeft_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Elbow joint target for Two-bone IK\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Elbow joint target for Two-bone IK" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ElbowTargetLeft = { "ElbowTargetLeft", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, ElbowTargetLeft), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ElbowTargetLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ElbowTargetLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ElbowTargetRight_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Elbow joint target for Two-bone IK\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Elbow joint target for Two-bone IK" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ElbowTargetRight = { "ElbowTargetRight", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, ElbowTargetRight), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ElbowTargetRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ElbowTargetRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CapturedBody_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "// Main struct containing information about bones transform in world space\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Main struct containing information about bones transform in world space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CapturedBody = { "CapturedBody", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, CapturedBody), Z_Construct_UScriptStruct_FCaptureBodyState, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CapturedBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CapturedBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bShowRefPose_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "/* Show reference pose of the mesh (only if capturing) */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Show reference pose of the mesh (only if capturing)" },
	};
#endif
	void Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bShowRefPose_SetBit(void* Obj)
	{
		((UCaptureDevice*)Obj)->bShowRefPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bShowRefPose = { "bShowRefPose", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCaptureDevice), &Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bShowRefPose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bShowRefPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bShowRefPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpdateServerFrequency_MetaData[] = {
		{ "Category", "Networking" },
		{ "Comment", "/* Networking frequency to update from local PC (0 to update in every tick) */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Networking frequency to update from local PC (0 to update in every tick)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpdateServerFrequency = { "UpdateServerFrequency", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, UpdateServerFrequency), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpdateServerFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpdateServerFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_RemoteInterpolationSpeed_MetaData[] = {
		{ "Category", "Networking" },
		{ "Comment", "/* Interp Speed used to smooth movements on remote PCs (0 to disable). */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Interp Speed used to smooth movements on remote PCs (0 to disable)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_RemoteInterpolationSpeed = { "RemoteInterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, RemoteInterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_RemoteInterpolationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_RemoteInterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FlexibleSpineFromHead_Z_InterpMultiplier_MetaData[] = {
		{ "Comment", "/** Unused UPROPERTY(EditAnywhere, Category = \"Debug\") */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Unused UPROPERTY(EditAnywhere, Category = \"Debug\")" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FlexibleSpineFromHead_Z_InterpMultiplier = { "FlexibleSpineFromHead_Z_InterpMultiplier", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, FlexibleSpineFromHead_Z_InterpMultiplier), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FlexibleSpineFromHead_Z_InterpMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FlexibleSpineFromHead_Z_InterpMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FlexibleSpineFromHead_X_InterpMultiplier_MetaData[] = {
		{ "Comment", "/** Unused UPROPERTY(EditAnywhere, Category = \"Debug\") */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Unused UPROPERTY(EditAnywhere, Category = \"Debug\")" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FlexibleSpineFromHead_X_InterpMultiplier = { "FlexibleSpineFromHead_X_InterpMultiplier", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, FlexibleSpineFromHead_X_InterpMultiplier), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FlexibleSpineFromHead_X_InterpMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FlexibleSpineFromHead_X_InterpMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDebugLog_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	void Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDebugLog_SetBit(void* Obj)
	{
		((UCaptureDevice*)Obj)->bDebugLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDebugLog = { "bDebugLog", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCaptureDevice), &Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDebugLog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDebugLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDebugLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDrawTrackingDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Unused */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Unused" },
	};
#endif
	void Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDrawTrackingDebug_SetBit(void* Obj)
	{
		((UCaptureDevice*)Obj)->bDrawTrackingDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDrawTrackingDebug = { "bDrawTrackingDebug", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCaptureDevice), &Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDrawTrackingDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDrawTrackingDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDrawTrackingDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDrawDebugGeometry_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Unused */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Unused" },
	};
#endif
	void Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDrawDebugGeometry_SetBit(void* Obj)
	{
		((UCaptureDevice*)Obj)->bDrawDebugGeometry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDrawDebugGeometry = { "bDrawDebugGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCaptureDevice), &Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDrawDebugGeometry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDrawDebugGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDrawDebugGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDisablePelvisPositionScale_MetaData[] = {
		{ "Comment", "/** Unused UPROPERTY(EditAnywhere, Category = \"Debug\") */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Unused UPROPERTY(EditAnywhere, Category = \"Debug\")" },
	};
#endif
	void Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDisablePelvisPositionScale_SetBit(void* Obj)
	{
		((UCaptureDevice*)Obj)->bDisablePelvisPositionScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDisablePelvisPositionScale = { "bDisablePelvisPositionScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCaptureDevice), &Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDisablePelvisPositionScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDisablePelvisPositionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDisablePelvisPositionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bKeepFeetAboveGround_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/** Use simple average of three last frames */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Use simple average of three last frames" },
	};
#endif
	void Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bKeepFeetAboveGround_SetBit(void* Obj)
	{
		((UCaptureDevice*)Obj)->bKeepFeetAboveGround = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bKeepFeetAboveGround = { "bKeepFeetAboveGround", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCaptureDevice), &Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bKeepFeetAboveGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bKeepFeetAboveGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bKeepFeetAboveGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/** Use simple average of three last frames */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Use simple average of three last frames" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, Filter), Z_Construct_UEnum_ViveMocapKit_ECaptureFilter, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_Filter_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_Filter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_LeftHandSetup_MetaData[] = {
		{ "Category", "Fingers" },
		{ "Comment", "/** Fingers setup for left hand (optional) */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Fingers setup for left hand (optional)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_LeftHandSetup = { "LeftHandSetup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, LeftHandSetup), Z_Construct_UClass_UVMKFingersSolverSetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_LeftHandSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_LeftHandSetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_RightHandSetup_MetaData[] = {
		{ "Category", "Fingers" },
		{ "Comment", "/** Fingers setup for right hand (optional) */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Fingers setup for right hand (optional)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_RightHandSetup = { "RightHandSetup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, RightHandSetup), Z_Construct_UClass_UVMKFingersSolverSetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_RightHandSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_RightHandSetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FingersDataProviderClass_MetaData[] = {
		{ "Category", "Fingers" },
		{ "Comment", "/**\n\x09* Class providing information about fingers animation (optional)\n\x09*/" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Class providing information about fingers animation (optional)" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FingersDataProviderClass = { "FingersDataProviderClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, FingersDataProviderClass), Z_Construct_UClass_UFingersDataProvider_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FingersDataProviderClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FingersDataProviderClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClaviclesPitchOffset_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Only for shoulders captured from upperarms. Higher value - higher clavicles\n\x09* This variable only affects calibration\n\x09*/" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Only for shoulders captured from upperarms. Higher value - higher clavicles\nThis variable only affects calibration" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClaviclesPitchOffset = { "ClaviclesPitchOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, ClaviclesPitchOffset), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClaviclesPitchOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClaviclesPitchOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationOffset_Pitch_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** rotation offset for calculated (non-captured) shouldres */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "rotation offset for calculated (non-captured) shouldres" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationOffset_Pitch = { "ClavicleRotationOffset_Pitch", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, ClavicleRotationOffset_Pitch), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationOffset_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationOffset_Pitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationOffset_Yaw_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** rotation offset for calculated (non-captured) shouldres */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "rotation offset for calculated (non-captured) shouldres" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationOffset_Yaw = { "ClavicleRotationOffset_Yaw", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, ClavicleRotationOffset_Yaw), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationOffset_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationOffset_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationLimit_PitchDown_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** rotation limits for calculated (non-captured) shouldres: pitch negative */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "rotation limits for calculated (non-captured) shouldres: pitch negative" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationLimit_PitchDown = { "ClavicleRotationLimit_PitchDown", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, ClavicleRotationLimit_PitchDown), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationLimit_PitchDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationLimit_PitchDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationLimit_PitchUp_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** rotation limits for calculated (non-captured) shouldres: pitch positive */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "rotation limits for calculated (non-captured) shouldres: pitch positive" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationLimit_PitchUp = { "ClavicleRotationLimit_PitchUp", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, ClavicleRotationLimit_PitchUp), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationLimit_PitchUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationLimit_PitchUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationLimit_YawBackward_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** rotation limits for calculated (non-captured) shouldres: yaw negative */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "rotation limits for calculated (non-captured) shouldres: yaw negative" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationLimit_YawBackward = { "ClavicleRotationLimit_YawBackward", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, ClavicleRotationLimit_YawBackward), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationLimit_YawBackward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationLimit_YawBackward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationLimit_YawForward_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Rotation limits for calculated (non-captured) shouldres: yaw positive */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Rotation limits for calculated (non-captured) shouldres: yaw positive" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationLimit_YawForward = { "ClavicleRotationLimit_YawForward", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, ClavicleRotationLimit_YawForward), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationLimit_YawForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationLimit_YawForward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bMultiMeshUpdate_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	void Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bMultiMeshUpdate_SetBit(void* Obj)
	{
		((UCaptureDevice*)Obj)->bMultiMeshUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bMultiMeshUpdate = { "bMultiMeshUpdate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCaptureDevice), &Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bMultiMeshUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bMultiMeshUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bMultiMeshUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUniformScaleBasedOnArmSpan_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/* Use uniform scaling with a priority given to actor's arm span (only when call GetSkeletalMeshPose with bEnableScaling = true) */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Use uniform scaling with a priority given to actor's arm span (only when call GetSkeletalMeshPose with bEnableScaling = true)" },
	};
#endif
	void Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUniformScaleBasedOnArmSpan_SetBit(void* Obj)
	{
		((UCaptureDevice*)Obj)->bUniformScaleBasedOnArmSpan = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUniformScaleBasedOnArmSpan = { "bUniformScaleBasedOnArmSpan", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCaptureDevice), &Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUniformScaleBasedOnArmSpan_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUniformScaleBasedOnArmSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUniformScaleBasedOnArmSpan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUniformScaleBasedOnHeight_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/* Use uniform scaling with a priority given to actor's height (only when call GetSkeletalMeshPose with bEnableScaling = true) */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Use uniform scaling with a priority given to actor's height (only when call GetSkeletalMeshPose with bEnableScaling = true)" },
	};
#endif
	void Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUniformScaleBasedOnHeight_SetBit(void* Obj)
	{
		((UCaptureDevice*)Obj)->bUniformScaleBasedOnHeight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUniformScaleBasedOnHeight = { "bUniformScaleBasedOnHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCaptureDevice), &Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUniformScaleBasedOnHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUniformScaleBasedOnHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUniformScaleBasedOnHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_HeightCalibrationAdjustment_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Please don't change this value */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Please don't change this value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_HeightCalibrationAdjustment = { "HeightCalibrationAdjustment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, HeightCalibrationAdjustment), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_HeightCalibrationAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_HeightCalibrationAdjustment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ArmsCalibrationAdjustment_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Please don't change this value */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Please don't change this value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ArmsCalibrationAdjustment = { "ArmsCalibrationAdjustment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, ArmsCalibrationAdjustment), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ArmsCalibrationAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ArmsCalibrationAdjustment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_HeightScaleCoefficient_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Multiplier for height scale */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Multiplier for height scale" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_HeightScaleCoefficient = { "HeightScaleCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, HeightScaleCoefficient), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_HeightScaleCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_HeightScaleCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ArmsScaleCoefficient_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Multiplier for arm span scale. Increase to makes hands loner, decrease to make them shorter */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Multiplier for arm span scale. Increase to makes hands loner, decrease to make them shorter" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ArmsScaleCoefficient = { "ArmsScaleCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, ArmsScaleCoefficient), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ArmsScaleCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ArmsScaleCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_RuntimeVerticalOffset_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Offset along Z axis to fix legs on non-scaled meshes */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Offset along Z axis to fix legs on non-scaled meshes" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_RuntimeVerticalOffset = { "RuntimeVerticalOffset", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, RuntimeVerticalOffset), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_RuntimeVerticalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_RuntimeVerticalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_TorsoVerticalOffset_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Adjustment for spine length: moves torso forward or backward along pelvis-ribcage axis */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Adjustment for spine length: moves torso forward or backward along pelvis-ribcage axis" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_TorsoVerticalOffset = { "TorsoVerticalOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, TorsoVerticalOffset), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_TorsoVerticalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_TorsoVerticalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bCalibrateToPelvisWithOneTorsoTracker_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Notify the component that there are no trackers for ribcage */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Notify the component that there are no trackers for ribcage" },
	};
#endif
	void Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bCalibrateToPelvisWithOneTorsoTracker_SetBit(void* Obj)
	{
		((UCaptureDevice*)Obj)->bCalibrateToPelvisWithOneTorsoTracker = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bCalibrateToPelvisWithOneTorsoTracker = { "bCalibrateToPelvisWithOneTorsoTracker", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCaptureDevice), &Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bCalibrateToPelvisWithOneTorsoTracker_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bCalibrateToPelvisWithOneTorsoTracker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bCalibrateToPelvisWithOneTorsoTracker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bFlexibleTrosoFromPelvis_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Should interpolate torso from pelvis to head if ribcage wasn't tracked? */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Should interpolate torso from pelvis to head if ribcage wasn't tracked?" },
	};
#endif
	void Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bFlexibleTrosoFromPelvis_SetBit(void* Obj)
	{
		((UCaptureDevice*)Obj)->bFlexibleTrosoFromPelvis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bFlexibleTrosoFromPelvis = { "bFlexibleTrosoFromPelvis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCaptureDevice), &Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bFlexibleTrosoFromPelvis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bFlexibleTrosoFromPelvis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bFlexibleTrosoFromPelvis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_KeepPreciseKneeLocation_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/*  */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_KeepPreciseKneeLocation = { "KeepPreciseKneeLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, KeepPreciseKneeLocation), Z_Construct_UEnum_ViveMocapKit_EBodySideRole, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_KeepPreciseKneeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_KeepPreciseKneeLocation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_KeepPreciseKneeLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bAdjustScaleWithLegFKSolver_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/* Modify leg scale based on distance from trackers. Requires trackers on feet and calfs. */" },
		{ "DisplayName", "Adjust Scale With Leg FK Solver" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Modify leg scale based on distance from trackers. Requires trackers on feet and calfs." },
	};
#endif
	void Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bAdjustScaleWithLegFKSolver_SetBit(void* Obj)
	{
		((UCaptureDevice*)Obj)->bAdjustScaleWithLegFKSolver = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bAdjustScaleWithLegFKSolver = { "bAdjustScaleWithLegFKSolver", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCaptureDevice), &Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bAdjustScaleWithLegFKSolver_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bAdjustScaleWithLegFKSolver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bAdjustScaleWithLegFKSolver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bLimbsFKSolver_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/* Forward-kinematic solver for legs. Requires trackers on calfs. */" },
		{ "DisplayName", "Use FK Solver For Legs" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Forward-kinematic solver for legs. Requires trackers on calfs." },
	};
#endif
	void Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bLimbsFKSolver_SetBit(void* Obj)
	{
		((UCaptureDevice*)Obj)->bLimbsFKSolver = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bLimbsFKSolver = { "bLimbsFKSolver", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCaptureDevice), &Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bLimbsFKSolver_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bLimbsFKSolver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bLimbsFKSolver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bInvertKnees_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/* Enable if knees are bended to the wrong side */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Enable if knees are bended to the wrong side" },
	};
#endif
	void Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bInvertKnees_SetBit(void* Obj)
	{
		((UCaptureDevice*)Obj)->bInvertKnees = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bInvertKnees = { "bInvertKnees", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCaptureDevice), &Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bInvertKnees_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bInvertKnees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bInvertKnees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bInvertElbows_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/* Enable if elbows are bended to the wrong side */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Enable if elbows are bended to the wrong side" },
	};
#endif
	void Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bInvertElbows_SetBit(void* Obj)
	{
		((UCaptureDevice*)Obj)->bInvertElbows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bInvertElbows = { "bInvertElbows", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCaptureDevice), &Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bInvertElbows_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bInvertElbows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bInvertElbows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bCaptureRootMotion_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/* Move root bone above pelvis (true) or keep it in coordinates centre (false) */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Move root bone above pelvis (true) or keep it in coordinates centre (false)" },
	};
#endif
	void Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bCaptureRootMotion_SetBit(void* Obj)
	{
		((UCaptureDevice*)Obj)->bCaptureRootMotion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bCaptureRootMotion = { "bCaptureRootMotion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCaptureDevice), &Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bCaptureRootMotion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bCaptureRootMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bCaptureRootMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_PreferableKneeOrientation_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/* Preferable way to calculate knee joint targets (only if knees aren't tracked): as pelvis forward, as foot forward or average direction.\n\x09""Average is safer for sitting, laying down etc. 'As foot' is preferable in most cases. */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Preferable way to calculate knee joint targets (only if knees aren't tracked): as pelvis forward, as foot forward or average direction.\n      Average is safer for sitting, laying down etc. 'As foot' is preferable in most cases." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_PreferableKneeOrientation = { "PreferableKneeOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, PreferableKneeOrientation), Z_Construct_UEnum_ViveMocapKit_EKneeOrientationSetup, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_PreferableKneeOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_PreferableKneeOrientation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_PreferableKneeOrientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUseVRHeadsetForHead_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/**\n\x09* Uncheck if you use regular tracking device (Vive Tracker or scene component) for head tracking, leave checked if use headset\n\x09* Generally, this option should be unchecked for non-HMD setups\n\x09*/" },
		{ "DisplayName", "Use VR Headset For Head" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Uncheck if you use regular tracking device (Vive Tracker or scene component) for head tracking, leave checked if use headset\nGenerally, this option should be unchecked for non-HMD setups" },
	};
#endif
	void Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUseVRHeadsetForHead_SetBit(void* Obj)
	{
		((UCaptureDevice*)Obj)->bUseVRHeadsetForHead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUseVRHeadsetForHead = { "bUseVRHeadsetForHead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCaptureDevice), &Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUseVRHeadsetForHead_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUseVRHeadsetForHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUseVRHeadsetForHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MotionControllersTrackingRole_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/* How to use motion controllers? */" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "How to use motion controllers?" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MotionControllersTrackingRole = { "MotionControllersTrackingRole", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, MotionControllersTrackingRole), Z_Construct_UEnum_ViveMocapKit_ETrackingDeviceRole, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MotionControllersTrackingRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MotionControllersTrackingRole_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MotionControllersTrackingRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bAllowRootBoneAboveSurface_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// True to return allow root bone move above surface when player's pelvis is higher then legs length (ex: for jumping)\n// If False, Root Bone always keeps zero in Z coordinate\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "True to return allow root bone move above surface when player's pelvis is higher then legs length (ex: for jumping)\nIf False, Root Bone always keeps zero in Z coordinate" },
	};
#endif
	void Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bAllowRootBoneAboveSurface_SetBit(void* Obj)
	{
		((UCaptureDevice*)Obj)->bAllowRootBoneAboveSurface = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bAllowRootBoneAboveSurface = { "bAllowRootBoneAboveSurface", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCaptureDevice), &Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bAllowRootBoneAboveSurface_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bAllowRootBoneAboveSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bAllowRootBoneAboveSurface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bCaptureFullBody_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// True for full body tracking in world space, false for upper body (no legs) tracking above world origin location\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "True for full body tracking in world space, false for upper body (no legs) tracking above world origin location" },
	};
#endif
	void Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bCaptureFullBody_SetBit(void* Obj)
	{
		((UCaptureDevice*)Obj)->bCaptureFullBody = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bCaptureFullBody = { "bCaptureFullBody", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCaptureDevice), &Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bCaptureFullBody_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bCaptureFullBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bCaptureFullBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_TwistLimit_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// Max twist (in degrees) for twist bones\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Max twist (in degrees) for twist bones" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_TwistLimit = { "TwistLimit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, TwistLimit), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_TwistLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_TwistLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bMirrorShouldersRotation_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// Mirror collarbone if only one of them is tracked\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Mirror collarbone if only one of them is tracked" },
	};
#endif
	void Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bMirrorShouldersRotation_SetBit(void* Obj)
	{
		((UCaptureDevice*)Obj)->bMirrorShouldersRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bMirrorShouldersRotation = { "bMirrorShouldersRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCaptureDevice), &Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bMirrorShouldersRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bMirrorShouldersRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bMirrorShouldersRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bLockShouldersRotation_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// Only if shoulders aren't tracked.\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Only if shoulders aren't tracked." },
	};
#endif
	void Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bLockShouldersRotation_SetBit(void* Obj)
	{
		((UCaptureDevice*)Obj)->bLockShouldersRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bLockShouldersRotation = { "bLockShouldersRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCaptureDevice), &Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bLockShouldersRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bLockShouldersRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bLockShouldersRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SpineBendingMultiplier_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// Coefficient applied to spine when calculating a cubic bezier curve for intermediate bones.\n// Decrease it if you experience unexpected twists\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Coefficient applied to spine when calculating a cubic bezier curve for intermediate bones.\nDecrease it if you experience unexpected twists" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SpineBendingMultiplier = { "SpineBendingMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, SpineBendingMultiplier), METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SpineBendingMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SpineBendingMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SkeletonType_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SkeletonType = { "SkeletonType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, SkeletonType), Z_Construct_UEnum_ViveMocapKit_ESkeletonBonesOrientation, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SkeletonType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SkeletonType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SkeletonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUpperTwistFromTorso_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "// Should upperarm and thigh twists use torso-upperbone delta (true) or upperbone-lowerbone delta (false)\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Should upperarm and thigh twists use torso-upperbone delta (true) or upperbone-lowerbone delta (false)" },
	};
#endif
	void Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUpperTwistFromTorso_SetBit(void* Obj)
	{
		((UCaptureDevice*)Obj)->bUpperTwistFromTorso = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUpperTwistFromTorso = { "bUpperTwistFromTorso", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCaptureDevice), &Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUpperTwistFromTorso_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUpperTwistFromTorso_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUpperTwistFromTorso_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighTwistsLeft_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "// Left thigh twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Left thigh twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighTwistsLeft = { "ThighTwistsLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, ThighTwistsLeft), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighTwistsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighTwistsLeft_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighTwistsLeft_Key_KeyProp = { "ThighTwistsLeft_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighTwistsLeft_ValueProp = { "ThighTwistsLeft", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighTwistsRight_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "// Right thigh twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Right thigh twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighTwistsRight = { "ThighTwistsRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, ThighTwistsRight), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighTwistsRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighTwistsRight_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighTwistsRight_Key_KeyProp = { "ThighTwistsRight_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighTwistsRight_ValueProp = { "ThighTwistsRight", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfTwistsLeft_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "// Left calf twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Left calf twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfTwistsLeft = { "CalfTwistsLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, CalfTwistsLeft), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfTwistsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfTwistsLeft_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfTwistsLeft_Key_KeyProp = { "CalfTwistsLeft_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfTwistsLeft_ValueProp = { "CalfTwistsLeft", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfTwistsRight_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "// Right calf twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Right calf twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfTwistsRight = { "CalfTwistsRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, CalfTwistsRight), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfTwistsRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfTwistsRight_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfTwistsRight_Key_KeyProp = { "CalfTwistsRight_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfTwistsRight_ValueProp = { "CalfTwistsRight", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmTwistsLeft_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "// Right upperarm twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Right upperarm twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmTwistsLeft = { "UpperarmTwistsLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, UpperarmTwistsLeft), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmTwistsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmTwistsLeft_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmTwistsLeft_Key_KeyProp = { "UpperarmTwistsLeft_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmTwistsLeft_ValueProp = { "UpperarmTwistsLeft", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmTwistsRight_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "// Right upperarm twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Right upperarm twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmTwistsRight = { "UpperarmTwistsRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, UpperarmTwistsRight), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmTwistsRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmTwistsRight_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmTwistsRight_Key_KeyProp = { "UpperarmTwistsRight_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmTwistsRight_ValueProp = { "UpperarmTwistsRight", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmTwistsLeft_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "// Left forearm twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Left forearm twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmTwistsLeft = { "ForearmTwistsLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, ForearmTwistsLeft), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmTwistsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmTwistsLeft_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmTwistsLeft_Key_KeyProp = { "ForearmTwistsLeft_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmTwistsLeft_ValueProp = { "ForearmTwistsLeft", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmTwistsRight_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "// Right forearm twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Right forearm twist bones with twist coeffitients (-1..0..1, number's sign depends on bone orientation, 0 - no twist, 1 - full rotation)" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmTwistsRight = { "ForearmTwistsRight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, ForearmTwistsRight), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmTwistsRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmTwistsRight_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmTwistsRight_Key_KeyProp = { "ForearmTwistsRight_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmTwistsRight_ValueProp = { "ForearmTwistsRight", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SocketsMap_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "// Additional bones to animate relative to real bones. Use this map to animate IK bones.\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Additional bones to animate relative to real bones. Use this map to animate IK bones." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SocketsMap = { "SocketsMap", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, SocketsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SocketsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SocketsMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SocketsMap_Key_KeyProp = { "SocketsMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SocketsMap_ValueProp = { "SocketsMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_ViveMocapKit_EHumanoidBone, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SocketsMap_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SkeletonBonesMap_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "// Map of skeleton bones\n" },
		{ "ModuleRelativePath", "Public/CaptureDevice.h" },
		{ "ToolTip", "Map of skeleton bones" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SkeletonBonesMap = { "SkeletonBonesMap", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaptureDevice, SkeletonBonesMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SkeletonBonesMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SkeletonBonesMap_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SkeletonBonesMap_Key_KeyProp = { "SkeletonBonesMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ViveMocapKit_EHumanoidBone, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SkeletonBonesMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SkeletonBonesMap_ValueProp = { "SkeletonBonesMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCaptureDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NT_TrackersMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NT_TrackersMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NT_TrackersMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NT_Trackers_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NT_Trackers_Target_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NT_Head_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_fShoulderLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_fCalfLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_fThighLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_fForearmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_fUpperarmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FootBoneToGroundZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighToPelvisLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighToPelvisRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmToShoulderLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmToShoulderRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ShoulderToRibcageLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ShoulderToRibcageRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_RibcageToHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_HeadToNeck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshLegsLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshHandsFullLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshForearmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshUpperarmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeshSpineLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ActiveTwists,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ActiveTwists_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ActiveTwists_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SocketTrackers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SocketTrackers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SocketTrackers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_InputComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_InputComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MeasureFootHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bMeasureVerticalAdjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_LastPoseSnapshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_OutPoseSnapshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FullSpineBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FullSpineBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SpineBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SpineBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NeckBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_NeckBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_HandSolverLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_HandSolverRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FingersDataProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_BodyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfLeftTwist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighLeftTwist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfRightTwist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighRightTwist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmLeftTwist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmLeftTwist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmRightTwist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmRightTwist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_TrackersData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_TrackersData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_TrackersData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_KneeTargetLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_KneeTargetRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ElbowTargetLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ElbowTargetRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CapturedBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bShowRefPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpdateServerFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_RemoteInterpolationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FlexibleSpineFromHead_Z_InterpMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FlexibleSpineFromHead_X_InterpMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDebugLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDrawTrackingDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDrawDebugGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bDisablePelvisPositionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bKeepFeetAboveGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_Filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_Filter_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_LeftHandSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_RightHandSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_FingersDataProviderClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClaviclesPitchOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationOffset_Pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationOffset_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationLimit_PitchDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationLimit_PitchUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationLimit_YawBackward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ClavicleRotationLimit_YawForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bMultiMeshUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUniformScaleBasedOnArmSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUniformScaleBasedOnHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_HeightCalibrationAdjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ArmsCalibrationAdjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_HeightScaleCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ArmsScaleCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_RuntimeVerticalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_TorsoVerticalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bCalibrateToPelvisWithOneTorsoTracker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bFlexibleTrosoFromPelvis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_KeepPreciseKneeLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_KeepPreciseKneeLocation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bAdjustScaleWithLegFKSolver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bLimbsFKSolver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bInvertKnees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bInvertElbows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bCaptureRootMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_PreferableKneeOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_PreferableKneeOrientation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUseVRHeadsetForHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MotionControllersTrackingRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_MotionControllersTrackingRole_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bAllowRootBoneAboveSurface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bCaptureFullBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_TwistLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bMirrorShouldersRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bLockShouldersRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SpineBendingMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SkeletonType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SkeletonType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_bUpperTwistFromTorso,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighTwistsLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighTwistsLeft_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighTwistsLeft_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighTwistsRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighTwistsRight_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ThighTwistsRight_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfTwistsLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfTwistsLeft_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfTwistsLeft_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfTwistsRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfTwistsRight_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_CalfTwistsRight_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmTwistsLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmTwistsLeft_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmTwistsLeft_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmTwistsRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmTwistsRight_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_UpperarmTwistsRight_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmTwistsLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmTwistsLeft_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmTwistsLeft_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmTwistsRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmTwistsRight_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_ForearmTwistsRight_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SocketsMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SocketsMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SocketsMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SocketsMap_ValueProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SkeletonBonesMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SkeletonBonesMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SkeletonBonesMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaptureDevice_Statics::NewProp_SkeletonBonesMap_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCaptureDevice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCaptureDevice>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCaptureDevice_Statics::ClassParams = {
		&UCaptureDevice::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCaptureDevice_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCaptureDevice_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCaptureDevice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCaptureDevice()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCaptureDevice_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCaptureDevice, 3813301223);
	template<> VIVEMOCAPKIT_API UClass* StaticClass<UCaptureDevice>()
	{
		return UCaptureDevice::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCaptureDevice(Z_Construct_UClass_UCaptureDevice, &UCaptureDevice::StaticClass, TEXT("/Script/ViveMocapKit"), TEXT("UCaptureDevice"), false, nullptr, nullptr, nullptr);

	void UCaptureDevice::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_fUpperarmLength(TEXT("fUpperarmLength"));
		static const FName Name_fForearmLength(TEXT("fForearmLength"));
		static const FName Name_fThighLength(TEXT("fThighLength"));
		static const FName Name_fCalfLength(TEXT("fCalfLength"));
		static const FName Name_fShoulderLength(TEXT("fShoulderLength"));
		static const FName Name_NT_Head_Target(TEXT("NT_Head_Target"));
		static const FName Name_NT_Trackers_Target(TEXT("NT_Trackers_Target"));

		const bool bIsValid = true
			&& Name_fUpperarmLength == ClassReps[(int32)ENetFields_Private::fUpperarmLength].Property->GetFName()
			&& Name_fForearmLength == ClassReps[(int32)ENetFields_Private::fForearmLength].Property->GetFName()
			&& Name_fThighLength == ClassReps[(int32)ENetFields_Private::fThighLength].Property->GetFName()
			&& Name_fCalfLength == ClassReps[(int32)ENetFields_Private::fCalfLength].Property->GetFName()
			&& Name_fShoulderLength == ClassReps[(int32)ENetFields_Private::fShoulderLength].Property->GetFName()
			&& Name_NT_Head_Target == ClassReps[(int32)ENetFields_Private::NT_Head_Target].Property->GetFName()
			&& Name_NT_Trackers_Target == ClassReps[(int32)ENetFields_Private::NT_Trackers_Target].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCaptureDevice"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCaptureDevice);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
