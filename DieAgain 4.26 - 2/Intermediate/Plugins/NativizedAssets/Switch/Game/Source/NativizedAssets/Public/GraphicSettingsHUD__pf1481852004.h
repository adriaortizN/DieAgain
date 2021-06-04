#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "GamepadInteraction__pf197907997.h"
class UButton;
class UGameUserSettings;
class USaveGameBP_C__pf4030252459;
class UOptionsHUD_C__pf3479267681;
class ADieAgainGamemode_C__pf1010915279;
#include "GraphicSettingsHUD__pf1481852004.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/GraphicsSettingsHUD/GraphicSettingsHUD.GraphicSettingsHUD_C", OverrideNativeName="GraphicSettingsHUD_C"))
class UGraphicSettingsHUD_C__pf1481852004 : public UGamepadInteraction_C__pf197907997
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button", Category="GraphicSettingsHUD", OverrideNativeName="Button"))
	UButton* bpv__Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_56", Category="GraphicSettingsHUD", OverrideNativeName="Button_56"))
	UButton* bpv__Button_56__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_262", Category="GraphicSettingsHUD", OverrideNativeName="Button_262"))
	UButton* bpv__Button_262__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_397", Category="GraphicSettingsHUD", OverrideNativeName="Button_397"))
	UButton* bpv__Button_397__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_519", Category="GraphicSettingsHUD", OverrideNativeName="Button_519"))
	UButton* bpv__Button_519__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Its Coming from Main Menu", Category="Default", MultiLine="true", OverrideNativeName="ItsComingFromMainMenu"))
	bool bpv__ItsComingFromMainMenu__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetGameUserSettings_ReturnValue"))
	UGameUserSettings* b1l__CallFunc_GetGameUserSettings_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetGameUserSettings_ReturnValue_1"))
	UGameUserSettings* b1l__CallFunc_GetGameUserSettings_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetGameUserSettings_ReturnValue_2"))
	UGameUserSettings* b1l__CallFunc_GetGameUserSettings_ReturnValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetGameUserSettings_ReturnValue_3"))
	UGameUserSettings* b1l__CallFunc_GetGameUserSettings_ReturnValue_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Game_BP"))
	USaveGameBP_C__pf4030252459* b1l__K2Node_DynamicCast_AsSave_Game_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Game_BP_1"))
	USaveGameBP_C__pf4030252459* b1l__K2Node_DynamicCast_AsSave_Game_BP_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b1l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Game_BP_2"))
	USaveGameBP_C__pf4030252459* b1l__K2Node_DynamicCast_AsSave_Game_BP_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b1l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Game_BP_3"))
	USaveGameBP_C__pf4030252459* b1l__K2Node_DynamicCast_AsSave_Game_BP_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b1l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Create_ReturnValue"))
	UOptionsHUD_C__pf3479267681* b1l__CallFunc_Create_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<UButton*> b1l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDie_Again_Gamemode"))
	ADieAgainGamemode_C__pf1010915279* b1l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b1l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b1l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b1l__K2Node_Event_InDeltaTime__pf;
	UGraphicSettingsHUD_C__pf1481852004(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_GraphicSettingsHUD_0"))
	void bpf__ExecuteUbergraph_GraphicSettingsHUD__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GraphicSettingsHUD__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GraphicSettingsHUD__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_519_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_519_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_397_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_397_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_262_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_262_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_56_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_56_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf) override;
	virtual void bpf__Construct__pf() override;
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_0"))
	virtual void bpf__GetText_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_1"))
	virtual void bpf__GetText_1__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_2"))
	virtual void bpf__GetText_2__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_3"))
	virtual void bpf__GetText_3__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_4"))
	virtual void bpf__GetText_4__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_5"))
	virtual void bpf__GetText_5__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetBrush_0"))
	virtual FSlateBrush  bpf__GetBrush_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetVisibility_0"))
	virtual ESlateVisibility  bpf__GetVisibility_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
