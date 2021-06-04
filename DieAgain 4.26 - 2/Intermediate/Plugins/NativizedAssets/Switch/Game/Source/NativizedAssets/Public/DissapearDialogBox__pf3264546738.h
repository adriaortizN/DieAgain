#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "../Plugins/Marketplace/DialoguePlugin/Source/DialoguePlugin/Public/Dialogue.h"
class ALevelSequenceActor;
class UClass;
class APlayerController;
class AActor;
class AConversation_Actor_C__pf2744501483;
#include "DissapearDialogBox__pf3264546738.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Conversations/Events/DissapearDialogBox.DissapearDialogBox_C", OverrideNativeName="DissapearDialogBox_C"))
class UDissapearDialogBox_C__pf3264546738 : public UDialogueEvents
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Matinee to Play", Category="Default", MultiLine="true", OverrideNativeName="MatineeToPlay"))
	UClass* bpv__MatineeToPlay__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_ConsideringPlayer"))
	APlayerController* b0l__K2Node_Event_ConsideringPlayer__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NPCActor"))
	AActor* b0l__K2Node_Event_NPCActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsConversation_Actor"))
	AConversation_Actor_C__pf2744501483* b0l__K2Node_DynamicCast_AsConversation_Actor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UDissapearDialogBox_C__pf3264546738(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_DissapearDialogBox__pf_0(int32 bpp__EntryPoint__pf);
	virtual void RecieveEventTriggered_Implementation(APlayerController* bpp__ConsideringPlayer__pf, AActor* bpp__NPCActor__pf) override;
public:
};
