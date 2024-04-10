// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_PrincipalDoor.h"

// Sets default values
ABP_PrincipalDoor::ABP_PrincipalDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
// Called when the game starts or when spawned
void ABP_PrincipalDoor::BeginPlay()
{
	Super::BeginPlay();
	
	HeightMainDoor = 2.0f;
	WeightMainDoor = 1.5f;

	FVector NewScale = FVector(WeightMainDoor, 0, HeightMainDoor);
	FTransform NewTransform;

	NewTransform.SetScale3D(NewScale);
	AddActorLocalTransform(NewTransform);

	TArray<UStaticMeshComponent*> Components;
	
	this->GetComponents<UStaticMeshComponent>(Components);
	for( int32 i=0; i<Components.Num(); i++ )
	{
		UStaticMeshComponent* StaticMeshComponent = Components[i];
		StaticMeshComponent->SetSimulatePhysics(true);
	}
}

// Called every frame
void ABP_PrincipalDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

