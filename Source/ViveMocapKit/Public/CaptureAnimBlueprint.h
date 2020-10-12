// (c) Yuri N. K. 2017. All rights reserved.
// ykasczc@gmail.com

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Animation/PoseSnapshot.h"
#include "CaptureAnimBlueprint.generated.h"

/* Parent Anim Instance class to update automatically skeleton state from UCaptureDevice */
UCLASS(Blueprintable)
class VIVEMOCAPKIT_API UCaptureAnimBlueprint : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeUpdateAnimation(float DeltaTimeX) override;

protected:

	/* Reference to local player's CaptureDevice Component */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	class UCaptureDevice* CaptureDevice;

	/* Should skeletal mesh be scaled to actor's height? */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	bool bEnableScaling;

	/* Location of Root Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FVector RootLocation;
	/* Rotation of Root Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FRotator RootRotation;

	/* Location of Pelvis Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FVector PelvisLocation;	
	/* Rotation of Pelvis Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FRotator PelvisRotation;

	/* Location of Ribcage Bone (last spine bone) in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FVector RibcageLocation;
	/* Rotation of Ribcage Bone (last spine bone) in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FRotator RibcageRotation;

	/* Location of Head Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FVector HeadLocation;
	/* Rotation of Head Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FRotator HeadRotation;

	/* Location of Right Upperarm Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FVector UpperarmRightLocation;
	/* Rotation of Right Upperarm Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FRotator UpperarmRightRotation;
	/* Rotation of Right Upperarm Bone in World Space without twist rotation component */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FRotator UpperarmRightNoRollRotation;

	/* Location of Right Forearm Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FVector ForearmRightLocation;
	/* Rotation of Right Forearm Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FRotator ForearmRightRotation;

	/* Location of Right Palm Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FVector HandRightLocation;
	/* Rotation of Right Palm Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FRotator HandRightRotation;

	/* Location of Left Upperarm Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FVector UpperarmLeftLocation;
	/* Rotation of Left Upperarm Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FRotator UpperarmLeftRotation;
	/* Rotation of Left Upperarm Bone in World Space without twist rotation component */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FRotator UpperarmLeftNoRollRotation;

	/* Location of Left Forearm Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FVector ForearmLeftLocation;
	/* Rotation of Left Forearm Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FRotator ForearmLeftRotation;

	/* Location of Left Palm Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FVector HandLeftLocation;
	/* Rotation of Left Palm Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FRotator HandLeftRotation;

	/* Location of Right Thigh Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FVector ThighRightLocation;
	/* Rotation of Right Thigh Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FRotator ThighRightRotation;

	/* Location of Right Calf Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FVector CalfRightLocation;
	/* Rotation of Right Calf Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FRotator CalfRightRotation;

	/* Location of Right Foot Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FVector FootRightLocation;
	/* Rotation of Right Foot Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FRotator FootRightRotation;

	/* Location of Left Thigh Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FVector ThighLeftLocation;
	/* Rotation of Left Thigh Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FRotator ThighLeftRotation;

	/* Location of Left Calf Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FVector CalfLeftLocation;
	/* Rotation of Left Calf Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FRotator CalfLeftRotation;

	/* Location of Left Foot Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FVector FootLeftLocation;
	/* Rotation of Left Foot Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FRotator FootLeftRotation;

	/* Location of Right Elbow joint target in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FVector IKTarget_ElbowRight;
	/* Location of Left Elbow joint target in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FVector IKTarget_ElbowLeft;
	/* Location of Right Knee joint target in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FVector IKTarget_KneeRight;
	/* Location of Left Knee joint target in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FVector IKTarget_KneeLeft;

	/* Rotation of Right Shoulder Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FRotator ShoulderRightRotation;
	/* Rotation of Left Shoulder Bone in World Space */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FRotator ShoulderLeftRotation;

	/* Current Pose Snapshot (array of bone transforms in local space) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bones Data")
	FPoseSnapshot CurrentPose;
};
