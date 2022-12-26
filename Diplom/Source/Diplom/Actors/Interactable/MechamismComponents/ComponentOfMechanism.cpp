// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Interactable/MechamismComponents/ComponentOfMechanism.h"
#include "Characters/Controllers/DPlayerController.h"
#include "Blueprint/WidgetLayoutLibrary.h"

// Sets default values
AComponentOfMechanism::AComponentOfMechanism()
{
	USceneComponent* DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("CopmonentRoot"));
	SetRootComponent(DefaultSceneRoot);

	ComponentMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ComponentMesh"));
	ComponentMesh->SetupAttachment(DefaultSceneRoot);

	PrimaryActorTick.bCanEverTick = true;
}

void AComponentOfMechanism::Interact(ADBaseCharacter* Character)
{
	GetActionEventName();
	PlayerHUDWidget = CreateWidget<UPlayerHUDWidget>(GetWorld(), PlayerHUDWidgetClass, FName("WBP_PlayerHUD"));
	if (IsValid(PlayerHUDWidget))
	{
		UWidgetLayoutLibrary::RemoveAllWidgets(GetWorld());
		PlayerHUDWidget->AddToViewport();
		PlayerHUDWidget->SetHighLightInteractableActionText(Description);
		PlayerHUDWidget->SetHighLightInteractableVisibility(true);
	}
	else
	{
		FString errorClass = typeid(PlayerHUDWidget).name();
		bool isNull = IsValid(PlayerHUDWidget);
		GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, FString::Printf(TEXT("Object is not valid, %s"), isNull, false));
	}
}

void AComponentOfMechanism::SetOpacity(ADBaseCharacter* Character)
{
	if (!IsValid(BasicMaterial) || !IsValid(InteractMaterial))
	{
		return;
	}
	if (isOpascity == false)
	{
		ComponentMesh->SetMaterial(0, InteractMaterial);
		isOpascity = true;
		return;
	}

	if (isOpascity == true)
	{
		ComponentMesh->SetMaterial(0, BasicMaterial);
		isOpascity = false;
		return;
	}
}

void AComponentOfMechanism::SetHighlightObject(ADBaseCharacter* Character)
{
	if (!IsValid(IntersectionMaterial))
	{
		return;
	}

	ComponentMesh->SetMaterial(0, IntersectionMaterial);
}

void AComponentOfMechanism::RemoveHighlightObject(ADBaseCharacter* Character)
{
	if (!IsValid(BasicMaterial) || !IsValid(InteractMaterial))
	{
		return;
	}

	if (isOpascity == true)
	{
		ComponentMesh->SetMaterial(0, InteractMaterial);
		return;
	}

	if (isOpascity == false)
	{
		ComponentMesh->SetMaterial(0, BasicMaterial);
		return;
	}
}

FName AComponentOfMechanism::GetActionEventName() const
{
	return FName("ActionInteract");
}

FName AComponentOfMechanism::GetDesciption()
{
	return FName("Test Description");
	//return Description;
}

// Called when the game starts or when spawned
void AComponentOfMechanism::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AComponentOfMechanism::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


