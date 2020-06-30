// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ParkourPuzzlerHUD.generated.h"

UCLASS()
class AParkourPuzzlerHUD : public AHUD
{
	GENERATED_BODY()

public:
	AParkourPuzzlerHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

