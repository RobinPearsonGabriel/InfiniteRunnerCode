// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloorTile.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerExitSignaiture, class AFloorTile*,Tile);
UCLASS()
class GMPROG2P1_API AFloorTile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloorTile();

	UPROPERTY(BlueprintAssignable)
		FPlayerExitSignaiture OnPlayerExit;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void DestroyTile();

	TArray<AActor*>Trash;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UBoxComponent* TileBox;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* Floor;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* WallA;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* WallB;

	UPROPERTY(EditAnywhere)
	TArray<	TSubclassOf <class AObstacle>> ObstacleClasses;

	UPROPERTY(BlueprintReadOnly)
		class USceneComponent* root;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UArrowComponent* AttatchPoint;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UBoxComponent* ExitTrigger;


	void SpawnTile();



	
UFUNCTION()
 void OnActorOverlap(  UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FVector Getnextpoint();
	 

	//	FComponentBeginOverlapSignature, UPrimitiveComponent OnComponentBeginOverlap, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult
	
};
