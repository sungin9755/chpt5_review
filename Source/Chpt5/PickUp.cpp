// Fill out your copyright notice in the Description page of Project Settings.


#include "PickUp.h"


// Sets default values
APickUp::APickUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>("MyMesh");
	RotatingComponent = CreateDefaultSubobject<URotatingMovementComponent>("RotatingComponent");

	RootComponent = MyMesh;

	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));

	if (MeshAsset.Object != nullptr) {
		MyMesh->SetStaticMesh(MeshAsset.Object);
	}

	MyMesh->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	RotatingComponent->RotationRate = FRotator(10, 0, 10);
}

void APickUp::NotifyActorBeginOverlap(AActor* OtherActor)
{
	OnPickedUp.ExecuteIfBound();
}

// Called when the game starts or when spawned
void APickUp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

