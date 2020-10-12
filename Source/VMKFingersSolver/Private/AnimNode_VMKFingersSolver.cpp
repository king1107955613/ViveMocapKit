// Copyright Yuri N K, 2018. All Rights Reserved.
// Support: ykasczc@gmail.com

#include "AnimNode_VMKFingersSolver.h"
#include "VMKFingersSolverTypes.h"
#include "VMKFingersFKIKSolver.h"
#include "SceneManagement.h"
#include "Animation/AnimInstanceProxy.h"
#include "Runtime/Launch/Resources/Version.h"

DECLARE_CYCLE_STAT(TEXT("FingersGripVMK Eval"), STAT_FingersGripVMK_Eval, STATGROUP_Anim);

FAnimNode_VMKFingersSolver::FAnimNode_VMKFingersSolver()
	: Solver(nullptr)
	, Alpha(1.f)
	, bBoneIndicesCached(false)
{
}

void FAnimNode_VMKFingersSolver::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
	FAnimNode_Base::Initialize_AnyThread(Context);
	InputPose.Initialize(Context);
}

void FAnimNode_VMKFingersSolver::Update_AnyThread(const FAnimationUpdateContext& Context)
{
#if ENGINE_MINOR_VERSION > 21
	GetEvaluateGraphExposedInputs().Execute(Context);
#else
	EvaluateGraphExposedInputs.Execute(Context);
#endif
	InputPose.Update(Context);
}

void FAnimNode_VMKFingersSolver::CacheBones_AnyThread(const FAnimationCacheBonesContext& Context)
{
	InputPose.CacheBones(Context);
	bBoneIndicesCached = false;
}

void FAnimNode_VMKFingersSolver::GatherDebugData(FNodeDebugData& DebugData)
{
	FString DebugLine = DebugData.GetNodeName(this);
	DebugLine += FString::Printf(TEXT("Alpha (%.1f%%)"), Alpha * 100.f);
	DebugData.AddDebugItem(DebugLine);

	InputPose.GatherDebugData(DebugData);
}

void FAnimNode_VMKFingersSolver::Evaluate_AnyThread(FPoseContext& Output)
{
	// Evaluate incoming pose into our output buffer.
	InputPose.Evaluate(Output);

	if (!FAnimWeight::IsRelevant(Alpha))
	{
		return;
	}
	if (!Solver || !Solver->IsInitialized())
	{
		return;
	}

	// array of bone transforms
	FCompactPose& OutPose = Output.Pose;
	// bone container
	const FBoneContainer& BoneContainer = OutPose.GetBoneContainer();

	// rebuild cache
	// @TODO: implement caching
	/*
	if (!bBoneIndicesCached)
	{
		BoneIndicesCache.SetNumUninitialized(OutPose.GetNumBones());
		int32 KnuckleBonesNum = 0;

		for (auto& Finger : FingerTipBones)
		{
			FVMK_FingerSolver* FingerSolver = Solver->Fingers.Find(Finger.Key);
			if (!FingerSolver)
			{
				continue;
			}
			FCompactPoseBoneIndex NextCompactPoseIndex = FCompactPoseBoneIndex(0);
			const int32 MaxInd = FingerSolver->Knuckles.Num() - 1;
			for (int32 KnuckleIndex = MaxInd; KnuckleIndex >= 0; KnuckleIndex--)
			{
				FCompactPoseBoneIndex CurrentCompactPoseIndex = (KnuckleIndex == MaxInd) ? Finger.Value.GetCompactPoseIndex(BoneContainer) : NextCompactPoseIndex;
				const FVMK_Knuckle& CurrKnuckle = FingerSolver->Knuckles[KnuckleIndex];
				if (CurrentCompactPoseIndex == INDEX_NONE) continue;

				if (BoneIndicesCache.Num() <= CurrKnuckle.BoneIndex)
				{
					BoneIndicesCache.SetNumUninitialized(CurrKnuckle.BoneIndex + 1);
				}
				BoneIndicesCache[CurrKnuckle.BoneIndex] = CurrentCompactPoseIndex;

				NextCompactPoseIndex = BoneContainer.GetParentBoneIndex(CurrentCompactPoseIndex);
			}
		}
	}
	*/

	// update bones
	int32 KnuckleBonesNum = 0;
	for (auto& Finger : FingerTipBones)
	{
		FVMK_FingerSolver* FingerSolver = Solver->Fingers.Find(Finger.Key);
		if (!FingerSolver)
		{
			continue;
		}

		if (Finger.Value.BoneIndex == INDEX_NONE)
		{
			Finger.Value.Initialize(BoneContainer);
		}

		KnuckleBonesNum += FingerSolver->KnucklesNum;

		FCompactPoseBoneIndex NextCompactPoseIndex = FCompactPoseBoneIndex(0);
		const int32 MaxInd = FingerSolver->Knuckles.Num() - 1;
		for (int32 KnuckleIndex = MaxInd; KnuckleIndex >= 0; KnuckleIndex--)
		{
			FVMK_Knuckle& CurrKnuckle = FingerSolver->Knuckles[KnuckleIndex];
			// @TODO: implement caching
			//FCompactPoseBoneIndex CurrentCompactPoseIndex = BoneIndicesCache[CurrKnuckle.BoneIndex];
			FCompactPoseBoneIndex CurrentCompactPoseIndex = (KnuckleIndex == MaxInd) ? Finger.Value.GetCompactPoseIndex(BoneContainer) : NextCompactPoseIndex;

			if (CurrentCompactPoseIndex == INDEX_NONE)
			{
				break;
			}
			
			const FTransform& LocalTransform = OutPose[CurrentCompactPoseIndex];
			const FTransform& SolverTransform = CurrKnuckle.RelativeTransform;

			FTransform NewTransform = LocalTransform;
			if (FingerSolver->Alpha == 1.f && Alpha == 1.f)
			{
				NewTransform.SetRotation(SolverTransform.GetRotation());
			}
			else if (FingerSolver->Alpha > 0.f || Alpha > 0.f)
			{				
				FQuat NewRot = FQuat::FastLerp(LocalTransform.GetRotation(), SolverTransform.GetRotation(), FingerSolver->Alpha * Alpha);
				NewRot.Normalize();
				NewTransform.SetRotation(NewRot);
			}

			OutPose[CurrentCompactPoseIndex] = NewTransform;
			NextCompactPoseIndex = BoneContainer.GetParentBoneIndex(CurrentCompactPoseIndex);
		}
	}
}