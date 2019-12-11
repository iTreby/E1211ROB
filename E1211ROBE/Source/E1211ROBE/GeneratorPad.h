// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GeneratorPad.generated.h"

UCLASS()
class E1211ROBE_API AGeneratorPad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGeneratorPad();
	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* MeshComponent;
	UPROPERTY(EditAnywhere)
		class UMaterial* Material;
	UPROPERTY(VisibleAnywhere)
		class UBoxComponent* BoxComponent;
	UPROPERTY(EditAnywhere)
		int Speed = 10;
	UPROPERTY(EditAnywhere)
		int EnergyAdd = 10;
	UPROPERTY(EditAnywhere)
		bool isOnGenerator = false;
private:
	class AE1211ROBECharacter* ThePlayer = nullptr;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
