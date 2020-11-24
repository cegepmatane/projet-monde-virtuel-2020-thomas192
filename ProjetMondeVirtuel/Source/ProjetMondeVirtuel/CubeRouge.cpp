// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeRouge.h"

// Sets default values for this actor's properties
ACubeRouge::ACubeRouge()
{

}

void ACubeRouge::attraper_Implementation()
{
	Super::attraper_Implementation();
	Destroy();
}
