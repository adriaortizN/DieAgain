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
#include "Demon_WalkMap_AnimBP__pf4182214707.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Hara/Hara_Anim/WalkMap/Demon_WalkMap_AnimBP.Demon_WalkMap_AnimBP_C", OverrideNativeName="Demon_WalkMap_AnimBP_C"))
class UDemon_WalkMap_AnimBP_C__pf4182214707 : public UAnimInstance
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
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Speed", Category="Default", MultiLine="true", OverrideNativeName="Speed"))
	float bpv__Speed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Pet", Category="Default", MultiLine="true", OverrideNativeName="CanPet"))
	bool bpv__CanPet__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Dance", Category="Default", MultiLine="true", OverrideNativeName="CanDance"))
	bool bpv__CanDance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_Walk_Map_Character"))
	APlayerWalkMap_Character_C__pf2222656877* b0l__K2Node_DynamicCast_AsPlayer_Walk_Map_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaTimeX"))
	float b0l__K2Node_Event_DeltaTimeX__pf;
	UDemon_WalkMap_AnimBP_C__pf4182214707(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
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
	void __InitAnimNode__AnimGraphNode_SequencePlayer_3();
	void __InitAnimNode__AnimGraphNode_StateResult_3();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_2();
	void __InitAnimNode__AnimGraphNode_StateResult_2();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_1();
	void __InitAnimNode__AnimGraphNode_StateResult_1();
	void __InitAnimNode__AnimGraphNode_SequencePlayer();
	void __InitAnimNode__AnimGraphNode_StateResult();
	void __InitAnimNode__AnimGraphNode_StateMachine();
	void bpf__ExecuteUbergraph_Demon_WalkMap_AnimBP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Demon_WalkMap_AnimBP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Demon_WalkMap_AnimBP__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Demon_WalkMap_AnimBP__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Demon_WalkMap_AnimBP__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Demon_WalkMap_AnimBP__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Demon_WalkMap_AnimBP__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Executed when the Animation is updated */", ToolTip="Executed when the Animation is updated", CppFromBpEvent, OverrideNativeName="BlueprintUpdateAnimation"))
	virtual void bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_Demon_WalkMap_AnimBP_AnimGraphNode_TransitionResult_9D2D0F874534AADDAAB807AD6C96B7DA"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Demon_WalkMap_AnimBP_AnimGraphNode_TransitionResult_9D2D0F874534AADDAAB807AD6C96B7DA__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_Demon_WalkMap_AnimBP_AnimGraphNode_TransitionResult_7F9536DE4A98122E0E7851BA91566C92"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Demon_WalkMap_AnimBP_AnimGraphNode_TransitionResult_7F9536DE4A98122E0E7851BA91566C92__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_Demon_WalkMap_AnimBP_AnimGraphNode_TransitionResult_350DADE44DA54242D31B22BDF13443F9"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Demon_WalkMap_AnimBP_AnimGraphNode_TransitionResult_350DADE44DA54242D31B22BDF13443F9__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_Demon_WalkMap_AnimBP_AnimGraphNode_TransitionResult_C62BF802479AA63128201EB31636E07E"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Demon_WalkMap_AnimBP_AnimGraphNode_TransitionResult_C62BF802479AA63128201EB31636E07E__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_Demon_WalkMap_AnimBP_AnimGraphNode_TransitionResult_06D5F58B48D1C5A1E3C899B4B78E76E7"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Demon_WalkMap_AnimBP_AnimGraphNode_TransitionResult_06D5F58B48D1C5A1E3C899B4B78E76E7__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_Demon_WalkMap_AnimBP_AnimGraphNode_TransitionResult_3C88CD854AF39136ABF262B09BE408A7"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_Demon_WalkMap_AnimBP_AnimGraphNode_TransitionResult_3C88CD854AF39136ABF262B09BE408A7__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", AnimBlueprintFunction="true", Category, OverrideNativeName="AnimGraph"))
	virtual void bpf__AnimGraph__pf(/*out*/ FPoseLink& bpp__AnimGraph__pf);
public:
};
