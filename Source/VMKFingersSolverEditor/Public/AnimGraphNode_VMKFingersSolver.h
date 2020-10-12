// Copyright Yuri N K, 2018. All Rights Reserved.
// Support: ykasczc@gmail.com

#if WITH_EDITOR

#pragma once

#include "Editor/AnimGraph/Classes/AnimGraphNode_Base.h"
#include "AnimNode_VMKFingersSolver.h"
#include "AnimGraphNode_VMKFingersSolver.generated.h"

/**
 * 
 */
UCLASS()
class VMKFINGERSSOLVEREDITOR_API UAnimGraphNode_VMKFingersSolver : public UAnimGraphNode_Base
{
	GENERATED_UCLASS_BODY()
	
	UPROPERTY(EditAnywhere, Category = "Settings")
	FAnimNode_VMKFingersSolver Node;

	//~ Begin UEdGraphNode Interface.
	virtual FLinearColor GetNodeTitleColor() const override;
	virtual FText GetTooltipText() const override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	//~ End UEdGraphNode Interface.

	//~ Begin UAnimGraphNode_Base Interface
	virtual FString GetNodeCategory() const override;
	//~ End UAnimGraphNode_Base Interface
};

#endif // #if WITH_EDITOR