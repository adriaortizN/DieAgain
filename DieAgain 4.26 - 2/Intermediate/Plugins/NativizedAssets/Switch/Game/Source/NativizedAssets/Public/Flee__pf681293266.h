#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h"
class AActor;
class AAISlaveController_C__pf1263353332;
class AEnemyShootingCh_C__pf3349424045;
class UAIAsyncTaskBlueprintProxy;
class AEnemyDogCh_C__pf3349424045;
class AThirdPersonCharacter_C__pf2222656877;
class AAIShootingController_C__pf681293266;
class AAISuicideController_C__pf3889547882;
#include "Flee__pf681293266.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Enemies/BehaviorShooting/Flee.Flee_C", OverrideNativeName="Flee_C"))
class UFlee_C__pf681293266 : public UBTTask_BlueprintBase
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OAISimpleDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__OAISimpleDelegate__DelegateSignature__SC_0, EPathFollowingResult::Type , bpp__MovementResult__pf);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BBIs Close to Player", Category="Default", MultiLine="true", OverrideNativeName="BBIsCloseToPlayer"))
	FBlackboardKeySelector bpv__BBIsCloseToPlayer__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Distance to Flee", Category="Default", MultiLine="true", OverrideNativeName="DistanceToFlee"))
	float bpv__DistanceToFlee__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BBNeed to Suidice Key", Category="Default", MultiLine="true", OverrideNativeName="BBNeedToSuidiceKey"))
	FBlackboardKeySelector bpv__BBNeedToSuidiceKey__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BBPlayer Reference", Category="Default", MultiLine="true", OverrideNativeName="BBPlayerReference"))
	FBlackboardKeySelector bpv__BBPlayerReference__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Destination Vector", Category="Default", MultiLine="true", OverrideNativeName="DestinationVector"))
	FVector bpv__DestinationVector__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Distance to Suicide", Category="Default", MultiLine="true", OverrideNativeName="DistanceToSuicide"))
	float bpv__DistanceToSuicide__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BBCan See Player", Category="Default", MultiLine="true", OverrideNativeName="BBCanSeePlayer"))
	FBlackboardKeySelector bpv__BBCanSeePlayer__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Max Distance to Run Away", Category="Default", MultiLine="true", OverrideNativeName="MaxDistanceToRunAway"))
	float bpv__MaxDistanceToRunAway__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_3"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_2"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__Temp_byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_2"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_1"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_3"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_1"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__Temp_byte_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_SelfActorLocation_1"))
	FVector b0l__K2Node_CustomEvent_SelfActorLocation_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_EnemyActorLocation_1"))
	FVector b0l__K2Node_CustomEvent_EnemyActorLocation_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OwnerActor"))
	AActor* b0l__K2Node_Event_OwnerActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_SelfActorLocation"))
	FVector b0l__K2Node_CustomEvent_SelfActorLocation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_EnemyActorLocation"))
	FVector b0l__K2Node_CustomEvent_EnemyActorLocation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NewParam"))
	AActor* b0l__K2Node_CustomEvent_NewParam__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAISlave_Controller"))
	AAISlaveController_C__pf1263353332* b0l__K2Node_DynamicCast_AsAISlave_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch"))
	AEnemyShootingCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Dog_Ch"))
	AEnemyDogCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Dog_Ch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch_1"))
	AEnemyShootingCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsThird_Person_Character"))
	AThirdPersonCharacter_C__pf2222656877* b0l__K2Node_DynamicCast_AsThird_Person_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b0l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b0l__CallFunc_IsValid_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch_2"))
	AEnemyShootingCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b0l__K2Node_DynamicCast_bSuccess_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAIShooting_Controller"))
	AAIShootingController_C__pf681293266* b0l__K2Node_DynamicCast_AsAIShooting_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_6"))
	bool b0l__K2Node_DynamicCast_bSuccess_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAIShooting_Controller_1"))
	AAIShootingController_C__pf681293266* b0l__K2Node_DynamicCast_AsAIShooting_Controller_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_7"))
	bool b0l__K2Node_DynamicCast_bSuccess_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch_3"))
	AEnemyShootingCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_8"))
	bool b0l__K2Node_DynamicCast_bSuccess_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch_4"))
	AEnemyShootingCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_9"))
	bool b0l__K2Node_DynamicCast_bSuccess_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAISuicide_Controller"))
	AAISuicideController_C__pf3889547882* b0l__K2Node_DynamicCast_AsAISuicide_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_10"))
	bool b0l__K2Node_DynamicCast_bSuccess_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAIShooting_Controller_2"))
	AAIShootingController_C__pf681293266* b0l__K2Node_DynamicCast_AsAIShooting_Controller_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_11"))
	bool b0l__K2Node_DynamicCast_bSuccess_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch_5"))
	AEnemyShootingCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_12"))
	bool b0l__K2Node_DynamicCast_bSuccess_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch_6"))
	AEnemyShootingCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_13"))
	bool b0l__K2Node_DynamicCast_bSuccess_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsThird_Person_Character_1"))
	AThirdPersonCharacter_C__pf2222656877* b0l__K2Node_DynamicCast_AsThird_Person_Character_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_14"))
	bool b0l__K2Node_DynamicCast_bSuccess_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue_1"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_1"))
	bool b0l__CallFunc_IsValid_ReturnValue_1__pf;
	UFlee_C__pf681293266(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Flee__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Flee__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Flee__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Flee__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Flee__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Flee__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Flee__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DistanceSlave"))
	virtual void bpf__DistanceSlave__pf(FVector bpp__SelfActorLocation__pf, FVector bpp__EnemyActorLocation__pf, AActor* bpp__NewParam__pf);
	UFUNCTION(meta=(Comment="/** entry point, task will stay active until FinishExecute is called.\t *\t@Note that if both generic and AI event versions are implemented only the more \t *\tsuitable one will be called, meaning the AI version if called for AI, generic one otherwise */", ToolTip="entry point, task will stay active until FinishExecute is called.    @Note that if both generic and AI event versions are implemented only the more    suitable one will be called, meaning the AI version if called for AI, generic one otherwise", CppFromBpEvent, OverrideNativeName="ReceiveExecute"))
	virtual void bpf__ReceiveExecute__pf(AActor* bpp__OwnerActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Distance"))
	virtual void bpf__Distance__pf(FVector bpp__SelfActorLocation__pf, FVector bpp__EnemyActorLocation__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_D8B5791C4804CDBD7768789E7AC78EDF"))
	virtual void bpf__OnSuccess_D8B5791C4804CDBD7768789E7AC78EDF__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_D8B5791C4804CDBD7768789E7AC78EDF"))
	virtual void bpf__OnFail_D8B5791C4804CDBD7768789E7AC78EDF__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_68DB2CBC4167B95AF5DA54B89E0C86B8"))
	virtual void bpf__OnSuccess_68DB2CBC4167B95AF5DA54B89E0C86B8__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_68DB2CBC4167B95AF5DA54B89E0C86B8"))
	virtual void bpf__OnFail_68DB2CBC4167B95AF5DA54B89E0C86B8__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
public:
};
