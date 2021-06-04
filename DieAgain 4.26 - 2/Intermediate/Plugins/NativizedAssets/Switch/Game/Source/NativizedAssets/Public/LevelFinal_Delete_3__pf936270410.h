#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "GamepadInteraction__pf197907997.h"
class UWidgetAnimation;
class UButton;
class USaveGameBP_C__pf4030252459;
#include "LevelFinal_Delete_3__pf936270410.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/LevelFinal/LevelFinal_Delete_3.LevelFinal_Delete_3_C", OverrideNativeName="LevelFinal_Delete_3_C"))
class ULevelFinal_Delete_3_C__pf936270410 : public UGamepadInteraction_C__pf197907997
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="FadeInButton3", Category="Animations", OverrideNativeName="FadeInButton3"))
	UWidgetAnimation* bpv__FadeInButton3__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="FadeInButton2", Category="Animations", OverrideNativeName="FadeInButton2"))
	UWidgetAnimation* bpv__FadeInButton2__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="FadeInButton", Category="Animations", OverrideNativeName="FadeInButton"))
	UWidgetAnimation* bpv__FadeInButton__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="FadeInText", Category="Animations", OverrideNativeName="FadeInText"))
	UWidgetAnimation* bpv__FadeInText__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_Answers", Category="LevelFinal_Delete_3", OverrideNativeName="Button_Answers"))
	UButton* bpv__Button_Answers__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_BlueBlood", Category="LevelFinal_Delete_3", OverrideNativeName="Button_BlueBlood"))
	UButton* bpv__Button_BlueBlood__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_RedBlood", Category="LevelFinal_Delete_3", OverrideNativeName="Button_RedBlood"))
	UButton* bpv__Button_RedBlood__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Text Description", Category="Default", MultiLine="true", OverrideNativeName="TextDescription"))
	FText bpv__TextDescription__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Text Button", Category="Default", MultiLine="true", OverrideNativeName="TextButton"))
	FText bpv__TextButton__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Text Button 2", Category="Default", MultiLine="true", OverrideNativeName="TextButton2"))
	FText bpv__TextButton2__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Text Button 3", Category="Default", MultiLine="true", OverrideNativeName="TextButton3"))
	FText bpv__TextButton3__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Times Count", Category="Default", MultiLine="true", OverrideNativeName="TimesCount"))
	int32 bpv__TimesCount__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b1l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b1l__K2Node_Event_InDeltaTime__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<UButton*> b1l__K2Node_MakeArray_Array__pf;
	ULevelFinal_Delete_3_C__pf936270410(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_LevelFinal_Delete_3__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LevelFinal_Delete_3__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LevelFinal_Delete_3__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LevelFinal_Delete_3__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LevelFinal_Delete_3__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	virtual void bpf__Construct__pf() override;
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf) override;
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_99_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_99_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_0"))
	virtual void bpf__GetText_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_1"))
	virtual FText  bpf__GetText_1__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_2"))
	virtual void bpf__GetText_2__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_3"))
	virtual FText  bpf__GetText_3__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_4"))
	virtual void bpf__GetText_4__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
