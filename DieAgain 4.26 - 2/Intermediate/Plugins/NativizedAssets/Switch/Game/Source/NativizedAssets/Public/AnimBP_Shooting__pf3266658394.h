#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Animation/AnimClassData.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_TransitionResult.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_SequencePlayer.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_StateResult.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendSpacePlayer.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_StateMachine.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_Root.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
class AEnemyShootingCh_C__pf3349424045;
#include "AnimBP_Shooting__pf3266658394.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Art/Enemies/AnimationTree_Shooting/AnimBP_Shooting.AnimBP_Shooting_C", OverrideNativeName="AnimBP_Shooting_C"))
class UAnimBP_Shooting_C__pf3266658394 : public UAnimInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_2"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_1"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult__pf;
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
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root"))
	FAnimNode_Root bpv__AnimGraphNode_Root__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Speed", Category="Default", MultiLine="true", OverrideNativeName="Speed"))
	float bpv__Speed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Attitude", Category="Default", MultiLine="true", OverrideNativeName="Attitude"))
	float bpv__Attitude__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Arm Rotation", Category="Default", MultiLine="true", OverrideNativeName="ArmRotation"))
	FRotator bpv__ArmRotation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hand Weapon Location", Category="Default", MultiLine="true", OverrideNativeName="HandWeaponLocation"))
	FVector bpv__HandWeaponLocation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Suiciding", Category="Default", MultiLine="true", OverrideNativeName="IsSuiciding"))
	bool bpv__IsSuiciding__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Death", Category="Default", MultiLine="true", OverrideNativeName="IsDeath"))
	bool bpv__IsDeath__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaTimeX"))
	float b0l__K2Node_Event_DeltaTimeX__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch"))
	AEnemyShootingCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UAnimBP_Shooting_C__pf3266658394(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void __InitAllAnimNodes();
	void __InitAnimNode__AnimGraphNode_TransitionResult_2();
	void __InitAnimNode__AnimGraphNode_TransitionResult_1();
	void __InitAnimNode__AnimGraphNode_TransitionResult();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_1();
	void __InitAnimNode__AnimGraphNode_StateResult_2();
	void __InitAnimNode__AnimGraphNode_SequencePlayer();
	void __InitAnimNode__AnimGraphNode_StateResult_1();
	void __InitAnimNode__AnimGraphNode_BlendSpacePlayer();
	void __InitAnimNode__AnimGraphNode_StateResult();
	void __InitAnimNode__AnimGraphNode_StateMachine();
	void __InitAnimNode__AnimGraphNode_Root();
	void bpf__ExecuteUbergraph_AnimBP_Shooting__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AnimBP_Shooting__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AnimBP_Shooting__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AnimBP_Shooting__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AnimBP_Shooting__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Executed when the Animation is updated */", ToolTip="Executed when the Animation is updated", CppFromBpEvent, OverrideNativeName="BlueprintUpdateAnimation"))
	virtual void bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Shooting_AnimGraphNode_TransitionResult_F964DACA4E4C2CCE8CC6898EC2B5163E"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Shooting_AnimGraphNode_TransitionResult_F964DACA4E4C2CCE8CC6898EC2B5163E__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Shooting_AnimGraphNode_TransitionResult_9394BF83440C4CE4E73FA7846968367D"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Shooting_AnimGraphNode_TransitionResult_9394BF83440C4CE4E73FA7846968367D__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Shooting_AnimGraphNode_TransitionResult_4CD68B2C46D51F60789EC780F911EBFC"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Shooting_AnimGraphNode_TransitionResult_4CD68B2C46D51F60789EC780F911EBFC__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Shooting_AnimGraphNode_BlendSpacePlayer_8E133314429EBC1E6BB5D0AFDAF24876"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Shooting_AnimGraphNode_BlendSpacePlayer_8E133314429EBC1E6BB5D0AFDAF24876__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", AnimBlueprintFunction="true", Category, OverrideNativeName="AnimGraph"))
	virtual void bpf__AnimGraph__pf(/*out*/ FPoseLink& bpp__AnimGraph__pf);
public:
};
