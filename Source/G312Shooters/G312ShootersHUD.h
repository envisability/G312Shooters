// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "G312ShootersHUD.generated.h"

UCLASS()
class AG312ShootersHUD : public AHUD
{
	GENERATED_BODY()

public:
	AG312ShootersHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

