// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "../Actors/Interactable/MechamismComponents/ComponentOfMechanism.h"
#include "TeploControlUI.generated.h"

/**
 * 
 */
UCLASS()
class DIPLOM_API UTeploControlUI : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void PlusTemp();

	UFUNCTION(BlueprintCallable)
	void SubTemp();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MaterialPipe")
	AComponentOfMechanism* TeploPipe;
};
