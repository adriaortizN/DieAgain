#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Animation/AnimClassData.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_Root.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_TransitionResult.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_SequencePlayer.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_StateResult.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_StateMachine.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
class AConversation_Actor_C__pf2744501483;
#include "Steiner_LV6__pf1028405882.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Art/Enemies/Lobby_Animations/Steiner_LV6.Steiner_LV6_C", OverrideNativeName="Steiner_LV6_C"))
class USteiner_LV6_C__pf1028405882 : public UAnimInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root"))
	FAnimNode_Root bpv__AnimGraphNode_Root__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_6"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_6__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_5"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_5__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_4"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_3"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_2"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_1"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_3"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_3"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_2"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_2"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_1"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_1"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateMachine"))
	FAnimNode_StateMachine bpv__AnimGraphNode_StateMachine__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Talking", Category="Default", MultiLine="true", OverrideNativeName="IsTalking"))
	bool bpv__IsTalking__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Click", Category="Default", MultiLine="true", OverrideNativeName="Click"))
	bool bpv__Click__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaTimeX"))
	float b0l__K2Node_Event_DeltaTimeX__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsConversation_Actor"))
	AConversation_Actor_C__pf2744501483* b0l__K2Node_DynamicCast_AsConversation_Actor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	USteiner_LV6_C__pf1028405882(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void __InitAllAnimNodes();
	void __InitAnimNode__AnimGraphNode_Root();
	void __InitAnimNode__AnimGraphNode_TransitionResult_6();
	void __InitAnimNode__AnimGraphNode_TransitionResult_5();
	void __InitAnimNode__AnimGraphNode_TransitionResult_4();
	void __InitAnimNode__AnimGraphNode_TransitionResult_3();
	void __InitAnimNode__AnimGraphNode_TransitionResult_2();
	void __InitAnimNode__AnimGraphNode_TransitionResult_1();
	void __InitAnimNode__AnimGraphNode_TransitionResult();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_3();
	void __InitAnimNode__AnimGraphNode_StateResult_3();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_2();
	void __InitAnimNode__AnimGraphNode_StateResult_2();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_1();
	void __InitAnimNode__AnimGraphNode_StateResult_1();
	void __InitAnimNode__AnimGraphNode_SequencePlayer();
	void __InitAnimNode__AnimGraphNode_StateResult();
	void __InitAnimNode__AnimGraphNode_StateMachine();
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Steiner_LV6_0"))
	void bpf__ExecuteUbergraph_Steiner_LV6__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Steiner_LV6__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Steiner_LV6__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Steiner_LV6__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Steiner_LV6__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Steiner_LV6__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Steiner_LV6__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Steiner_LV6__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Executed when the Animation is updated */", ToolTip="Executed when the Animation is updated", CppFromBpEvent, OverrideNativeName="BlueprintUpdateAnimation"))
	virtual void bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_Steiner_LV6_AnimGraphNode_TransitionResult_BC4495654B1C3B79596A21B3A30DA961"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Steiner_LV6_AnimGraphNode_TransitionResult_BC4495654B1C3B79596A21B3A30DA961__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_Steiner_LV6_AnimGraphNode_TransitionResult_C666201C4598AE2C2AA77A88C8B9F53F"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Steiner_LV6_AnimGraphNode_TransitionResult_C666201C4598AE2C2AA77A88C8B9F53F__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_Steiner_LV6_AnimGraphNode_TransitionResult_953D6D304DB1CC5584F295B436C88DEA"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Steiner_LV6_AnimGraphNode_TransitionResult_953D6D304DB1CC5584F295B436C88DEA__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_Steiner_LV6_AnimGraphNode_TransitionResult_FA1825C34FAE500B4326F3B51C3CD434"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Steiner_LV6_AnimGraphNode_TransitionResult_FA1825C34FAE500B4326F3B51C3CD434__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_Steiner_LV6_AnimGraphNode_TransitionResult_3033903643505A3B61F462BAA0F87858"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Steiner_LV6_AnimGraphNode_TransitionResult_3033903643505A3B61F462BAA0F87858__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_Steiner_LV6_AnimGraphNode_TransitionResult_AAA5EDE84F3F8F72BB2C56B5422AA417"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Steiner_LV6_AnimGraphNode_TransitionResult_AAA5EDE84F3F8F72BB2C56B5422AA417__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_Steiner_LV6_AnimGraphNode_TransitionResult_093D27D144A7E6BB55B549B4EB8BFB4C"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Steiner_LV6_AnimGraphNode_TransitionResult_093D27D144A7E6BB55B549B4EB8BFB4C__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", AnimBlueprintFunction="true", Category, OverrideNativeName="AnimGraph"))
	virtual void bpf__AnimGraph__pf(/*out*/ FPoseLink& bpp__AnimGraph__pf);
public:
};
