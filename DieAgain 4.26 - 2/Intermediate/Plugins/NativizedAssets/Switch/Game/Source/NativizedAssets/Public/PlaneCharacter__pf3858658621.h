#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "BaseCharacter__pf1010915279.h"
class UFMODAudioComponent;
class USkeletalMeshComponent;
class UParticleSystemComponent;
class URotatingMovementComponent;
class UCameraComponent;
class UStaticMeshComponent;
class ATargetPoint;
class AChameleon_C__pf565858488;
class UDialogue;
#include "PlaneCharacter__pf3858658621.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Objects/PlaneControlled/PlaneCharacter.PlaneCharacter_C", OverrideNativeName="PlaneCharacter_C"))
class APlaneCharacter_C__pf3858658621 : public ABaseCharacter_C__pf1010915279
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PlaneSong"))
	UFMODAudioComponent* bpv__PlaneSong__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Steiner"))
	USkeletalMeshComponent* bpv__Steiner__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ParticleSystem"))
	UParticleSystemComponent* bpv__ParticleSystem__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="RotatingMovement"))
	URotatingMovementComponent* bpv__RotatingMovement__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Camera"))
	UCameraComponent* bpv__Camera__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PlaneMesh"))
	UStaticMeshComponent* bpv__PlaneMesh__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Array Target Points", Category="Default", MultiLine="true", OverrideNativeName="ArrayTargetPoints"))
	TArray<ATargetPoint*> bpv__ArrayTargetPoints__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Target", Category="Default", MultiLine="true", OverrideNativeName="Target"))
	int32 bpv__Target__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Chameleon Ref", Category="Default", MultiLine="true", OverrideNativeName="ChameleonRef"))
	AChameleon_C__pf565858488* bpv__ChameleonRef__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Dialogue", Category="Default", MultiLine="true", OverrideNativeName="Dialogue"))
	UDialogue* bpv__Dialogue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	FTimerDynamicDelegate b1l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ATargetPoint* b1l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b1l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b1l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b1l__CallFunc_BreakRotator_Yaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b1l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b1l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<AChameleon_C__pf565858488*> b1l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsChameleon"))
	AChameleon_C__pf565858488* b1l__K2Node_DynamicCast_AsChameleon__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b1l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	AChameleon_C__pf565858488* b1l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsChameleon_1"))
	AChameleon_C__pf565858488* b1l__K2Node_DynamicCast_AsChameleon_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b1l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b1l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b1l__Temp_int_Loop_Counter_Variable__pf;
	APlaneCharacter_C__pf3858658621(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
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
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoveTo"))
	virtual void bpf__MoveTo__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CheckRotation"))
	virtual void bpf__CheckRotation__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoveToTarget"))
	virtual void bpf__MoveToTarget__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
public:
};
