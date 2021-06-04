#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "GamepadInteraction__pf197907997.h"
class UButton;
class USlider;
class UTextBlock;
class ADieAgainGamemode_C__pf1010915279;
class UMyGameInstance_C__pf2410127383;
class USaveGameBP_C__pf4030252459;
class UWidget;
#include "Volume_WB__pf3479267681.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/ControlsWB/Volume_WB.Volume_WB_C", OverrideNativeName="Volume_WB_C"))
class UVolume_WB_C__pf3479267681 : public UGamepadInteraction_C__pf197907997
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Exit_Button", Category="Volume_WB", OverrideNativeName="Exit_Button"))
	UButton* bpv__Exit_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Slider_MusicVolume", Category="Volume_WB", OverrideNativeName="Slider_MusicVolume"))
	USlider* bpv__Slider_MusicVolume__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Slider_SFXVolume", Category="Volume_WB", OverrideNativeName="Slider_SFXVolume"))
	USlider* bpv__Slider_SFXVolume__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_1", OverrideNativeName="TextBlock_1"))
	UTextBlock* bpv__TextBlock_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Voice_Button_0", Category="Volume_WB", OverrideNativeName="Voice_Button_0"))
	UButton* bpv__Voice_Button_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Text Area Visible", Category="Default", MultiLine="true", OverrideNativeName="TextAreaVisible"))
	FText bpv__TextAreaVisible__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Music Volume", Category="Default", MultiLine="true", OverrideNativeName="MusicVolume"))
	float bpv__MusicVolume__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="SFXVolume", Category="Default", MultiLine="true", OverrideNativeName="SFXVolume"))
	float bpv__SFXVolume__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Voice Acting Is Active", Category="Default", MultiLine="true", OverrideNativeName="VoiceActingIsActive"))
	bool bpv__VoiceActingIsActive__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Its Coming from Main Menu", Category="Default", MultiLine="true", OverrideNativeName="ItsComingFromMainMenu"))
	bool bpv__ItsComingFromMainMenu__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b1l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b1l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<UButton*> b1l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDie_Again_Gamemode"))
	ADieAgainGamemode_C__pf1010915279* b1l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_1"))
	float b1l__K2Node_ComponentBoundEvent_Value_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value"))
	float b1l__K2Node_ComponentBoundEvent_Value__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance"))
	UMyGameInstance_C__pf2410127383* b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b1l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Game_BP"))
	USaveGameBP_C__pf4030252459* b1l__K2Node_DynamicCast_AsSave_Game_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b1l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Game_BP_1"))
	USaveGameBP_C__pf4030252459* b1l__K2Node_DynamicCast_AsSave_Game_BP_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b1l__K2Node_DynamicCast_bSuccess_3__pf;
	UVolume_WB_C__pf3479267681(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Volume_WB__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Volume_WB__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Volume_WB__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Volume_WB__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Volume_WB__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Volume_WB__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Volume_WB__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Volume_WB_Voice_Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Volume_WB_Voice_Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Volume_WB_Slider_SFXVolume_E_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Volume_WB_Slider_SFXVolume_E_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature__pf(float bpp__Value__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SliderEventFocus"))
	virtual void bpf__SliderEventFocus__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Volume_WB_Slider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Volume_WB_Slider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature__pf(float bpp__Value__pf);
	virtual void bpf__Construct__pf() override;
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf) override;
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Exit_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Exit_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetVisibilityPlayerArea"))
	virtual void bpf__SetVisibilityPlayerArea__pf(bool bpp__Visibility__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_5"))
	virtual FText  bpf__GetText_5__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetValueMusicSlide"))
	virtual float  bpf__GetValueMusicSlide__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetValueSFXMusic"))
	virtual float  bpf__GetValueSFXMusic__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoreVolume_Music"))
	virtual UWidget*  bpf__MoreVolume_Music__pf(EUINavigation bpp__Navigation__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LessVolume_Music"))
	virtual UWidget*  bpf__LessVolume_Music__pf(EUINavigation bpp__Navigation__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LessVolume_SFX"))
	virtual UWidget*  bpf__LessVolume_SFX__pf(EUINavigation bpp__Navigation__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoreVolume_SFX"))
	virtual UWidget*  bpf__MoreVolume_SFX__pf(EUINavigation bpp__Navigation__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_Slider_SFXVolume_E_Value_0"))
	virtual float  bpf__Get_Slider_SFXVolume_E_Value_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_Voices"))
	virtual FText  bpf__GetText_Voices__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
