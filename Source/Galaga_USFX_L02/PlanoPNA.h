// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EstructuraPNA.h"
#include "MotorPNA.h"
#include "PlanoPNA.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPlanoPNA : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_L02_API IPlanoPNA
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void setArmeria(FString armeria) = 0;
	virtual void setReavastecimiento(FString reavastecimiento) = 0;
	virtual void setHangar(FString hangar) = 0;
	virtual void setEstructura(AEstructuraPNA* estructura) = 0;
	virtual void setMotor(AMotorPNA* motorPNA) = 0;
	virtual void setReparaciones(FString reparaciones) = 0;
};
