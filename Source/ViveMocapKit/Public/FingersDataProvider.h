// Copyright Yuri N K, 2018. All Rights Reserved.
// Support: ykasczc@gmail.com

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VMKFingersSolverSetup.h"
#include "VMKFingersFKIKSolver.h"
#include "FingersDataProvider.generated.h"

/**
 * Providing information about fingers for finger solver
 * Abstract class. Create child classes/blueprints to setup input from different devices.
 */
UCLASS(Blueprintable)
class VIVEMOCAPKIT_API UFingersDataProvider : public UObject
{
	GENERATED_BODY()
	
public:
	/*
	* Should use detailed or basic input?
	* Detailed input includes 3DOF rotation for each joint in degrees.
	* Basic input gives scalar 0..1 curl value for each finger.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	bool bUseDetailedFingerInfo;

	/*
	* Reference to capture device component, initialized automatically by parent object
	*/
	UPROPERTY(BlueprintReadOnly, Category = "Settings")
	class UCaptureDevice* CaptureDevice;

	/*
	* Initialize input reference pose (depends on used VR gloves or another data provider)
	* By default, reference pose of skeletal mesh is used.
	* @param SkeletalMeshName name of used skeletal mesh, use it to separate reference poses for different meshes when needed
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "Fingers Data Provider")
	void GetReferencePose(const FName& SkeletalMeshName, FVMK_FingersPosePreset& OutFingersPose);
	virtual void GetReferencePose_Implementation(const FName& SkeletalMeshName, FVMK_FingersPosePreset& OutFingersPose) {};

	/*
	* Get detailed hand data. Override this function if bUseDetailedFingerInfo is true.
	* @param	Hand		left or right hand
	* @return				current fingers pose 
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "Fingers Data Provider")
	void GetFingersPoseDetailed(EVMK_VRHand Hand, FVMK_FingersDetailedInfo& OutFingersPose);
	virtual void GetFingersPoseDetailed_Implementation(EVMK_VRHand Hand, FVMK_FingersDetailedInfo& OutFingersPose) {};

	/*
	* Get hand data. Override this function if bUseDetailedFingerInfo is false.
	* @param	Hand		left or right hand
	* @return				current fingers pose
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "Fingers Data Provider")
	void GetFingersPose(EVMK_VRHand Hand, FVMK_FingersPosePreset& OutFingersPose);
	virtual void GetFingersPose_Implementation(EVMK_VRHand Hand, FVMK_FingersPosePreset& OutFingersPose) {};
};
