// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Error, TEXT("ControlledTank Error"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("TankPlayerController %s"), *ControlledTank->GetName());
	}
	
}
ATank * ATankPlayerController::GetControlledTank() const
{
	UE_LOG(LogTemp, Warning, TEXT("GetControlledTank"));
	return Cast<ATank>(GetPawn());
}



