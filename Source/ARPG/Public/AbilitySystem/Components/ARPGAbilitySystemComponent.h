// Created by Pablo Di Taranto

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GameplayTagContainer.h"
#include "ARPGAbilitySystemComponent.generated.h"

UCLASS()
class ARPG_API UARPGAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:
	bool TryActivateAbilityByInputTag(const FGameplayTag& InputTag);
};
