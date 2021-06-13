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
#include "PickUp.h"


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
	CoinBox= CreateDefaultSubobject<UBoxComponent>(TEXT("Coin Spawn Box"));
	Floor->SetupAttachment(root);
	WallA->SetupAttachment(root);
	WallB->SetupAttachment(root);
	AttatchPoint->SetupAttachment(root);
	ExitTrigger->SetupAttachment(root);
	TileBox->SetupAttachment(root);
	CoinBox->SetupAttachment(root);
	
}

// Called when the game starts or when spawned
void AFloorTile::BeginPlay()
{
	Super::BeginPlay();

	ExitTrigger->OnComponentBeginOverlap.AddDynamic(this, &AFloorTile::OnActorOverlap);

	int32 rand;

	rand = FMath::RandRange(0, 100);

	if (rand <= 60)
	{
		SpawnObstacle();
	}
	rand = FMath::RandRange(0, 100);
	if (rand <= 30)
	{
		SpawnCoin();
	}

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

void AFloorTile::SpawnObstacle()
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
	
	
	Trash.Add(obstacle);
}

void AFloorTile::SpawnCoin()
{
	for (int i = 0; i < 5; i++)
	{
		int32 rand;

		rand = FMath::RandRange(0, PickUpClasses.Num() - 1);

		if (!PickUpClasses[rand]) return;
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		SpawnParams.bNoFail = true;
		SpawnParams.Owner = this;
		//SpawnParams.Instigator = this;

		FTransform pos;

		pos.SetLocation(UKismetMathLibrary::RandomPointInBoundingBox(this->CoinBox->Bounds.Origin, this->CoinBox->Bounds.BoxExtent));
		pos.SetRotation(GetActorRotation().Quaternion());

		APickUp* pickup = Cast<APickUp>(GetWorld()->SpawnActor<APickUp>(PickUpClasses[rand], pos, SpawnParams));

		Trash.Add(pickup);
	}
	
}



void AFloorTile::OnActorOverlap( UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (ARunCharacter* Character = Cast<ARunCharacter>(OtherActor))
	{
	
		

		OnPlayerExit.Broadcast(this);

		FTimerHandle TimerHanle;
		GetWorldTimerManager().SetTimer(TimerHanle, this, &AFloorTile::DestroyTile, 1.0f, false, 1.0f);
		
	}
}



