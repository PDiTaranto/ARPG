// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

struct FARPGGameplayTags
{
public:
	static const FARPGGameplayTags& Get();
	static void InitializeNativeGameplayTags();

public:
	FGameplayTag InputTag_Move;
	FGameplayTag InputTag_Look;
	FGameplayTag InputTag_Jump;
	FGameplayTag InputTag_Dodge;
	FGameplayTag InputTag_LightAttack;
	FGameplayTag InputTag_HeavyAttack;
	FGameplayTag InputTag_Ability1;
	FGameplayTag InputTag_Ability2;
	FGameplayTag InputTag_Interact;

private:
	static FARPGGameplayTags GameplayTags;
};
