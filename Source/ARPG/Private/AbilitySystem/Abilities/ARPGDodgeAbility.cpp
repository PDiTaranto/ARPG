// Created by Pablo Di Taranto

#include "AbilitySystem/Abilities/ARPGDodgeAbility.h"
#include "Input/Tags/ARPGGameplayTags.h"

UARPGDodgeAbility::UARPGDodgeAbility()
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

FGameplayTag UARPGDodgeAbility::GetAbilityInputTag() const
{
	return FARPGGameplayTags::Get().InputTag_Dodge;
}

