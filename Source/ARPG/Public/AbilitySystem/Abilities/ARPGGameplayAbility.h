// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
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
};
