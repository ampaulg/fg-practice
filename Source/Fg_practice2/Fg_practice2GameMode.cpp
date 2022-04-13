// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Fg_practice2GameMode.h"
#include "Fg_practice2Character.h"
#include "UObject/ConstructorHelpers.h"

AFg_practice2GameMode::AFg_practice2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
