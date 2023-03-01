// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "PlayerHUDWidget.generated.h"

UCLASS()
class DIPLOM_API UPlayerHUDWidget : public UUserWidget
{
	GENERATED_BODY()
public:

	void SetHighLightInteractableVisibility(bool bIsVisible);

	void SetHighLightInteractableActionText(FName KeyName);

protected:
	UPROPERTY(meta = (BindWidget))
	class UHighLightInteractable* InteractableKey = nullptr;

};
