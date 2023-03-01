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
