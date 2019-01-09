// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/InputComponent.h"
#include "PacmanPlayer.generated.h"

UCLASS()
class PACMAN_TEST_API APacmanPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APacmanPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	ACharacter* PacmanCharacter;

	FVector CurrentCoord;
	FVector NextCoord;

	UPROPERTY(EditAnywhere)
	int MoveDirection;

	UFUNCTION()
		void MoveUp();
	UFUNCTION()
		void MoveDown();
	UFUNCTION()
		void MoveLeft();
	UFUNCTION()
		void MoveRight();

	UFUNCTION()
		void UpdateMovement(float DeltaTime);
	
	// Obtain the data of the grid to identify and compare the coords of obstacles and ghosts.
};
