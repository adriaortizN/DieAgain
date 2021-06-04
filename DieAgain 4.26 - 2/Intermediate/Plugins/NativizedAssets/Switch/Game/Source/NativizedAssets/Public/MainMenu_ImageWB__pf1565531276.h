#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "GamepadInteraction__pf197907997.h"
class UWidgetAnimation;
class UImage;
#include "MainMenu_ImageWB__pf1565531276.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/MainMenu/MainMenu_ImageWB.MainMenu_ImageWB_C", OverrideNativeName="MainMenu_ImageWB_C"))
class UMainMenu_ImageWB_C__pf1565531276 : public UGamepadInteraction_C__pf197907997
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="ChangeAvatarAnim", Category="Animations", OverrideNativeName="ChangeAvatarAnim"))
	UWidgetAnimation* bpv__ChangeAvatarAnim__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ImagenFondo", Category="MainMenu_ImageWB", OverrideNativeName="ImagenFondo"))
	UImage* bpv__ImagenFondo__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Default Button", Category="Default", MultiLine="true", OverrideNativeName="defaultButton"))
	FButtonStyle bpv__defaultButton__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hover Button", Category="Default", MultiLine="true", OverrideNativeName="hoverButton"))
	FButtonStyle bpv__hoverButton__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b1l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b1l__K2Node_Event_InDeltaTime__pf;
	UMainMenu_ImageWB_C__pf1565531276(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_MainMenu_ImageWB__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MainMenu_ImageWB__pf_1(int32 bpp__EntryPoint__pf);
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf) override;
	virtual void bpf__Construct__pf() override;
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_ChangeAvatar_Button_Visibility_0"))
	virtual ESlateVisibility  bpf__Get_ChangeAvatar_Button_Visibility_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_ImagenFondo_Brush_0"))
	virtual FSlateBrush  bpf__Get_ImagenFondo_Brush_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
