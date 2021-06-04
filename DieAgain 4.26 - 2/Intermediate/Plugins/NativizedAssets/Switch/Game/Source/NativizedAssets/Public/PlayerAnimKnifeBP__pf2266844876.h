#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Animation/AnimClassData.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_Root.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_TransitionResult.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_SequencePlayer.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_StateResult.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_Slot.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_LayeredBoneBlend.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendSpacePlayer.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_StateMachine.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
class AThirdPersonCharacter_C__pf2222656877;
class AEnemyShootingCh_C__pf3349424045;
#include "PlayerAnimKnifeBP__pf2266844876.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Art/Enemies/PlayerAnimations/PlayerAnimKnifeBP.PlayerAnimKnifeBP_C", OverrideNativeName="PlayerAnimKnifeBP_C"))
class UPlayerAnimKnifeBP_C__pf2266844876 : public UAnimInstance
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
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_3"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_1"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_2"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Slot"))
	FAnimNode_Slot bpv__AnimGraphNode_Slot__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_LayeredBoneBlend"))
	FAnimNode_LayeredBoneBlend bpv__AnimGraphNode_LayeredBoneBlend__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendSpacePlayer_1"))
	FAnimNode_BlendSpacePlayer bpv__AnimGraphNode_BlendSpacePlayer_1__pf;
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
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Attacking", Category="Default", MultiLine="true", OverrideNativeName="IsAttacking"))
	bool bpv__IsAttacking__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Suiciding", Category="Default", MultiLine="true", OverrideNativeName="IsSuiciding"))
	bool bpv__IsSuiciding__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaTimeX"))
	float b0l__K2Node_Event_DeltaTimeX__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsThird_Person_Character"))
	AThirdPersonCharacter_C__pf2222656877* b0l__K2Node_DynamicCast_AsThird_Person_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch"))
	AEnemyShootingCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPlayerAnimKnifeBP_C__pf2266844876(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
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
	void __InitAnimNode__AnimGraphNode_StateResult_3();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_1();
	void __InitAnimNode__AnimGraphNode_StateResult_2();
	void __InitAnimNode__AnimGraphNode_Slot();
	void __InitAnimNode__AnimGraphNode_LayeredBoneBlend();
	void __InitAnimNode__AnimGraphNode_BlendSpacePlayer_1();
	void __InitAnimNode__AnimGraphNode_SequencePlayer();
	void __InitAnimNode__AnimGraphNode_StateResult_1();
	void __InitAnimNode__AnimGraphNode_BlendSpacePlayer();
	void __InitAnimNode__AnimGraphNode_StateResult();
	void __InitAnimNode__AnimGraphNode_StateMachine();
	void bpf__ExecuteUbergraph_PlayerAnimKnifeBP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerAnimKnifeBP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerAnimKnifeBP__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerAnimKnifeBP__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerAnimKnifeBP__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerAnimKnifeBP__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerAnimKnifeBP__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerAnimKnifeBP_AnimGraphNode_BlendSpacePlayer_FF2FFD3A463B9055636A889E1E09F960"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerAnimKnifeBP_AnimGraphNode_BlendSpacePlayer_FF2FFD3A463B9055636A889E1E09F960__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerAnimKnifeBP_AnimGraphNode_BlendSpacePlayer_3306B18643A0EDE8261957A129F49222"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerAnimKnifeBP_AnimGraphNode_BlendSpacePlayer_3306B18643A0EDE8261957A129F49222__pf();
	UFUNCTION(meta=(Comment="/** Executed when the Animation is updated */", ToolTip="Executed when the Animation is updated", CppFromBpEvent, OverrideNativeName="BlueprintUpdateAnimation"))
	virtual void bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerAnimKnifeBP_AnimGraphNode_TransitionResult_ADCA8BB64DFB6F40E653949D6DFF68AA"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerAnimKnifeBP_AnimGraphNode_TransitionResult_ADCA8BB64DFB6F40E653949D6DFF68AA__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerAnimKnifeBP_AnimGraphNode_TransitionResult_ECCAE7DE4C3E5716290928A867FE5427"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerAnimKnifeBP_AnimGraphNode_TransitionResult_ECCAE7DE4C3E5716290928A867FE5427__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerAnimKnifeBP_AnimGraphNode_TransitionResult_97B5BD244968E3DE32C5D69FB82B354F"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerAnimKnifeBP_AnimGraphNode_TransitionResult_97B5BD244968E3DE32C5D69FB82B354F__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerAnimKnifeBP_AnimGraphNode_TransitionResult_07ADB5A5426505E6C44133B2FA2DABEA"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_PlayerAnimKnifeBP_AnimGraphNode_TransitionResult_07ADB5A5426505E6C44133B2FA2DABEA__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", AnimBlueprintFunction="true", Category, OverrideNativeName="AnimGraph"))
	virtual void bpf__AnimGraph__pf(/*out*/ FPoseLink& bpp__AnimGraph__pf);
public:
};
