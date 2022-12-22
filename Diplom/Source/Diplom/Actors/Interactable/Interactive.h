// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "../../Characters/DBaseCharacter.h"
#include "Interactive.generated.h"

UINTERFACE(MinimalAPI)
class UInteractable : public UInterface
{
	GENERATED_BODY()
};

class DIPLOM_API IInteractable
{

	GENERATED_BODY()
public:
	virtual void Interact(ADBaseCharacter* Character) PURE_VIRTUAL(IInteractable::Interact, );
	virtual void SetOpacity(ADBaseCharacter* Character) PURE_VIRTUAL(IInteractable::SetOpacity, );
	virtual void SetHighlightObject(ADBaseCharacter* Character) PURE_VIRTUAL(IInteractable::SetHighlightObject, );
	virtual void RemoveHighlightObject(ADBaseCharacter* Character) PURE_VIRTUAL(IInteractable::RemoveHighlightObject, );
	virtual FName GetActionEventName() const PURE_VIRTUAL(IInteractable::GetActionEventName(), return FName(NAME_None););
};
