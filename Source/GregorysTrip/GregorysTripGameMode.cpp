// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GregorysTripGameMode.h"
#include "GregorysTripPlayerController.h"
#include "GregorysTripCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGregorysTripGameMode::AGregorysTripGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGregorysTripPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}