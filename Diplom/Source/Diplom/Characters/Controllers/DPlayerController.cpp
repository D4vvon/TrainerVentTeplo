// Fill out your copyright notice in the Description page of Project Settings.


#include "DPlayerController.h"
#include "../DBaseCharacter.h"
#include "../../UI/PlayerHUDWidget.h"
#include "Actors/Interactable/MechamismComponents/ComponentOfMechanism.h"

void ADPlayerController::SetPawn(APawn* InPawn)
{
	Super::SetPawn(InPawn);
	CachedBaseCharacter = Cast<ADBaseCharacter>(InPawn);

	PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	ComponentsOfMechanism = Cast<AComponentOfMechanism>(CopmonentOfMechanismClass);

	if (IsLocalController() && CachedBaseCharacter.IsValid())
	{
		CreateAndInitializeWidgets();
		CachedBaseCharacter->OnIntractableObjectFound.BindUObject(this, &ADPlayerController::OnInteractableObjectFound);
	}
}

void ADPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAxis("MoveForward", this, &ADPlayerController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ADPlayerController::MoveRight);
	InputComponent->BindAxis("Turn", this, &ADPlayerController::Turn);
	InputComponent->BindAxis("LookUp", this, &ADPlayerController::LookUp);
	InputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this, &ADPlayerController::Jump);
	InputComponent->BindAction("ShowCursor", EInputEvent::IE_Pressed, this, &ADPlayerController::ChangeMouseCursor);
	InputComponent->BindAction("ActionInteract", EInputEvent::IE_Pressed, this, &ADPlayerController::Interact);
}

void ADPlayerController::OnInteractableObjectFound(FName ActionName)
{
	if (!IsValid(PlayerHUDWidget))
	{
		GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Red, FString(TEXT("PlayerHUD is not valid")), true);
		return;
	}
	//FName ActionKey = FName("Test description");
	//FName ActionKey = ComponentsOfMechanism->GetDesciption();

	//PlayerHUDWidget->SetHighLightInteractableActionText(ActionKey);
	PlayerHUDWidget->SetHighLightInteractableVisibility(false);

}

void ADPlayerController::MoveForward(float Value)
{
	if (CachedBaseCharacter.IsValid())
	{
		CachedBaseCharacter->MoveForward(Value);
	}
}

void ADPlayerController::MoveRight(float Value)
{
	if (CachedBaseCharacter.IsValid())
	{
		CachedBaseCharacter->MoveRight(Value);
	}
}

void ADPlayerController::Turn(float Value)
{
	if (CachedBaseCharacter.IsValid())
	{
		CachedBaseCharacter->Turn(Value);
	}
}

void ADPlayerController::LookUp(float Value)
{
	if (CachedBaseCharacter.IsValid())
	{
		CachedBaseCharacter->LookUp(Value);
	}
}

void ADPlayerController::Jump()
{
	if (CachedBaseCharacter.IsValid())
	{
		CachedBaseCharacter->Jump();
	}
}

void ADPlayerController::ChangeMouseCursor()
{
	if (PlayerController->bShowMouseCursor == false)
	{
		PlayerController->bShowMouseCursor = true;
		PlayerController->SetInputMode(FInputModeGameAndUI());
		//GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Red, FString(TEXT("MC set to true")), true);
		return;
	}
	else if (PlayerController->bShowMouseCursor == true)
	{
		PlayerController->bShowMouseCursor = false;
		PlayerController->SetInputMode(FInputModeGameOnly());
		//GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Red, FString(TEXT("MC set to false")), true);
		return;
	}
}

void ADPlayerController::Interact()
{
	if (CachedBaseCharacter.IsValid())
	{
		CachedBaseCharacter->Interact();
	}
}

void ADPlayerController::CreateAndInitializeWidgets()
{
	if (!IsValid(PlayerHUDWidget))
	{
		PlayerHUDWidget = CreateWidget<UPlayerHUDWidget>(GetWorld(), PlayerHUDWidgetClass, FName("WBP_PlayerHUD"));

		if (IsValid(PlayerHUDWidget))
		{
			//GEngine->AddOnScreenDebugMessage(1, 1.0f, FColor::Green, FString(TEXT("PlayerHUDAdded")), false);
			PlayerHUDWidget->AddToViewport();
		}
	}
}
