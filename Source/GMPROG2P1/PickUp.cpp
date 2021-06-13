// Fill out your copyright notice in the Description page of Project Settings.


#include "PickUp.h"
#include "RunCharacter.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
// Sets default values
APickUp::APickUp()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	root = CreateDefaultSubobject<USceneComponent>(TEXT("Scene Component"));

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Coin Mesh"));

	boxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("collider"));



	mesh->SetupAttachment(root);
	boxCollision->SetupAttachment(root);
}

// Called when the game starts or when spawned
void APickUp::BeginPlay()
{
	Super::BeginPlay();
	boxCollision->OnComponentBeginOverlap.AddDynamic(this,&APickUp::OnGet);
}



// Called every frame
void APickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

