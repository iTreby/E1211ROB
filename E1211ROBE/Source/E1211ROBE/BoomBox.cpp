// Fill out your copyright notice in the Description page of Project Settings.


#include "BoomBox.h"
#include "Components/BoxComponent.h"
#include "E1211ROBECharacter.h"
#include "Materials/MaterialInterface.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "E1211ROBEProjectile.h"
#include "Engine.h"

// Sets default values
ABoomBox::ABoomBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MESH"));
	auto TestCube = FindComponentByClass< UStaticMeshComponent>();
	RootComponent = MeshComponent;

	MeshComponent->SetSimulatePhysics(true);

	MaterialOne = CreateDefaultSubobject<UMaterial>(TEXT("MaterialOne"));
	MaterialTwo = CreateDefaultSubobject<UMaterial>(TEXT("Materialtwo"));

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	BoxComponent->InitBoxExtent(FVector(100));
	BoxComponent->SetCollisionProfileName("Trigger");
	BoxComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ABoomBox::BeginPlay()
{
	Super::BeginPlay();
	MeshComponent->SetMaterial(0, MaterialOne);
}

// Called every frame
void ABoomBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABoomBox::NotifyActorBeginOverlap(AActor* OtherActor) {
	auto character = Cast<AE1211ROBECharacter>(OtherActor);
	auto bullet = Cast<AE1211ROBECharacter>(OtherActor);
	if (character != nullptr)
	{
		MeshComponent->SetMaterial(0, MaterialTwo);
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion, GetTransform());
	}

}

void ABoomBox::NotifyHit(class UPrimitiveComponent* MyComp, AActor* OtherActor, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector Hitlocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, OtherActor, OtherComp, bSelfMoved, Hitlocation, HitNormal, NormalImpulse, Hit);
	if (Cast<AE1211ROBEProjectile>(OtherActor) != nullptr)
	{
		//UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion, GetTransform());
		Destroy();
	}
}

