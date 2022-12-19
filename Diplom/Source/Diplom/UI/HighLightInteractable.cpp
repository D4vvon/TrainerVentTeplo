// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/HighLightInteractable.h"
#include <Components/TextBlock.h>

void UHighLightInteractable::SetActionText(FName KeyName)
{
	if (IsValid(ActionText))
	{
		ActionText->SetText(FText::FromName(KeyName));
	}
}
