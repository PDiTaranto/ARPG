// Created by Pablo Di Taranto

#include "AbilitySystem/Abilities/ARPGDodgeAbility.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Input/Tags/ARPGGameplayTags.h"
#include "Player/Characters/ARPGPlayerCharacter.h"

UARPGDodgeAbility::UARPGDodgeAbility()
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

FGameplayTag UARPGDodgeAbility::GetAbilityInputTag() const
{
	return FARPGGameplayTags::Get().InputTag_Dodge;
}

void UARPGDodgeAbility::ActivateAbility(
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

	const FVector DodgeDirection = PlayerCharacter->GetDesiredMovementDirection();
	PlayerCharacter->LaunchCharacter(DodgeDirection * 600.0f, true, true);

	EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}

bool UARPGDodgeAbility::CanActivateAbility(
	const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayTagContainer* SourceTags,
	const FGameplayTagContainer* TargetTags,
	FGameplayTagContainer* OptionalRelevantTags) const
{
	if (!Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags))
	{
		return false;
	}

	const AARPGPlayerCharacter* PlayerCharacter = Cast<AARPGPlayerCharacter>(GetAvatarActorFromActorInfo());
	if (!PlayerCharacter)
	{
		return false;
	}

	return !PlayerCharacter->GetCharacterMovement()->IsFalling();
}

