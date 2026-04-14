// Created by Pablo Di Taranto

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GameplayTagContainer.h"
#include "ARPGGameplayAbility.generated.h"

class AARPGPlayerCharacter;
class AARPGPlayerController;
class UARPGAbilitySystemComponent;
class UARPGAttributeSet;

/**
 * 
 */
UCLASS()
class ARPG_API UARPGGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

protected:
	AARPGPlayerCharacter* GetARPGPlayerCharacterFromActorInfo() const;
	AARPGPlayerController* GetARPGPlayerControllerFromActorInfo() const;
	UARPGAbilitySystemComponent* GetARPGAbilitySystemComponentFromActorInfo() const;
	const UARPGAttributeSet* GetARPGAttributeSetFromActorInfo() const;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ARPG|Input")
	FGameplayTag AbilityInputTag;

public:
	virtual FGameplayTag GetAbilityInputTag() const { return AbilityInputTag; }
};
