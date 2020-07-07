// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActorC.h"

// Sets default values
ATestActorC::ATestActorC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestActorC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestActorC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

