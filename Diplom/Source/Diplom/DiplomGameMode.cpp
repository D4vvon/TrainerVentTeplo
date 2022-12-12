// Copyright Epic Games, Inc. All Rights Reserved.

#include "DiplomGameMode.h"
#include "DiplomCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADiplomGameMode::ADiplomGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
