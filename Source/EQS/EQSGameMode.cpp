// Copyright Epic Games, Inc. All Rights Reserved.

#include "EQSGameMode.h"
#include "EQSPlayerController.h"
#include "EQSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEQSGameMode::AEQSGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AEQSPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}