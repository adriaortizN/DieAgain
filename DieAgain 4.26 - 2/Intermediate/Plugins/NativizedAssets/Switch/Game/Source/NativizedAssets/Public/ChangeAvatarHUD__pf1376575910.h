#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "GamepadInteraction__pf197907997.h"
class UButton;
class UImage;
class UTextBlock;
class UMainMenu_WB_C__pf1565531276;
class USaveGameBP_C__pf4030252459;
class UMyGameInstance_C__pf2410127383;
class ADieAgainGamemode_C__pf1010915279;
class ASceneCapture2D;
#include "ChangeAvatarHUD__pf1376575910.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/ChangeAvatar/ChangeAvatarHUD.ChangeAvatarHUD_C", OverrideNativeName="ChangeAvatarHUD_C"))
class UChangeAvatarHUD_C__pf1376575910 : public UGamepadInteraction_C__pf197907997
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button", Category="ChangeAvatarHUD", OverrideNativeName="Button"))
	UButton* bpv__Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_74", Category="ChangeAvatarHUD", OverrideNativeName="Button_74"))
	UButton* bpv__Button_74__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_519", Category="ChangeAvatarHUD", OverrideNativeName="Button_519"))
	UButton* bpv__Button_519__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_Astro", Category="ChangeAvatarHUD", OverrideNativeName="Button_Astro"))
	UButton* bpv__Button_Astro__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_Cyber", Category="ChangeAvatarHUD", OverrideNativeName="Button_Cyber"))
	UButton* bpv__Button_Cyber__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_Demon", Category="ChangeAvatarHUD", OverrideNativeName="Button_Demon"))
	UButton* bpv__Button_Demon__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_Knight", Category="ChangeAvatarHUD", OverrideNativeName="Button_Knight"))
	UButton* bpv__Button_Knight__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_Original_F", Category="ChangeAvatarHUD", OverrideNativeName="Button_Original_F"))
	UButton* bpv__Button_Original_F__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_Original_M", Category="ChangeAvatarHUD", OverrideNativeName="Button_Original_M"))
	UButton* bpv__Button_Original_M__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_Robot", Category="ChangeAvatarHUD", OverrideNativeName="Button_Robot"))
	UButton* bpv__Button_Robot__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Exit_Button", Category="ChangeAvatarHUD", OverrideNativeName="Exit_Button"))
	UButton* bpv__Exit_Button__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_39", Category="ChangeAvatarHUD", OverrideNativeName="Image_39"))
	UImage* bpv__Image_39__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_Astro", Category="ChangeAvatarHUD", OverrideNativeName="Image_Astro"))
	UImage* bpv__Image_Astro__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_Cyber", Category="ChangeAvatarHUD", OverrideNativeName="Image_Cyber"))
	UImage* bpv__Image_Cyber__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_Demon", Category="ChangeAvatarHUD", OverrideNativeName="Image_Demon"))
	UImage* bpv__Image_Demon__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_Knight", Category="ChangeAvatarHUD", OverrideNativeName="Image_Knight"))
	UImage* bpv__Image_Knight__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_Original_F", Category="ChangeAvatarHUD", OverrideNativeName="Image_Original_F"))
	UImage* bpv__Image_Original_F__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_Original_M", Category="ChangeAvatarHUD", OverrideNativeName="Image_Original_M"))
	UImage* bpv__Image_Original_M__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_Robot", Category="ChangeAvatarHUD", OverrideNativeName="Image_Robot"))
	UImage* bpv__Image_Robot__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Text_Astro", Category="ChangeAvatarHUD", OverrideNativeName="Text_Astro"))
	UTextBlock* bpv__Text_Astro__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Text_Cyber", Category="ChangeAvatarHUD", OverrideNativeName="Text_Cyber"))
	UTextBlock* bpv__Text_Cyber__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Text_Demon", Category="ChangeAvatarHUD", OverrideNativeName="Text_Demon"))
	UTextBlock* bpv__Text_Demon__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Text_Robot", Category="ChangeAvatarHUD", OverrideNativeName="Text_Robot"))
	UTextBlock* bpv__Text_Robot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Shald Alive for Cyber", Category="Default", MultiLine="true", OverrideNativeName="IsShaldAliveForCyber"))
	bool bpv__IsShaldAliveForCyber__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Create_ReturnValue"))
	UMainMenu_WB_C__pf1565531276* b1l__CallFunc_Create_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b1l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b1l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b1l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger_CmpSuccess"))
	bool b1l__K2Node_SwitchInteger_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger_CmpSuccess_1"))
	bool b1l__K2Node_SwitchInteger_CmpSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Game_BP"))
	USaveGameBP_C__pf4030252459* b1l__K2Node_DynamicCast_AsSave_Game_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Game_BP_1"))
	USaveGameBP_C__pf4030252459* b1l__K2Node_DynamicCast_AsSave_Game_BP_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b1l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance"))
	UMyGameInstance_C__pf2410127383* b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b1l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance_1"))
	UMyGameInstance_C__pf2410127383* b1l__K2Node_DynamicCast_AsMy_Game_Instance_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b1l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance_2"))
	UMyGameInstance_C__pf2410127383* b1l__K2Node_DynamicCast_AsMy_Game_Instance_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b1l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b1l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_1"))
	int32 b1l__Temp_int_Loop_Counter_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_1"))
	int32 b1l__Temp_int_Array_Index_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Game_BP_2"))
	USaveGameBP_C__pf4030252459* b1l__K2Node_DynamicCast_AsSave_Game_BP_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b1l__K2Node_DynamicCast_bSuccess_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance_3"))
	UMyGameInstance_C__pf2410127383* b1l__K2Node_DynamicCast_AsMy_Game_Instance_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_6"))
	bool b1l__K2Node_DynamicCast_bSuccess_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Game_BP_3"))
	USaveGameBP_C__pf4030252459* b1l__K2Node_DynamicCast_AsSave_Game_BP_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_7"))
	bool b1l__K2Node_DynamicCast_bSuccess_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance_4"))
	UMyGameInstance_C__pf2410127383* b1l__K2Node_DynamicCast_AsMy_Game_Instance_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_8"))
	bool b1l__K2Node_DynamicCast_bSuccess_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Game_BP_4"))
	USaveGameBP_C__pf4030252459* b1l__K2Node_DynamicCast_AsSave_Game_BP_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_9"))
	bool b1l__K2Node_DynamicCast_bSuccess_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Game_BP_5"))
	USaveGameBP_C__pf4030252459* b1l__K2Node_DynamicCast_AsSave_Game_BP_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_10"))
	bool b1l__K2Node_DynamicCast_bSuccess_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Game_BP_6"))
	USaveGameBP_C__pf4030252459* b1l__K2Node_DynamicCast_AsSave_Game_BP_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_11"))
	bool b1l__K2Node_DynamicCast_bSuccess_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance_5"))
	UMyGameInstance_C__pf2410127383* b1l__K2Node_DynamicCast_AsMy_Game_Instance_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_12"))
	bool b1l__K2Node_DynamicCast_bSuccess_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance_6"))
	UMyGameInstance_C__pf2410127383* b1l__K2Node_DynamicCast_AsMy_Game_Instance_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_13"))
	bool b1l__K2Node_DynamicCast_bSuccess_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Game_BP_7"))
	USaveGameBP_C__pf4030252459* b1l__K2Node_DynamicCast_AsSave_Game_BP_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_14"))
	bool b1l__K2Node_DynamicCast_bSuccess_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Game_BP_8"))
	USaveGameBP_C__pf4030252459* b1l__K2Node_DynamicCast_AsSave_Game_BP_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_15"))
	bool b1l__K2Node_DynamicCast_bSuccess_15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsDie_Again_Gamemode"))
	ADieAgainGamemode_C__pf1010915279* b1l__K2Node_DynamicCast_AsDie_Again_Gamemode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_16"))
	bool b1l__K2Node_DynamicCast_bSuccess_16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance_7"))
	UMyGameInstance_C__pf2410127383* b1l__K2Node_DynamicCast_AsMy_Game_Instance_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_17"))
	bool b1l__K2Node_DynamicCast_bSuccess_17__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Game_BP_9"))
	USaveGameBP_C__pf4030252459* b1l__K2Node_DynamicCast_AsSave_Game_BP_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_18"))
	bool b1l__K2Node_DynamicCast_bSuccess_18__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Game_BP_10"))
	USaveGameBP_C__pf4030252459* b1l__K2Node_DynamicCast_AsSave_Game_BP_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_19"))
	bool b1l__K2Node_DynamicCast_bSuccess_19__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance_8"))
	UMyGameInstance_C__pf2410127383* b1l__K2Node_DynamicCast_AsMy_Game_Instance_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_20"))
	bool b1l__K2Node_DynamicCast_bSuccess_20__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Game_BP_11"))
	USaveGameBP_C__pf4030252459* b1l__K2Node_DynamicCast_AsSave_Game_BP_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_21"))
	bool b1l__K2Node_DynamicCast_bSuccess_21__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<UButton*> b1l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UButton* b1l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ASceneCapture2D*> b1l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UChangeAvatarHUD_C__pf1376575910(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_17(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_18(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_19(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_20(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ChangeAvatarHUD__pf_21(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UnHoverAstro"))
	virtual void bpf__UnHoverAstro__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="HoverAstro"))
	virtual void bpf__HoverAstro__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UnHover Cyber"))
	virtual void bpf__UnHoverxCyber__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="HoverCyber"))
	virtual void bpf__HoverCyber__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UnHoverRobot"))
	virtual void bpf__UnHoverRobot__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="HoverRobot"))
	virtual void bpf__HoverRobot__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UnHoverDemon"))
	virtual void bpf__UnHoverDemon__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="HoverDemon"))
	virtual void bpf__HoverDemon__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateRequisites"))
	virtual void bpf__UpdateRequisites__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ChangeAvatarHUD_Button_Original_F_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ChangeAvatarHUD_Button_Original_F_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ChangeAvatarHUD_Button_Cyber_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ChangeAvatarHUD_Button_Cyber_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ChangeAvatarHUD_Button_Cyber_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ChangeAvatarHUD_Button_Cyber_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ChangeAvatarHUD_Button_Astro_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ChangeAvatarHUD_Button_Astro_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ChangeAvatarHUD_Button_Astro_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ChangeAvatarHUD_Button_Astro_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ChangeAvatarHUD_Button_Robot_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ChangeAvatarHUD_Button_Robot_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ChangeAvatarHUD_Button_Robot_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ChangeAvatarHUD_Button_Robot_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ChangeAvatarHUD_Button_Demon_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ChangeAvatarHUD_Button_Demon_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ChangeAvatarHUD_Button_Demon_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ChangeAvatarHUD_Button_Demon_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_Astro_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_Astro_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_Cyber_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_Cyber_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_Knight_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_Knight_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_86_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_86_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_3_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_3_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_519_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_519_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
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
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetBrush_0"))
	virtual FSlateBrush  bpf__GetBrush_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetVisibility_0"))
	virtual ESlateVisibility  bpf__GetVisibility_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetVisibility_1"))
	virtual ESlateVisibility  bpf__GetVisibility_1__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetBrush_1"))
	virtual FSlateBrush  bpf__GetBrush_1__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetBrush_2"))
	virtual FSlateBrush  bpf__GetBrush_2__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetVisibility_2"))
	virtual ESlateVisibility  bpf__GetVisibility_2__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetVisibility_3"))
	virtual ESlateVisibility  bpf__GetVisibility_3__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetFinalBrush_Demon"))
	virtual FSlateBrush  bpf__GetFinalBrush_Demon__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetFinalBrush_Cyber"))
	virtual FSlateBrush  bpf__GetFinalBrush_Cyber__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_Image_Cyber_Brush_0"))
	virtual FSlateBrush  bpf__Get_Image_Cyber_Brush_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetFinalBrush_Astro"))
	virtual FSlateBrush  bpf__GetFinalBrush_Astro__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
