// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Proj_protoHUD.generated.h"

UCLASS()
class AProj_protoHUD : public AHUD
{
	GENERATED_BODY()

public:
	AProj_protoHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

