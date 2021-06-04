#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "EnumTypesOfCharacters__pf3349424045.h"
#include "Runtime/AIModule/Classes/AIController.h"
class UAIPerceptionComponent;
class AEnemyDogCh_C__pf3349424045;
class ATargetPoint;
class AActor;
class APawn;
class AEnemyShootingCh_C__pf3349424045;
class AThirdPersonCharacter_C__pf2222656877;
#include "AIDogController__pf60788051.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Enemies/BehaviorDog/AIDogController.AIDogController_C", OverrideNativeName="AIDogController_C"))
class AAIDogController_C__pf60788051 : public AAIController
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="AIPerception"))
	UAIPerceptionComponent* bpv__AIPerception__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Controlled Character", Category="Default", MultiLine="true", OverrideNativeName="ControlledCharacter"))
	AEnemyDogCh_C__pf3349424045* bpv__ControlledCharacter__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BBPlayer Location Key", Category="Default", MultiLine="true", OverrideNativeName="BBPlayerLocationKey"))
	FBlackboardKeySelector bpv__BBPlayerLocationKey__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BBRecently Sighted Key", Category="Default", MultiLine="true", OverrideNativeName="BBRecentlySightedKey"))
	FBlackboardKeySelector bpv__BBRecentlySightedKey__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Patrol Points", Category="Default", MultiLine="true", OverrideNativeName="PatrolPoints"))
	TArray<ATargetPoint*> bpv__PatrolPoints__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Target", Category="Default", MultiLine="true", OverrideNativeName="Target"))
	int32 bpv__Target__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="BBCan AIGo to Alarm", Category="Default", MultiLine="true", OverrideNativeName="BBCanAIGoToAlarm"))
	FBlackboardKeySelector bpv__BBCanAIGoToAlarm__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can AIGo to Alarm Controller", Category="Default", MultiLine="true", OverrideNativeName="CanAIGoToAlarmController"))
	bool bpv__CanAIGoToAlarmController__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Enemy Reference", Category="Default", MultiLine="true", OverrideNativeName="EnemyReference"))
	AActor* bpv__EnemyReference__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Dog_Ch"))
	AEnemyDogCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Dog_Ch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_PossessedPawn"))
	APawn* b0l__K2Node_Event_PossessedPawn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Dog_Ch_1"))
	AEnemyDogCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Dog_Ch_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ATargetPoint* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Dog_Ch_2"))
	AEnemyDogCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Dog_Ch_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	ATargetPoint* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Actor"))
	AActor* b0l__K2Node_ComponentBoundEvent_Actor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Stimulus"))
	FAIStimulus b0l__K2Node_ComponentBoundEvent_Stimulus__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Dog_Ch_3"))
	AEnemyDogCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Dog_Ch_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch"))
	AEnemyShootingCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b0l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsThird_Person_Character"))
	AThirdPersonCharacter_C__pf2222656877* b0l__K2Node_DynamicCast_AsThird_Person_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b0l__K2Node_DynamicCast_bSuccess_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Dog_Ch_4"))
	AEnemyDogCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Dog_Ch_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_6"))
	bool b0l__K2Node_DynamicCast_bSuccess_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_UpdatedActors"))
	TArray<AActor*> b0l__K2Node_ComponentBoundEvent_UpdatedActors__pf;
	AAIDogController_C__pf60788051(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_AIDogController__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AIDogController__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AIDogController__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AIDogController__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AIDogController__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AIDogController__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AIDogController__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_PerceptionUpdatedDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_PerceptionUpdatedDelegate__DelegateSignature__pf(TArray<AActor*> const& bpp__UpdatedActors__pf__const);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature__pf(AActor* bpp__Actor__pf, FAIStimulus bpp__Stimulus__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Walk"))
	virtual void bpf__Walk__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Run"))
	virtual void bpf__Run__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GetNewPoint"))
	virtual void bpf__GetNewPoint__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Attack"))
	virtual void bpf__Attack__pf();
	UFUNCTION(meta=(Comment="/** Blueprint implementable event to react to the controller possessing a pawn */", DisplayName="On Possess", ToolTip="Blueprint implementable event to react to the controller possessing a pawn", CppFromBpEvent, OverrideNativeName="ReceivePossess"))
	virtual void bpf__ReceivePossess__pf(APawn* bpp__PossessedPawn__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MakeFocus"))
	virtual void bpf__MakeFocus__pf(AActor* bpp__EnemyCast__pf, E__EnumTypesOfCharacters__pf bpp__TypeOfCharacter__pf, bool bpp__Successfully_Sensed__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GetSoundAlert"))
	virtual void bpf__GetSoundAlert__pf(AActor* bpp__EnemyCast__pf);
public:
};
