// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "../../UI/PlayerHUDWidget.h"
#include "DPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class DIPLOM_API ADPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void SetPawn(APawn* InPawn) override;

	//UPlayerHUDWidget* GetPlayerHUDWidget();

	UPlayerHUDWidget* PlayerHUDWidget = nullptr;
protected:
	virtual void SetupInputComponent() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Widgets")
	TSubclassOf<class UPlayerHUDWidget> PlayerHUDWidgetClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Widgets")
	TSubclassOf<class AComponentOfMechanism> CopmonentOfMechanismClass;

private:
	void OnInteractableObjectFound(FName ActionName);

	void MoveForward(float Value);
	void MoveRight(float Value);
	void Turn(float Value);
	void LookUp(float Value);

	void Jump();

	void ChangeMouseCursor();

	void Interact();
	void SetOpacity();

	void CreateAndInitializeWidgets();


	APlayerController* PlayerController;

	AComponentOfMechanism* ComponentsOfMechanism;

	TSoftObjectPtr<class ADBaseCharacter> CachedBaseCharacter;
};
