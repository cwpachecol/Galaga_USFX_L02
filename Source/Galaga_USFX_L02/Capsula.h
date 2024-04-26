// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Capsula.generated.h"

class UStaticMeshComponent;
class UMovimientoAleatorio;

UCLASS()
class GALAGA_USFX_L02_API ACapsula : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACapsula();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* mallaCapsula;

	UMovimientoAleatorio* movimientoAleatorio;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
