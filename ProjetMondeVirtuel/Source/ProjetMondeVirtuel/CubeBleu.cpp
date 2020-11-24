// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeBleu.h"

// Sets default values for this actor's properties
ACubeBleu::ACubeBleu()
{

}

void ACubeBleu::attraper_Implementation()
{
	Super::attraper_Implementation();
	Destroy();
}
