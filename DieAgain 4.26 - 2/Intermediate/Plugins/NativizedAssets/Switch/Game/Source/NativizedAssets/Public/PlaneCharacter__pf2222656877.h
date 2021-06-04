#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
class UFMODAudioComponent;
class URotatingMovementComponent;
class UChildActorComponent;
class UParticleSystemComponent;
class UStaticMeshComponent;
class ACameraActor_C__pf1295471953;
class ATargetPoint;
class UMyGameInstance_C__pf2410127383;
#include "PlaneCharacter__pf2222656877.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/ThirdPersonBP/Blueprints/PlaneCharacter.PlaneCharacter_C", OverrideNativeName="PlaneCharacter_C"))
class APlaneCharacter_C__pf2222656877 : public ACharacter
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PlaneSong"))
	UFMODAudioComponent* bpv__PlaneSong__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="RotatingMovement"))
	URotatingMovementComponent* bpv__RotatingMovement__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ChildActor"))
	UChildActorComponent* bpv__ChildActor__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TrailPlane"))
	UParticleSystemComponent* bpv__TrailPlane__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Plane"))
	UStaticMeshComponent* bpv__Plane__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Camera Actor", Category="Default", MultiLine="true", OverrideNativeName="CameraActor"))
	ACameraActor_C__pf1295471953* bpv__CameraActor__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Array Target Points", Category="Default", MultiLine="true", OverrideNativeName="ArrayTargetPoints"))
	TArray<ATargetPoint*> bpv__ArrayTargetPoints__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Target", Category="Default", MultiLine="true", OverrideNativeName="Target"))
	int32 bpv__Target__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Vector Location", Category="Default", MultiLine="true", OverrideNativeName="VectorLocation"))
	FVector bpv__VectorLocation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Ready to Move", Category="Default", MultiLine="true", tooltip="Si el personaje esta parado, ha llegado a su lugar y puede volver a moverse", OverrideNativeName="IsReadyToMove"))
	bool bpv__IsReadyToMove__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Unlocked Levels", Category="Default", MultiLine="true", OverrideNativeName="UnlockedLevels"))
	int32 bpv__UnlockedLevels__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Spawn", Category="Default", MultiLine="true", OverrideNativeName="CanSpawn"))
	bool bpv__CanSpawn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ATargetPoint* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsCamera_Actor"))
	ACameraActor_C__pf1295471953* b0l__K2Node_DynamicCast_AsCamera_Actor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ACameraActor_C__pf1295471953*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance"))
	UMyGameInstance_C__pf2410127383* b0l__K2Node_DynamicCast_AsMy_Game_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	ACameraActor_C__pf1295471953* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsCamera_Actor_1"))
	ACameraActor_C__pf1295471953* b0l__K2Node_DynamicCast_AsCamera_Actor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	APlaneCharacter_C__pf2222656877(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_PlaneCharacter_0"))
	void bpf__ExecuteUbergraph_PlaneCharacter__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_PlaneCharacter_1"))
	void bpf__ExecuteUbergraph_PlaneCharacter__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlaneCharacter__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlaneCharacter__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlaneCharacter__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlaneCharacter__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoveEvent"))
	virtual void bpf__MoveEvent__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Follow"))
	virtual void bpf__Follow__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoveCamera"))
	virtual void bpf__MoveCamera__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoveToTarget"))
	virtual void bpf__MoveToTarget__pf();
public:
};
