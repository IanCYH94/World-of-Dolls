// Copyright Epic Games, Inc. All Rights Reserved.

#include "AiGameMode.h"
#include "AiCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAiGameMode::AAiGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
