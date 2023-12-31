// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RTSCharacter.generated.h"

UCLASS()
class EXAMPLEPROJ_API ARTSCharacter : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARTSCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

/*
public:	

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	*/

};
