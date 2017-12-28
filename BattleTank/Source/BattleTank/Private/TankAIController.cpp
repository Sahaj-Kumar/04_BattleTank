// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "Tank.h"


void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ATankAIController::Tick(float DeltaTime)
{

	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	auto ControlledTank = Cast<ATank>(GetPawn());

	Super::Tick(DeltaTime);
	if (PlayerTank) {
		// TODO move towards player
		MoveToActor(PlayerTank, AcceptanceRadius);

		// aim towards the player
		ControlledTank->AimAt(PlayerTank->GetActorLocation());
		
		// fire if ready
		ControlledTank->Fire();
	}
}


