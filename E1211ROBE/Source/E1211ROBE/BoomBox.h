// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BoomBox.generated.h"

UCLASS()
class E1211ROBE_API ABoomBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoomBox();
	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* MeshComponent;
	UPROPERTY(EditAnywhere)
		class UMaterial* MaterialOne;
	UPROPERTY(EditAnywhere)
		class UMaterial* MaterialTwo;
	UPROPERTY(VisibleAnywhere)
		class UBoxComponent* BoxComponent;
	UPROPERTY(EditAnywhere)
		UParticleSystem* Explosion;
	UPROPERTY(EditAnywhere)
		float Distance;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	void NotifyHit(class UPrimitiveComponent* MyComp, AActor* OtherActor, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector Hitlocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
};
