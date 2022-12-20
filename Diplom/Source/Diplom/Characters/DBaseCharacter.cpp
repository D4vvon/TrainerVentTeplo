// Fill out your copyright notice in the Description page of Project Settings.


#include "DBaseCharacter.h"
#include "../Actors/Interactable/Interactive.h"


void ADBaseCharacter::EndPlay(const EEndPlayReason::Type Reason)
{
	if (OnIntractableObjectFound.IsBound())
	{
		OnIntractableObjectFound.Unbind();
	}
	Super::EndPlay(Reason);
}

void ADBaseCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	TraceLineOfSight();
}

void ADBaseCharacter::Interact()
{
	if (LineOfSightObject.GetInterface())
	{
		LineOfSightObject->Interact(this);
	}
}

void ADBaseCharacter::SetOpacity()
{
	if (LineOfSightObject.GetInterface())
	{
		LineOfSightObject->SetOpacity(this);
	}
}

void ADBaseCharacter::TraceLineOfSight()
{
	if (!IsPlayerControlled())
	{
		return;
	}

	FVector ViewLocation;
	FRotator ViewRotation;

	APlayerController* PlayerController = GetController<APlayerController>();
	PlayerController->GetPlayerViewPoint(ViewLocation, ViewRotation);

	FVector ViewDirection = ViewRotation.Vector();
	FVector TraceEnd = ViewLocation + ViewDirection * LineOfSightDistance;

	FHitResult HitResult;

	(GetWorld()->LineTraceSingleByChannel(HitResult, ViewLocation, TraceEnd, ECC_Visibility));
		if (LineOfSightObject.GetObject() != HitResult.GetActor())
		{
			LineOfSightObject = HitResult.GetActor();

			FName ActionName;
			if (LineOfSightObject.GetInterface())
			{
				ActionName = LineOfSightObject->GetActionEventName();
			}
			else
			{
				ActionName = NAME_None;
			}
			OnIntractableObjectFound.ExecuteIfBound(ActionName);
		}

}
