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

	bool GetIsQuest();

	void SetIsQuest(bool IsQuest_);

	void SetVisibilityToBorderQuest();

	void UpdateTextToPrint();

	void SetTextToBorderText(FName TextToPrint);

protected:
	UPROPERTY(meta = (BindWidget))
	class UHighLightInteractable* InteractableKey = nullptr;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UVentilationUI* ventUI;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTeploControlUI* teploUI;

	UPROPERTY(BlueprintReadWrite)
	bool bIsQuest = false;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UBorder* BorderForQuest;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* TextForQuest;


};
