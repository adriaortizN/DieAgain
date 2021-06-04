#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "EnumCameraType__pf3349424045.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
class UChildActorComponent;
class AActor;
#include "CameraActor__pf1295471953.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/CameraActor/CameraActor.CameraActor_C", OverrideNativeName="CameraActor_C"))
class ACameraActor_C__pf1295471953 : public ACameraActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ApproachingComponent"))
	UChildActorComponent* bpv__ApproachingComponent__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Camera Offset", Category="Default", MultiLine="true", OverrideNativeName="CameraOffset"))
	FVector bpv__CameraOffset__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Camera Type", Category="Default", MultiLine="true", OverrideNativeName="CameraType"))
	E__EnumCameraType__pf bpv__CameraType__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Player", Category="Default", MultiLine="true", OverrideNativeName="Player"))
	AActor* bpv__Player__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Camera Height", Category="Default", MultiLine="true", OverrideNativeName="CameraHeight"))
	float bpv__CameraHeight__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Map Camera", Category="Default", MultiLine="true", OverrideNativeName="IsMapCamera"))
	bool bpv__IsMapCamera__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Camera Height NF", Category="Default", MultiLine="true", OverrideNativeName="CameraHeightNF"))
	float bpv__CameraHeightNF__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	TEnumAsByte<EMoveComponentAction::Type> b0l__Temp_byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_1"))
	FHitResult b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldRotation_SweepHitResult_1"))
	FHitResult b0l__CallFunc_K2_SetWorldRotation_SweepHitResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldRotation_SweepHitResult_2"))
	FHitResult b0l__CallFunc_K2_SetWorldRotation_SweepHitResult_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_2"))
	FHitResult b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_3"))
	FHitResult b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_4"))
	FHitResult b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_4__pf;
	ACameraActor_C__pf1295471953(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_CameraActor_0"))
	void bpf__ExecuteUbergraph_CameraActor__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CameraActor__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CameraActor__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CameraActor__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_CameraActor__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="EnteringLevel"))
	virtual void bpf__EnteringLevel__pf();
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Event"))
	virtual void bpf__Event__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoveCamera"))
	virtual void bpf__MoveCamera__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoveCam"))
	virtual void bpf__MoveCam__pf();
public:
};
