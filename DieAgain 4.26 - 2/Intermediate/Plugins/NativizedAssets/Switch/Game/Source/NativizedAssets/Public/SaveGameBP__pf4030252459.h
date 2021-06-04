#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Enum_Languages__pf1010915279.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "SaveGameBP__pf4030252459.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/SaveGame/SaveGameBP.SaveGameBP_C", OverrideNativeName="SaveGameBP_C"))
class USaveGameBP_C__pf4030252459 : public USaveGame
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Levels Unlocked Save", Category="Default", MultiLine="true", OverrideNativeName="LevelsUnlocked_Save"))
	int32 bpv__LevelsUnlocked_Save__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Male", Category="Default", MultiLine="true", OverrideNativeName="IsMale"))
	bool bpv__IsMale__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Shald Is in Varia", Category="Default", MultiLine="true", OverrideNativeName="ShaldIsInVaria"))
	bool bpv__ShaldIsInVaria__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Shald in Varia for Cyber", Category="Default", MultiLine="true", OverrideNativeName="ShaldInVariaForCyber"))
	bool bpv__ShaldInVariaForCyber__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Tutorial Completed", Category="Default", MultiLine="true", OverrideNativeName="IsTutorialCompleted"))
	bool bpv__IsTutorialCompleted__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Init Cutscene Skipable", Category="Default", MultiLine="true", OverrideNativeName="IsInitCutsceneSkipable"))
	bool bpv__IsInitCutsceneSkipable__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Puntuation Levels", Category="Default", MultiLine="true", OverrideNativeName="PuntuationLevels"))
	TArray<int32> bpv__PuntuationLevels__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Extra Ammo Rifle", Category="Default", MultiLine="true", OverrideNativeName="ExtraAmmoRifle"))
	bool bpv__ExtraAmmoRifle__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Extra Ammo Shotgun", Category="Default", MultiLine="true", OverrideNativeName="ExtraAmmoShotgun"))
	bool bpv__ExtraAmmoShotgun__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Power Up Unlocked", Category="Default", MultiLine="true", OverrideNativeName="PowerUpUnlocked"))
	bool bpv__PowerUpUnlocked__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Area Visible", Category="Default", MultiLine="true", OverrideNativeName="IsAreaVisible"))
	bool bpv__IsAreaVisible__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Power Conversation Is Done", Category="Default", MultiLine="true", OverrideNativeName="PowerConversationIsDone"))
	bool bpv__PowerConversationIsDone__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Level Map Current", Category="Default", MultiLine="true", OverrideNativeName="LevelMapCurrent"))
	int32 bpv__LevelMapCurrent__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Language", Category="Default", MultiLine="true", OverrideNativeName="Language"))
	E__Enum_Languages__pf bpv__Language__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Level 11Un Finish", Category="Default", MultiLine="true", tooltip="Si se entra en el Nivel 11 y se sale", OverrideNativeName="IsLevel11UnFinish"))
	bool bpv__IsLevel11UnFinish__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Graphic Quality", Category="Default", MultiLine="true", OverrideNativeName="GraphicQuality"))
	int32 bpv__GraphicQuality__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Robot Unlocked", Category="Default", MultiLine="true", OverrideNativeName="IsRobotUnlocked"))
	bool bpv__IsRobotUnlocked__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Astro Unlocked", Category="Default", MultiLine="true", OverrideNativeName="IsAstroUnlocked"))
	bool bpv__IsAstroUnlocked__pf;
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Array Conversations", Category="Default", MultiLine="true", OverrideNativeName="ArrayConversations"))
	TArray<bool> bpv__ArrayConversations__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is God Mode Active", Category="Default", MultiLine="true", OverrideNativeName="IsGodModeActive"))
	bool bpv__IsGodModeActive__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Voice Acting Active", Category="Default", MultiLine="true", OverrideNativeName="IsVoiceActingActive"))
	bool bpv__IsVoiceActingActive__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Music Volume", Category="Default", MultiLine="true", OverrideNativeName="MusicVolume"))
	float bpv__MusicVolume__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="SFXVolume", Category="Default", MultiLine="true", OverrideNativeName="SFXVolume"))
	float bpv__SFXVolume__pf;
	USaveGameBP_C__pf4030252459(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
