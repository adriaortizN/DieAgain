#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "EnumLevelsUnlockeds__pf3349424045.h"
#include "../Plugins/Marketplace/DialoguePlugin/Source/DialoguePlugin/Public/Dialogue.h"
class ALevelSequenceActor;
class UClass;
class USaveGameBP_C__pf4030252459;
class APlayerController;
class AActor;
class AConversation_Actor_C__pf2744501483;
class UMyGameInstance_C__pf2410127383;
#include "SaveShaldAlive__pf3264546738.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Conversations/Events/SaveShaldAlive.SaveShaldAlive_C", OverrideNativeName="SaveShaldAlive_C"))
class USaveShaldAlive_C__pf3264546738 : public UDialogueEvents
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Matinee to Play", Category="Default", MultiLine="true", OverrideNativeName="MatineeToPlay"))
	UClass* bpv__MatineeToPlay__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Test Save", Category="Default", MultiLine="true", OverrideNativeName="TestSave"))
	USaveGameBP_C__pf4030252459* bpv__TestSave__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Unlocked Level", Category="Default", MultiLine="true", OverrideNativeName="UnlockedLevel"))
	E__EnumLevelsUnlockeds__pf bpv__UnlockedLevel__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_ConsideringPlayer"))
	APlayerController* b0l__K2Node_Event_ConsideringPlayer__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NPCActor"))
	AActor* b0l__K2Node_Event_NPCActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsConversation_Actor"))
	AConversation_Actor_C__pf2744501483* b0l__K2Node_DynamicCast_AsConversation_Actor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance"))
	UMyGameInstance_C__pf2410127383* b0l__K2Node_DynamicCast_AsMy_Game_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	USaveShaldAlive_C__pf3264546738(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_SaveShaldAlive__pf_0(int32 bpp__EntryPoint__pf);
	virtual void RecieveEventTriggered_Implementation(APlayerController* bpp__ConsideringPlayer__pf, AActor* bpp__NPCActor__pf) override;
public:
};
