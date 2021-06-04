#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UAudioComponent;
class UFMODAudioComponent;
class UBoxComponent;
class UStaticMeshComponent;
class UProjectileMovementComponent;
class AActor;
class UPrimitiveComponent;
class AGlass_C__pf345340536;
#include "MissileRPG__pf2054339363.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Objects/Bullets/MissileRPG.MissileRPG_C", OverrideNativeName="MissileRPG_C"))
class AMissileRPG_C__pf2054339363 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Explosion_Flesh_01"))
	UAudioComponent* bpv__Explosion_Flesh_01__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ExplosionSound"))
	UFMODAudioComponent* bpv__ExplosionSound__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BoxCollision"))
	UBoxComponent* bpv__BoxCollision__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="MIssileThruster"))
	UStaticMeshComponent* bpv__MIssileThruster__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="MIssile"))
	UStaticMeshComponent* bpv__MIssile__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ProjectileMovement"))
	UProjectileMovementComponent* bpv__ProjectileMovement__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="End Location", Category="Default", MultiLine="true", OverrideNativeName="EndLocation"))
	FVector bpv__EndLocation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Distance Explosion", Category="Default", MultiLine="true", OverrideNativeName="DistanceExplosion"))
	float bpv__DistanceExplosion__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Angle", Category="Default", MultiLine="true", OverrideNativeName="Angle"))
	float bpv__Angle__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Negative Angle", Category="Default", MultiLine="true", OverrideNativeName="NegativeAngle"))
	float bpv__NegativeAngle__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player", Category="Default", MultiLine="true", OverrideNativeName="Player"))
	AActor* bpv__Player__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Death Actors", Category="Default", MultiLine="true", OverrideNativeName="DeathActors"))
	TArray<AActor*> bpv__DeathActors__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Actor Is Already Death", Category="Default", MultiLine="true", OverrideNativeName="ActorIsAlreadyDeath"))
	bool bpv__ActorIsAlreadyDeath__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_GlassReference"))
	AGlass_C__pf345340536* b0l__K2Node_CustomEvent_GlassReference__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_HitComponent_2"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_HitComponent_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_5"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_5"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_NormalImpulse_2"))
	FVector b0l__K2Node_ComponentBoundEvent_NormalImpulse_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Hit_2"))
	FHitResult b0l__K2Node_ComponentBoundEvent_Hit_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_HitComponent_1"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_HitComponent_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_4"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_4"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_NormalImpulse_1"))
	FVector b0l__K2Node_ComponentBoundEvent_NormalImpulse_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Hit_1"))
	FHitResult b0l__K2Node_ComponentBoundEvent_Hit_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent_2"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_3"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_3"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex_2"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep_2"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult_2"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent_1"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_2"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_2"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex_1"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep_1"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult_1"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_HitComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_HitComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_1"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_1"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_NormalImpulse"))
	FVector b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Hit"))
	FHitResult b0l__K2Node_ComponentBoundEvent_Hit__pf;
	AMissileRPG_C__pf2054339363(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_MissileRPG__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MissileRPG__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MissileRPG__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MissileRPG__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_MissileRPG_4"))
	void bpf__ExecuteUbergraph_MissileRPG__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MissileRPG__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MissileRPG__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MissileRPG__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__HitComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, FVector bpp__NormalImpulse__pf, FHitResult const& bpp__Hit__pf__const);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__MIssile_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__MIssile_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Cube1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Cube1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BoxCollision_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BoxCollision_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__HitComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, FVector bpp__NormalImpulse__pf, FHitResult const& bpp__Hit__pf__const);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Cube_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Cube_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__HitComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, FVector bpp__NormalImpulse__pf, FHitResult const& bpp__Hit__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Break"))
	virtual void bpf__Break__pf(AGlass_C__pf345340536* bpp__GlassReference__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ExplosionMissile"))
	virtual void bpf__ExplosionMissile__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MissileDestroyed"))
	virtual void bpf__MissileDestroyed__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DestroyerFunction"))
	virtual void bpf__DestroyerFunction__pf(AActor* bpp__Actor__pf, FVector bpp__HitOrigin__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SumPoints"))
	virtual void bpf__SumPoints__pf(AActor* bpp__ActorDeath__pf);
public:
};
