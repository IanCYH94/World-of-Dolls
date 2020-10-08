// Copyright Epic Games, Inc. All Rights Reserved.

#include "WorldOfDollsGameMode.h"
#include "WorldOfDollsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWorldOfDollsGameMode::AWorldOfDollsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
