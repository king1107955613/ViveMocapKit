// Copyright Yuri N K, 2018. All Rights Reserved.
// Support: ykasczc@gmail.com

#if WITH_EDITOR

#include "AnimGraphNode_VMKFingersSolver.h"

#define LOCTEXT_NAMESPACE "AnimGraphNode_VMKFingersSolver"

UAnimGraphNode_VMKFingersSolver::UAnimGraphNode_VMKFingersSolver(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FLinearColor UAnimGraphNode_VMKFingersSolver::GetNodeTitleColor() const
{
	return FLinearColor(FColor::Orange);
}

FText UAnimGraphNode_VMKFingersSolver::GetTooltipText() const
{
	return LOCTEXT("AnimGraphNode_FingersGrip_Tooltip", "Applies Fingers Solver to animation frame");
}

FText UAnimGraphNode_VMKFingersSolver::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("AnimGraphNode_FingersGrip", "Fingers Solver");
}

FString UAnimGraphNode_VMKFingersSolver::GetNodeCategory() const
{
	return TEXT("IK");
}

#undef LOCTEXT_NAMESPACE

#endif