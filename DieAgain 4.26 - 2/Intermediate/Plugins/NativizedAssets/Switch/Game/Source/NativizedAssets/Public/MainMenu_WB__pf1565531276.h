#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "GamepadInteraction__pf197907997.h"
class UWidgetAnimation;
class UButton;
class UMyGameInstance_C__pf2410127383;
class ADieAgainGamemode_C__pf1010915279;
#include "MainMenu_WB__pf1565531276.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/MainMenu/MainMenu_WB.MainMenu_WB_C", OverrideNativeName="MainMenu_WB_C"))
class UMainMenu_WB_C__pf1565531276 : public UGamepadInteraction_C__pf197907997
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="ChangeAvatarAnim", Category="Animations", OverrideNativeName="ChangeAvatarAnim"))
	UWidgetAnimation* bpv__ChangeAvatarAnim__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ChangeAvatar_Button", Category="MainMenu_WB", OverrideNativeName="ChangeAvatar_Button"))
	UButton* bpv__ChangeAvatar_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ChangeLanguage_Button", Category="MainMenu_WB", OverrideNativeName="ChangeLanguage_Button"))
	UButton* bpv__ChangeLanguage_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Close Game_Button", Category="MainMenu_WB", OverrideNativeName="CloseGame_Button"))
	UButton* bpv__CloseGame_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Final Credits_Button", Category="MainMenu_WB", OverrideNativeName="FinalCredits_Button"))
	UButton* bpv__FinalCredits_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Graphics_Button", Category="MainMenu_WB", OverrideNativeName="Graphics_Button"))
	UButton* bpv__Graphics_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Play_Button", Category="MainMenu_WB", OverrideNativeName="Play_Button"))
	UButton* bpv__Play_Button__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Default Button", Category="Default", MultiLine="true", OverrideNativeName="defaultButton"))
	FButtonStyle bpv__defaultButton__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hover Button", Category="Default", MultiLine="true", OverrideNativeName="hoverButton"))
	FButtonStyle bpv__hoverButton__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b1l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b1l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance"))
	UMyGameInstance_C__pf2410127383* b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDie_Again_Gamemode"))
	ADieAgainGamemode_C__pf1010915279* b1l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b1l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<UButton*> b1l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance_1"))
	UMyGameInstance_C__pf2410127383* b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b1l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDie_Again_Gamemode_1"))
	ADieAgainGamemode_C__pf1010915279* b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b1l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDie_Again_Gamemode_2"))
	ADieAgainGamemode_C__pf1010915279* b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b1l__K2Node_DynamicCast_bSuccess_4__pf;
	UMainMenu_WB_C__pf1565531276(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_MainMenu_WB__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainMenu_WB__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainMenu_WB__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainMenu_WB__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainMenu_WB__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainMenu_WB__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainMenu_WB__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainMenu_WB__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Graphics_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Graphics_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf();
	virtual void bpf__Construct__pf() override;
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf) override;
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Play_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Play_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CloseGame_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__CloseGame_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ChangeAvatar_Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ChangeAvatar_Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__FinalCredits_Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__FinalCredits_Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ChangeLanguage_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ChangeLanguage_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_ChangeAvatar_Button_Visibility_0"))
	virtual ESlateVisibility  bpf__Get_ChangeAvatar_Button_Visibility_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_ImagenFondo_Brush_0"))
	virtual FSlateBrush  bpf__Get_ImagenFondo_Brush_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
