// Copyright Epic Games, Inc. All Rights Reserved.

#include "GMPROG2P1GameMode.h"
#include "GMPROG2P1Character.h"
#include "UObject/ConstructorHelpers.h"

AGMPROG2P1GameMode::AGMPROG2P1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
