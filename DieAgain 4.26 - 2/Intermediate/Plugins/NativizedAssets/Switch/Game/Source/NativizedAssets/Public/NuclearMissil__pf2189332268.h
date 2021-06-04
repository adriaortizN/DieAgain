#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UPaperSpriteComponent;
class UParticleSystemComponent;
class UStaticMeshComponent;
class UProjectileMovementComponent;
class USceneComponent;
#include "NuclearMissil__pf2189332268.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Objects/NuclearMissil/NuclearMissil.NuclearMissil_C", OverrideNativeName="NuclearMissil_C"))
class ANuclearMissil_C__pf2189332268 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PaperSprite"))
	UPaperSpriteComponent* bpv__PaperSprite__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ParticleSystem"))
	UParticleSystemComponent* bpv__ParticleSystem__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh"))
	UStaticMeshComponent* bpv__StaticMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ProjectileMovement"))
	UProjectileMovementComponent* bpv__ProjectileMovement__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Active", Category="Default", MultiLine="true", OverrideNativeName="IsActive"))
	bool bpv__IsActive__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Speed Missile", Category="Default", MultiLine="true", OverrideNativeName="SpeedMissile"))
	FVector bpv__SpeedMissile__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	ANuclearMissil_C__pf2189332268(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_NuclearMissil__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_NuclearMissil_1"))
	void bpf__ExecuteUbergraph_NuclearMissil__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_NuclearMissil__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_NuclearMissil__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ActivateMisile"))
	virtual void bpf__ActivateMisile__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoreSpeed"))
	virtual void bpf__MoreSpeed__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AddMoreSpeed"))
	virtual void bpf__AddMoreSpeed__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ActivateMisileOLD"))
	virtual void bpf__ActivateMisileOLD__pf();
public:
};
