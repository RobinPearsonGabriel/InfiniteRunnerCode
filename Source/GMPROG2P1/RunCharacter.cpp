// Fill out your copyright notice in the Description page of Project Settings.


#include "RunCharacter.h"
#include "Components/SkeletalMeshComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Containers/UnrealString.h"
#include "RunCharacterController.h"

// Sets default values
ARunCharacter::ARunCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	SetRootComponent((USceneComponent*)GetCapsuleComponent());
Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("Spring Arm");
		SpringArm->SetupAttachment((USceneComponent*)GetCapsuleComponent());
	//	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>("SkeletalMesh");

	
	SpringArm->TargetArmLength =10.0f;
	SpringArm->bUsePawnControlRotation;
	//SkeletalMesh->SetupAttachment((USceneComponent*)GetCapsuleComponent());
	bUseControllerRotationPitch = true;
	bUseControllerRotationRoll = true;
	bUseControllerRotationRoll = true;
	
	isDead = false;
	Camera->SetupAttachment(SpringArm);
	Coins = 0;
	//Camera->SetRelativeLocation(FVector(-500.0f, 0, 0));
}

// Called when the game starts or when spawned
void ARunCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}



// Called every frame
void ARunCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector location = this->GetActorLocation();
	//if (GEngine)
	//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, location.ToString());

}

void ARunCharacter::AddCoin_Implementation()
{
	Coins++;
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::FromInt(Coins));
}

int32 ARunCharacter::GetCoin()
{
	return Coins;
}





void ARunCharacter::Die_Implementation()
{

	
		ARunCharacterController* controller = Cast<ARunCharacterController>(GetWorld()->GetFirstPlayerController());
		controller->CantMove();
		isDead = true;
		OnDeath.Broadcast();
}

// Called to bind functionality to input
void ARunCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
}

