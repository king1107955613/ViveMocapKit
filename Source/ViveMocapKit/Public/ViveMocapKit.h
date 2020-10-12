// (c) Yuri N. K. 2017. All rights reserved.
// ykasczc@gmail.com

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FViveMocapKitModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};