// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "Engine/GameEngine.h"




void AMyPlayerController::Tick(float DeltaSeconds)
{
	//UE_LOG(LogTemp, Warning, TEXT("ticking"));
	if ((tickCount % 60) == 0)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, TEXT("tick in player controller"));
	tickCount++;

	if (IsInputKeyDown("Down")) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, TEXT("down is pressed"));
	}
	
	PlayerInput->GetBind("Down");
	

}