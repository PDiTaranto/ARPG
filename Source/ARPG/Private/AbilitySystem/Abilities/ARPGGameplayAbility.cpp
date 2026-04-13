// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Abilities/ARPGGameplayAbility.h"
#include "Player/Characters/ARPGPlayerCharacter.h"
#include "Player/Controllers/ARPGPlayerController.h"
#include "AbilitySystem/Components/ARPGAbilitySystemComponent.h"
#include "AbilitySystem/Attributes/ARPGAttributeSet.h"

AARPGPlayerCharacter* UARPGGameplayAbility::GetARPGPlayerCharacterFromActorInfo() const
{
	return Cast<AARPGPlayerCharacter>(GetAvatarActorFromActorInfo());
}

AARPGPlayerController* UARPGGameplayAbility::GetARPGPlayerControllerFromActorInfo() const
{
	return Cast<AARPGPlayerController>(GetCurrentActorInfo() ? GetCurrentActorInfo()->PlayerController.Get() : nullptr);
}

UARPGAbilitySystemComponent* UARPGGameplayAbility::GetARPGAbilitySystemComponentFromActorInfo() const
{
	return Cast<UARPGAbilitySystemComponent>(GetAbilitySystemComponentFromActorInfo());
}

const UARPGAttributeSet* UARPGGameplayAbility::GetARPGAttributeSetFromActorInfo() const
{
	const AARPGPlayerCharacter* PlayerCharacter = GetARPGPlayerCharacterFromActorInfo();
	return PlayerCharacter?
		Cast<UARPGAttributeSet>(PlayerCharacter->GetAbilitySystemComponent()->GetAttributeSet(UARPGAttributeSet::StaticClass()))
		: nullptr;
}

