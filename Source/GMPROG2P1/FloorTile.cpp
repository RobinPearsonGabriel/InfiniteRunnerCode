// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "FloorTile.h"
#include "Components/ArrowComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Components/BoxComponent.h"
#include "RunCharacter.h"
#include "Kismet/KismetMathLibrary.h"
#include "Obstacle.h"

// Sets default values
AFloorTile::AFloorTile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	root = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));

	Floor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Floor"));
	WallA = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallA"));
	WallB = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallB"));
	AttatchPoint = CreateDefaultSubobject<UArrowComponent>(TEXT("ATTATCH POINT"));

	ExitTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("ExitTrigger"));
	TileBox= CreateDefaultSubobject<UBoxComponent>(TEXT("Tile Spawn Box"));

	Floor->SetupAttachment(root);
	WallA->SetupAttachment(root);
	WallB->SetupAttachment(root);
	AttatchPoint->SetupAttachment(root);
	ExitTrigger->SetupAttachment(root);
	TileBox->SetupAttachment(root);

	
}

// Called when the game starts or when spawned
void AFloorTile::BeginPlay()
{
	Super::BeginPlay();

	ExitTrigger->OnComponentBeginOverlap.AddDynamic(this, &AFloorTile::OnActorOverlap);
	SpawnTile();
	

}

void AFloorTile::DestroyTile()
{
	for (AActor* Obj:Trash)
	{
		Obj->Destroy();
	}

	Destroy();
}

// Called every frame
void AFloorTile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FVector AFloorTile::Getnextpoint()
{
	return AttatchPoint->GetComponentLocation();
}

void AFloorTile::SpawnTile()
{
	int32 rand;
	
	rand =FMath::RandRange(0, ObstacleClasses.Num()-1);

	if (!ObstacleClasses[rand]) return;
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.bNoFail = true;
	SpawnParams.Owner = this;
	//SpawnParams.Instigator = this;

	FTransform pos;
	//FVector location = 
	pos.SetLocation(UKismetMathLibrary::RandomPointInBoundingBox(this->TileBox->Bounds.Origin, this->TileBox->Bounds.BoxExtent));
	pos.SetRotation(GetActorRotation().Quaternion());

	AObstacle* obstacle = Cast<AObstacle>(GetWorld()->SpawnActor<AObstacle>(ObstacleClasses[rand],pos , SpawnParams));
	//floorTile->OnPlayerExit.AddDynamic(this, &ARunGameMode::onTileExit);
	//NewTransformPoint.SetLocation(floorTile->Getnextpoint());
	
	Trash.Add(obstacle);
}



void AFloorTile::OnActorOverlap( UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (ARunCharacter* Character = Cast<ARunCharacter>(OtherActor))
	{
	
		if (GEngine) 
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Hit"));

		OnPlayerExit.Broadcast(this);

		FTimerHandle TimerHanle;
		GetWorldTimerManager().SetTimer(TimerHanle, this, &AFloorTile::DestroyTile, 1.0f, false, 1.0f);
		
	}
}



