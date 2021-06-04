#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USceneComponent;
class UMaterialInstance;
#include "BP_Table05__pf213629045.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/ScienceLab/Blueprints/Furniture/BP_Table05.BP_Table05_C", OverrideNativeName="BP_Table05_C"))
class ABP_Table05_C__pf213629045 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Table05Drawer03"))
	UStaticMeshComponent* bpv__Table05Drawer03__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Table05Drawer04"))
	UStaticMeshComponent* bpv__Table05Drawer04__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Table05Drawer02"))
	UStaticMeshComponent* bpv__Table05Drawer02__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Table05Drawer01"))
	UStaticMeshComponent* bpv__Table05Drawer01__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Table05"))
	UStaticMeshComponent* bpv__Table05__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Drawer 01Position", Category="Default", UIMin="0", UIMax="40", OverrideNativeName="Drawer01Position"))
	float bpv__Drawer01Position__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Drawer 02Position", Category="Default", UIMin="0", UIMax="40", OverrideNativeName="Drawer02Position"))
	float bpv__Drawer02Position__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Drawer 03Position", Category="Default", UIMin="0", UIMax="40", OverrideNativeName="Drawer03Position"))
	float bpv__Drawer03Position__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Drawer 04Position", Category="Default", UIMin="0", UIMax="40", OverrideNativeName="Drawer04Position"))
	float bpv__Drawer04Position__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Material", Category="Default", OverrideNativeName="Material"))
	UMaterialInstance* bpv__Material__pf;
	ABP_Table05_C__pf213629045(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
