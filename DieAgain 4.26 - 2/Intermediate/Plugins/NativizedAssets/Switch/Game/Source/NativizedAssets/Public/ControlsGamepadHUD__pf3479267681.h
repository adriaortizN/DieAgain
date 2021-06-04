#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "GamepadInteraction__pf197907997.h"
class UButton;
class UImage;
class ADieAgainGamemode_C__pf1010915279;
#include "ControlsGamepadHUD__pf3479267681.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/ControlsWB/ControlsGamepadHUD.ControlsGamepadHUD_C", OverrideNativeName="ControlsGamepadHUD_C"))
class UControlsGamepadHUD_C__pf3479267681 : public UGamepadInteraction_C__pf197907997
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_66", Category="ControlsGamepadHUD", OverrideNativeName="Button_66"))
	UButton* bpv__Button_66__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_45", Category="ControlsGamepadHUD", OverrideNativeName="Image_45"))
	UImage* bpv__Image_45__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_116", Category="ControlsGamepadHUD", OverrideNativeName="Image_116"))
	UImage* bpv__Image_116__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Its Coming from Main Menu", Category="Default", MultiLine="true", OverrideNativeName="ItsComingFromMainMenu"))
	bool bpv__ItsComingFromMainMenu__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<UButton*> b1l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b1l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b1l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDie_Again_Gamemode"))
	ADieAgainGamemode_C__pf1010915279* b1l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	UControlsGamepadHUD_C__pf3479267681(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_ControlsGamepadHUD__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ControlsGamepadHUD__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ControlsGamepadHUD__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_66_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_66_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf) override;
	virtual void bpf__Construct__pf() override;
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_0"))
	virtual void bpf__GetText_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_1"))
	virtual void bpf__GetText_1__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetBrush_0"))
	virtual FSlateBrush  bpf__GetBrush_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
