// Copyright Epic Games, Inc. All Rights Reserved.

#include "Doll_MyBuildGameMode.h"
#include "Doll_MyBuildCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADoll_MyBuildGameMode::ADoll_MyBuildGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
