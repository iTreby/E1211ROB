// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerEnergyWidget.generated.h"

/**
 * 
 */
UCLASS()
class E1211ROBE_API UPlayerEnergyWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly)
		class AE1211ROBECharacter* Player;
};
