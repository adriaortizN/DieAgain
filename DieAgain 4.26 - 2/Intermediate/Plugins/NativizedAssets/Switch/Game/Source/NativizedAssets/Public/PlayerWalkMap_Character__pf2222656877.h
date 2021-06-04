#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "EnumLobbyMusic__pf3349424045.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "BaseCharacter__pf1010915279.h"
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UFMODAudioComponent;
class AActor;
class ACameraActor_C__pf1295471953;
class AConversation_Actor_C__pf2744501483;
class USaveGameBP_C__pf4030252459;
class UMyGameInstance_C__pf2410127383;
class ADieAgainGamemode_C__pf1010915279;
class UPauseHUD_C__pf197907997;
#include "PlayerWalkMap_Character__pf2222656877.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/ThirdPersonBP/Blueprints/PlayerWalkMap_Character.PlayerWalkMap_Character_C", OverrideNativeName="PlayerWalkMap_Character_C"))
class APlayerWalkMap_Character_C__pf2222656877 : public ABaseCharacter_C__pf1010915279
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="AstroMesh"))
	USkeletalMeshComponent* bpv__AstroMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="CyberMesh"))
	USkeletalMeshComponent* bpv__CyberMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PumpkinHeadd"))
	UStaticMeshComponent* bpv__PumpkinHeadd__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PartyHat"))
	UStaticMeshComponent* bpv__PartyHat__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Knight_Head"))
	USkeletalMeshComponent* bpv__Knight_Head__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Knight_Pants"))
	USkeletalMeshComponent* bpv__Knight_Pants__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Knight_BodySkirt"))
	USkeletalMeshComponent* bpv__Knight_BodySkirt__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Knight_Cape"))
	USkeletalMeshComponent* bpv__Knight_Cape__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Knight_Glove"))
	USkeletalMeshComponent* bpv__Knight_Glove__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Knight_Helmet"))
	USkeletalMeshComponent* bpv__Knight_Helmet__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SM_Hara_horn"))
	UStaticMeshComponent* bpv__SM_Hara_horn__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Capa"))
	USkeletalMeshComponent* bpv__Capa__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Weapon"))
	UStaticMeshComponent* bpv__Weapon__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="WalkMapMusic"))
	UFMODAudioComponent* bpv__WalkMapMusic__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GasMask"))
	UStaticMeshComponent* bpv__GasMask__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Camera Actor", Category="Default", MultiLine="true", OverrideNativeName="CameraActor"))
	AActor* bpv__CameraActor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Actor to Talk", Category="Default", MultiLine="true", OverrideNativeName="ActorToTalk"))
	AActor* bpv__ActorToTalk__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Male", Category="Default", MultiLine="true", OverrideNativeName="IsMale"))
	bool bpv__IsMale__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Walk", Category="Default", MultiLine="true", OverrideNativeName="CanWalk"))
	bool bpv__CanWalk__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Dance", Category="Default", MultiLine="true", OverrideNativeName="CanDance"))
	bool bpv__CanDance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Has Talked", Category="Default", MultiLine="true", OverrideNativeName="HasTalked"))
	bool bpv__HasTalked__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Steiner", Category="Default", MultiLine="true", OverrideNativeName="IsSteiner"))
	bool bpv__IsSteiner__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Alt Animation", Category="Default", MultiLine="true", OverrideNativeName="AltAnimation"))
	bool bpv__AltAnimation__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Music Lobby", Category="Default", MultiLine="true", OverrideNativeName="MusicLobby"))
	E__EnumLobbyMusic__pf bpv__MusicLobby__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Pet", Category="Default", MultiLine="true", OverrideNativeName="CanPet"))
	bool bpv__CanPet__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Robot", Category="Default", MultiLine="true", OverrideNativeName="IsRobot"))
	bool bpv__IsRobot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Talking Dialog Actor", Category="Default", MultiLine="true", OverrideNativeName="TalkingDialogActor"))
	AActor* bpv__TalkingDialogActor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Talking", Category="Default", MultiLine="true", OverrideNativeName="IsTalking"))
	bool bpv__IsTalking__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_2"))
	float b1l__K2Node_InputAxisEvent_AxisValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b1l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b1l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b1l__CallFunc_BreakRotator_Yaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_1"))
	float b1l__K2Node_InputAxisEvent_AxisValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsCamera_Actor"))
	ACameraActor_C__pf1295471953* b1l__K2Node_DynamicCast_AsCamera_Actor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsConversation_Actor"))
	AConversation_Actor_C__pf2744501483* b1l__K2Node_DynamicCast_AsConversation_Actor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b1l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Game_BP"))
	USaveGameBP_C__pf4030252459* b1l__K2Node_DynamicCast_AsSave_Game_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b1l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance"))
	UMyGameInstance_C__pf2410127383* b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b1l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance_1"))
	UMyGameInstance_C__pf2410127383* b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b1l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance_2"))
	UMyGameInstance_C__pf2410127383* b1l__K2Node_DynamicCast_AsMy_Game_Instance_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b1l__K2Node_DynamicCast_bSuccess_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b1l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b1l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_1"))
	FKey b1l__K2Node_InputActionEvent_Key_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue"))
	float b1l__K2Node_InputAxisEvent_AxisValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b1l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ACameraActor_C__pf1295471953*> b1l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_2"))
	FKey b1l__K2Node_InputActionEvent_Key_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b1l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AActor* b1l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsCamera_Actor_1"))
	ACameraActor_C__pf1295471953* b1l__K2Node_DynamicCast_AsCamera_Actor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_6"))
	bool b1l__K2Node_DynamicCast_bSuccess_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDie_Again_Gamemode"))
	ADieAgainGamemode_C__pf1010915279* b1l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_7"))
	bool b1l__K2Node_DynamicCast_bSuccess_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPause_HUD"))
	UPauseHUD_C__pf197907997* b1l__K2Node_DynamicCast_AsPause_HUD__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_8"))
	bool b1l__K2Node_DynamicCast_bSuccess_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsConversation_Actor_1"))
	AConversation_Actor_C__pf2744501483* b1l__K2Node_DynamicCast_AsConversation_Actor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_9"))
	bool b1l__K2Node_DynamicCast_bSuccess_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b1l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Create_ReturnValue"))
	UPauseHUD_C__pf197907997* b1l__CallFunc_Create_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeRotation_SweepHitResult"))
	FHitResult b1l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf;
	APlayerWalkMap_Character_C__pf2222656877(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PlayerWalkMap_Character__pf_11(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Open Menu"))
	virtual void bpf__OpenxMenu__pfT();
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveRight_K2Node_InputAxisEvent_0"))
	virtual void bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_0__pf(float bpp__AxisValue__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="StopPet"))
	virtual void bpf__StopPet__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="InitPet"))
	virtual void bpf__InitPet__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="StopDance"))
	virtual void bpf__StopDance__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="InitDance"))
	virtual void bpf__InitDance__pf();
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90"))
	virtual void bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79"))
	virtual void bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Dance_K2Node_InputActionEvent_0"))
	virtual void bpf__InpActEvt_Dance_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Pause_K2Node_InputActionEvent_1"))
	virtual void bpf__InpActEvt_Pause_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Jump_K2Node_InputActionEvent_2"))
	virtual void bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetSexAvatar"))
	virtual void bpf__SetSexAvatar__pf(bool bpp__IsMale__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetSteiner"))
	virtual void bpf__SetSteiner__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="SetRobot"))
	virtual void bpf__SetRobot__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="AlternativeAnimation"))
	virtual void bpf__AlternativeAnimation__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="SetMusicLobby"))
	virtual void bpf__SetMusicLobby__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetDemon"))
	virtual void bpf__SetDemon__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetKnight"))
	virtual void bpf__SetKnight__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="SetCyber"))
	virtual void bpf__SetCyber__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetBirthDay"))
	virtual void bpf__SetBirthDay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetPumpkinHead"))
	virtual void bpf__SetPumpkinHead__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetAstro"))
	virtual void bpf__SetAstro__pf();
public:
};
