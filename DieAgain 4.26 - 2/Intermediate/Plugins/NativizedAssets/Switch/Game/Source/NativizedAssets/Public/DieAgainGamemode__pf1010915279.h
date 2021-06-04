#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
class USceneComponent;
class UGamepadInteraction_C__pf197907997;
class UMyGameInstance_C__pf2410127383;
#include "DieAgainGamemode__pf1010915279.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/DieAgainGamemode.DieAgainGamemode_C", OverrideNativeName="DieAgainGamemode_C"))
class ADieAgainGamemode_C__pf1010915279 : public AGameModeBase
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Focus Lost", Category="Default", MultiLine="true", OverrideNativeName="focusLost"))
	bool bpv__focusLost__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Widget", Category="Default", MultiLine="true", OverrideNativeName="CurrentWidget"))
	UGamepadInteraction_C__pf197907997* bpv__CurrentWidget__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance"))
	UMyGameInstance_C__pf2410127383* b0l__K2Node_DynamicCast_AsMy_Game_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Widget"))
	UGamepadInteraction_C__pf197907997* b0l__K2Node_CustomEvent_Widget__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key"))
	FKey b0l__K2Node_InputKeyEvent_Key__pf;
	ADieAgainGamemode_C__pf1010915279(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_DieAgainGamemode__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DieAgainGamemode__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DieAgainGamemode__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DieAgainGamemode__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AddCustomCursor"))
	virtual void bpf__AddCustomCursor__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ResetWidget"))
	virtual void bpf__ResetWidget__pf(UGamepadInteraction_C__pf197907997* bpp__Widget__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_AnyKey_K2Node_InputKeyEvent_0"))
	virtual void bpf__InpActEvt_AnyKey_K2Node_InputKeyEvent_0__pf(FKey bpp__Key__pf);
public:
};
