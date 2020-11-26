// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeRouge.h"

// Sets default values for this actor's properties
ACubeRouge::ACubeRouge()
{
	this->getMailles()->SetSimulatePhysics(false);
	this->getMailles()->SetCastShadow(false);

	this->bonus = 50.0f;
}

void ACubeRouge::attraper_Implementation()
{
	// Utiliser le comportement de base
	Super::attraper_Implementation();
	// Détruire le cube
	Destroy();
}
