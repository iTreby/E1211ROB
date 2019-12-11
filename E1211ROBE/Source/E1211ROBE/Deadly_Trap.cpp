// Fill out your copyright notice in the Description page of Project Settings.


#include "Deadly_Trap.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "E1211ROBECharacter.h"
#include "Engine.h"
#include "Components/PrimitiveComponent.h"

// Sets default values
ADeadly_Trap::ADeadly_Trap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MESH"));
	RootComponent = MeshComponent;
	Material = CreateDefaultSubobject<UMaterial>(TEXT("Material"));
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	BoxComponent->InitBoxExtent(FVector(35));
	BoxComponent->SetCollisionProfileName("Trigger");
	BoxComponent->SetupAttachment(RootComponent);

	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ADeadly_Trap::OnOverlapBegin);
}

// Called when the game starts or when spawned
void ADeadly_Trap::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADeadly_Trap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADeadly_Trap::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		auto player = Cast<AE1211ROBECharacter>(OtherActor);
		if (player != nullptr) {
			if (player->isTired != true) {
				player->Energy -= this->damage;
				GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Hit"));
				player->isTired = true;
				//Destroy();
			}
			else {
				player->Energy -= (this->damage * 2);
			}
		}
	}
}
