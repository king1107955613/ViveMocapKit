// Copyright Yuri N K, 2018. All Rights Reserved.
// Support: ykasczc@gmail.com

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/EngineTypes.h"
#include "VMKFingersSolverTypes.h"
#include "VMKFingersSolverSetup.generated.h"

/**
 * Global fingers settings. Create separate objects for all hands.
 */
UCLASS(BlueprintType)
class VMKFINGERSSOLVER_API UVMKFingersSolverSetup : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UVMKFingersSolverSetup(const FObjectInitializer& ObjectInitializer);

	/**
	* Hand side associated with this asset
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	EVMK_VRHand Hand;

	/**
	* Trace distance from knuckle to inside and outside
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	float TraceHalfDistance;

	/**
	* Trace channel to probe: Visible, Camera etc
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	TEnumAsByte<ECollisionChannel> TraceChannel;

	/**
	* Should trace by trace channel (false) or object type (true)
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	bool bTraceByObjectType;

	/**
	* Lower border for VR input (in degrees). VR input values (0..1) are interpolated to (InputMinRotation, InputMaxRotation)
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	float InputMinRotation;

	/**
	* Upper border for VR input (in degrees). VR input values (0..1) are interpolated to (InputMinRotation, InputMaxRotation)
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	float InputMaxRotation;

	/**
	* Interpolatoin speed for processing poses applied by SetFingersPose function
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	float PosesInterpolationSpeed;

	/**
	* Fingers settings.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Setup")
	TMap<EVMK_FingerName, FVMK_FingerSolver> Fingers;
};
