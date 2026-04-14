// Created by Pablo Di Taranto

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/ARPGGameplayAbility.h"
#include "Input/Tags/ARPGGameplayTags.h"
#include "ARPGJumpAbility.generated.h"

UCLASS()
class ARPG_API UARPGJumpAbility : public UARPGGameplayAbility
{
	GENERATED_BODY()

public:
	UARPGJumpAbility();

	virtual void ActivateAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData) override;

	virtual void EndAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		bool bReplicateEndAbility,
		bool bWasCancelled) override;

	virtual FGameplayTag GetAbilityInputTag() const override;
};
