#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USceneComponent;
#include "BP_Server02__pf2876849500.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/ScienceLab/Blueprints/ScientificDevice/BP_Server02.BP_Server02_C", OverrideNativeName="BP_Server02_C"))
class ABP_Server02_C__pf2876849500 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ServerBox02"))
	UStaticMeshComponent* bpv__ServerBox02__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random", Category="Default", OverrideNativeName="Random"))
	bool bpv__Random__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 1 ", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 1 "))
	int32 bpv__Modulex1x__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 2", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 2"))
	int32 bpv__Modulex2__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 3", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 3"))
	int32 bpv__Modulex3__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 4", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 4"))
	int32 bpv__Modulex4__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 5", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 5"))
	int32 bpv__Modulex5__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 6", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 6"))
	int32 bpv__Modulex6__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 7", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 7"))
	int32 bpv__Modulex7__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 8", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 8"))
	int32 bpv__Modulex8__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 9", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 9"))
	int32 bpv__Modulex9__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 10", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 10"))
	int32 bpv__Modulex10__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 11", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 11"))
	int32 bpv__Modulex11__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 1", Category="Default", OverrideNativeName="Location 1"))
	FVector bpv__Locationx1__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 2", Category="Default", OverrideNativeName="Location 2"))
	FVector bpv__Locationx2__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 3", Category="Default", OverrideNativeName="Location 3"))
	FVector bpv__Locationx3__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 4", Category="Default", OverrideNativeName="Location 4"))
	FVector bpv__Locationx4__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 5", Category="Default", OverrideNativeName="Location 5"))
	FVector bpv__Locationx5__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 6", Category="Default", OverrideNativeName="Location 6"))
	FVector bpv__Locationx6__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 7", Category="Default", OverrideNativeName="Location 7"))
	FVector bpv__Locationx7__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 8", Category="Default", OverrideNativeName="Location 8"))
	FVector bpv__Locationx8__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 9", Category="Default", OverrideNativeName="Location 9"))
	FVector bpv__Locationx9__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 10", Category="Default", OverrideNativeName="Location 10"))
	FVector bpv__Locationx10__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 01", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 01"))
	float bpv__RandomxIntx01__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 02", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 02"))
	float bpv__RandomxIntx02__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 03", Category="Default", UIMax="5", UIMin="-1", OverrideNativeName="Random Int 03"))
	float bpv__RandomxIntx03__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 04", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 04"))
	float bpv__RandomxIntx04__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 05", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 05"))
	float bpv__RandomxIntx05__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 06", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 06"))
	float bpv__RandomxIntx06__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 07", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 07"))
	float bpv__RandomxIntx07__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 08", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 08"))
	float bpv__RandomxIntx08__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 09", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 09"))
	float bpv__RandomxIntx09__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 10", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 10"))
	float bpv__RandomxIntx10__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 12", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 12"))
	int32 bpv__Modulex12__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 13", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 13"))
	int32 bpv__Modulex13__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 14", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 14"))
	int32 bpv__Modulex14__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 15", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 15"))
	int32 bpv__Modulex15__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 16", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 16"))
	int32 bpv__Modulex16__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 17", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 17"))
	int32 bpv__Modulex17__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 18", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 18"))
	int32 bpv__Modulex18__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 19", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 19"))
	int32 bpv__Modulex19__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 20", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 20"))
	int32 bpv__Modulex20__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 21", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 21"))
	int32 bpv__Modulex21__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 22", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 22"))
	int32 bpv__Modulex22__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 11", Category="Default", OverrideNativeName="Location 11"))
	FVector bpv__Locationx11__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 12", Category="Default", OverrideNativeName="Location 12"))
	FVector bpv__Locationx12__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 13", Category="Default", OverrideNativeName="Location 13"))
	FVector bpv__Locationx13__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 14", Category="Default", OverrideNativeName="Location 14"))
	FVector bpv__Locationx14__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 15", Category="Default", OverrideNativeName="Location 15"))
	FVector bpv__Locationx15__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 16", Category="Default", OverrideNativeName="Location 16"))
	FVector bpv__Locationx16__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 17", Category="Default", OverrideNativeName="Location 17"))
	FVector bpv__Locationx17__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 18", Category="Default", OverrideNativeName="Location 18"))
	FVector bpv__Locationx18__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 19", Category="Default", OverrideNativeName="Location 19"))
	FVector bpv__Locationx19__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 20", Category="Default", OverrideNativeName="Location 20"))
	FVector bpv__Locationx20__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 11", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 11"))
	float bpv__RandomxIntx11__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 12", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 12"))
	float bpv__RandomxIntx12__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 13", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 13"))
	float bpv__RandomxIntx13__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 14", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 14"))
	float bpv__RandomxIntx14__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 15", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 15"))
	float bpv__RandomxIntx15__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 16", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 16"))
	float bpv__RandomxIntx16__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 17", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 17"))
	float bpv__RandomxIntx17__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 18", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 18"))
	float bpv__RandomxIntx18__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 19", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 19"))
	float bpv__RandomxIntx19__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 20", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 20"))
	float bpv__RandomxIntx20__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 23", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 23"))
	int32 bpv__Modulex23__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 24", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 24"))
	int32 bpv__Modulex24__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 25", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 25"))
	int32 bpv__Modulex25__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 26", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 26"))
	int32 bpv__Modulex26__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 27", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 27"))
	int32 bpv__Modulex27__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 28", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 28"))
	int32 bpv__Modulex28__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 29", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 29"))
	int32 bpv__Modulex29__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 30", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 30"))
	int32 bpv__Modulex30__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 31", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 31"))
	int32 bpv__Modulex31__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 32", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 32"))
	int32 bpv__Modulex32__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Module 33", Category="Default", UIMax="5", UIMin="0", OverrideNativeName="Module 33"))
	int32 bpv__Modulex33__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 21", Category="Default", OverrideNativeName="Location 21"))
	FVector bpv__Locationx21__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 22", Category="Default", OverrideNativeName="Location 22"))
	FVector bpv__Locationx22__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 23", Category="Default", OverrideNativeName="Location 23"))
	FVector bpv__Locationx23__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 24", Category="Default", OverrideNativeName="Location 24"))
	FVector bpv__Locationx24__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 25", Category="Default", OverrideNativeName="Location 25"))
	FVector bpv__Locationx25__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 26", Category="Default", OverrideNativeName="Location 26"))
	FVector bpv__Locationx26__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 27", Category="Default", OverrideNativeName="Location 27"))
	FVector bpv__Locationx27__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 28", Category="Default", OverrideNativeName="Location 28"))
	FVector bpv__Locationx28__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 29", Category="Default", OverrideNativeName="Location 29"))
	FVector bpv__Locationx29__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location 30", Category="Default", OverrideNativeName="Location 30"))
	FVector bpv__Locationx30__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 21", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 21"))
	float bpv__RandomxIntx21__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 22", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 22"))
	float bpv__RandomxIntx22__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 23", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 23"))
	float bpv__RandomxIntx23__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 24", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 24"))
	float bpv__RandomxIntx24__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 25", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 25"))
	float bpv__RandomxIntx25__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 26", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 26"))
	float bpv__RandomxIntx26__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 27", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 27"))
	float bpv__RandomxIntx27__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 28", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 28"))
	float bpv__RandomxIntx28__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 29", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 29"))
	float bpv__RandomxIntx29__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Random Int 30", Category="Default", UIMin="-1", UIMax="5", OverrideNativeName="Random Int 30"))
	float bpv__RandomxIntx30__pfTT;
	ABP_Server02_C__pf2876849500(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
