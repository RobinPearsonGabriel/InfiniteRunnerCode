// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RunCharacter.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCharDeathSigniture); 
UCLASS()
class GMPROG2P1_API ARunCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	UPROPERTY(BlueprintAssignable)
		FCharDeathSigniture OnDeath;

	ARunCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere,BluePrintReadWrite)
	int32 Coins;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USkeletalMeshComponent* SkeletalMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool isDead;
	
public:	
	// Called every frame

		virtual void Tick(float DeltaTime) override;
	
		UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void AddCoin();
		void AddCoin_Implementation();

		UFUNCTION(BlueprintPure, BlueprintCallable)
		int32 GetCoin();

		UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
		void Die();
		void Die_Implementation();
		//UFUNCTION(BlueprintReadOnly)

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
