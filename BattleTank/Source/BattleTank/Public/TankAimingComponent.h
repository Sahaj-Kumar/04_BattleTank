// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"

// Forward Declaration
class UTankBarrelA;

// Holds barrel propertiers
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BATTLETANK_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTankAimingComponent();

	void SetBarrelReference(UTankBarrelA* BarrelToSet);

	void AimAt(FVector WorldSpaceAim, float LaunchSpeed);

	// TODO add set turret reference

private:
	UTankBarrelA* Barrel = nullptr;
	void MoveBarrelTowards(FVector AimDirection);
	
};
