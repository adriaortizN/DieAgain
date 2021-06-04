#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "GamepadInteraction__pf197907997.h"
class UButton;
class UMyGameInstance_C__pf2410127383;
class APlayerWalkMap_Character_C__pf2222656877;
class ADieAgainGamemode_C__pf1010915279;
#include "PauseHUD__pf197907997.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/PauseHUD.PauseHUD_C", OverrideNativeName="PauseHUD_C"))
class UPauseHUD_C__pf197907997 : public UGamepadInteraction_C__pf197907997
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_GodMode", Category="PauseHUD", OverrideNativeName="Button_GodMode"))
	UButton* bpv__Button_GodMode__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_Options", Category="PauseHUD", OverrideNativeName="Button_Options"))
	UButton* bpv__Button_Options__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_Restart", Category="PauseHUD", OverrideNativeName="Button_Restart"))
	UButton* bpv__Button_Restart__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_Resume", Category="PauseHUD", OverrideNativeName="Button_Resume"))
	UButton* bpv__Button_Resume__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_ReturnToWorld", Category="PauseHUD", OverrideNativeName="Button_ReturnToWorld"))
	UButton* bpv__Button_ReturnToWorld__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_Twitter", Category="PauseHUD", OverrideNativeName="Button_Twitter"))
	UButton* bpv__Button_Twitter__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b1l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b1l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b1l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance"))
	UMyGameInstance_C__pf2410127383* b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<APlayerWalkMap_Character_C__pf2222656877*> b1l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<UButton*> b1l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b1l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDie_Again_Gamemode"))
	ADieAgainGamemode_C__pf1010915279* b1l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b1l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	APlayerWalkMap_Character_C__pf2222656877* b1l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_Walk_Map_Character"))
	APlayerWalkMap_Character_C__pf2222656877* b1l__K2Node_DynamicCast_AsPlayer_Walk_Map_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b1l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDie_Again_Gamemode_1"))
	ADieAgainGamemode_C__pf1010915279* b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b1l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance_1"))
	UMyGameInstance_C__pf2410127383* b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b1l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDie_Again_Gamemode_2"))
	ADieAgainGamemode_C__pf1010915279* b1l__K2Node_DynamicCast_AsDie_Again_Gamemode_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b1l__K2Node_DynamicCast_bSuccess_5__pf;
	UPauseHUD_C__pf197907997(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_PauseHUD__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PauseHUD__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PauseHUD__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PauseHUD__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PauseHUD__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PauseHUD__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PauseHUD__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PauseHUD__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_PauseHUD__pf_8(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_GodMode_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_GodMode_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Close Menu"))
	virtual void bpf__ClosexMenu__pfT();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_323_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_323_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf();
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
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
