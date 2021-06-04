#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "GamepadInteraction__pf197907997.h"
class UWidgetAnimation;
class UButton;
class UMyGameInstance_C__pf2410127383;
#include "Pause_WorldMap_HUD__pf197907997.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/Pause_WorldMap_HUD.Pause_WorldMap_HUD_C", OverrideNativeName="Pause_WorldMap_HUD_C"))
class UPause_WorldMap_HUD_C__pf197907997 : public UGamepadInteraction_C__pf197907997
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="ChangeAvatarAnim", Category="Animations", OverrideNativeName="ChangeAvatarAnim"))
	UWidgetAnimation* bpv__ChangeAvatarAnim__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_56", Category="Pause_WorldMap_HUD", OverrideNativeName="Button_56"))
	UButton* bpv__Button_56__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_519", Category="Pause_WorldMap_HUD", OverrideNativeName="Button_519"))
	UButton* bpv__Button_519__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b1l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b1l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance"))
	UMyGameInstance_C__pf2410127383* b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<UButton*> b1l__K2Node_MakeArray_Array__pf;
	UPause_WorldMap_HUD_C__pf197907997(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Pause_WorldMap_HUD__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Pause_WorldMap_HUD__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Pause_WorldMap_HUD__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Pause_WorldMap_HUD__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Pause_WorldMap_HUD__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Pause_WorldMap_HUD__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Pause_WorldMap_HUD__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Pause_WorldMap_HUD__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Pause_WorldMap_HUD__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Pause_WorldMap_HUD__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Pause_WorldMap_HUD__pf_10(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Create Menu"))
	virtual void bpf__CreatexMenu__pfT();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_67_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_67_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_397_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_397_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_262_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_262_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_519_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_519_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
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
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetVisibility_0"))
	virtual ESlateVisibility  bpf__GetVisibility_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
