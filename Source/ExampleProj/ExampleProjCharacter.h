// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ExampleProjCharacter.generated.h"

UCLASS(Blueprintable)
class AExampleProjCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AExampleProjCharacter();

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;


private:

};

