// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PNABuilder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPNABuilder : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_L02_API IPNABuilder
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void buildArmeria() = 0;
	virtual void buildReavastecimiento() = 0;
	virtual void buildHangar() = 0;
	virtual void buildEstructura() = 0;
	virtual void buildMotores() = 0;
	virtual void buildReparaciones() = 0;
	virtual class APNA* getPNA() = 0;
};
