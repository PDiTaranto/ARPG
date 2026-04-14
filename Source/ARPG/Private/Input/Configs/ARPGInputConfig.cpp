// Created by Pablo Di Taranto

#include "Input/Configs/ARPGInputConfig.h"
#include "InputAction.h"
#include "ARPG.h"

const UInputAction* UARPGInputConfig::FindInputActionByTag(const FGameplayTag& InputTag, bool bLogNotFound) const
{
	for (const FARPGInputAction& Action : AbilityInputActions)
	{
		if (Action.InputAction && Action.InputTag == InputTag)
		{
			return Action.InputAction;
		}
	}

	if (bLogNotFound)
	{
		UE_LOG(LogARPG, Warning, TEXT("Could not find InputAction for InputTag [%s] in [%s]"), *InputTag.ToString(), *GetNameSafe(this));
	}

	return nullptr;
}
