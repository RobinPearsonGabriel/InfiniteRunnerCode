// Fill out your copyright notice in the Description page of Project Settings.


#include "RunGameMode.h"
#include "FloorTile.h"
#include "Math/TransformNonVectorized.h"
#include "RunCharacter.h"
void ARunGameMode::onTileExit(AFloorTile* floorTile)
{

	AddTile();
}



void ARunGameMode::AddTile()
{
	if (!TilePrefab) return;
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.bNoFail = true;
	SpawnParams.Owner = this;
	//SpawnParams.Instigator = this;
	
	AFloorTile* floorTile = Cast<AFloorTile>(GetWorld()->SpawnActor<AFloorTile>(TilePrefab,NewTransformPoint, SpawnParams ));
	floorTile->OnPlayerExit.AddDynamic(this, &ARunGameMode::onTileExit );
	NewTransformPoint.SetLocation(floorTile->Getnextpoint());
}
ARunGameMode::ARunGameMode()
{


}

void ARunGameMode::BeginPlay()
{
	Super::BeginPlay();
	for (int32 i = 0; i < 10; i++)
	{
		AddTile();
	}

ARunCharacter* player=Cast<ARunCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());
player->OnDeath.AddDynamic(this,&ARunGameMode::Restart);
//	AFloorTile* tile= Cast<ASamplePawn>(Get)
}