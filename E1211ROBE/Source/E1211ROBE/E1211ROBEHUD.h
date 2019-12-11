// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "E1211ROBEHUD.generated.h"

UCLASS()
class AE1211ROBEHUD : public AHUD
{
	GENERATED_BODY()

public:
	AE1211ROBEHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

