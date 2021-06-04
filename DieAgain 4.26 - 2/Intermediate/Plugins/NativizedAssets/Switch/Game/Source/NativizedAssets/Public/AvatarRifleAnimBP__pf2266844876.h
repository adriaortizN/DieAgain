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
class AThirdPersonCharacter_C__pf2222656877;
#include "AvatarRifleAnimBP__pf2266844876.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Art/Enemies/PlayerAnimations/AvatarRifleAnimBP.AvatarRifleAnimBP_C", OverrideNativeName="AvatarRifleAnimBP_C"))
class UAvatarRifleAnimBP_C__pf2266844876 : public UAnimInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root"))
	FAnimNode_Root bpv__AnimGraphNode_Root__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_1"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_2"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendSpacePlayer_1"))
	FAnimNode_BlendSpacePlayer bpv__AnimGraphNode_BlendSpacePlayer_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_1"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendSpacePlayer"))
	FAnimNode_BlendSpacePlayer bpv__AnimGraphNode_BlendSpacePlayer__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateMachine"))
	FAnimNode_StateMachine bpv__AnimGraphNode_StateMachine__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Attacking", Category="Default", MultiLine="true", OverrideNativeName="IsAttacking"))
	bool bpv__IsAttacking__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Suiciding", Category="Default", MultiLine="true", OverrideNativeName="IsSuiciding"))
	bool bpv__IsSuiciding__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Direction", Category="Default", MultiLine="true", OverrideNativeName="Direction"))
	float bpv__Direction__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Speed", Category="Default", MultiLine="true", OverrideNativeName="Speed"))
	float bpv__Speed__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsThird_Person_Character"))
	AThirdPersonCharacter_C__pf2222656877* b0l__K2Node_DynamicCast_AsThird_Person_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaTimeX"))
	float b0l__K2Node_Event_DeltaTimeX__pf;
	UAvatarRifleAnimBP_C__pf2266844876(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void __InitAllAnimNodes();
	void __InitAnimNode__AnimGraphNode_Root();
	void __InitAnimNode__AnimGraphNode_TransitionResult_1();
	void __InitAnimNode__AnimGraphNode_TransitionResult();
	void __InitAnimNode__AnimGraphNode_SequencePlayer();
	void __InitAnimNode__AnimGraphNode_StateResult_2();
	void __InitAnimNode__AnimGraphNode_BlendSpacePlayer_1();
	void __InitAnimNode__AnimGraphNode_StateResult_1();
	void __InitAnimNode__AnimGraphNode_BlendSpacePlayer();
	void __InitAnimNode__AnimGraphNode_StateResult();
	void __InitAnimNode__AnimGraphNode_StateMachine();
	void bpf__ExecuteUbergraph_AvatarRifleAnimBP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AvatarRifleAnimBP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AvatarRifleAnimBP__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AvatarRifleAnimBP__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AvatarRifleAnimBP__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_AvatarRifleAnimBP_AnimGraphNode_BlendSpacePlayer_73AE11274937BE45478F98B2485C4DC5"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_AvatarRifleAnimBP_AnimGraphNode_BlendSpacePlayer_73AE11274937BE45478F98B2485C4DC5__pf();
	UFUNCTION(meta=(Comment="/** Executed when the Animation is updated */", ToolTip="Executed when the Animation is updated", CppFromBpEvent, OverrideNativeName="BlueprintUpdateAnimation"))
	virtual void bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_AvatarRifleAnimBP_AnimGraphNode_BlendSpacePlayer_34608C3C453285D5F9604A8E34897BF1"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_AvatarRifleAnimBP_AnimGraphNode_BlendSpacePlayer_34608C3C453285D5F9604A8E34897BF1__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_AvatarRifleAnimBP_AnimGraphNode_TransitionResult_8E9BB31F4515FF78DE91F883014B267D"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_AvatarRifleAnimBP_AnimGraphNode_TransitionResult_8E9BB31F4515FF78DE91F883014B267D__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_AvatarRifleAnimBP_AnimGraphNode_TransitionResult_5558ED2E41676E17E96E4A85A994B345"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_AvatarRifleAnimBP_AnimGraphNode_TransitionResult_5558ED2E41676E17E96E4A85A994B345__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", AnimBlueprintFunction="true", Category, OverrideNativeName="AnimGraph"))
	virtual void bpf__AnimGraph__pf(/*out*/ FPoseLink& bpp__AnimGraph__pf);
public:
};
