#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UFMODAudioComponent;
class ACameraActor_C__pf1295471953;
class ATargetPoint;
class UMyGameInstance_C__pf2410127383;
class UPause_WorldMap_HUD_C__pf197907997;
class ADieAgainGamemode_C__pf1010915279;
#include "PlayerWorldMap_Character__pf2222656877.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/ThirdPersonBP/Blueprints/PlayerWorldMap_Character.PlayerWorldMap_Character_C", OverrideNativeName="PlayerWorldMap_Character_C"))
class APlayerWorldMap_Character_C__pf2222656877 : public ACharacter
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="AstroMesh"))
	USkeletalMeshComponent* bpv__AstroMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="CyberGirl"))
	USkeletalMeshComponent* bpv__CyberGirl__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PumpkinHead"))
	UStaticMeshComponent* bpv__PumpkinHead__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PartyHat"))
	UStaticMeshComponent* bpv__PartyHat__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Knight_BodySkirt"))
	USkeletalMeshComponent* bpv__Knight_BodySkirt__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Knight_Cape"))
	USkeletalMeshComponent* bpv__Knight_Cape__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Knight_Glove"))
	USkeletalMeshComponent* bpv__Knight_Glove__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Knight_Head"))
	USkeletalMeshComponent* bpv__Knight_Head__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Knight_Helmet"))
	USkeletalMeshComponent* bpv__Knight_Helmet__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Knight_Pants"))
	USkeletalMeshComponent* bpv__Knight_Pants__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SM_Hara_horn"))
	UStaticMeshComponent* bpv__SM_Hara_horn__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Capa"))
	USkeletalMeshComponent* bpv__Capa__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="WorldMapMusic"))
	UFMODAudioComponent* bpv__WorldMapMusic__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GasMask"))
	UStaticMeshComponent* bpv__GasMask__pf;
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Male", Category="Default", MultiLine="true", OverrideNativeName="IsMale"))
	bool bpv__IsMale__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Cooldown Start", Category="Default", MultiLine="true", OverrideNativeName="CooldownStart"))
	bool bpv__CooldownStart__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Right Lock", Category="Default", MultiLine="true", OverrideNativeName="IsRightLock"))
	bool bpv__IsRightLock__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Robot", Category="Default", MultiLine="true", OverrideNativeName="IsRobot"))
	bool bpv__IsRobot__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Northern Front Target Point", Category="Default", MultiLine="true", OverrideNativeName="NorthernFrontTargetPoint"))
	ATargetPoint* bpv__NorthernFrontTargetPoint__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is in Northern Front", Category="Default", MultiLine="true", OverrideNativeName="IsInNorthernFront"))
	bool bpv__IsInNorthernFront__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Block Menu", Category="Default", MultiLine="true", OverrideNativeName="blockMenu"))
	bool bpv__blockMenu__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ATargetPoint* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b0l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsCamera_Actor"))
	ACameraActor_C__pf1295471953* b0l__K2Node_DynamicCast_AsCamera_Actor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsCamera_Actor_1"))
	ACameraActor_C__pf1295471953* b0l__K2Node_DynamicCast_AsCamera_Actor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance"))
	UMyGameInstance_C__pf2410127383* b0l__K2Node_DynamicCast_AsMy_Game_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance_1"))
	UMyGameInstance_C__pf2410127383* b0l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Create_ReturnValue"))
	UPause_WorldMap_HUD_C__pf197907997* b0l__CallFunc_Create_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance_2"))
	UMyGameInstance_C__pf2410127383* b0l__K2Node_DynamicCast_AsMy_Game_Instance_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b0l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance_3"))
	UMyGameInstance_C__pf2410127383* b0l__K2Node_DynamicCast_AsMy_Game_Instance_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b0l__K2Node_DynamicCast_bSuccess_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance_4"))
	UMyGameInstance_C__pf2410127383* b0l__K2Node_DynamicCast_AsMy_Game_Instance_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_6"))
	bool b0l__K2Node_DynamicCast_bSuccess_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue"))
	float b0l__K2Node_InputAxisEvent_AxisValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_1"))
	FKey b0l__K2Node_InputActionEvent_Key_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ACameraActor_C__pf1295471953*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_2"))
	FKey b0l__K2Node_InputActionEvent_Key_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	ACameraActor_C__pf1295471953* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsCamera_Actor_2"))
	ACameraActor_C__pf1295471953* b0l__K2Node_DynamicCast_AsCamera_Actor_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_7"))
	bool b0l__K2Node_DynamicCast_bSuccess_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_3"))
	FKey b0l__K2Node_InputActionEvent_Key_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDie_Again_Gamemode"))
	ADieAgainGamemode_C__pf1010915279* b0l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_8"))
	bool b0l__K2Node_DynamicCast_bSuccess_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPause_World_Map_HUD"))
	UPause_WorldMap_HUD_C__pf197907997* b0l__K2Node_DynamicCast_AsPause_World_Map_HUD__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_9"))
	bool b0l__K2Node_DynamicCast_bSuccess_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldRotation_SweepHitResult_1"))
	FHitResult b0l__CallFunc_K2_SetWorldRotation_SweepHitResult_1__pf;
	APlayerWorldMap_Character_C__pf2222656877(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_PlayerWorldMap_Character_0"))
	void bpf__ExecuteUbergraph_PlayerWorldMap_Character__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerWorldMap_Character__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerWorldMap_Character__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerWorldMap_Character__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerWorldMap_Character__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerWorldMap_Character__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerWorldMap_Character__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerWorldMap_Character__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerWorldMap_Character__pf_8(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OpenPause"))
	virtual void bpf__OpenPause__pf();
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1"))
	virtual void bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoveCamera"))
	virtual void bpf__MoveCamera__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoveToTarget"))
	virtual void bpf__MoveToTarget__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Pause_K2Node_InputActionEvent_0"))
	virtual void bpf__InpActEvt_Pause_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_EnterLevel_K2Node_InputActionEvent_1"))
	virtual void bpf__InpActEvt_EnterLevel_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_WorldMapLeft_K2Node_InputActionEvent_2"))
	virtual void bpf__InpActEvt_WorldMapLeft_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_WorldMapRight_K2Node_InputActionEvent_3"))
	virtual void bpf__InpActEvt_WorldMapRight_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OpenLevel"))
	virtual void bpf__OpenLevel__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetSexAvatar"))
	virtual void bpf__SetSexAvatar__pf(bool bpp__IsMale__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetRobot"))
	virtual void bpf__SetRobot__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="SetDemon"))
	virtual void bpf__SetDemon__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="SetKnight"))
	virtual void bpf__SetKnight__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="SetCyber"))
	virtual void bpf__SetCyber__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="SetAstro"))
	virtual void bpf__SetAstro__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetLoadingScreenName"))
	virtual void bpf__SetLoadingScreenName__pf(FName bpp__LevelToOpen__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="IsBirthday"))
	virtual void bpf__IsBirthday__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="IsHalloween"))
	virtual void bpf__IsHalloween__pf();
public:
};
