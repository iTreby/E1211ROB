// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "E1211ROBEGameMode.h"
#include "E1211ROBEHUD.h"
#include "E1211ROBECharacter.h"
#include "UObject/ConstructorHelpers.h"

AE1211ROBEGameMode::AE1211ROBEGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AE1211ROBEHUD::StaticClass();
}
