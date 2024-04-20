// Copyright 2024 4eeP. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FCompoundOperatorsModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
