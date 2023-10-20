// Copyright Epic Games, Inc. All Rights Reserved.

#include "MobileRPGGameMode.h"
#include "MobileRPGCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMobileRPGGameMode::AMobileRPGGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/Blueprint'BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C'"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}