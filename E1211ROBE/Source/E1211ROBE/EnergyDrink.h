// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnergyDrink.generated.h"

UCLASS()
class E1211ROBE_API AEnergyDrink : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnergyDrink();
	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* MeshComponent;
	UPROPERTY(EditAnywhere)
		class UMaterial* Material;
	UPROPERTY(VisibleAnywhere)
		class UBoxComponent* BoxComponent;
	UPROPERTY(EditAnywhere)
		float Time = 0.5;
	UPROPERTY(EditAnywhere)
		int healing = 10;
	UPROPERTY(EditAnywhere)
		int Count = 0;
	bool healingOn = false;
private:
	class AE1211ROBECharacter* ThePlayer = nullptr;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
