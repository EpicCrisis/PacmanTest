// Fill out your copyright notice in the Description page of Project Settings.

#include "PacmanPlayer.h"


// Sets default values
APacmanPlayer::APacmanPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APacmanPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APacmanPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateMovement(DeltaTime);
}

// Called to bind functionality to input
void APacmanPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("WKey", IE_Pressed, this, &APacmanPlayer::MoveUp);
	PlayerInputComponent->BindAction("SKey", IE_Pressed, this, &APacmanPlayer::MoveDown);
	PlayerInputComponent->BindAction("AKey", IE_Pressed, this, &APacmanPlayer::MoveLeft);
	PlayerInputComponent->BindAction("DKey", IE_Pressed, this, &APacmanPlayer::MoveRight);

}

// 1 = W; 2 = S; 3 = A; 4 = D
void APacmanPlayer::MoveUp()
{
	moveDirection = 1;
}

void APacmanPlayer::MoveDown()
{
	moveDirection = 2;
}

void APacmanPlayer::MoveLeft()
{
	moveDirection = 3;
}

void APacmanPlayer::MoveRight()
{
	moveDirection = 4;
}

void APacmanPlayer::UpdateMovement(float DeltaTime)
{
	if (moveDirection == 1)
	{

	}
	else if (moveDirection == 2)
	{

	}
	else if (moveDirection == 3)
	{

	}
	else if (moveDirection == 4)
	{

	}
}