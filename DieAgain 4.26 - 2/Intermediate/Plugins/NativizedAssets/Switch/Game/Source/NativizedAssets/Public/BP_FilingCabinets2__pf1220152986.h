#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USceneComponent;
class UMaterialInstance;
#include "BP_FilingCabinets2__pf1220152986.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/ScienceLab/Blueprints/OfficeProps/BP_FilingCabinets2.BP_FilingCabinets2_C", OverrideNativeName="BP_FilingCabinets2_C"))
class ABP_FilingCabinets2_C__pf1220152986 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="FilingCabinetsBox4"))
	UStaticMeshComponent* bpv__FilingCabinetsBox4__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="FilingCabinets2"))
	UStaticMeshComponent* bpv__FilingCabinets2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="FilingCabinetsBox3"))
	UStaticMeshComponent* bpv__FilingCabinetsBox3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="FilingCabinetsBox2"))
	UStaticMeshComponent* bpv__FilingCabinetsBox2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="FilingCabinetsBox1"))
	UStaticMeshComponent* bpv__FilingCabinetsBox1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Box 01Position", Category="Default", UIMin="0", UIMax="40", OverrideNativeName="Box01Position"))
	float bpv__Box01Position__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Box 02Position", Category="Default", UIMin="0", UIMax="40", OverrideNativeName="Box02Position"))
	float bpv__Box02Position__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Box 03Position", Category="Default", UIMin="0", UIMax="40", OverrideNativeName="Box03Position"))
	float bpv__Box03Position__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Box 04Position", Category="Default", UIMin="0", UIMax="40", OverrideNativeName="Box04Position"))
	float bpv__Box04Position__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Material", Category="Default", OverrideNativeName="Material"))
	UMaterialInstance* bpv__Material__pf;
	ABP_FilingCabinets2_C__pf1220152986(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
