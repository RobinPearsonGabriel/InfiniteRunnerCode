// Fill out your copyright notice in the Description page of Project Settings.

#include "RunCharacter.h"
#include "Obstacle.h"
#include "Components/StaticMeshComponent.h"
// Sets default values
AObstacle::AObstacle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	SetRootComponent(StaticMesh);


	
	
}

// Called when the game starts or when spawned
void AObstacle::BeginPlay()
{
	Super::BeginPlay();

	OnActorHit.AddDynamic(this, &AObstacle::OnTriggerHit);
}









void AObstacle::OnTriggerHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	if (ARunCharacter* player = Cast<ARunCharacter>(OtherActor))
	{
		OnHit(player);

	}
}

// Called every frame
void AObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

