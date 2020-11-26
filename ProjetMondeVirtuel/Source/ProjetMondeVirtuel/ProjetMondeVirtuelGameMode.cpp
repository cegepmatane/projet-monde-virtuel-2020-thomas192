// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjetMondeVirtuelGameMode.h"
#include "ProjetMondeVirtuelCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

AProjetMondeVirtuelGameMode::AProjetMondeVirtuelGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// Taux de perte de vie du personnage
	tauxPerteVie = 0.01f;
}

void AProjetMondeVirtuelGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Vérifie si on utilise le personnage du projet
	AProjetMondeVirtuelCharacter* personnage = Cast<AProjetMondeVirtuelCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (personnage)
	{
		// Si le personnage a encore de la vie
		if (personnage->getVieActuelle() > 0)
		{
			// Réduit la vie du personnage en utilisant le taux de perte
			personnage->mettreAJourViePersonnage(-DeltaTime * tauxPerteVie * (personnage->getVieInitiale()));
		}
	}
}
