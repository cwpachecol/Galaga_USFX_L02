// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoAleatorio.h"

// Sets default values for this component's properties
UMovimientoAleatorio::UMovimientoAleatorio()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	MovementRadius = 5;

}


// Called when the game starts
void UMovimientoAleatorio::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMovimientoAleatorio::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

    AActor* Parent = GetOwner();
    if (Parent)
    {
        // Find a new position for the object to go to
        auto NewPos = Parent->GetActorLocation() +
            FVector
            (
                FMath::FRandRange(-1, 1) *
                MovementRadius,
                FMath::FRandRange(-1, 1) *
                MovementRadius,
                FMath::FRandRange(-1, 1) *
                MovementRadius
            );
        // Update the object's position
        Parent->SetActorLocation(NewPos);
    }


}

