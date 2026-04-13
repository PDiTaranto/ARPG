// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/Attributes/ARPGAttributeSet.h"
#include "GameplayEffectExtension.h"

void UARPGAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxHealth());
	}
	else if (Attribute == GetStaminaAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxStamina());
	}
	else if (Attribute == GetManaAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxMana());
	}
	else if (Attribute == GetMaxHealthAttribute())
	{
		NewValue = FMath::Max(NewValue, 0.0f);
	}
	else if (Attribute == GetMaxStaminaAttribute())
	{
		NewValue = FMath::Max(NewValue, 0.0f);
	}
	else if (Attribute == GetMaxManaAttribute())
	{
		NewValue = FMath::Max(NewValue, 0.0f);
	}
}
