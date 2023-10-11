// Copyright Epic Games, Inc. All Rights Reserved.

#include "PickpocketGameMode.h"
#include "PickpocketCharacter.h"
#include "UObject/ConstructorHelpers.h"

APickpocketGameMode::APickpocketGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
