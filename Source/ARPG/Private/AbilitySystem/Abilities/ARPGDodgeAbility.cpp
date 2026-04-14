// Fill out your copyright notice in the Description page of Project Settings.

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

