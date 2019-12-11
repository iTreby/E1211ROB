// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneratorPad.h"
#include "Components/BoxComponent.h"
#include "E1211ROBECharacter.h"
#include "Engine.h"

// Sets default values
AGeneratorPad::AGeneratorPad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MESH"));
	RootComponent = MeshComponent;
	Material = CreateDefaultSubobject<UMaterial>(TEXT("Material"));
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	BoxComponent->InitBoxExtent(FVector(100, 100, 100));
	BoxComponent->SetCollisionProfileName("Trigger");
	BoxComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AGeneratorPad::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGeneratorPad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (isOnGenerator) {
		if (ThePlayer != nullptr && ThePlayer->Energy < 100) {
			ThePlayer->Energy += EnergyAdd * (DeltaTime * Speed);
			if (ThePlayer->Energy > 1.0f) {
				isOnGenerator = false;
			}
		}
	}

}

void AGeneratorPad::NotifyActorBeginOverlap(AActor* OtherActor)
{
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("OVERLAPPED"));

	ThePlayer = Cast<AE1211ROBECharacter>(OtherActor);
	if (ThePlayer != nullptr)
	{
		this->isOnGenerator = true;
	}
}