// (c) YuriNK, 2019, ykasczc@gmail.com
// Exporting UAnimSequence to BVH animation file

#pragma once

#include "CoreMinimal.h"
#include "ReferenceSkeleton.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AnimationExportFunctionLibrary.generated.h"

class UAnimSequence;

/**
 * Function library to export/import UE4 animation to/from additional formats
 */
UCLASS()
class VIVEMOCAPKIT_API UAnimationExportFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	/* Export Anim Sequence asset to BVH animation file
	* @param AnimSequence					Animation sequence to export
	* @param FileName						Full file name to create/save
	* @param bFirstFrameReferencePose		Should insert first frame with reference pose?
	* @param bOverwrite						Should overwrite existing file?
	*/
	UFUNCTION(BlueprintCallable, Category = "Animation Export Function Library")
	static bool ExportAnimSequenceToBVH(const UAnimSequence* AnimSequence, const FString& FileName, bool bFirstFrameReferencePose = true, bool bOverwrite = true);

private:
	/**
	* BVH Export helper functions
	*/

	/** Recursively add root/joint to OutData */
	static void AddJointToBVHFile(int32 NestingNum, int32 BoneIndex, const FReferenceSkeleton& RefSkeleton, const TMultiMap<int32, int32>& Hierarchy, TSet<int32>& OutBonesOutput, TArray<FString>& OutData);
};
