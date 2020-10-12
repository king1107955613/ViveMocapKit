// (c) Yuri N. K. 2017. All rights reserved.
// ykasczc@gmail.com

#include "CaptureAnimBlueprint.h"
#include "Animation/PoseSnapshot.h"
#include "CaptureDevice.h"

void UCaptureAnimBlueprint::NativeUpdateAnimation(float DeltaTimeX)
{
	Super::NativeUpdateAnimation(DeltaTimeX);

	// setup reference
	if (!IsValid(CaptureDevice))
	{
		AActor* CustomOwner = GetOwningActor();
		if (CustomOwner)
		{
			UActorComponent* DeviceComp = CustomOwner->GetComponentByClass(UCaptureDevice::StaticClass());

			if (DeviceComp)
			{
				CaptureDevice = Cast<UCaptureDevice>(DeviceComp);
				if (!IsValid(CaptureDevice)) return;
			}
			else return;
		}
		else return;		
	}

	if (!CaptureDevice->IsCapturing()) return;

	// load FVector and FRotator for each bone
	FCaptureBodyState& bs = CaptureDevice->CapturedBody;

	// load values
	RootLocation = bs.Root.GetTranslation();
	RootRotation = bs.Root.Rotator();
	PelvisLocation = bs.Pelvis.GetTranslation();
	PelvisRotation = bs.Pelvis.Rotator();
	RibcageLocation = bs.Ribcage.GetTranslation();
	RibcageRotation = bs.Ribcage.Rotator();
	HeadLocation = bs.Head.GetTranslation();
	HeadRotation = bs.Head.Rotator();
	ShoulderRightRotation = bs.ShoulderRight.Rotator();
	UpperarmRightLocation = bs.UpperarmRight.GetTranslation();
	UpperarmRightRotation = bs.UpperarmRight.Rotator();
	ForearmRightLocation = bs.ForearmRight.GetTranslation();
	ForearmRightRotation = bs.ForearmRight.Rotator();
	HandRightLocation = bs.PalmRight.GetTranslation();
	HandRightRotation = bs.PalmRight.Rotator();
	ShoulderLeftRotation = bs.ShoulderLeft.Rotator();
	UpperarmLeftLocation = bs.UpperarmLeft.GetTranslation();
	UpperarmLeftRotation = bs.UpperarmLeft.Rotator();
	ForearmLeftLocation = bs.ForearmLeft.GetTranslation();
	ForearmLeftRotation = bs.ForearmLeft.Rotator();
	HandLeftLocation = bs.PalmLeft.GetTranslation();
	HandLeftRotation = bs.PalmLeft.Rotator();
	ThighRightLocation = bs.ThighRight.GetTranslation();
	ThighRightRotation = bs.ThighRight.Rotator();
	CalfRightLocation = bs.CalfRight.GetTranslation();
	CalfRightRotation = bs.CalfRight.Rotator();
	FootRightLocation = bs.FootRight.GetTranslation();
	FootRightRotation = bs.FootRight.Rotator();
	ThighLeftLocation = bs.ThighLeft.GetTranslation();
	ThighLeftRotation = bs.ThighLeft.Rotator();
	CalfLeftLocation = bs.CalfLeft.GetTranslation();
	CalfLeftRotation = bs.CalfLeft.Rotator();
	FootLeftLocation = bs.FootLeft.GetTranslation();
	FootLeftRotation = bs.FootLeft.Rotator();

	// or just update Pose Snapshot
	CaptureDevice->GetSkeletalMeshPose(CurrentPose, bEnableScaling);

	UpperarmRightNoRollRotation = bs.UpperarmRight_NoRoll;
	UpperarmLeftNoRollRotation = bs.UpperarmLeft_NoRoll;

	// joint targets
	IKTarget_ElbowRight = CaptureDevice->ElbowTargetRight;
	IKTarget_ElbowLeft = CaptureDevice->ElbowTargetLeft;
	IKTarget_KneeRight = CaptureDevice->KneeTargetRight;
	IKTarget_KneeLeft = CaptureDevice->KneeTargetLeft;
}
