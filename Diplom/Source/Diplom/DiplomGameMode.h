// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Http.h"
#include "DiplomGameMode.generated.h"

UCLASS(minimalapi)
class ADiplomGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADiplomGameMode();

	virtual void StartPlay() override;

private:
	
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully);
};



