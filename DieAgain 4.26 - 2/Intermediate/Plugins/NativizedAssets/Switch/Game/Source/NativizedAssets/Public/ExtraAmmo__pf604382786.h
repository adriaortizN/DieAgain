#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Public/Net/OnlineBlueprintCallProxyBase.h"
#include "../Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/AchievementWriteCallbackProxy.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class URotatingMovementComponent;
class UStaticMeshComponent;
class UBoxComponent;
class USceneComponent;
class UPrimitiveComponent;
class AActor;
class AThirdPersonCharacter_C__pf2222656877;
class AEnemyShootingCh_C__pf3349424045;
class UAchievementQueryCallbackProxy;
class UAchievementWriteCallbackProxy;
#include "ExtraAmmo__pf604382786.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Objects/PremiumObjects/ExtraAmmo.ExtraAmmo_C", OverrideNativeName="ExtraAmmo_C"))
class AExtraAmmo_C__pf604382786 : public AActor
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="EmptyOnlineDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE(F__EmptyOnlineDelegate__DelegateSignature__SC_0);
	UDELEGATE(meta=(OverrideNativeName="AchievementWriteDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_ThreeParams(F__AchievementWriteDelegate__DelegateSignature__SC_1, FName , bpp__WrittenAchievementName__pf, float , bpp__WrittenProgress__pf, int32 , bpp__WrittenUserTag__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="RotatingMovement"))
	URotatingMovementComponent* bpv__RotatingMovement__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh"))
	UStaticMeshComponent* bpv__StaticMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Box"))
	UBoxComponent* bpv__Box__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Extra Ammo Rifle", Category="Default", MultiLine="true", OverrideNativeName="ExtraAmmoRifle"))
	bool bpv__ExtraAmmoRifle__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Extra Ammo Shotgun", Category="Default", MultiLine="true", OverrideNativeName="ExtraAmmoShotgun"))
	bool bpv__ExtraAmmoShotgun__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenAchievementName_3"))
	FName b0l__K2Node_CustomEvent_WrittenAchievementName_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenProgress_3"))
	float b0l__K2Node_CustomEvent_WrittenProgress_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenUserTag_3"))
	int32 b0l__K2Node_CustomEvent_WrittenUserTag_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__AchievementWriteDelegate__DelegateSignature__SC_1 b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenAchievementName_2"))
	FName b0l__K2Node_CustomEvent_WrittenAchievementName_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenProgress_2"))
	float b0l__K2Node_CustomEvent_WrittenProgress_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenUserTag_2"))
	int32 b0l__K2Node_CustomEvent_WrittenUserTag_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_2"))
	F__AchievementWriteDelegate__DelegateSignature__SC_1 b0l__K2Node_CreateDelegate_OutputDelegate_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_float_Variable"))
	float b0l__Temp_float_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_name_Variable"))
	FName b0l__Temp_name_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_3"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_4"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenAchievementName_1"))
	FName b0l__K2Node_CustomEvent_WrittenAchievementName_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenProgress_1"))
	float b0l__K2Node_CustomEvent_WrittenProgress_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenUserTag_1"))
	int32 b0l__K2Node_CustomEvent_WrittenUserTag_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_5"))
	F__AchievementWriteDelegate__DelegateSignature__SC_1 b0l__K2Node_CreateDelegate_OutputDelegate_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenAchievementName"))
	FName b0l__K2Node_CustomEvent_WrittenAchievementName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenProgress"))
	float b0l__K2Node_CustomEvent_WrittenProgress__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenUserTag"))
	int32 b0l__K2Node_CustomEvent_WrittenUserTag__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_6"))
	F__AchievementWriteDelegate__DelegateSignature__SC_1 b0l__K2Node_CreateDelegate_OutputDelegate_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_1"))
	int32 b0l__Temp_int_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_float_Variable_1"))
	float b0l__Temp_float_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_name_Variable_1"))
	FName b0l__Temp_name_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable_1"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsThird_Person_Character"))
	AThirdPersonCharacter_C__pf2222656877* b0l__K2Node_DynamicCast_AsThird_Person_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch"))
	AEnemyShootingCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable_1"))
	bool b0l__Temp_bool_IsClosed_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CacheAchievements_ReturnValue"))
	UAchievementQueryCallbackProxy* b0l__CallFunc_CacheAchievements_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_7"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b0l__CallFunc_IsValid_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_WriteAchievementProgress_ReturnValue"))
	UAchievementWriteCallbackProxy* b0l__CallFunc_WriteAchievementProgress_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_1"))
	bool b0l__CallFunc_IsValid_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CacheAchievements_ReturnValue_1"))
	UAchievementQueryCallbackProxy* b0l__CallFunc_CacheAchievements_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_WriteAchievementProgress_ReturnValue_1"))
	UAchievementWriteCallbackProxy* b0l__CallFunc_WriteAchievementProgress_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_2"))
	bool b0l__CallFunc_IsValid_ReturnValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_3"))
	bool b0l__CallFunc_IsValid_ReturnValue_3__pf;
	AExtraAmmo_C__pf604382786(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_ExtraAmmo__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ExtraAmmo__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ExtraAmmo__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ExtraAmmo__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ExtraAmmo__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_03FB607343524F3AC906ED93A50FA711"))
	virtual void bpf__OnSuccess_03FB607343524F3AC906ED93A50FA711__pf(FName bpp__WrittenAchievementName__pf, float bpp__WrittenProgress__pf, int32 bpp__WrittenUserTag__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFailure_03FB607343524F3AC906ED93A50FA711"))
	virtual void bpf__OnFailure_03FB607343524F3AC906ED93A50FA711__pf(FName bpp__WrittenAchievementName__pf, float bpp__WrittenProgress__pf, int32 bpp__WrittenUserTag__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_5D8AE760431ADD79A6D2438BC003A426"))
	virtual void bpf__OnSuccess_5D8AE760431ADD79A6D2438BC003A426__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFailure_5D8AE760431ADD79A6D2438BC003A426"))
	virtual void bpf__OnFailure_5D8AE760431ADD79A6D2438BC003A426__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_5C416D0C4CEC75953C3C53B48F45D974"))
	virtual void bpf__OnSuccess_5C416D0C4CEC75953C3C53B48F45D974__pf(FName bpp__WrittenAchievementName__pf, float bpp__WrittenProgress__pf, int32 bpp__WrittenUserTag__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFailure_5C416D0C4CEC75953C3C53B48F45D974"))
	virtual void bpf__OnFailure_5C416D0C4CEC75953C3C53B48F45D974__pf(FName bpp__WrittenAchievementName__pf, float bpp__WrittenProgress__pf, int32 bpp__WrittenUserTag__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_BA76C1DD4D7B0996A4F287A6287A02DA"))
	virtual void bpf__OnSuccess_BA76C1DD4D7B0996A4F287A6287A02DA__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFailure_BA76C1DD4D7B0996A4F287A6287A02DA"))
	virtual void bpf__OnFailure_BA76C1DD4D7B0996A4F287A6287A02DA__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ExtraAmmoFunction"))
	virtual void bpf__ExtraAmmoFunction__pf();
public:
};
