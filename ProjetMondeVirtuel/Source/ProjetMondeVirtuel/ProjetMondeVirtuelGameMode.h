// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "ProjetMondeVirtuelGameMode.generated.h"

UCLASS(minimalapi)
class AProjetMondeVirtuelGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	AProjetMondeVirtuelGameMode();

	virtual void Tick(float DeltaTime) override;

protected:
	/** Taux de perte de vie du personnage */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Vie")
	float tauxPerteVie;
};



