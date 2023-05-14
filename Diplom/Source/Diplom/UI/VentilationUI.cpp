// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/VentilationUI.h"

void UVentilationUI::stopRotateFan()
{
	VentFan->SetActorRelativeRotation(FRotator(0.0f, 0.0f, 0.0f).Quaternion(), false, nullptr, ETeleportType::None);
}

void UVentilationUI::startRotateFan()
{
	VentFan->SetActorRelativeRotation(RotationFanSpeed.Quaternion(), false, nullptr, ETeleportType::None);
}

void UVentilationUI::CreateRequest()
{
	FHttpRequestRef Request = FHttpModule::Get().CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(this, &UVentilationUI::OnResponseReceived);
	Request->SetURL("http://127.0.0.1:8080/data.json");
	Request->SetVerb("GET");
	Request->ProcessRequest();
}

void UVentilationUI::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully)
{
	UE_LOG(LogTemp, Display, TEXT("Response %s"), *Response->GetContentAsString());
}