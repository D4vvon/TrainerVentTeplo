// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "QuestHUD.generated.h"

/**
 * 
 */
UCLASS()
class DIPLOM_API UQuestHUD : public UUserWidget
{
	GENERATED_BODY()
	
public:
	
	UFUNCTION(BlueprintCallable)
	void SetVisibilityToBorderQuest();

	UFUNCTION(BlueprintCallable)
	void UpdateTextToPrint();
protected:
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
