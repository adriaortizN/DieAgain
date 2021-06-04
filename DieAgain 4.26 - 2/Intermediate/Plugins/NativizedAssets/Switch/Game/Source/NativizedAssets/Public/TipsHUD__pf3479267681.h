#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UImage;
#include "TipsHUD__pf3479267681.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/ControlsWB/TipsHUD.TipsHUD_C", OverrideNativeName="TipsHUD_C"))
class UTipsHUD_C__pf3479267681 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_101", Category="TipsHUD", OverrideNativeName="Button_101"))
	UButton* bpv__Button_101__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_276", Category="TipsHUD", OverrideNativeName="Button_276"))
	UButton* bpv__Button_276__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_123", Category="TipsHUD", OverrideNativeName="Image_123"))
	UImage* bpv__Image_123__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Tips", Category="Default", MultiLine="true", OverrideNativeName="Tips"))
	int32 bpv__Tips__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Max Tips", Category="Default", MultiLine="true", OverrideNativeName="MaxTips"))
	int32 bpv__MaxTips__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Tip Image", Category="Default", MultiLine="true", OverrideNativeName="TipImage"))
	FSlateBrush bpv__TipImage__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UTipsHUD_C__pf3479267681(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_TipsHUD__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_TipsHUD__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_276_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_276_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetTipImage"))
	virtual FSlateBrush  bpf__GetTipImage__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_0"))
	virtual void bpf__GetText_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_1"))
	virtual void bpf__GetText_1__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_2"))
	virtual void bpf__GetText_2__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
