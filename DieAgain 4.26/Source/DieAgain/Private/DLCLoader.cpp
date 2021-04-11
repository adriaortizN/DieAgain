// Fill out your copyright notice in the Description page of Project Settings.


#include "DLCLoader.h"
#include "Paths.h"
//#include "Kismet/GameplayStatics.h"

// Sets default values
ADLCLoader::ADLCLoader()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADLCLoader::BeginPlay()
{
	Super::BeginPlay();

	//Enable opening map inside the editor without .pak check
	/*
	if (bEnableInEditor && GetWorld()->WorldType == EWorldType::PIE) 
	{
		bCanOpenMap = true;
	}
	else 
	{
		//Check if DLC .pak file exist
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
	*/
	//Check if DLC .pak file exist
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
void ADLCLoader::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ADLCLoader::OpenDLC()
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

