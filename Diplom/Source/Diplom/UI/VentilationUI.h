// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Actors/Interactable/MechamismComponents/ComponentOfMechanism.h>
#include "VentilationUI.generated.h"

/**
 * 
 */
UCLASS()
class DIPLOM_API UVentilationUI : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable)
	void startRotateFan();

	UFUNCTION(BlueprintCallable)
	void stopRotateFan();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MaterialPipe")
	AComponentOfMechanism* VentFan;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MaterialPipe")
	FRotator RotationFanSpeed = FRotator(0.0f, 10.0f, 0.0f);
};
