// Fill out your copyright notice in the Description page of Project Settings.


#include "PNA.h"

// Sets default values
APNA::APNA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void APNA::setEstructura(EstructuraPNA* estructuraPNA)
{
}

void APNA::setMotorPNA(MotorPNA* motorPNA)
{
}

// Called when the game starts or when spawned
void APNA::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APNA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

