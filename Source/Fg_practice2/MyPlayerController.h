// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/PlayerInput.h"
#include "MyPlayerController.generated.h"


/**
 * 
 */
UCLASS()
class FG_PRACTICE2_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	virtual void Tick(float DeltaSeconds) override;

	int tickCount;
};
