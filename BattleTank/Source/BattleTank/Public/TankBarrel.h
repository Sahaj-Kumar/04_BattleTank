// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankBarrel : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:

	void Elevate(float DegreePerSecond);
	
	
};
