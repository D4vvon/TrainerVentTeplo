// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Components/TextBlock.h>
#include "HighLightInteractable.generated.h"

class UTextBlock;

UCLASS()
class DIPLOM_API UHighLightInteractable : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void SetActionText(FName KeyName);

protected:
	UPROPERTY(meta = (BindWidget))
	UTextBlock* ActionText;
};
