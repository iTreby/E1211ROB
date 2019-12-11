// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CubemonHP.generated.h"

/**
 * 
 */
UCLASS()
class E1211ROBE_API UCubemonHP : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	class ACubemonEnemy* Cubemon;
};
