#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USkeletalMeshComponent;
class USceneComponent;
class USaveGameBP_C__pf4030252459;
#include "AvatarPose_BlueBlood__pf2345688672.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Objects/AvatarPose/AvatarPose_BlueBlood.AvatarPose_BlueBlood_C", OverrideNativeName="AvatarPose_BlueBlood_C"))
class AAvatarPose_BlueBlood_C__pf2345688672 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Knife"))
	UStaticMeshComponent* bpv__Knife__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Rifle"))
	UStaticMeshComponent* bpv__Rifle__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Mask_SM"))
	UStaticMeshComponent* bpv__Mask_SM__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SkeletalMesh"))
	USkeletalMeshComponent* bpv__SkeletalMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Female", Category="Default", MultiLine="true", OverrideNativeName="IsFemale"))
	bool bpv__IsFemale__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_2"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_3"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Game_BP"))
	USaveGameBP_C__pf4030252459* b0l__K2Node_DynamicCast_AsSave_Game_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	AAvatarPose_BlueBlood_C__pf2345688672(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_AvatarPose_BlueBlood__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
public:
};
