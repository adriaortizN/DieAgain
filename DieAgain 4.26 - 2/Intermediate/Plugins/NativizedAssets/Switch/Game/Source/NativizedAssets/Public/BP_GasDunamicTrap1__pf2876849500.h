#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USceneComponent;
class UMaterialInstance;
#include "BP_GasDunamicTrap1__pf2876849500.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/ScienceLab/Blueprints/ScientificDevice/BP_GasDunamicTrap1.BP_GasDunamicTrap1_C", OverrideNativeName="BP_GasDunamicTrap1_C"))
class ABP_GasDunamicTrap1_C__pf2876849500 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GasDynamicTrap1_part1_3"))
	UStaticMeshComponent* bpv__GasDynamicTrap1_part1_3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GasDynamicTrap1_part1_2"))
	UStaticMeshComponent* bpv__GasDynamicTrap1_part1_2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GasDynamicTrap1_part2"))
	UStaticMeshComponent* bpv__GasDynamicTrap1_part2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GasDynamicTrap1_part1_1"))
	UStaticMeshComponent* bpv__GasDynamicTrap1_part1_1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GasDynamicTrap"))
	UStaticMeshComponent* bpv__GasDynamicTrap__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Material", Category="Default", OverrideNativeName="Material"))
	UMaterialInstance* bpv__Material__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Rotator Speed 1", Category="Default", OverrideNativeName="Rotator Speed 1"))
	float bpv__RotatorxSpeedx1__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Rotator Speed 2", Category="Default", OverrideNativeName="Rotator Speed 2"))
	float bpv__RotatorxSpeedx2__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Rotator Speed 3", Category="Default", OverrideNativeName="Rotator Speed 3"))
	float bpv__RotatorxSpeedx3__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Rotator Speed 4", Category="Default", OverrideNativeName="Rotator Speed 4"))
	float bpv__RotatorxSpeedx4__pfTT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_AddLocalRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_AddLocalRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_AddLocalRotation_SweepHitResult_1"))
	FHitResult b0l__CallFunc_K2_AddLocalRotation_SweepHitResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_AddLocalRotation_SweepHitResult_2"))
	FHitResult b0l__CallFunc_K2_AddLocalRotation_SweepHitResult_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_AddLocalRotation_SweepHitResult_3"))
	FHitResult b0l__CallFunc_K2_AddLocalRotation_SweepHitResult_3__pf;
	ABP_GasDunamicTrap1_C__pf2876849500(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_GasDunamicTrap1__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
