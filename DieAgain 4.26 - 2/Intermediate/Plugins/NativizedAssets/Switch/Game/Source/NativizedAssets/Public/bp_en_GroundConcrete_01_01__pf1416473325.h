#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USceneComponent;
#include "bp_en_GroundConcrete_01_01__pf1416473325.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/AbandonedFactoryBuildings/Environment/Ruble_01/bp_en_GroundConcrete_01_01.bp_en_GroundConcrete_01_01_C", OverrideNativeName="bp_en_GroundConcrete_01_01_C"))
class Abp_en_GroundConcrete_01_01_C__pf1416473325 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMeshComponent11"))
	UStaticMeshComponent* bpv__StaticMeshComponent11__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMeshComponent10"))
	UStaticMeshComponent* bpv__StaticMeshComponent10__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMeshComponent9"))
	UStaticMeshComponent* bpv__StaticMeshComponent9__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMeshComponent8"))
	UStaticMeshComponent* bpv__StaticMeshComponent8__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMeshComponent7"))
	UStaticMeshComponent* bpv__StaticMeshComponent7__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMeshComponent6"))
	UStaticMeshComponent* bpv__StaticMeshComponent6__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMeshComponent5"))
	UStaticMeshComponent* bpv__StaticMeshComponent5__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMeshComponent4"))
	UStaticMeshComponent* bpv__StaticMeshComponent4__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMeshComponent3"))
	UStaticMeshComponent* bpv__StaticMeshComponent3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMeshComponent2"))
	UStaticMeshComponent* bpv__StaticMeshComponent2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMeshComponent1"))
	UStaticMeshComponent* bpv__StaticMeshComponent1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMeshComponent0"))
	UStaticMeshComponent* bpv__StaticMeshComponent0__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SharedRoot"))
	USceneComponent* bpv__SharedRoot__pf;
	Abp_en_GroundConcrete_01_01_C__pf1416473325(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
