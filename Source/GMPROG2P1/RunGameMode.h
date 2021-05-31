// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RunGameMode.generated.h"


/**
 * 
 */
UCLASS()
class GMPROG2P1_API ARunGameMode : public AGameModeBase
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;
	UFUNCTION()
	void onTileExit(class AFloorTile* floorTile);
	UPROPERTY(EditAnywhere)
		TSubclassOf <class AFloorTile> TilePrefab;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FTransform NewTransformPoint;

	
	 UFUNCTION()
	void AddTile();
public :


ARunGameMode();
};
