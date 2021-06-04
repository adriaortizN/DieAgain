#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h"
class AActor;
class AAISuicideController_C__pf3889547882;
class AAIDogController_C__pf60788051;
class AEnemyShootingCh_C__pf3349424045;
class AEnemyDogCh_C__pf3349424045;
class AAIShootingController_C__pf681293266;
#include "AttackAnimation__pf681293266.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Enemies/BehaviorShooting/AttackAnimation.AttackAnimation_C", OverrideNativeName="AttackAnimation_C"))
class UAttackAnimation_C__pf681293266 : public UBTTask_BlueprintBase
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Delay Animation Shooting", Category="Default", MultiLine="true", OverrideNativeName="DelayAnimationShooting"))
	float bpv__DelayAnimationShooting__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Delay Animation Suicide", Category="Default", MultiLine="true", OverrideNativeName="DelayAnimationSuicide"))
	float bpv__DelayAnimationSuicide__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Delay Animation Dog", Category="Default", MultiLine="true", OverrideNativeName="DelayAnimationDog"))
	float bpv__DelayAnimationDog__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Enemy Of Dog Alive", Category="Default", MultiLine="true", OverrideNativeName="IsEnemyOfDogAlive"))
	FBlackboardKeySelector bpv__IsEnemyOfDogAlive__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BBEnemy Too Close", Category="Default", MultiLine="true", OverrideNativeName="BBEnemyTooClose"))
	FBlackboardKeySelector bpv__BBEnemyTooClose__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Distance to Flee", Category="Default", MultiLine="true", OverrideNativeName="DistanceToFlee"))
	float bpv__DistanceToFlee__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OwnerActor"))
	AActor* b0l__K2Node_Event_OwnerActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAISuicide_Controller"))
	AAISuicideController_C__pf3889547882* b0l__K2Node_DynamicCast_AsAISuicide_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAIDog_Controller"))
	AAIDogController_C__pf60788051* b0l__K2Node_DynamicCast_AsAIDog_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch"))
	AEnemyShootingCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Dog_Ch"))
	AEnemyDogCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Dog_Ch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch_1"))
	AEnemyShootingCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b0l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAIShooting_Controller"))
	AAIShootingController_C__pf681293266* b0l__K2Node_DynamicCast_AsAIShooting_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b0l__K2Node_DynamicCast_bSuccess_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch_2"))
	AEnemyShootingCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_6"))
	bool b0l__K2Node_DynamicCast_bSuccess_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch_3"))
	AEnemyShootingCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_7"))
	bool b0l__K2Node_DynamicCast_bSuccess_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsTooClose_IsTooClose"))
	bool b0l__CallFunc_IsTooClose_IsTooClose__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess__pf;
	UAttackAnimation_C__pf681293266(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_AttackAnimation_0"))
	void bpf__ExecuteUbergraph_AttackAnimation__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** entry point, task will stay active until FinishExecute is called.\t *\t@Note that if both generic and AI event versions are implemented only the more \t *\tsuitable one will be called, meaning the AI version if called for AI, generic one otherwise */", ToolTip="entry point, task will stay active until FinishExecute is called.    @Note that if both generic and AI event versions are implemented only the more    suitable one will be called, meaning the AI version if called for AI, generic one otherwise", CppFromBpEvent, OverrideNativeName="ReceiveExecute"))
	virtual void bpf__ReceiveExecute__pf(AActor* bpp__OwnerActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="IsTooClose"))
	virtual void bpf__IsTooClose__pf(AActor* bpp__Enemy__pf, AActor* bpp__SelfActor__pf, /*out*/ bool& bpp__IsTooClose__pf);
public:
};
