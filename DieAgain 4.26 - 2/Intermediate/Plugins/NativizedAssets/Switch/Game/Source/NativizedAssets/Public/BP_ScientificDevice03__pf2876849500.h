#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USceneComponent;
class UMaterialInstance;
#include "BP_ScientificDevice03__pf2876849500.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/ScienceLab/Blueprints/ScientificDevice/BP_ScientificDevice03.BP_ScientificDevice03_C", OverrideNativeName="BP_ScientificDevice03_C"))
class ABP_ScientificDevice03_C__pf2876849500 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ScientificDevice03_Part1"))
	UStaticMeshComponent* bpv__ScientificDevice03_Part1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ScientificDevice03_Water"))
	UStaticMeshComponent* bpv__ScientificDevice03_Water__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ScientificDevice03"))
	UStaticMeshComponent* bpv__ScientificDevice03__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ScientificDevice02_Hatch"))
	UStaticMeshComponent* bpv__ScientificDevice02_Hatch__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Hatch Rotation", Category="Default", UIMax="140", UIMin="0", OverrideNativeName="HatchRotation"))
	float bpv__HatchRotation__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Body Position", Category="Default", UIMin="0", UIMax="325", OverrideNativeName="BodyPosition"))
	float bpv__BodyPosition__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Water Position", Category="Default", UIMin="0", UIMax="260", OverrideNativeName="WaterPosition"))
	float bpv__WaterPosition__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Material", Category="Default", OverrideNativeName="Material"))
	UMaterialInstance* bpv__Material__pf;
	ABP_ScientificDevice03_C__pf2876849500(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
