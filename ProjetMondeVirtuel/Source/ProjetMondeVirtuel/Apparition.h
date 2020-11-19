// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/World.h"
#include "Cube.h"
#include "Apparition.generated.h"

UCLASS()
class PROJETMONDEVIRTUEL_API AApparition : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Apparition", meta = (AllowPrivateAccess = "true"));
	class UBoxComponent* zone;
	UPROPERTY(EditAnywhere, Category = "Apparition")
	TSubclassOf<class ACube> objetCubeBleu;
	UPROPERTY(EditAnywhere, Category = "Apparition")
	TSubclassOf<class ACube> objetCubeRouge;
	void apparaitre();

public:	
	// Sets default values for this actor's properties
	AApparition();
	FORCEINLINE class UBoxComponent* getZone() const { return this->zone;  }
	UFUNCTION(BlueprintPure, Category = "Apparition")
	FVector getPointsAuHasard();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FTimerHandle minuteur;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
