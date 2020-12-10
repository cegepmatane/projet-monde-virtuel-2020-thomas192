// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "ProjetMondeVirtuelGameMode.generated.h"

// Diff�rents �tats de jeu
UENUM(BlueprintType)
enum class EEtatJeu : uint8
{
	EEnJeu,
	EFini,
	EInconnu
};

UCLASS(minimalapi)
class AProjetMondeVirtuelGameMode : public AGameMode
{
	GENERATED_BODY()

private:
	/** Garder trace de l'�tat de jeu actuel */
	EEtatJeu etatActuel;

	/** Liste qui stocke les volumes d'apparition instanci�s */
	TArray<class AApparition*> apparitions;

protected:
	/** Taux de perte de vie du personnage */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Vie", Meta = (BlueprintProtected = "true"))
		float tauxPerteVie;

	/** La classe Widget utilis�e pour le HUD */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Vie", Meta = (BlueprintProtected = "true"))
		TSubclassOf<class UUserWidget> classeWidgetHUD;

	/** L'instance du HUD */
	UPROPERTY()
		class UUserWidget* widgetActuel;

private:
	/** G�re les appels de fonction qui d�pendent du changement d'�tat de jeu */
	void gererNouvelEtat(EEtatJeu nouvelEtat);

public:
	AProjetMondeVirtuelGameMode();

	virtual void Tick(float DeltaTime) override;

	virtual void BeginPlay() override;

	/** Retourne l'�tat de jeu actuel */
	UFUNCTION(BlueprintPure, Category = "Cube")
		EEtatJeu getEtatActuel() const;

	/** D�finit l'�tat de jeu actuel */
	void setEtatActuel(EEtatJeu nouvelEtat);
};



