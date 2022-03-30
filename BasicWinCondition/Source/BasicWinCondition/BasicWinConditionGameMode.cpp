// Copyright Epic Games, Inc. All Rights Reserved.

#include "BasicWinConditionGameMode.h"
#include "BasicWinConditionCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABasicWinConditionGameMode::ABasicWinConditionGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
