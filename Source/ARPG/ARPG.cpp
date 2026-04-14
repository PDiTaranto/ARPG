// Copyright Epic Games, Inc. All Rights Reserved.

#include "ARPG.h"
#include "Modules/ModuleManager.h"
#include "Input/Tags/ARPGGameplayTags.h"

class FARPGModule : public FDefaultGameModuleImpl
{
	virtual void StartupModule() override
	{
		FARPGGameplayTags::InitializeNativeGameplayTags();
	}

	virtual void ShutdownModule() override
	{
	}
};

IMPLEMENT_PRIMARY_GAME_MODULE(FARPGModule, ARPG, "ARPG");

DEFINE_LOG_CATEGORY(LogARPG)