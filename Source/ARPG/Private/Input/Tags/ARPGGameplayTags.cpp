// Fill out your copyright notice in the Description page of Project Settings.


#include "Input/Tags/ARPGGameplayTags.h"
#include "GameplayTagsManager.h"

FARPGGameplayTags FARPGGameplayTags::GameplayTags;

const FARPGGameplayTags& FARPGGameplayTags::Get()
{
	return GameplayTags;
}

void FARPGGameplayTags::InitializeNativeGameplayTags()
{
	GameplayTags.InputTag_Move = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.Move"),
		FString("Input tag for movement input")
	);

	GameplayTags.InputTag_Look = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.Look"),
		FString("Input tag for look input")
	);

	GameplayTags.InputTag_Jump = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.Jump"),
		FString("Input tag for jump input")
	);

	GameplayTags.InputTag_Dodge = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.Dodge"),
		FString("Input tag for dodge input")
	);

	GameplayTags.InputTag_LightAttack = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.LightAttack"),
		FString("Input tag for light attack input")
	);

	GameplayTags.InputTag_HeavyAttack = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.HeavyAttack"),
		FString("Input tag for heavy attack input")
	);

	GameplayTags.InputTag_Ability1 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.Ability1"),
		FString("Input tag for ability 1 input")
	);

	GameplayTags.InputTag_Ability2 = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.Ability2"),
		FString("Input tag for ability 2 input")
	);

	GameplayTags.InputTag_Interact = UGameplayTagsManager::Get().AddNativeGameplayTag(
		FName("InputTag.Interact"),
		FString("Input tag for interact input")
	);
}
