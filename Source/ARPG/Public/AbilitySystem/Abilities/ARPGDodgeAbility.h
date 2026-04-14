// Created by Pablo Di Taranto

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/ARPGGameplayAbility.h"
#include "GameplayTagContainer.h"
#include "ARPGDodgeAbility.generated.h"

UCLASS()
class ARPG_API UARPGDodgeAbility : public UARPGGameplayAbility
{
	GENERATED_BODY()

public:
	UARPGDodgeAbility();

	virtual FGameplayTag GetAbilityInputTag() const override;

	virtual void ActivateAbility(
	const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData) override;

	virtual bool CanActivateAbility(
	const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayTagContainer* SourceTags = nullptr,
	const FGameplayTagContainer* TargetTags = nullptr,
	FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;
};
