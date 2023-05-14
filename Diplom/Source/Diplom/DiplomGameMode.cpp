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

void ADiplomGameMode::StartPlay()
{
	Super::StartPlay();

	FHttpRequestRef Request = FHttpModule::Get().CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(this, &ADiplomGameMode::OnResponseReceived);
	Request->SetURL("http://127.0.0.1:8080/data.json");
	Request->SetVerb("GET");
	Request->ProcessRequest();
}

void ADiplomGameMode::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully)
{
	UE_LOG(LogTemp, Display, TEXT("Response %s"), *Response->GetContentAsString());
}
