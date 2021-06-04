#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Enum_SpawnLocation__pf2608056098.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UArrowComponent;
class UStaticMeshComponent;
class USceneComponent;
class AAISuicideController_C__pf3889547882;
#include "BossActor__pf2608056098.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Objects/Boss/BossActor.BossActor_C", OverrideNativeName="BossActor_C"))
class ABossActor_C__pf2608056098 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Arrow"))
	UArrowComponent* bpv__Arrow__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh"))
	UStaticMeshComponent* bpv__StaticMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Actor Location", Category="Default", MultiLine="true", OverrideNativeName="ActorLocation"))
	FVector bpv__ActorLocation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Enemy Spawn Location", Category="Default", MultiLine="true", OverrideNativeName="EnemySpawnLocation"))
	FVector bpv__EnemySpawnLocation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Suicide Controller", Category="Default", MultiLine="true", OverrideNativeName="SuicideController"))
	AAISuicideController_C__pf3889547882* bpv__SuicideController__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Array Count", Category="Default", MultiLine="true", OverrideNativeName="ArrayCount"))
	int32 bpv__ArrayCount__pf;
	ABossActor_C__pf2608056098(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BossActor_0"))
	void bpf__ExecuteUbergraph_BossActor__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BossActor__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BossActor_2"))
	void bpf__ExecuteUbergraph_BossActor__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BossActor_3"))
	void bpf__ExecuteUbergraph_BossActor__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BossActor_4"))
	void bpf__ExecuteUbergraph_BossActor__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BossActor_5"))
	void bpf__ExecuteUbergraph_BossActor__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BossActor_6"))
	void bpf__ExecuteUbergraph_BossActor__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BossActor_7"))
	void bpf__ExecuteUbergraph_BossActor__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BossActor_8"))
	void bpf__ExecuteUbergraph_BossActor__pf_8(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Round8"))
	virtual void bpf__Round8__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Round7"))
	virtual void bpf__Round7__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Round6"))
	virtual void bpf__Round6__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Round5"))
	virtual void bpf__Round5__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Round4"))
	virtual void bpf__Round4__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Round3"))
	virtual void bpf__Round3__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Round2"))
	virtual void bpf__Round2__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Round1"))
	virtual void bpf__Round1__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SpawnMissile"))
	virtual void bpf__SpawnMissile__pf(float bpp__Dispersion__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GetPlayerLocation"))
	virtual void bpf__GetPlayerLocation__pf(/*out*/ FVector& bpp__PlayerLocation__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SpawnEnemy"))
	virtual void bpf__SpawnEnemy__pf(E__Enum_SpawnLocation__pf bpp__SpawnLocation__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetSuicideController"))
	virtual void bpf__SetSuicideController__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="EndGameEvent"))
	virtual void bpf__EndGameEvent__pf();
public:
};
