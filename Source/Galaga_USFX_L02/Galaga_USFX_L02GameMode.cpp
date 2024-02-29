// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L02GameMode.h"
#include "Galaga_USFX_L02Pawn.h"
#include "NaveEnemiga.h"

AGalaga_USFX_L02GameMode::AGalaga_USFX_L02GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_L02Pawn::StaticClass();
	NaveEnemiga01 = nullptr;
}

void AGalaga_USFX_L02GameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing

	FVector ubicacionNave = FVector(-900.0f, 50.0f, 250.0f);
	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		NaveEnemiga01 = World->SpawnActor<ANaveEnemiga>(ubicacionNave, rotacionNave);
	}

	NaveEnemiga01->SetPosicionX(2000.0f);
	
}

