// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RunCharacterController.generated.h"

/**
 * 
 */
UCLASS()
class GMPROG2P1_API ARunCharacterController : public APlayerController
{
	GENERATED_BODY()
	

		virtual void BeginPlay() override;
protected:
	void MoveRight(float scale);
	
	void MoveForward(float scale);

	virtual void SetupInputComponent() override;
	bool canMove;
class ARunCharacter* Runcharacter;

public:
	UFUNCTION(BlueprintCallable)
		void CantMove();
	virtual void Tick(float DeltaTime) override;
	//UFUNCTION(BlueprintImplementableEvent)
//	void OnTileExit()

	


};
