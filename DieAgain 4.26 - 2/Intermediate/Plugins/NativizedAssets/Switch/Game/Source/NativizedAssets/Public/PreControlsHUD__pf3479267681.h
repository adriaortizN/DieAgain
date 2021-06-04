#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "GamepadInteraction__pf197907997.h"
class UButton;
class ADieAgainGamemode_C__pf1010915279;
#include "PreControlsHUD__pf3479267681.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/ControlsWB/PreControlsHUD.PreControlsHUD_C", OverrideNativeName="PreControlsHUD_C"))
class UPreControlsHUD_C__pf3479267681 : public UGamepadInteraction_C__pf197907997
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Area_Button", Category="PreControlsHUD", OverrideNativeName="Area_Button"))
	UButton* bpv__Area_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Controls_Button", Category="PreControlsHUD", OverrideNativeName="Controls_Button"))
	UButton* bpv__Controls_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Exit_Button", Category="PreControlsHUD", OverrideNativeName="Exit_Button"))
	UButton* bpv__Exit_Button__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Text Area Visible", Category="Default", MultiLine="true", OverrideNativeName="TextAreaVisible"))
	FText bpv__TextAreaVisible__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDie_Again_Gamemode_1"))
	ADieAgainGamemode_C__pf1010915279* b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b1l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDie_Again_Gamemode_2"))
	ADieAgainGamemode_C__pf1010915279* b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b1l__K2Node_DynamicCast_bSuccess_2__pf;
	UPreControlsHUD_C__pf3479267681(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_PreControlsHUD__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PreControlsHUD__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PreControlsHUD__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PreControlsHUD__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PreControlsHUD__pf_4(int32 bpp__EntryPoint__pf);
	virtual void bpf__Construct__pf() override;
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf) override;
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_44_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_44_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Exit_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Exit_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Area_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Area_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_AreaVisible"))
	virtual FText  bpf__GetText_AreaVisible__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetVisibilityPlayerArea"))
	virtual void bpf__SetVisibilityPlayerArea__pf(bool bpp__Visibility__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_0"))
	virtual void bpf__GetText_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_1"))
	virtual void bpf__GetText_1__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_2"))
	virtual void bpf__GetText_2__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_3"))
	virtual void bpf__GetText_3__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnMouseButtonDown_0"))
	virtual FEventReply  bpf__OnMouseButtonDown_0__pf(FGeometry bpp__MyGeometry__pf, FPointerEvent const& bpp__MouseEvent__pf__const);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_4"))
	virtual FText  bpf__GetText_4__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
