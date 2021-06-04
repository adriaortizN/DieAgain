#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "../Plugins/Marketplace/DialoguePlugin/Source/DialoguePlugin/Public/Dialogue.h"
class ALevelSequenceActor;
class UClass;
class APlayerWalkMap_Character_C__pf2222656877;
class APlayerController;
class AActor;
#include "NuclearLaunchCameraShake__pf3264546738.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Conversations/Events/NuclearLaunchCameraShake.NuclearLaunchCameraShake_C", OverrideNativeName="NuclearLaunchCameraShake_C"))
class UNuclearLaunchCameraShake_C__pf3264546738 : public UDialogueEvents
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Matinee to Play", Category="Default", MultiLine="true", OverrideNativeName="MatineeToPlay"))
	UClass* bpv__MatineeToPlay__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_Walk_Map_Character"))
	APlayerWalkMap_Character_C__pf2222656877* b0l__K2Node_DynamicCast_AsPlayer_Walk_Map_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_ConsideringPlayer"))
	APlayerController* b0l__K2Node_Event_ConsideringPlayer__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NPCActor"))
	AActor* b0l__K2Node_Event_NPCActor__pf;
	UNuclearLaunchCameraShake_C__pf3264546738(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_NuclearLaunchCameraShake__pf_0(int32 bpp__EntryPoint__pf);
	virtual void RecieveEventTriggered_Implementation(APlayerController* bpp__ConsideringPlayer__pf, AActor* bpp__NPCActor__pf) override;
public:
};
