// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L02GameMode.h"
#include "Galaga_USFX_L02Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaTransporte.h"

AGalaga_USFX_L02GameMode::AGalaga_USFX_L02GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_L02Pawn::StaticClass();
	//NaveEnemiga01 = nullptr;
}

void AGalaga_USFX_L02GameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing

	FVector ubicacionInicialNaves = FVector(600.0f, 0.0f, 200.0f);

	/*FVector ubicacionNaveCaza01 = FVector(-900.0f, 500.0f, 250.0f);
	FVector ubicacionNaveCaza02 = FVector(-500.0f, 500.0f, 250.0f);
	FVector ubicacionNaveTransporte01 = FVector(-900.0f, -500.0f, 250.0f);
	FVector ubicacionNaveTransporte02 = FVector(-500.0f, -500.0f, 250.0f);*/
	
	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		FVector ubicacionActual = ubicacionInicialNaves;
		for (int i = 0; i < 5; i++) {
			ubicacionActual = FVector(ubicacionActual.X, ubicacionActual.Y + 300.0f * (float)i, ubicacionActual.Z);
			ANaveEnemigaCaza* NaveEnemigaCazaActual = World->SpawnActor<ANaveEnemigaCaza>(ubicacionActual, rotacionNave);
			TANavesEnemigasCaza.Add(NaveEnemigaCazaActual);
		}

		ubicacionInicialNaves.X = ubicacionInicialNaves.X - 300.0f;
		for (int j = 0; j < 5; j++) {
			ubicacionActual.Y = ubicacionActual.Y + 300.0f * (float)j;
			ANaveEnemigaTransporte* NaveEnemigaTransporteActual = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionActual, rotacionNave);
			TANavesEnemigasTransporte.Add(NaveEnemigaTransporteActual);
		}


		//NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNaveCaza01, rotacionNave);
		//NaveEnemigaCaza02 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNaveCaza02, rotacionNave);
		//NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNaveTransporte01, rotacionNave);
		//NaveEnemigaTransporte02 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNaveTransporte02, rotacionNave);

	}

}

