// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../../../../../../UE4/UE_5.0/Engine/Source/Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "PlayerHUDWidget.generated.h"

UCLASS()
class DIPLOM_API UPlayerHUDWidget : public UUserWidget
{
	GENERATED_BODY()
public:

	void SetHighLightInteractableVisibility(bool bIsVisible);

	void SetHighLightInteractableActionText(FName KeyName);

	void SetOpacityToHalfOfObject(UStaticMeshComponent* staticmeshcomp, UMaterialInterface* material);

	void SetOpacityToFullOfObject(UStaticMeshComponent* staticmeshcomp, UMaterialInterface* material);

protected:
	UPROPERTY(meta = (BindWidget))
	class UHighLightInteractable* InteractableKey = nullptr;

};
