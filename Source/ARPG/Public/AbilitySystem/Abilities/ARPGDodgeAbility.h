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
};
