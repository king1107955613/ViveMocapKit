// Copyright Yuri N K, 2018. All Rights Reserved.
// Support: ykasczc@gmail.com

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "VMKFingersSolverTypes.h"
#include "AnimNode_VMKFingersSolver.generated.h"

class UVMKFingersFKIKSolver;

/**
 * Animation node: apply fingers relative transforms to animation data
 */
USTRUCT(BlueprintInternalUseOnly)
struct VMKFINGERSSOLVER_API FAnimNode_VMKFingersSolver : public FAnimNode_Base
{
	GENERATED_USTRUCT_BODY()

	/** Input animation. Can contain different initial poses, but they all generally should be open (not in fist) **/
	UPROPERTY(EditAnywhere, Category = "Links")
	FPoseLink InputPose;

	/** Names of finger tip bones **/
	UPROPERTY(EditAnywhere, Category = "Settings")
	TMap<EVMK_FingerName, FBoneReference> FingerTipBones;

	/** Reference to Finger FK-IK Solver object **/
	UPROPERTY(EditAnywhere, meta = (PinShownByDefault), Category = "Settings")
	UVMKFingersFKIKSolver* Solver;

	/** Alpha value **/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", meta = (PinShownByDefault))
	mutable float Alpha;

protected:
	UPROPERTY(Transient)
	bool bBoneIndicesCached;

	TArray<FCompactPoseBoneIndex> BoneIndicesCache;

public:
	FAnimNode_VMKFingersSolver();

	// FAnimNode_Base interface
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
	virtual void Update_AnyThread(const FAnimationUpdateContext& Context) override;
	virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context) override;
	virtual void Evaluate_AnyThread(FPoseContext& Output) override;
	virtual void GatherDebugData(FNodeDebugData& DebugData) override;
	// End of FAnimNode_Base interface
};