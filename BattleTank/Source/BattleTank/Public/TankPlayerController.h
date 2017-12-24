// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

private:

	ATank* GetControlledTank() const;

	// aim the barrel to where firing would hit crosshair
	void AimTowardsCrossHair();

	// returns out parameter OutHitLocation, and returns true if location is in landscape
	bool GetSightRayHitLocation(FVector& OutHitLocation) const;
	
};
