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
class APlayerWalkMap_Character_C__pf2222656877;
#include "CyberWalkMap_AnimBP__pf3949469439.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/CyberGirl/Character/Meshes/CyberWalkMap_AnimBP.CyberWalkMap_AnimBP_C", OverrideNativeName="CyberWalkMap_AnimBP_C"))
class UCyberWalkMap_AnimBP_C__pf3949469439 : public UAnimInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root"))
	FAnimNode_Root bpv__AnimGraphNode_Root__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_3"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_2"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_1"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult__pf;
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
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Speed", Category="Default", MultiLine="true", OverrideNativeName="Speed"))
	float bpv__Speed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Dance", Category="Default", MultiLine="true", OverrideNativeName="CanDance"))
	bool bpv__CanDance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Pet", Category="Default", MultiLine="true", OverrideNativeName="CanPet"))
	bool bpv__CanPet__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_Walk_Map_Character"))
	APlayerWalkMap_Character_C__pf2222656877* b0l__K2Node_DynamicCast_AsPlayer_Walk_Map_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaTimeX"))
	float b0l__K2Node_Event_DeltaTimeX__pf;
	UCyberWalkMap_AnimBP_C__pf3949469439(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void __InitAllAnimNodes();
	void __InitAnimNode__AnimGraphNode_Root();
	void __InitAnimNode__AnimGraphNode_TransitionResult_3();
	void __InitAnimNode__AnimGraphNode_TransitionResult_2();
	void __InitAnimNode__AnimGraphNode_TransitionResult_1();
	void __InitAnimNode__AnimGraphNode_TransitionResult();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_2();
	void __InitAnimNode__AnimGraphNode_StateResult_2();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_1();
	void __InitAnimNode__AnimGraphNode_StateResult_1();
	void __InitAnimNode__AnimGraphNode_SequencePlayer();
	void __InitAnimNode__AnimGraphNode_StateResult();
	void __InitAnimNode__AnimGraphNode_StateMachine();
	void bpf__ExecuteUbergraph_CyberWalkMap_AnimBP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CyberWalkMap_AnimBP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CyberWalkMap_AnimBP__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CyberWalkMap_AnimBP__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CyberWalkMap_AnimBP__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Executed when the Animation is updated */", ToolTip="Executed when the Animation is updated", CppFromBpEvent, OverrideNativeName="BlueprintUpdateAnimation"))
	virtual void bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_CyberWalkMap_AnimBP_AnimGraphNode_TransitionResult_3442673F4500D293648464A35D07DE45"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_CyberWalkMap_AnimBP_AnimGraphNode_TransitionResult_3442673F4500D293648464A35D07DE45__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_CyberWalkMap_AnimBP_AnimGraphNode_TransitionResult_99903E3F4801AA62620686927A20AA0C"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_CyberWalkMap_AnimBP_AnimGraphNode_TransitionResult_99903E3F4801AA62620686927A20AA0C__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_CyberWalkMap_AnimBP_AnimGraphNode_TransitionResult_FE53F0FE42D03DF29A7E2CBD7D3E528F"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_CyberWalkMap_AnimBP_AnimGraphNode_TransitionResult_FE53F0FE42D03DF29A7E2CBD7D3E528F__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_CyberWalkMap_AnimBP_AnimGraphNode_TransitionResult_F8CC16F64B1D7171F096669E0C51CD46"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_CyberWalkMap_AnimBP_AnimGraphNode_TransitionResult_F8CC16F64B1D7171F096669E0C51CD46__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", AnimBlueprintFunction="true", Category, OverrideNativeName="AnimGraph"))
	virtual void bpf__AnimGraph__pf(/*out*/ FPoseLink& bpp__AnimGraph__pf);
public:
};
