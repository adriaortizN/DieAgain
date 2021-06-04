#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h"
class AActor;
#include "SlaveNotMove__pf1263353332.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Enemies/BehaviorSlave/SlaveNotMove.SlaveNotMove_C", OverrideNativeName="SlaveNotMove_C"))
class USlaveNotMove_C__pf1263353332 : public UBTTask_BlueprintBase
{
public:
	GENERATED_BODY()
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OwnerActor"))
	AActor* b0l__K2Node_Event_OwnerActor__pf;
	USlaveNotMove_C__pf1263353332(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_SlaveNotMove__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** entry point, task will stay active until FinishExecute is called.\t *\t@Note that if both generic and AI event versions are implemented only the more \t *\tsuitable one will be called, meaning the AI version if called for AI, generic one otherwise */", ToolTip="entry point, task will stay active until FinishExecute is called.    @Note that if both generic and AI event versions are implemented only the more    suitable one will be called, meaning the AI version if called for AI, generic one otherwise", CppFromBpEvent, OverrideNativeName="ReceiveExecute"))
	virtual void bpf__ReceiveExecute__pf(AActor* bpp__OwnerActor__pf);
public:
};
