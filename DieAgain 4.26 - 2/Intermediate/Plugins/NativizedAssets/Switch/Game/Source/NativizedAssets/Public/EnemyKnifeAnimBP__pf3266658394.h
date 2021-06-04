#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Animation/AnimClassData.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_Root.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_TransitionResult.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_SequencePlayer.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_StateResult.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendSpacePlayer.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_StateMachine.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
class AEnemyShootingCh_C__pf3349424045;
#include "EnemyKnifeAnimBP__pf3266658394.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Art/Enemies/AnimationTree_Shooting/EnemyKnifeAnimBP.EnemyKnifeAnimBP_C", OverrideNativeName="EnemyKnifeAnimBP_C"))
class UEnemyKnifeAnimBP_C__pf3266658394 : public UAnimInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root"))
	FAnimNode_Root bpv__AnimGraphNode_Root__pf;
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
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_4"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_4__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_2"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_3"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_1"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_2"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_1"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendSpacePlayer"))
	FAnimNode_BlendSpacePlayer bpv__AnimGraphNode_BlendSpacePlayer__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateMachine"))
	FAnimNode_StateMachine bpv__AnimGraphNode_StateMachine__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Speed", Category="Default", MultiLine="true", OverrideNativeName="Speed"))
	float bpv__Speed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Direction", Category="Default", MultiLine="true", OverrideNativeName="Direction"))
	float bpv__Direction__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Death", Category="Default", MultiLine="true", OverrideNativeName="IsDeath"))
	bool bpv__IsDeath__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Suiciding", Category="Default", MultiLine="true", OverrideNativeName="IsSuiciding"))
	bool bpv__IsSuiciding__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Suiciding with Knife", Category="Default", MultiLine="true", OverrideNativeName="SuicidingWithKnife"))
	bool bpv__SuicidingWithKnife__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch"))
	AEnemyShootingCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaTimeX"))
	float b0l__K2Node_Event_DeltaTimeX__pf;
	UEnemyKnifeAnimBP_C__pf3266658394(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void __InitAllAnimNodes();
	void __InitAnimNode__AnimGraphNode_Root();
	void __InitAnimNode__AnimGraphNode_TransitionResult_4();
	void __InitAnimNode__AnimGraphNode_TransitionResult_3();
	void __InitAnimNode__AnimGraphNode_TransitionResult_2();
	void __InitAnimNode__AnimGraphNode_TransitionResult_1();
	void __InitAnimNode__AnimGraphNode_TransitionResult();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_3();
	void __InitAnimNode__AnimGraphNode_StateResult_4();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_2();
	void __InitAnimNode__AnimGraphNode_StateResult_3();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_1();
	void __InitAnimNode__AnimGraphNode_StateResult_2();
	void __InitAnimNode__AnimGraphNode_SequencePlayer();
	void __InitAnimNode__AnimGraphNode_StateResult_1();
	void __InitAnimNode__AnimGraphNode_BlendSpacePlayer();
	void __InitAnimNode__AnimGraphNode_StateResult();
	void __InitAnimNode__AnimGraphNode_StateMachine();
	void bpf__ExecuteUbergraph_EnemyKnifeAnimBP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyKnifeAnimBP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyKnifeAnimBP__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyKnifeAnimBP__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyKnifeAnimBP__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyKnifeAnimBP__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyKnifeAnimBP__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Executed when the Animation is updated */", ToolTip="Executed when the Animation is updated", CppFromBpEvent, OverrideNativeName="BlueprintUpdateAnimation"))
	virtual void bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_EnemyKnifeAnimBP_AnimGraphNode_TransitionResult_26FC04804742EE99CF57829172639174"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_EnemyKnifeAnimBP_AnimGraphNode_TransitionResult_26FC04804742EE99CF57829172639174__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_EnemyKnifeAnimBP_AnimGraphNode_TransitionResult_410555C9466057DD1A261F877A111FFC"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_EnemyKnifeAnimBP_AnimGraphNode_TransitionResult_410555C9466057DD1A261F877A111FFC__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_EnemyKnifeAnimBP_AnimGraphNode_TransitionResult_6DEA634E40540916D85998BD6EFDC43E"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_EnemyKnifeAnimBP_AnimGraphNode_TransitionResult_6DEA634E40540916D85998BD6EFDC43E__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_EnemyKnifeAnimBP_AnimGraphNode_TransitionResult_2E80A0B54B93775CAF95A0A0C794B084"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_EnemyKnifeAnimBP_AnimGraphNode_TransitionResult_2E80A0B54B93775CAF95A0A0C794B084__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_EnemyKnifeAnimBP_AnimGraphNode_TransitionResult_FB1F0839444714CF9CAC5BA7B2D0BBA3"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_EnemyKnifeAnimBP_AnimGraphNode_TransitionResult_FB1F0839444714CF9CAC5BA7B2D0BBA3__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_EnemyKnifeAnimBP_AnimGraphNode_BlendSpacePlayer_126954BE4675E0044989D3902FE9571F"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_EnemyKnifeAnimBP_AnimGraphNode_BlendSpacePlayer_126954BE4675E0044989D3902FE9571F__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", AnimBlueprintFunction="true", Category, OverrideNativeName="AnimGraph"))
	virtual void bpf__AnimGraph__pf(/*out*/ FPoseLink& bpp__AnimGraph__pf);
public:
};
