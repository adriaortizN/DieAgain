#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USceneComponent;
#include "BP_Server__pf2876849500.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/ScienceLab/Blueprints/ScientificDevice/BP_Server.BP_Server_C", OverrideNativeName="BP_Server_C"))
class ABP_Server_C__pf2876849500 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ServerBox01"))
	UStaticMeshComponent* bpv__ServerBox01__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random", Category="Settings", OverrideNativeName="Random"))
	bool bpv__Random__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 1 ", Category="Settings", UIMax="5", UIMin="0", OverrideNativeName="Module 1 "))
	int32 bpv__Modulex1x__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 2", Category="Settings", UIMax="5", UIMin="0", OverrideNativeName="Module 2"))
	int32 bpv__Modulex2__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 3", Category="Settings", UIMax="5", UIMin="0", OverrideNativeName="Module 3"))
	int32 bpv__Modulex3__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 4", Category="Settings", UIMax="5", UIMin="0", OverrideNativeName="Module 4"))
	int32 bpv__Modulex4__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 5", Category="Settings", UIMax="5", UIMin="0", OverrideNativeName="Module 5"))
	int32 bpv__Modulex5__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 6", Category="Settings", UIMax="5", UIMin="0", OverrideNativeName="Module 6"))
	int32 bpv__Modulex6__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 7", Category="Settings", UIMax="5", UIMin="0", OverrideNativeName="Module 7"))
	int32 bpv__Modulex7__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 8", Category="Settings", UIMax="5", UIMin="0", OverrideNativeName="Module 8"))
	int32 bpv__Modulex8__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 9", Category="Settings", UIMax="5", UIMin="0", OverrideNativeName="Module 9"))
	int32 bpv__Modulex9__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 10", Category="Settings", UIMax="5", UIMin="0", OverrideNativeName="Module 10"))
	int32 bpv__Modulex10__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 11", Category="Settings", UIMax="5", UIMin="0", OverrideNativeName="Module 11"))
	int32 bpv__Modulex11__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 1", Category="Settings", OverrideNativeName="Location 1"))
	FVector bpv__Locationx1__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 2", Category="Settings", OverrideNativeName="Location 2"))
	FVector bpv__Locationx2__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 3", Category="Settings", OverrideNativeName="Location 3"))
	FVector bpv__Locationx3__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 4", Category="Settings", OverrideNativeName="Location 4"))
	FVector bpv__Locationx4__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 5", Category="Settings", OverrideNativeName="Location 5"))
	FVector bpv__Locationx5__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 6", Category="Settings", OverrideNativeName="Location 6"))
	FVector bpv__Locationx6__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 7", Category="Settings", OverrideNativeName="Location 7"))
	FVector bpv__Locationx7__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 8", Category="Settings", OverrideNativeName="Location 8"))
	FVector bpv__Locationx8__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 9", Category="Settings", OverrideNativeName="Location 9"))
	FVector bpv__Locationx9__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 10", Category="Settings", OverrideNativeName="Location 10"))
	FVector bpv__Locationx10__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 01", Category="Settings", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 01"))
	float bpv__RandomxIntx01__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 02", Category="Settings", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 02"))
	float bpv__RandomxIntx02__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 03", Category="Settings", UIMax="5", UIMin="-1", OverrideNativeName="Random Int 03"))
	float bpv__RandomxIntx03__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 04", Category="Settings", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 04"))
	float bpv__RandomxIntx04__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 05", Category="Settings", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 05"))
	float bpv__RandomxIntx05__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 06", Category="Settings", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 06"))
	float bpv__RandomxIntx06__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 07", Category="Settings", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 07"))
	float bpv__RandomxIntx07__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 08", Category="Settings", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 08"))
	float bpv__RandomxIntx08__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 09", Category="Settings", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 09"))
	float bpv__RandomxIntx09__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 10", Category="Settings", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 10"))
	float bpv__RandomxIntx10__pfTT;
	ABP_Server_C__pf2876849500(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
