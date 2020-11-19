// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Cube.generated.h"

UCLASS()
class PROJETMONDEVIRTUEL_API ACube : public AActor
{
	GENERATED_BODY()
private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Cube", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* mailles;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cube", meta = (AllowPrivateAccess = "true"))
	int bonus;
public:	
	// Sets default values for this actor's properties
	ACube();
	FORCEINLINE class UStaticMeshComponent* getMailles() { return this->mailles; }
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable, Category="Cube")
	void multiplierBonus(int multiplieur);

};
