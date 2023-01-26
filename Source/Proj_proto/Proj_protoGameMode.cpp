// Copyright Epic Games, Inc. All Rights Reserved.

#include "Proj_protoGameMode.h"
#include "Proj_protoHUD.h"
#include "Proj_protoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProj_protoGameMode::AProj_protoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProj_protoHUD::StaticClass();
}
