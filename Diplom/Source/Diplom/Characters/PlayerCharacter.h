// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DBaseCharacter.h"
#include "GameFramework/Controller.h"
#include "PlayerCharacter.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class DIPLOM_API APlayerCharacter : public ADBaseCharacter
{
	GENERATED_BODY()

public:
	APlayerCharacter();

	virtual void MoveForward(float Value) override;
	virtual void MoveRight(float Value) override;
	virtual void Turn(float Value) override;
	virtual void LookUp(float Value) override;

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character | Camera")
	class UCameraComponent* CameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character | Camera")
	class USpringArmComponent* SpringArmComponent;

	
};
