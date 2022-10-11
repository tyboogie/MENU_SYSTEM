// Copyright Epic Games, Inc. All Rights Reserved.

#include "MENU_SYSTEMGameMode.h"
#include "MENU_SYSTEMCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMENU_SYSTEMGameMode::AMENU_SYSTEMGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
