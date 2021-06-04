#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h"
class AActor;
class AAISuicideController_C__pf3889547882;
class AAIDogController_C__pf60788051;
class AAIShootingController_C__pf681293266;
class UAIAsyncTaskBlueprintProxy;
#include "GoToLastKnowLocation__pf681293266.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Enemies/BehaviorShooting/GoToLastKnowLocation.GoToLastKnowLocation_C", OverrideNativeName="GoToLastKnowLocation_C"))
class UGoToLastKnowLocation_C__pf681293266 : public UBTTask_BlueprintBase
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OAISimpleDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__OAISimpleDelegate__DelegateSignature__SC_0, EPathFollowingResult::Type , bpp__MovementResult__pf);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BBPlayer Location Key", Category="Default", MultiLine="true", OverrideNativeName="BBPlayerLocationKey"))
	FBlackboardKeySelector bpv__BBPlayerLocationKey__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BBRecently Sighted Key", Category="Default", MultiLine="true", OverrideNativeName="BBRecentlySightedKey"))
	FBlackboardKeySelector bpv__BBRecentlySightedKey__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_5"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_4"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__Temp_byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_3"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_2"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_2"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_1"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__Temp_byte_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_3"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_1"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_4"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_2"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__Temp_byte_Variable_2__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsAIShooting_Controller"))
	AAIShootingController_C__pf681293266* b0l__K2Node_DynamicCast_AsAIShooting_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_5"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_5__pf;
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
	UGoToLastKnowLocation_C__pf681293266(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_GoToLastKnowLocation__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GoToLastKnowLocation__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GoToLastKnowLocation__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GoToLastKnowLocation__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GoToLastKnowLocation__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GoToLastKnowLocation__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** entry point, task will stay active until FinishExecute is called.\t *\t@Note that if both generic and AI event versions are implemented only the more \t *\tsuitable one will be called, meaning the AI version if called for AI, generic one otherwise */", ToolTip="entry point, task will stay active until FinishExecute is called.    @Note that if both generic and AI event versions are implemented only the more    suitable one will be called, meaning the AI version if called for AI, generic one otherwise", CppFromBpEvent, OverrideNativeName="ReceiveExecute"))
	virtual void bpf__ReceiveExecute__pf(AActor* bpp__OwnerActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_349ADBA04FF25C0D2FD0A499FE44769F"))
	virtual void bpf__OnSuccess_349ADBA04FF25C0D2FD0A499FE44769F__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_349ADBA04FF25C0D2FD0A499FE44769F"))
	virtual void bpf__OnFail_349ADBA04FF25C0D2FD0A499FE44769F__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_1C44F03B48D480F67348628D6D68782E"))
	virtual void bpf__OnSuccess_1C44F03B48D480F67348628D6D68782E__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_1C44F03B48D480F67348628D6D68782E"))
	virtual void bpf__OnFail_1C44F03B48D480F67348628D6D68782E__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_33BB0C264D8B0D570A35B1BC4A890A3A"))
	virtual void bpf__OnSuccess_33BB0C264D8B0D570A35B1BC4A890A3A__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_33BB0C264D8B0D570A35B1BC4A890A3A"))
	virtual void bpf__OnFail_33BB0C264D8B0D570A35B1BC4A890A3A__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
public:
};
