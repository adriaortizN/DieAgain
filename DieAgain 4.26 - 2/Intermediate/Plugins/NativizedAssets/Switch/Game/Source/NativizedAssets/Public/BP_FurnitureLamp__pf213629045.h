#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USceneComponent;
class UMaterialInstance;
#include "BP_FurnitureLamp__pf213629045.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/ScienceLab/Blueprints/Furniture/BP_FurnitureLamp.BP_FurnitureLamp_C", OverrideNativeName="BP_FurnitureLamp_C"))
class ABP_FurnitureLamp_C__pf213629045 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="FurnitureLamp01Part05"))
	UStaticMeshComponent* bpv__FurnitureLamp01Part05__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="FurnitureLamp01Part04"))
	UStaticMeshComponent* bpv__FurnitureLamp01Part04__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="FurnitureLamp01Part03"))
	UStaticMeshComponent* bpv__FurnitureLamp01Part03__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="FurnitureLamp01Part02"))
	UStaticMeshComponent* bpv__FurnitureLamp01Part02__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="FurnitureLamp01Part01"))
	UStaticMeshComponent* bpv__FurnitureLamp01Part01__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Rotation 1", Category="Default", UIMax="180", UIMin="-180", OverrideNativeName="Rotation1"))
	float bpv__Rotation1__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Rotation 2", Category="Default", UIMin="-90", UIMax="270", OverrideNativeName="Rotation2"))
	float bpv__Rotation2__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Rotation 3", Category="Default", UIMin="-120", UIMax="120", OverrideNativeName="Rotation3"))
	float bpv__Rotation3__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Rotation 4", Category="Default", UIMin="-180", UIMax="180", OverrideNativeName="Rotation4"))
	float bpv__Rotation4__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Material", Category="Default", OverrideNativeName="Material"))
	UMaterialInstance* bpv__Material__pf;
	ABP_FurnitureLamp_C__pf213629045(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
