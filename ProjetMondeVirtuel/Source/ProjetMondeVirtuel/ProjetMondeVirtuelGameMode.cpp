// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjetMondeVirtuelGameMode.h"
#include "ProjetMondeVirtuelCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjetMondeVirtuelGameMode::AProjetMondeVirtuelGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
