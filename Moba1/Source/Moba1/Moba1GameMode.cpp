// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Moba1GameMode.h"
#include "Moba1PlayerController.h"
#include "Moba1Character.h"
#include "UObject/ConstructorHelpers.h"

AMoba1GameMode::AMoba1GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AMoba1PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}