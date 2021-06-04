#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "../Plugins/FMODStudio/Source/FMODStudio/Classes/FMODBlueprintStatics.h"
#include "EnumWeapon__pf3349424045.h"
#include "Enum_Languages__pf1010915279.h"
#include "../Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/AchievementWriteCallbackProxy.h"
#include "Runtime/Engine/Public/Net/OnlineBlueprintCallProxyBase.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "EnumLevelsUnlockeds__pf3349424045.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
class USoundBase;
class USaveGameBP_C__pf4030252459;
class USkeletalMesh;
class UMaterialInterface;
class ALevelCompleterBP_C__pf922009354;
class UAchievementWriteCallbackProxy;
class ABaseCharacter_C__pf1010915279;
class UAchievementQueryCallbackProxy;
class AActor;
#include "MyGameInstance__pf2410127383.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/MyGameInstance/MyGameInstance.MyGameInstance_C", OverrideNativeName="MyGameInstance_C"))
class UMyGameInstance_C__pf2410127383 : public UGameInstance
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="AchievementWriteDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_ThreeParams(F__AchievementWriteDelegate__DelegateSignature__SC_0, FName , bpp__WrittenAchievementName__pf, float , bpp__WrittenProgress__pf, int32 , bpp__WrittenUserTag__pf);
	UDELEGATE(meta=(OverrideNativeName="EmptyOnlineDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE(F__EmptyOnlineDelegate__DelegateSignature__SC_1);
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Player Death", Category="Default", MultiLine="true", OverrideNativeName="IsPlayerDeath"))
	bool bpv__IsPlayerDeath__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Sound Playing", Category="Default", MultiLine="true", OverrideNativeName="SoundPlaying"))
	USoundBase* bpv__SoundPlaying__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Music LVTut Is Playing", Category="Default", MultiLine="true", OverrideNativeName="MusicLVTutIsPlaying"))
	bool bpv__MusicLVTutIsPlaying__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Music LV1Is Playing", Category="Default", MultiLine="true", OverrideNativeName="MusicLV1IsPlaying"))
	bool bpv__MusicLV1IsPlaying__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Music LV2Is Playing", Category="Default", MultiLine="true", OverrideNativeName="MusicLV2IsPlaying"))
	bool bpv__MusicLV2IsPlaying__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Music LV3Is Playing", Category="Default", MultiLine="true", OverrideNativeName="MusicLV3IsPlaying"))
	bool bpv__MusicLV3IsPlaying__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Music LV4Is Playing", Category="Default", MultiLine="true", OverrideNativeName="MusicLV4IsPlaying"))
	bool bpv__MusicLV4IsPlaying__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Music LV5Is Playing", Category="Default", MultiLine="true", OverrideNativeName="MusicLV5IsPlaying"))
	bool bpv__MusicLV5IsPlaying__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Music LV6Is Playing", Category="Default", MultiLine="true", OverrideNativeName="MusicLV6IsPlaying"))
	bool bpv__MusicLV6IsPlaying__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Music LV7Is Playing", Category="Default", MultiLine="true", OverrideNativeName="MusicLV7IsPlaying"))
	bool bpv__MusicLV7IsPlaying__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Music LV8Is Playing", Category="Default", MultiLine="true", OverrideNativeName="MusicLV8IsPlaying"))
	bool bpv__MusicLV8IsPlaying__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Music LV9Is Playing", Category="Default", MultiLine="true", OverrideNativeName="MusicLV9IsPlaying"))
	bool bpv__MusicLV9IsPlaying__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Music LV10Is Playing", Category="Default", MultiLine="true", OverrideNativeName="MusicLV10IsPlaying"))
	bool bpv__MusicLV10IsPlaying__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Music LV13Is Playing", Category="Default", MultiLine="true", OverrideNativeName="MusicLV13IsPlaying"))
	bool bpv__MusicLV13IsPlaying__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Music LVPerfect World Is Playing", Category="Default", MultiLine="true", OverrideNativeName="MusicLVPerfectWorldIsPlaying"))
	bool bpv__MusicLVPerfectWorldIsPlaying__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Music LVNFIs Playing", Category="Default", MultiLine="true", OverrideNativeName="MusicLVNFIsPlaying"))
	bool bpv__MusicLVNFIsPlaying__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Music Playing", Category="Default", MultiLine="true", OverrideNativeName="MusicPlaying"))
	FFMODEventInstance bpv__MusicPlaying__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Level Selected", Category="Default", MultiLine="true", OverrideNativeName="LevelSelected"))
	int32 bpv__LevelSelected__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Levels Unlocked", Category="Default", MultiLine="true", OverrideNativeName="LevelsUnlocked"))
	int32 bpv__LevelsUnlocked__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Save Ref", Category="Default", MultiLine="true", OverrideNativeName="Save_Ref"))
	USaveGameBP_C__pf4030252459* bpv__Save_Ref__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="God--> Acces to All Levels", Category="Default", MultiLine="true", OverrideNativeName="God-->AccesToAllLevels"))
	bool bpv__GodxxxAccesToAllLevels__pfGG_;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Weapon", Category="Default", MultiLine="true", OverrideNativeName="PlayerWeapon"))
	E__EnumWeapon__pf bpv__PlayerWeapon__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Ammo", Category="Default", MultiLine="true", OverrideNativeName="PlayerAmmo"))
	int32 bpv__PlayerAmmo__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Squad", Category="Default", MultiLine="true", OverrideNativeName="PlayerSquad"))
	int32 bpv__PlayerSquad__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Skeletal Mesh", Category="Default", MultiLine="true", OverrideNativeName="PlayerSkeletalMesh"))
	USkeletalMesh* bpv__PlayerSkeletalMesh__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Mat 1", Category="Default", MultiLine="true", OverrideNativeName="PlayerMat1"))
	UMaterialInterface* bpv__PlayerMat1__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Mat 2", Category="Default", MultiLine="true", OverrideNativeName="PlayerMat2"))
	UMaterialInterface* bpv__PlayerMat2__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Was Slave", Category="Default", MultiLine="true", OverrideNativeName="PlayerWasSlave"))
	bool bpv__PlayerWasSlave__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Level Completed", Category="Default", MultiLine="true", OverrideNativeName="IsLevelCompleted"))
	bool bpv__IsLevelCompleted__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="LVPoints", Category="Default", MultiLine="true", tooltip="Puntos del nivel actual conseguidos", OverrideNativeName="LVPoints"))
	int32 bpv__LVPoints__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Points", Category="Default", MultiLine="true", tooltip="Puntos del combo actual", OverrideNativeName="CurrentPoints"))
	int32 bpv__CurrentPoints__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Combo Mult", Category="Default", MultiLine="true", OverrideNativeName="ComboMult"))
	int32 bpv__ComboMult__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Combo Last Mult", Category="Default", MultiLine="true", OverrideNativeName="ComboLastMult"))
	int32 bpv__ComboLastMult__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Timer Combo", Category="Default", MultiLine="true", OverrideNativeName="TimerCombo"))
	float bpv__TimerCombo__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Max Puntuation Levels", Category="Default", MultiLine="true", OverrideNativeName="MaxPuntuationLevels"))
	TArray<int32> bpv__MaxPuntuationLevels__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="More Puntuation", Category="Default", MultiLine="true", OverrideNativeName="MorePuntuation"))
	bool bpv__MorePuntuation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Area Visible", Category="Default", MultiLine="true", OverrideNativeName="AreaVisible"))
	bool bpv__AreaVisible__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Language", Category="Default", MultiLine="true", OverrideNativeName="Language"))
	E__Enum_Languages__pf bpv__Language__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Robot Active", Category="Default", MultiLine="true", OverrideNativeName="IsRobotActive"))
	bool bpv__IsRobotActive__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Demon Active", Category="Default", MultiLine="true", OverrideNativeName="IsDemonActive"))
	bool bpv__IsDemonActive__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Knight Active", Category="Default", MultiLine="true", OverrideNativeName="IsKnightActive"))
	bool bpv__IsKnightActive__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Cyber Active", Category="Default", MultiLine="true", OverrideNativeName="IsCyberActive"))
	bool bpv__IsCyberActive__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Astro Active", Category="Default", MultiLine="true", OverrideNativeName="IsAstroActive"))
	bool bpv__IsAstroActive__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Northern Front Active", Category="Default", MultiLine="true", tooltip="Variable que se debe activar al inicar el juego. Si el objeto de DLC spawnea, el jugador tiene DLC y por lo tanto, el save game debe ser true para activar todo el contenido de NortherhFront", OverrideNativeName="IsNorthernFrontActive"))
	bool bpv__IsNorthernFrontActive__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="NF Enemies", Category="Default", MultiLine="true", OverrideNativeName="NF_Enemies"))
	bool bpv__NF_Enemies__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Level to Open Name", Category="Default", MultiLine="true", OverrideNativeName="LevelToOpenName"))
	FName bpv__LevelToOpenName__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Gamepad", Category="Default", MultiLine="true", OverrideNativeName="isGamepad"))
	bool bpv__isGamepad__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Birthday", Category="Default", MultiLine="true", OverrideNativeName="IsBirthday"))
	bool bpv__IsBirthday__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Halloween", Category="Default", MultiLine="true", OverrideNativeName="IsHalloween"))
	bool bpv__IsHalloween__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is All Achievement", Category="Default", MultiLine="true", OverrideNativeName="IsAllAchievement"))
	bool bpv__IsAllAchievement__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is God Mode Active", Category="Default", MultiLine="true", OverrideNativeName="IsGodModeActive"))
	bool bpv__IsGodModeActive__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Voice Active", Category="Default", MultiLine="true", OverrideNativeName="IsVoiceActive"))
	bool bpv__IsVoiceActive__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is PC", Category="Default", MultiLine="true", OverrideNativeName="IsPC"))
	bool bpv__IsPC__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenAchievementName_3"))
	FName b0l__K2Node_CustomEvent_WrittenAchievementName_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenProgress_3"))
	float b0l__K2Node_CustomEvent_WrittenProgress_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenUserTag_3"))
	int32 b0l__K2Node_CustomEvent_WrittenUserTag_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__AchievementWriteDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenAchievementName_2"))
	FName b0l__K2Node_CustomEvent_WrittenAchievementName_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenProgress_2"))
	float b0l__K2Node_CustomEvent_WrittenProgress_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenUserTag_2"))
	int32 b0l__K2Node_CustomEvent_WrittenUserTag_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__AchievementWriteDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_float_Variable"))
	float b0l__Temp_float_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_name_Variable"))
	FName b0l__Temp_name_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_2"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_1 b0l__K2Node_CreateDelegate_OutputDelegate_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_3"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_1 b0l__K2Node_CreateDelegate_OutputDelegate_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_4"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_1 b0l__K2Node_CreateDelegate_OutputDelegate_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_5"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_1 b0l__K2Node_CreateDelegate_OutputDelegate_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenAchievementName_1"))
	FName b0l__K2Node_CustomEvent_WrittenAchievementName_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenProgress_1"))
	float b0l__K2Node_CustomEvent_WrittenProgress_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenUserTag_1"))
	int32 b0l__K2Node_CustomEvent_WrittenUserTag_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_6"))
	F__AchievementWriteDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenAchievementName"))
	FName b0l__K2Node_CustomEvent_WrittenAchievementName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenProgress"))
	float b0l__K2Node_CustomEvent_WrittenProgress__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenUserTag"))
	int32 b0l__K2Node_CustomEvent_WrittenUserTag__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_7"))
	F__AchievementWriteDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_1"))
	int32 b0l__Temp_int_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_float_Variable_1"))
	float b0l__Temp_float_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_name_Variable_1"))
	FName b0l__Temp_name_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ALevelCompleterBP_C__pf922009354*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_WriteAchievementProgress_ReturnValue"))
	UAchievementWriteCallbackProxy* b0l__CallFunc_WriteAchievementProgress_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBase_Character"))
	ABaseCharacter_C__pf1010915279* b0l__K2Node_DynamicCast_AsBase_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b0l__CallFunc_IsValid_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CacheAchievements_ReturnValue"))
	UAchievementQueryCallbackProxy* b0l__CallFunc_CacheAchievements_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_1"))
	bool b0l__CallFunc_IsValid_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CacheAchievements_ReturnValue_1"))
	UAchievementQueryCallbackProxy* b0l__CallFunc_CacheAchievements_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_bFoundID"))
	bool b0l__CallFunc_GetCachedAchievementProgress_bFoundID__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_Progress"))
	float b0l__CallFunc_GetCachedAchievementProgress_Progress__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_bFoundID_1"))
	bool b0l__CallFunc_GetCachedAchievementProgress_bFoundID_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_Progress_1"))
	float b0l__CallFunc_GetCachedAchievementProgress_Progress_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_bFoundID_2"))
	bool b0l__CallFunc_GetCachedAchievementProgress_bFoundID_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_Progress_2"))
	float b0l__CallFunc_GetCachedAchievementProgress_Progress_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_bFoundID_3"))
	bool b0l__CallFunc_GetCachedAchievementProgress_bFoundID_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_Progress_3"))
	float b0l__CallFunc_GetCachedAchievementProgress_Progress_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_bFoundID_4"))
	bool b0l__CallFunc_GetCachedAchievementProgress_bFoundID_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_Progress_4"))
	float b0l__CallFunc_GetCachedAchievementProgress_Progress_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_bFoundID_5"))
	bool b0l__CallFunc_GetCachedAchievementProgress_bFoundID_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_Progress_5"))
	float b0l__CallFunc_GetCachedAchievementProgress_Progress_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_bFoundID_6"))
	bool b0l__CallFunc_GetCachedAchievementProgress_bFoundID_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_Progress_6"))
	float b0l__CallFunc_GetCachedAchievementProgress_Progress_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_bFoundID_7"))
	bool b0l__CallFunc_GetCachedAchievementProgress_bFoundID_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_Progress_7"))
	float b0l__CallFunc_GetCachedAchievementProgress_Progress_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_bFoundID_8"))
	bool b0l__CallFunc_GetCachedAchievementProgress_bFoundID_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_Progress_8"))
	float b0l__CallFunc_GetCachedAchievementProgress_Progress_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_bFoundID_9"))
	bool b0l__CallFunc_GetCachedAchievementProgress_bFoundID_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_Progress_9"))
	float b0l__CallFunc_GetCachedAchievementProgress_Progress_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_bFoundID_10"))
	bool b0l__CallFunc_GetCachedAchievementProgress_bFoundID_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_Progress_10"))
	float b0l__CallFunc_GetCachedAchievementProgress_Progress_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_bFoundID_11"))
	bool b0l__CallFunc_GetCachedAchievementProgress_bFoundID_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_Progress_11"))
	float b0l__CallFunc_GetCachedAchievementProgress_Progress_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_bFoundID_12"))
	bool b0l__CallFunc_GetCachedAchievementProgress_bFoundID_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_Progress_12"))
	float b0l__CallFunc_GetCachedAchievementProgress_Progress_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_bFoundID_13"))
	bool b0l__CallFunc_GetCachedAchievementProgress_bFoundID_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedAchievementProgress_Progress_13"))
	float b0l__CallFunc_GetCachedAchievementProgress_Progress_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_2"))
	bool b0l__CallFunc_IsValid_ReturnValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ALevelCompleterBP_C__pf922009354* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLevel_Completer_BP"))
	ALevelCompleterBP_C__pf922009354* b0l__K2Node_DynamicCast_AsLevel_Completer_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_8"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_WriteAchievementProgress_ReturnValue_1"))
	UAchievementWriteCallbackProxy* b0l__CallFunc_WriteAchievementProgress_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_3"))
	bool b0l__CallFunc_IsValid_ReturnValue_3__pf;
	UMyGameInstance_C__pf2410127383(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_MyGameInstance__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyGameInstance__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyGameInstance__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyGameInstance__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyGameInstance__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyGameInstance__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyGameInstance__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyGameInstance__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyGameInstance__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyGameInstance__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyGameInstance__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyGameInstance__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyGameInstance__pf_12(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CheckAllAchievement"))
	virtual void bpf__CheckAllAchievement__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GetACH"))
	virtual void bpf__GetACH__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ComboGoDown"))
	virtual void bpf__ComboGoDown__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="EnemyKilled"))
	virtual void bpf__EnemyKilled__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GameOver"))
	virtual void bpf__GameOver__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_4FA425054A4FBA6A1A52F2A23BE4FF47"))
	virtual void bpf__OnSuccess_4FA425054A4FBA6A1A52F2A23BE4FF47__pf(FName bpp__WrittenAchievementName__pf, float bpp__WrittenProgress__pf, int32 bpp__WrittenUserTag__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFailure_4FA425054A4FBA6A1A52F2A23BE4FF47"))
	virtual void bpf__OnFailure_4FA425054A4FBA6A1A52F2A23BE4FF47__pf(FName bpp__WrittenAchievementName__pf, float bpp__WrittenProgress__pf, int32 bpp__WrittenUserTag__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_4D32FAEE4BED3EB52DBAFC90954FAC4F"))
	virtual void bpf__OnSuccess_4D32FAEE4BED3EB52DBAFC90954FAC4F__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFailure_4D32FAEE4BED3EB52DBAFC90954FAC4F"))
	virtual void bpf__OnFailure_4D32FAEE4BED3EB52DBAFC90954FAC4F__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_9D3D76BB43E65E4F90EE8C941E247956"))
	virtual void bpf__OnSuccess_9D3D76BB43E65E4F90EE8C941E247956__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFailure_9D3D76BB43E65E4F90EE8C941E247956"))
	virtual void bpf__OnFailure_9D3D76BB43E65E4F90EE8C941E247956__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_B20080DA498AD9C4A4A00987EC8CB625"))
	virtual void bpf__OnSuccess_B20080DA498AD9C4A4A00987EC8CB625__pf(FName bpp__WrittenAchievementName__pf, float bpp__WrittenProgress__pf, int32 bpp__WrittenUserTag__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFailure_B20080DA498AD9C4A4A00987EC8CB625"))
	virtual void bpf__OnFailure_B20080DA498AD9C4A4A00987EC8CB625__pf(FName bpp__WrittenAchievementName__pf, float bpp__WrittenProgress__pf, int32 bpp__WrittenUserTag__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PlayerDeath"))
	virtual void bpf__PlayerDeath__pf(AActor* bpp__WhoKilledPlayer__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PlayerStart"))
	virtual void bpf__PlayerStart__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="StartMusicLVTut"))
	virtual void bpf__StartMusicLVTut__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="StartMusicLV1"))
	virtual void bpf__StartMusicLV1__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="StartMusicLV2"))
	virtual void bpf__StartMusicLV2__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="StartMusicLV3"))
	virtual void bpf__StartMusicLV3__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="StartMusicLV4"))
	virtual void bpf__StartMusicLV4__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="StartMusicLV5"))
	virtual void bpf__StartMusicLV5__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="StartMusicLV6"))
	virtual void bpf__StartMusicLV6__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="StartMusicLV7"))
	virtual void bpf__StartMusicLV7__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="StartMusicLV8"))
	virtual void bpf__StartMusicLV8__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="StartMusicLV9"))
	virtual void bpf__StartMusicLV9__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="StartMusicLV10"))
	virtual void bpf__StartMusicLV10__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="StartMusicLV13"))
	virtual void bpf__StartMusicLV13__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="StartMusicPerfectWorld"))
	virtual void bpf__StartMusicPerfectWorld__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="StartMusicNF"))
	virtual void bpf__StartMusicNF__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="StopMusic"))
	virtual void bpf__StopMusic__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LoadWorldMapPosition"))
	virtual void bpf__LoadWorldMapPosition__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetWorldMapPosition"))
	virtual void bpf__SetWorldMapPosition__pf(int32 bpp__Target__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LevelUnlocked"))
	virtual void bpf__LevelUnlocked__pf(E__EnumLevelsUnlockeds__pf bpp__LevelUnlocked__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SaveLevelUnlockeds"))
	virtual void bpf__SaveLevelUnlockeds__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LoadWorldMapLevels&Sex"))
	virtual void bpf__LoadWorldMapLevelsxSex__pfN();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SavePlayerStats"))
	virtual void bpf__SavePlayerStats__pf(E__EnumWeapon__pf bpp__PlayerWeapon__pf, int32 bpp__PlayerAmmo__pf, int32 bpp__PlayerSquad__pf, USkeletalMesh* bpp__PlayerMesh__pf, UMaterialInterface* bpp__PlayerMat1__pf, UMaterialInterface* bpp__PlayerMat2__pf, bool bpp__IsSlave__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LoadPlayerStats"))
	virtual void bpf__LoadPlayerStats__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SumPoints"))
	virtual void bpf__SumPoints__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ResetPoints"))
	virtual void bpf__ResetPoints__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetLanguage"))
	virtual void bpf__SetLanguage__pf(E__Enum_Languages__pf bpp__NewParam__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LevelLoadingFunction"))
	virtual void bpf__LevelLoadingFunction__pf(FName bpp__ToOpenLevel__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="FinishConversation_ACH"))
	virtual void bpf__FinishConversation_ACH__pf(int32 bpp__IndexActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetGodModeActive"))
	virtual void bpf__SetGodModeActive__pf(bool bpp__GodModeNeedsToBeActive__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LoadGodModeActive"))
	virtual void bpf__LoadGodModeActive__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetVoiceActing"))
	virtual void bpf__SetVoiceActing__pf(bool bpp__IsActive__pf);
public:
};
