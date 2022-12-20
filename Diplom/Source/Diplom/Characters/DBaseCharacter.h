// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include <UObject/ScriptInterface.h>
#include "DBaseCharacter.generated.h"

DECLARE_DELEGATE_OneParam(FOnIntractableObjectFound, FName);

class IInteractable;

UCLASS(Abstract, NotBlueprintable)
class DIPLOM_API ADBaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	virtual void EndPlay(const EEndPlayReason::Type Reason) override;

	virtual void Tick(float DeltaSeconds);


	virtual void MoveForward(float Value) {};
	virtual void MoveRight(float Value) {};
	virtual void Turn(float Value) {};
	virtual void LookUp(float Value) {};

	virtual void ChangeMouseCursor() {};

	virtual void Interact();
	virtual void SetOpacity();
	FOnIntractableObjectFound OnIntractableObjectFound;

protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Character | LineTrace")
	float  LineOfSightDistance = 300.0f;

	void TraceLineOfSight();

	UPROPERTY()
	TScriptInterface<IInteractable> LineOfSightObject;
};
