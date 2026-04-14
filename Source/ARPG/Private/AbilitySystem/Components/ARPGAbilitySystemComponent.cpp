// Created by Pablo Di Taranto

#include "AbilitySystem/Components/ARPGAbilitySystemComponent.h"
#include "AbilitySystem/Abilities/ARPGGameplayAbility.h"
#include "GameplayAbilitySpec.h"

bool UARPGAbilitySystemComponent::TryActivateAbilityByInputTag(const FGameplayTag& InputTag)
{
	if (!InputTag.IsValid())
	{
		return false;
	}

	for (const FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		const UARPGGameplayAbility* ARPGAbility = Cast<UARPGGameplayAbility>(AbilitySpec.Ability);
		if (!ARPGAbility)
		{
			continue;
		}

		if (ARPGAbility->GetAbilityInputTag() != InputTag)
		{
			continue;
		}
		return TryActivateAbility(AbilitySpec.Handle);
	}
	return false;
}
