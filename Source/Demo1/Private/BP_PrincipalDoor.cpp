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
	
}

// Called every frame
void ABP_PrincipalDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

