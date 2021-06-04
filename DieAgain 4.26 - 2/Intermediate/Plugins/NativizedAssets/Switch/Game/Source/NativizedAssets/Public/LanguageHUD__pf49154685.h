#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "GamepadInteraction__pf197907997.h"
class UButton;
class UImage;
class UMainMenu_WB_C__pf1565531276;
class ADieAgainGamemode_C__pf1010915279;
#include "LanguageHUD__pf49154685.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/LanguageHUD/LanguageHUD.LanguageHUD_C", OverrideNativeName="LanguageHUD_C"))
class ULanguageHUD_C__pf49154685 : public UGamepadInteraction_C__pf197907997
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_Ca", Category="LanguageHUD", OverrideNativeName="Button_Ca"))
	UButton* bpv__Button_Ca__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_English", Category="LanguageHUD", OverrideNativeName="Button_English"))
	UButton* bpv__Button_English__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_Es", Category="LanguageHUD", OverrideNativeName="Button_Es"))
	UButton* bpv__Button_Es__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_Fr", Category="LanguageHUD", OverrideNativeName="Button_Fr"))
	UButton* bpv__Button_Fr__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_Ita", Category="LanguageHUD", OverrideNativeName="Button_Ita"))
	UButton* bpv__Button_Ita__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_Pt", Category="LanguageHUD", OverrideNativeName="Button_Pt"))
	UButton* bpv__Button_Pt__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_Ru", Category="LanguageHUD", OverrideNativeName="Button_Ru"))
	UButton* bpv__Button_Ru__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_Zh", Category="LanguageHUD", OverrideNativeName="Button_Zh"))
	UButton* bpv__Button_Zh__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_16", Category="LanguageHUD", OverrideNativeName="Image_16"))
	UImage* bpv__Image_16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b1l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b1l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b1l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b1l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Create_ReturnValue"))
	UMainMenu_WB_C__pf1565531276* b1l__CallFunc_Create_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<UButton*> b1l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UButton* b1l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor_1"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateBrush"))
	FSlateBrush b1l__K2Node_MakeStruct_SlateBrush__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateBrush_1"))
	FSlateBrush b1l__K2Node_MakeStruct_SlateBrush_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_ButtonStyle"))
	FButtonStyle b1l__K2Node_MakeStruct_ButtonStyle__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor_2"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor_3"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateBrush_2"))
	FSlateBrush b1l__K2Node_MakeStruct_SlateBrush_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateBrush_3"))
	FSlateBrush b1l__K2Node_MakeStruct_SlateBrush_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_ButtonStyle_1"))
	FButtonStyle b1l__K2Node_MakeStruct_ButtonStyle_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDie_Again_Gamemode"))
	ADieAgainGamemode_C__pf1010915279* b1l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	ULanguageHUD_C__pf49154685(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_LanguageHUD__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LanguageHUD__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LanguageHUD__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LanguageHUD__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_Fr_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_Fr_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature__pf();
	virtual void bpf__UpdateFocus__pf() override;
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_Ca_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_Ca_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_Zh_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_Zh_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_Ru_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_Ru_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	virtual void bpf__Construct__pf() override;
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_117_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_117_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf) override;
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetBrush_0"))
	virtual FSlateBrush  bpf__GetBrush_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
