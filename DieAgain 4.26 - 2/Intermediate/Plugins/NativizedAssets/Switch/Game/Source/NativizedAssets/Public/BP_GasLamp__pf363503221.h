#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UAudioComponent;
class UPointLightComponent;
class UStaticMeshComponent;
class USceneComponent;
#include "BP_GasLamp__pf363503221.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/SurvivalAssetPack/Blueprints/BP_GasLamp.BP_GasLamp_C", OverrideNativeName="BP_GasLamp_C"))
class ABP_GasLamp_C__pf363503221 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="S_GasSound"))
	UAudioComponent* bpv__S_GasSound__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PointLight_WithShadow"))
	UPointLightComponent* bpv__PointLight_WithShadow__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PointLight"))
	UPointLightComponent* bpv__PointLight__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SM_GasLamp"))
	UStaticMeshComponent* bpv__SM_GasLamp__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Color", Category="Light", OverrideNativeName="Color"))
	FLinearColor bpv__Color__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Enabled", Category="Light", OverrideNativeName="Enabled"))
	bool bpv__Enabled__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Intensity", Category="Light", OverrideNativeName="Intensity"))
	float bpv__Intensity__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Self Shadow Density", Category="Light", UIMax="1", ClampMax="1", ClampMin="0", UIMin="0", OverrideNativeName="SelfShadowDensity"))
	float bpv__SelfShadowDensity__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Has Sound", Category="Gas Sound", OverrideNativeName="HasSound"))
	bool bpv__HasSound__pf;
	ABP_GasLamp_C__pf363503221(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
