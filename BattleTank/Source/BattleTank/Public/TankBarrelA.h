// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrelA.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent), HideCategories = ("Collision"))
class BATTLETANK_API UTankBarrelA : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:

	// -1 is max downward movement, 1 is max upward
	void Elevate(float RelativeSpeed);

private:
	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxDegreesPerSecond = 10;

	UPROPERTY(EditAnywhere, Category = Setup)
	float MinElevationDegrees = 0;

	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxElevationDegrees = 40;
	
};
