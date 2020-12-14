// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"



// Sets default values
ACubeCharacter::ACubeCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->degats = 50.0f;

	this->mettreAJourVitesseCubeEnnemi(-200.0f);
}


void ACubeCharacter::toucher()
{
	Destroy();
}

float ACubeCharacter::getDegats()
{
	return this->degats;
}

// Called when the game starts or when spawned
void ACubeCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACubeCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACubeCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACubeCharacter::mettreAJourVitesseCubeEnnemi(float variationVitesse) 
{
	this->GetCharacterMovement()->MaxWalkSpeed += variationVitesse;
}

