// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/TeploControlUI.h"
#include "../Actors/Interactable/MechamismComponents/ComponentOfMechanism.h"

void UTeploControlUI::PlusTemp()
{
	AComponentOfMechanism* TeploPipePtr = Cast<AComponentOfMechanism>(TeploPipe);
	if (IsValid(TeploPipePtr))
	{
		TeploPipePtr->PlusTemp();
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Cast failed"));
	}
}

void UTeploControlUI::SubTemp()
{
	AComponentOfMechanism* TeploPipePtr = Cast<AComponentOfMechanism>(TeploPipe);
	if (IsValid(TeploPipePtr))
	{
		TeploPipePtr->SubTemp();
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Cast failed"));
	}
}
