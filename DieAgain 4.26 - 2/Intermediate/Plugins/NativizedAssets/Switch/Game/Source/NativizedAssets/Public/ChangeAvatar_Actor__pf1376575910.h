#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USkeletalMeshComponent;
class UStaticMeshComponent;
class USceneComponent;
#include "ChangeAvatar_Actor__pf1376575910.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/ChangeAvatar/ChangeAvatar_Actor.ChangeAvatar_Actor_C", OverrideNativeName="ChangeAvatar_Actor_C"))
class AChangeAvatar_Actor_C__pf1376575910 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="AstroMesh"))
	USkeletalMeshComponent* bpv__AstroMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="CyberMesh"))
	USkeletalMeshComponent* bpv__CyberMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Knight_Head"))
	USkeletalMeshComponent* bpv__Knight_Head__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Knight_Pants"))
	USkeletalMeshComponent* bpv__Knight_Pants__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Knight_BodySkirt"))
	USkeletalMeshComponent* bpv__Knight_BodySkirt__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Knight_Cape"))
	USkeletalMeshComponent* bpv__Knight_Cape__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Knight_Glove"))
	USkeletalMeshComponent* bpv__Knight_Glove__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Knight_Helmet"))
	USkeletalMeshComponent* bpv__Knight_Helmet__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SM_Hara_horn"))
	UStaticMeshComponent* bpv__SM_Hara_horn__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Capa"))
	USkeletalMeshComponent* bpv__Capa__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="MaskMesh"))
	UStaticMeshComponent* bpv__MaskMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SkeletalMesh"))
	USkeletalMeshComponent* bpv__SkeletalMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Male", Category="Default", MultiLine="true", OverrideNativeName="IsMale"))
	bool bpv__IsMale__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Robot", Category="Default", MultiLine="true", OverrideNativeName="IsRobot"))
	bool bpv__IsRobot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Demon", Category="Default", MultiLine="true", OverrideNativeName="IsDemon"))
	bool bpv__IsDemon__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Knight", Category="Default", MultiLine="true", OverrideNativeName="IsKnight"))
	bool bpv__IsKnight__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Cyber", Category="Default", MultiLine="true", OverrideNativeName="IsCyber"))
	bool bpv__IsCyber__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Astro", Category="Default", MultiLine="true", OverrideNativeName="IsAstro"))
	bool bpv__IsAstro__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf;
	AChangeAvatar_Actor_C__pf1376575910(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_ChangeAvatar_Actor__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
public:
};
