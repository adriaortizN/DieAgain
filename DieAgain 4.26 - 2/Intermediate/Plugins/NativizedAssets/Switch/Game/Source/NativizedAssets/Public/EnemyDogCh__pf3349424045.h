#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
class UStaticMeshComponent;
class UFMODAudioComponent;
class UBoxComponent;
class UChildActorComponent;
class USkeletalMeshComponent;
class ATargetPoint;
class AActor;
class UPhysicalMaterial;
class UPrimitiveComponent;
class AEnemyDogCh_C__pf3349424045;
class AThirdPersonCharacter_C__pf2222656877;
class AEnemyShootingCh_C__pf3349424045;
#include "EnemyDogCh__pf3349424045.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Enemies/EnemyDogCh.EnemyDogCh_C", OverrideNativeName="EnemyDogCh_C"))
class AEnemyDogCh_C__pf3349424045 : public ACharacter
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(Comment="/** Fires when a particle dies\t* @param EventName - Custom event name for the Collision Event.\t* @param EmitterTime - The emitter time when the event occured.\t* @param ParticleTime - How long the particle had been alive at the time of the event.\t* @param Location - Location of the collision.\t* @param Velocity - Velocity of the particle at the point of collision.\t* @param Direction - Direction of the particle at the point of collision.\t* @param Normal - Normal to the surface with which collision occurred.\t* @param BoneName- Name of the bone that the particle collided with. (Only valid if collision was with a Skeletal Mesh)\t* @param PhysMat - Physical Material for this collision.\t*/", ToolTip="Fires when a particle dies@param EventName - Custom event name for the Collision Event.@param EmitterTime - The emitter time when the event occured.@param ParticleTime - How long the particle had been alive at the time of the event.@param Location - Location of the collision.@param Velocity - Velocity of the particle at the point of collision.@param Direction - Direction of the particle at the point of collision.@param Normal - Normal to the surface with which collision occurred.@param BoneName- Name of the bone that the particle collided with. (Only valid if collision was with a Skeletal Mesh)@param PhysMat - Physical Material for this collision.", OverrideNativeName="ParticleCollisionSignature__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_NineParams(F__ParticleCollisionSignature__DelegateSignature__SC_0, FName , bpp__EventName__pf, float , bpp__EmitterTime__pf, int32 , bpp__ParticleTime__pf, FVector , bpp__Location__pf, FVector , bpp__Velocity__pf, FVector , bpp__Direction__pf, FVector , bpp__Normal__pf, FName , bpp__BoneName__pf, UPhysicalMaterial* , bpp__PhysMat__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Collar"))
	UStaticMeshComponent* bpv__Collar__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="FMODAudio"))
	UFMODAudioComponent* bpv__FMODAudio__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Collision"))
	UBoxComponent* bpv__Collision__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor"))
	UChildActorComponent* bpv__ChildActor__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SkeletalMesh"))
	USkeletalMeshComponent* bpv__SkeletalMesh__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Attacking", Category="Default", MultiLine="true", OverrideNativeName="Attacking"))
	bool bpv__Attacking__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Patrol Points", Category="Default", MultiLine="true", OverrideNativeName="PatrolPoints"))
	TArray<ATargetPoint*> bpv__PatrolPoints__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Squad", Category="Default", MultiLine="true", OverrideNativeName="Squad"))
	int32 bpv__Squad__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="HP", Category="Default", MultiLine="true", OverrideNativeName="HP"))
	int32 bpv__HP__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Death", Category="Default", MultiLine="true", OverrideNativeName="IsDeath"))
	bool bpv__IsDeath__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Impact Velocity", Category="Default", MultiLine="true", OverrideNativeName="ImpactVelocity"))
	float bpv__ImpactVelocity__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Bork", Category="Default", MultiLine="true", OverrideNativeName="CanBork"))
	bool bpv__CanBork__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable"))
	TArray<AActor*> b0l__Temp_object_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__ParticleCollisionSignature__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_EnemyActor"))
	AActor* b0l__K2Node_CustomEvent_EnemyActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_EventName"))
	FName b0l__K2Node_CustomEvent_EventName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_EmitterTime"))
	float b0l__K2Node_CustomEvent_EmitterTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_ParticleTime"))
	int32 b0l__K2Node_CustomEvent_ParticleTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Location"))
	FVector b0l__K2Node_CustomEvent_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Velocity"))
	FVector b0l__K2Node_CustomEvent_Velocity__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Direction"))
	FVector b0l__K2Node_CustomEvent_Direction__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Normal"))
	FVector b0l__K2Node_CustomEvent_Normal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_BoneName"))
	FName b0l__K2Node_CustomEvent_BoneName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_PhysMat"))
	UPhysicalMaterial* b0l__K2Node_CustomEvent_PhysMat__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LineTraceSingle_OutHit"))
	FHitResult b0l__CallFunc_LineTraceSingle_OutHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit"))
	bool b0l__CallFunc_BreakHitResult_bBlockingHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap"))
	bool b0l__CallFunc_BreakHitResult_bInitialOverlap__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time"))
	float b0l__CallFunc_BreakHitResult_Time__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance"))
	float b0l__CallFunc_BreakHitResult_Distance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location"))
	FVector b0l__CallFunc_BreakHitResult_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint"))
	FVector b0l__CallFunc_BreakHitResult_ImpactPoint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal"))
	FVector b0l__CallFunc_BreakHitResult_Normal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal"))
	FVector b0l__CallFunc_BreakHitResult_ImpactNormal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat"))
	UPhysicalMaterial* b0l__CallFunc_BreakHitResult_PhysMat__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor"))
	AActor* b0l__CallFunc_BreakHitResult_HitActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent"))
	UPrimitiveComponent* b0l__CallFunc_BreakHitResult_HitComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName"))
	FName b0l__CallFunc_BreakHitResult_HitBoneName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem"))
	int32 b0l__CallFunc_BreakHitResult_HitItem__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex"))
	int32 b0l__CallFunc_BreakHitResult_FaceIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart"))
	FVector b0l__CallFunc_BreakHitResult_TraceStart__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd"))
	FVector b0l__CallFunc_BreakHitResult_TraceEnd__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Dog_Ch"))
	AEnemyDogCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Dog_Ch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsThird_Person_Character"))
	AThirdPersonCharacter_C__pf2222656877* b0l__K2Node_DynamicCast_AsThird_Person_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch"))
	AEnemyShootingCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Damage_Taken"))
	int32 b0l__K2Node_CustomEvent_Damage_Taken__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_HitBoneName"))
	FName b0l__K2Node_CustomEvent_HitBoneName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	AEnemyDogCh_C__pf3349424045(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_EnemyDogCh__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyDogCh__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_EnemyDogCh_2"))
	void bpf__ExecuteUbergraph_EnemyDogCh__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyDogCh__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_EnemyDogCh_4"))
	void bpf__ExecuteUbergraph_EnemyDogCh__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyDogCh__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyDogCh__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyDogCh__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_EnemyDogCh__pf_8(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="TakeDamage"))
	virtual void bpf__TakeDamage__pf(int32 bpp__Damage_Taken__pf, FName bpp__HitBoneName__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BoxWeaponCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BoxWeaponCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnCollideEvent"))
	virtual void bpf__OnCollideEvent__pf(FName bpp__EventName__pf, float bpp__EmitterTime__pf, int32 bpp__ParticleTime__pf, FVector bpp__Location__pf, FVector bpp__Velocity__pf, FVector bpp__Direction__pf, FVector bpp__Normal__pf, FName bpp__BoneName__pf, UPhysicalMaterial* bpp__PhysMat__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SplatterBlood"))
	virtual void bpf__SplatterBlood__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Attack"))
	virtual void bpf__Attack__pf(AActor* bpp__EnemyActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Run"))
	virtual void bpf__Run__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="EnemyDetected"))
	virtual void bpf__EnemyDetected__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Walk"))
	virtual void bpf__Walk__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DieFunction"))
	virtual void bpf__DieFunction__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetMaterialCollar"))
	virtual void bpf__SetMaterialCollar__pf();
public:
};
