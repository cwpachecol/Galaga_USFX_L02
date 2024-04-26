// Fill out your copyright notice in the Description page of Project Settings.


#include "Capsula.h"
#include "Components/StaticMeshComponent.h"
#include "MovimientoAleatorio.h"

// Sets default values
ACapsula::ACapsula()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mallaCapsula = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaCapsula"));
	movimientoAleatorio = CreateDefaultSubobject<UMovimientoAleatorio>(TEXT("MovimientoAleatorio"));
	//mallaNaveEnemiga->SetStaticMesh(malla.Object);
	mallaCapsula->SetupAttachment(RootComponent);
	RootComponent = mallaCapsula;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane'"));
	mallaCapsula->SetStaticMesh(malla.Object);

	

}

// Called when the game starts or when spawned
void ACapsula::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Capsula creada"));
	SetLifeSpan(10);
}

// Called every frame
void ACapsula::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

