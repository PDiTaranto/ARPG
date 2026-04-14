// Fill out your copyright notice in the Description page of Project Settings.

#include "AbilitySystem/Abilities/ARPGJumpAbility.h"
#include "Player/Characters/ARPGPlayerCharacter.h"

UARPGJumpAbility::UARPGJumpAbility()
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	AbilityInputTag = FARPGGameplayTags::Get().InputTag_Jump;
}

void UARPGJumpAbility::ActivateAbility(
	const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	AARPGPlayerCharacter* PlayerCharacter = GetARPGPlayerCharacterFromActorInfo();
	if (!PlayerCharacter)
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		return;
	}

	PlayerCharacter->Jump();

	EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}

void UARPGJumpAbility::EndAbility(
	const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo,
	bool bReplicateEndAbility,
	bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}
