// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "G312ShootersGameMode.h"
#include "G312ShootersHUD.h"
#include "G312ShootersCharacter.h"
#include "UObject/ConstructorHelpers.h"

AG312ShootersGameMode::AG312ShootersGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AG312ShootersHUD::StaticClass();
}
