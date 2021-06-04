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
#include "Talking_Normal_SteinerSit_AnimBP__pf1028405882.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Art/Enemies/Lobby_Animations/Talking_Normal_SteinerSit_AnimBP.Talking_Normal_SteinerSit_AnimBP_C", OverrideNativeName="Talking_Normal_SteinerSit_AnimBP_C"))
class UTalking_Normal_SteinerSit_AnimBP_C__pf1028405882 : public UAnimInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root"))
	FAnimNode_Root bpv__AnimGraphNode_Root__pf;
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
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_5"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_5__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_5"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_5__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_4"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_4"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_4__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsConversation_Actor"))
	AConversation_Actor_C__pf2744501483* b0l__K2Node_DynamicCast_AsConversation_Actor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaTimeX"))
	float b0l__K2Node_Event_DeltaTimeX__pf;
	UTalking_Normal_SteinerSit_AnimBP_C__pf1028405882(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void __InitAllAnimNodes();
	void __InitAnimNode__AnimGraphNode_Root();
	void __InitAnimNode__AnimGraphNode_TransitionResult_5();
	void __InitAnimNode__AnimGraphNode_TransitionResult_4();
	void __InitAnimNode__AnimGraphNode_TransitionResult_3();
	void __InitAnimNode__AnimGraphNode_TransitionResult_2();
	void __InitAnimNode__AnimGraphNode_TransitionResult_1();
	void __InitAnimNode__AnimGraphNode_TransitionResult();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_5();
	void __InitAnimNode__AnimGraphNode_StateResult_5();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_4();
	void __InitAnimNode__AnimGraphNode_StateResult_4();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_3();
	void __InitAnimNode__AnimGraphNode_StateResult_3();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_2();
	void __InitAnimNode__AnimGraphNode_StateResult_2();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_1();
	void __InitAnimNode__AnimGraphNode_StateResult_1();
	void __InitAnimNode__AnimGraphNode_SequencePlayer();
	void __InitAnimNode__AnimGraphNode_StateResult();
	void __InitAnimNode__AnimGraphNode_StateMachine();
	void bpf__ExecuteUbergraph_Talking_Normal_SteinerSit_AnimBP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Talking_Normal_SteinerSit_AnimBP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Talking_Normal_SteinerSit_AnimBP__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Talking_Normal_SteinerSit_AnimBP__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Talking_Normal_SteinerSit_AnimBP__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Talking_Normal_SteinerSit_AnimBP__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Talking_Normal_SteinerSit_AnimBP__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Executed when the Animation is updated */", ToolTip="Executed when the Animation is updated", CppFromBpEvent, OverrideNativeName="BlueprintUpdateAnimation"))
	virtual void bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_Talking_Normal_SteinerSit_AnimBP_AnimGraphNode_TransitionResult_9AD836F2421121692D86A9A73AF4A321"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Talking_Normal_SteinerSit_AnimBP_AnimGraphNode_TransitionResult_9AD836F2421121692D86A9A73AF4A321__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_Talking_Normal_SteinerSit_AnimBP_AnimGraphNode_TransitionResult_25A4C27E4A0C224E77CEA98A0DB4A77F"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Talking_Normal_SteinerSit_AnimBP_AnimGraphNode_TransitionResult_25A4C27E4A0C224E77CEA98A0DB4A77F__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_Talking_Normal_SteinerSit_AnimBP_AnimGraphNode_TransitionResult_17906E694C3CFA0056E855B040029406"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Talking_Normal_SteinerSit_AnimBP_AnimGraphNode_TransitionResult_17906E694C3CFA0056E855B040029406__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_Talking_Normal_SteinerSit_AnimBP_AnimGraphNode_TransitionResult_CD7247F04846E7544371FA8BF45518E4"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Talking_Normal_SteinerSit_AnimBP_AnimGraphNode_TransitionResult_CD7247F04846E7544371FA8BF45518E4__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_Talking_Normal_SteinerSit_AnimBP_AnimGraphNode_TransitionResult_E6709A134CCC9D4CD5B7C8B63DF1AB90"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Talking_Normal_SteinerSit_AnimBP_AnimGraphNode_TransitionResult_E6709A134CCC9D4CD5B7C8B63DF1AB90__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_Talking_Normal_SteinerSit_AnimBP_AnimGraphNode_TransitionResult_DA67008342D3CED8E7A06CB0B1759031"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Talking_Normal_SteinerSit_AnimBP_AnimGraphNode_TransitionResult_DA67008342D3CED8E7A06CB0B1759031__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", AnimBlueprintFunction="true", Category, OverrideNativeName="AnimGraph"))
	virtual void bpf__AnimGraph__pf(/*out*/ FPoseLink& bpp__AnimGraph__pf);
public:
};
