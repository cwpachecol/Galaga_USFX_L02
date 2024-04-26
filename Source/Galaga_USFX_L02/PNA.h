// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlanoPNA.h"
#include "MotorPNA.h"
#include "PNA.generated.h"

class EstructuraPNA;
class MotorPNA;

UCLASS()
class GALAGA_USFX_L02_API APNA : public AActor, public IPlanoPNA
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APNA();

private:
	EstructuraPNA* estructuraPNA;
	MotorPNA* motorPNA;

public:
	virtual void setEstructura(EstructuraPNA* estructuraPNA);
	virtual void setMotorPNA(MotorPNA* motorPNA);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
