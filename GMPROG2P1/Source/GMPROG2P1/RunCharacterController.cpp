// Fill out your copyright notice in the Description page of Project Settings.


#include "RunCharacterController.h"
#include "RunCharacter.h"
void ARunCharacterController::BeginPlay()
{
	Super::BeginPlay();

	 Runcharacter = Cast<ARunCharacter>(this->GetPawn());
}

void ARunCharacterController::MoveForward(float scale)
{

}

void ARunCharacterController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAxis("MoveRight", this, &ARunCharacterController::MoveRight);
}

void ARunCharacterController::MoveRight(float scale)
{
	Runcharacter->AddMovementInput(Runcharacter->GetActorRightVector()*scale, 1.0f, false);
	
}


void ARunCharacterController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Runcharacter->

	Runcharacter->AddMovementInput(Runcharacter->GetActorForwardVector(), 1.0f, false);
}
