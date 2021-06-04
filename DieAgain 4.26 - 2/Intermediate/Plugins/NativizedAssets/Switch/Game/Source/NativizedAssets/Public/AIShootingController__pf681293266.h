#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "EnumWeapon__pf3349424045.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "EnumTypesOfCharacters__pf3349424045.h"
#include "Runtime/AIModule/Classes/AIController.h"
class UAIPerceptionComponent;
class AEnemyShootingCh_C__pf3349424045;
class ATargetPoint;
class AAlarm_C__pf2693064426;
class AActor;
class ACharacter;
class ALevelCompleterBP_C__pf922009354;
class APawn;
class AEnemyDogCh_C__pf3349424045;
class AThirdPersonCharacter_C__pf2222656877;
class UMyGameInstance_C__pf2410127383;
#include "AIShootingController__pf681293266.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Enemies/BehaviorShooting/AIShootingController.AIShootingController_C", OverrideNativeName="AIShootingController_C"))
class AAIShootingController_C__pf681293266 : public AAIController
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="AIPerception"))
	UAIPerceptionComponent* bpv__AIPerception__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Controlled Character", Category="Default", MultiLine="true", OverrideNativeName="ControlledCharacter"))
	AEnemyShootingCh_C__pf3349424045* bpv__ControlledCharacter__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BBPlayer Location Key", Category="Default", MultiLine="true", OverrideNativeName="BBPlayerLocationKey"))
	FBlackboardKeySelector bpv__BBPlayerLocationKey__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BBRecently Sighted Key", Category="Default", MultiLine="true", OverrideNativeName="BBRecentlySightedKey"))
	FBlackboardKeySelector bpv__BBRecentlySightedKey__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Patrol Points", Category="Default", MultiLine="true", OverrideNativeName="PatrolPoints"))
	TArray<ATargetPoint*> bpv__PatrolPoints__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Target", Category="Default", MultiLine="true", OverrideNativeName="Target"))
	int32 bpv__Target__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BBCan AIGo to Alarm", Category="Default", MultiLine="true", OverrideNativeName="BBCanAIGoToAlarm"))
	FBlackboardKeySelector bpv__BBCanAIGoToAlarm__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Alarm Point", Category="Default", MultiLine="true", OverrideNativeName="AlarmPoint"))
	AAlarm_C__pf2693064426* bpv__AlarmPoint__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can AIGo to Alarm Controller", Category="Default", MultiLine="true", OverrideNativeName="CanAIGoToAlarmController"))
	bool bpv__CanAIGoToAlarmController__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Enemy Reference", Category="Default", MultiLine="true", OverrideNativeName="EnemyReference"))
	AActor* bpv__EnemyReference__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Closest Distance", Category="Default", MultiLine="true", OverrideNativeName="ClosestDistance"))
	float bpv__ClosestDistance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="To Posses Actor", Category="Default", MultiLine="true", OverrideNativeName="ToPossesActor"))
	ACharacter* bpv__ToPossesActor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Min Distance", Category="Default", MultiLine="true", OverrideNativeName="MinDistance"))
	float bpv__MinDistance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Default Min Distance", Category="Default", MultiLine="true", OverrideNativeName="DefaultMinDistance"))
	float bpv__DefaultMinDistance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Enemy Attacked Death", Category="Default", MultiLine="true", OverrideNativeName="IsEnemyAttackedDeath"))
	bool bpv__IsEnemyAttackedDeath__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Weapon Of Enemey Controller", Category="Default", MultiLine="true", OverrideNativeName="WeaponOfEnemeyController"))
	E__EnumWeapon__pf bpv__WeaponOfEnemeyController__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Dying Character", Category="Default", MultiLine="true", OverrideNativeName="DyingCharacter"))
	AEnemyShootingCh_C__pf3349424045* bpv__DyingCharacter__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is VIP", Category="Default", MultiLine="true", OverrideNativeName="IsVIP"))
	bool bpv__IsVIP__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Level Completer", Category="Default", MultiLine="true", OverrideNativeName="LevelCompleter"))
	ALevelCompleterBP_C__pf922009354* bpv__LevelCompleter__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch"))
	AEnemyShootingCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_PossessedPawn"))
	APawn* b0l__K2Node_Event_PossessedPawn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch_1"))
	AEnemyShootingCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Actor"))
	AActor* b0l__K2Node_ComponentBoundEvent_Actor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Stimulus"))
	FAIStimulus b0l__K2Node_ComponentBoundEvent_Stimulus__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Dog_Ch"))
	AEnemyDogCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Dog_Ch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch_2"))
	AEnemyShootingCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsThird_Person_Character"))
	AThirdPersonCharacter_C__pf2222656877* b0l__K2Node_DynamicCast_AsThird_Person_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b0l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ATargetPoint* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	ATargetPoint* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch_3"))
	AEnemyShootingCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b0l__K2Node_DynamicCast_bSuccess_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_1"))
	int32 b0l__Temp_int_Array_Index_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch_4"))
	AEnemyShootingCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_6"))
	bool b0l__K2Node_DynamicCast_bSuccess_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_1"))
	int32 b0l__Temp_int_Loop_Counter_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsAttackedEnemyDeath_IsDeath"))
	bool b0l__CallFunc_IsAttackedEnemyDeath_IsDeath__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance"))
	UMyGameInstance_C__pf2410127383* b0l__K2Node_DynamicCast_AsMy_Game_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_7"))
	bool b0l__K2Node_DynamicCast_bSuccess_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ALevelCompleterBP_C__pf922009354*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	AActor* b0l__CallFunc_Array_Get_Item_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLevel_Completer_BP"))
	ALevelCompleterBP_C__pf922009354* b0l__K2Node_DynamicCast_AsLevel_Completer_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_8"))
	bool b0l__K2Node_DynamicCast_bSuccess_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch_5"))
	AEnemyShootingCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_9"))
	bool b0l__K2Node_DynamicCast_bSuccess_9__pf;
	AAIShootingController_C__pf681293266(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_AIShootingController__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_AIShootingController_1"))
	void bpf__ExecuteUbergraph_AIShootingController__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AIShootingController__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AIShootingController__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AIShootingController__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AIShootingController__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AIShootingController__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AIShootingController__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Suicide"))
	virtual void bpf__Suicide__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GetNewPoint"))
	virtual void bpf__GetNewPoint__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Attack"))
	virtual void bpf__Attack__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature__pf(AActor* bpp__Actor__pf, FAIStimulus bpp__Stimulus__pf);
	UFUNCTION(meta=(Comment="/** Blueprint implementable event to react to the controller possessing a pawn */", DisplayName="On Possess", ToolTip="Blueprint implementable event to react to the controller possessing a pawn", CppFromBpEvent, OverrideNativeName="ReceivePossess"))
	virtual void bpf__ReceivePossess__pf(APawn* bpp__PossessedPawn__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Run"))
	virtual void bpf__Run__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Walk"))
	virtual void bpf__Walk__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MakeFocus"))
	virtual void bpf__MakeFocus__pf(AActor* bpp__EnemyCast__pf, E__EnumTypesOfCharacters__pf bpp__TypeOfCharacter__pf, bool bpp__Successfully_Sensed__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DieFunction"))
	virtual void bpf__DieFunction__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="FullDeath"))
	virtual void bpf__FullDeath__pf(AEnemyShootingCh_C__pf3349424045* bpp__NewParam__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="IsAttackedEnemyDeath"))
	virtual void bpf__IsAttackedEnemyDeath__pf(AActor* bpp__EnemyReference__pf, /*out*/ bool& bpp__IsDeath__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DetectPlayer"))
	virtual void bpf__DetectPlayer__pf(AActor* bpp__EnemyCast__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AddToVision"))
	virtual void bpf__AddToVision__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PlayerInVision"))
	virtual void bpf__PlayerInVision__pf(bool bpp__IsEnteringInSight__pf, AEnemyShootingCh_C__pf3349424045* bpp__Player__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GetSoundAlert"))
	virtual void bpf__GetSoundAlert__pf(AActor* bpp__EnemyCast__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SpawnPossesionPS"))
	virtual void bpf__SpawnPossesionPS__pf(AActor* bpp__TargetActor__pf);
public:
};
