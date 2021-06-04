#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UAudioComponent;
class UBoxComponent;
class UFMODAudioComponent;
class UChildActorComponent;
class UDestructibleComponent;
class USceneComponent;
class AActor;
#include "ExplosiveBarrel__pf3544028049.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Objects/Barrel/ExplosiveBarrel.ExplosiveBarrel_C", OverrideNativeName="ExplosiveBarrel_C"))
class AExplosiveBarrel_C__pf3544028049 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Explosion_Audio"))
	UAudioComponent* bpv__Explosion_Audio__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Box"))
	UBoxComponent* bpv__Box__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SoundExplosion"))
	UFMODAudioComponent* bpv__SoundExplosion__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Actor"))
	UChildActorComponent* bpv__Actor__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Destructible"))
	UDestructibleComponent* bpv__Destructible__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Angle", Category="Default", MultiLine="true", OverrideNativeName="Angle"))
	float bpv__Angle__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Barrel Actor", Category="Default", MultiLine="true", OverrideNativeName="BarrelActor"))
	AActor* bpv__BarrelActor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Death Actors", Category="Default", MultiLine="true", OverrideNativeName="DeathActors"))
	TArray<AActor*> bpv__DeathActors__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Actor Is Already Death", Category="Default", MultiLine="true", OverrideNativeName="ActorIsAlreadyDeath"))
	bool bpv__ActorIsAlreadyDeath__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_HitOrigin"))
	FVector b0l__K2Node_CustomEvent_HitOrigin__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	AExplosiveBarrel_C__pf3544028049(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_ExplosiveBarrel__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_ExplosiveBarrel_1"))
	void bpf__ExecuteUbergraph_ExplosiveBarrel__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DestroyFunction"))
	virtual void bpf__DestroyFunction__pf(FVector bpp__HitOrigin__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ExplosionBarrel"))
	virtual void bpf__ExplosionBarrel__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DestroyerFunction"))
	virtual void bpf__DestroyerFunction__pf(AActor* bpp__Actor__pf, FVector bpp__Vector__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SumPoints"))
	virtual void bpf__SumPoints__pf(AActor* bpp__ActorDeath__pf);
public:
};
