// Fill out your copyright notice in the Description page of Project Settings.

#include "TankBarrelA.h"


void UTankBarrelA::Elevate(float RelativeSpeed)
{
	//UE_LOG(LogTemp, Warning, TEXT("%f: Barrel Elevate called at %f"), Time, RelativeSpeed);

	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, 1);
	auto ElevationChange = RelativeSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto RawNewElevation = RelativeRotation.Pitch + ElevationChange;
	auto Elevation = FMath::Clamp<float>(RawNewElevation, MinElevationDegrees, MaxElevationDegrees);

	SetRelativeRotation(FRotator(Elevation, 0, 0));

}

