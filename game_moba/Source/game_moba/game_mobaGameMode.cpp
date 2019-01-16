// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "game_mobaGameMode.h"
#include "game_mobaPlayerController.h"
#include "game_mobaCharacter.h"
#include "UObject/ConstructorHelpers.h"

Agame_mobaGameMode::Agame_mobaGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = Agame_mobaPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}