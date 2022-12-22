// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/PlayerHUDWidget.h"
#include "HighLightInteractable.h"
#include "Components/TextBlock.h"

void UPlayerHUDWidget::SetHighLightInteractableVisibility(bool bIsVisible)
{
	if (!IsValid(InteractableKey))
	{
		FString errorClass = typeid(InteractableKey).name();
		GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, FString::Printf(TEXT("InteractableKey is not valid, %s"), *errorClass, true));
		return;
	}

	if (bIsVisible)
	{
		InteractableKey->SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		InteractableKey->SetVisibility(ESlateVisibility::Hidden);
	}
}

void UPlayerHUDWidget::SetHighLightInteractableActionText(FName KeyName)
{
	if (!IsValid(InteractableKey))
	{
		FString errorClass = typeid(InteractableKey).name();
		GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, FString::Printf(TEXT("InteractableKey is not valid, %s"), *errorClass, true));
		return;
	}
	InteractableKey->SetActionText(KeyName);

}

