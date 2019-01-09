// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Dot_Small.generated.h"

UCLASS()
class PACMAN_TEST_API ADot_Small : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADot_Small();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
