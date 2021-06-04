#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h"
class AActor;
class AAISniperController_C__pf1156381827;
class AAISuicideController_C__pf3889547882;
class AAIDogController_C__pf60788051;
class AAIShootingController_C__pf681293266;
class UAIAsyncTaskBlueprintProxy;
#include "MoveToTargetPoint__pf681293266.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Enemies/BehaviorShooting/MoveToTargetPoint.MoveToTargetPoint_C", OverrideNativeName="MoveToTargetPoint_C"))
class UMoveToTargetPoint_C__pf681293266 : public UBTTask_BlueprintBase
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OAISimpleDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__OAISimpleDelegate__DelegateSignature__SC_0, EPathFollowingResult::Type , bpp__MovementResult__pf);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BBTarget Reference Key", Category="Default", MultiLine="true", OverrideNativeName="BBTargetReferenceKey"))
	FBlackboardKeySelector bpv__BBTargetReferenceKey__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_7"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_6"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__Temp_byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_5"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_4"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_2"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_1"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__Temp_byte_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_3"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_3"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_2"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_4"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_2"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__Temp_byte_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_5"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_1"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_6"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_3"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__Temp_byte_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OwnerActor"))
	AActor* b0l__K2Node_Event_OwnerActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAISniper_Controller"))
	AAISniperController_C__pf1156381827* b0l__K2Node_DynamicCast_AsAISniper_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAISuicide_Controller"))
	AAISuicideController_C__pf3889547882* b0l__K2Node_DynamicCast_AsAISuicide_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAIDog_Controller"))
	AAIDogController_C__pf60788051* b0l__K2Node_DynamicCast_AsAIDog_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAIShooting_Controller"))
	AAIShootingController_C__pf681293266* b0l__K2Node_DynamicCast_AsAIShooting_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_7"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b0l__CallFunc_IsValid_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue_1"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue_2"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_1"))
	bool b0l__CallFunc_IsValid_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_2"))
	bool b0l__CallFunc_IsValid_ReturnValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue_3"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_3"))
	bool b0l__CallFunc_IsValid_ReturnValue_3__pf;
	UMoveToTargetPoint_C__pf681293266(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_MoveToTargetPoint__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MoveToTargetPoint__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MoveToTargetPoint__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MoveToTargetPoint__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MoveToTargetPoint__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MoveToTargetPoint__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MoveToTargetPoint__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MoveToTargetPoint__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MoveToTargetPoint__pf_8(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** entry point, task will stay active until FinishExecute is called.\t *\t@Note that if both generic and AI event versions are implemented only the more \t *\tsuitable one will be called, meaning the AI version if called for AI, generic one otherwise */", ToolTip="entry point, task will stay active until FinishExecute is called.    @Note that if both generic and AI event versions are implemented only the more    suitable one will be called, meaning the AI version if called for AI, generic one otherwise", CppFromBpEvent, OverrideNativeName="ReceiveExecute"))
	virtual void bpf__ReceiveExecute__pf(AActor* bpp__OwnerActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_25236EFC4DEEBEA0D2EC82B620ABB3DF"))
	virtual void bpf__OnSuccess_25236EFC4DEEBEA0D2EC82B620ABB3DF__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_25236EFC4DEEBEA0D2EC82B620ABB3DF"))
	virtual void bpf__OnFail_25236EFC4DEEBEA0D2EC82B620ABB3DF__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_2134EA0242F695D6096317A838092180"))
	virtual void bpf__OnSuccess_2134EA0242F695D6096317A838092180__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_2134EA0242F695D6096317A838092180"))
	virtual void bpf__OnFail_2134EA0242F695D6096317A838092180__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_8D7B09AF413A0A08BC852F82C41161DC"))
	virtual void bpf__OnSuccess_8D7B09AF413A0A08BC852F82C41161DC__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_8D7B09AF413A0A08BC852F82C41161DC"))
	virtual void bpf__OnFail_8D7B09AF413A0A08BC852F82C41161DC__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_5051665649E2689BF2A6F9892D2EF4AB"))
	virtual void bpf__OnSuccess_5051665649E2689BF2A6F9892D2EF4AB__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_5051665649E2689BF2A6F9892D2EF4AB"))
	virtual void bpf__OnFail_5051665649E2689BF2A6F9892D2EF4AB__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
public:
};
