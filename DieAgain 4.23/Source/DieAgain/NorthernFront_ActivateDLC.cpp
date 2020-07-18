// Fill out your copyright notice in the Description page of Project Settings.


#include "NorthernFront_ActivateDLC.h"
#include "Paths.h"

// Sets default values
ANorthernFront_ActivateDLC::ANorthernFront_ActivateDLC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANorthernFront_ActivateDLC::BeginPlay()
{
	Super::BeginPlay();
	
	FString FullPath = FPaths::ConvertRelativePathToFull(FString("../../../DieAgain/Content/Paks/" + PluginName + ".pak"));

	if (FPaths::FileExists(FullPath))
	{
		bCanOpenMap = true;
	}
	else
	{
		bCanOpenMap = false;
	}
}

// Called every frame
void ANorthernFront_ActivateDLC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ANorthernFront_ActivateDLC::OpenDLC()
{
	if (bCanOpenMap)
	{
		return true;
		//UGameplayStatics::OpenLevel(GetWorld(), MapToOpen);
	}
	else {
		return false;
	}
}


