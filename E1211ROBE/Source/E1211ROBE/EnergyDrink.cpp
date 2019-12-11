// Fill out your copyright notice in the Description page of Project Settings.


#include "EnergyDrink.h"
#include "TimerManager.h"
#include "Components/BoxComponent.h"
#include "E1211ROBECharacter.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "Engine.h"

// Sets default values
AEnergyDrink::AEnergyDrink()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MESH"));
	RootComponent = MeshComponent;
	Material = CreateDefaultSubobject<UMaterial>(TEXT("Material"));
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	BoxComponent->InitBoxExtent(FVector(100));
	BoxComponent->SetCollisionProfileName("Trigger");
	BoxComponent->SetupAttachment(RootComponent);
	//BoxComponent->SetSimulatePhysics(true);
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AEnergyDrink::OnOverlapBegin);
}

// Called when the game starts or when spawned
void AEnergyDrink::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnergyDrink::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Rotate
	this->AddActorLocalRotation(FRotator(0, 20.f, 0)*DeltaTime);
	//Healing

}

void AEnergyDrink::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		//ThePlayer = Cast<AE1211ROBECharacter>(OtherActor);
		healingOn = true;
			auto player = Cast<AE1211ROBECharacter>(OtherActor);
				Count++;
				if (player->isTired != true) {
					player->Energy += this->healing;
					GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Healing"));
				}
				if (Count == 3) {
					player->isTired = false;
					GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Not Tired"));
				}
		MeshComponent->SetVisibility(false);

	}
}

