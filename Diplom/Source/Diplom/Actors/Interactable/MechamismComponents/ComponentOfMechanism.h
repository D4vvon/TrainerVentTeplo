// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Interactive.h"
#include "UI/PlayerHUDWidget.h"
#include "Characters/Controllers/DPlayerController.h"
#include "ComponentOfMechanism.generated.h"

UCLASS()
class DIPLOM_API AComponentOfMechanism : public AActor, public IInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AComponentOfMechanism();

	virtual void Interact(ADBaseCharacter* Character) override;

	virtual void SetOpacity(ADBaseCharacter* Character) override;

	virtual void SetHighlightObject(ADBaseCharacter* Character) override;

	virtual void RemoveHighlightObject(ADBaseCharacter* Character) override;

	virtual FName GetActionEventName() const override;

	void PlusTemp();

	void SubTemp();

	FName GetDesciption();

	UPlayerHUDWidget* PlayerHUDWidget;
protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Interactive | Copmonent")
	UStaticMeshComponent* ComponentMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Widgets")
	TSubclassOf<class UPlayerHUDWidget> PlayerHUDWidgetClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Widgets")
	ADPlayerController* PlayerController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	FName Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	UMaterial* BasicMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	UMaterial* InteractMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	UMaterial* IntersectionMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	UMaterial* HotMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	UMaterial* ColdMaterial;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	bool isOpascity = false;


};
