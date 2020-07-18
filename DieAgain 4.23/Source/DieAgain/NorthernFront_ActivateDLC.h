// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NorthernFront_ActivateDLC.generated.h"

UCLASS()
class DIEAGAIN_API ANorthernFront_ActivateDLC : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANorthernFront_ActivateDLC();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = DLCLoader)
		FString PluginName;
	UPROPERTY(EditAnywhere, Category = DLCLoader)
		FName MapToOpen;
	UPROPERTY(EditAnywhere, Category = DLCLoader)
		bool bEnableInEditor = true;
	UFUNCTION(BlueprintCallable, Category = DLCLoader)
		bool OpenDLC();

private:
	bool bCanOpenMap = false;

};
