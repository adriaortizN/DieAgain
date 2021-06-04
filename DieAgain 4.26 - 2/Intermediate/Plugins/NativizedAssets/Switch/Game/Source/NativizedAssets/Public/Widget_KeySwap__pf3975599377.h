#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Enum_Keys__pf3975599377.h"
#include "Enum_Gamepad__pf3975599377.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
#include "Widget_KeySwap__pf3975599377.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Widgets/Widget_KeySwap.Widget_KeySwap_C", OverrideNativeName="Widget_KeySwap_C"))
class UWidget_KeySwap_C__pf3975599377 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_94", Category="Widget_KeySwap", OverrideNativeName="Image_94"))
	UImage* bpv__Image_94__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Key to Show", Category="Default", MultiLine="true", OverrideNativeName="KeyToShow"))
	E__Enum_Keys__pf bpv__KeyToShow__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Input to Show", Category="Default", MultiLine="true", OverrideNativeName="InputToShow"))
	E__Enum_Gamepad__pf bpv__InputToShow__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Keys", Category="Default", MultiLine="true", OverrideNativeName="Keys"))
	TArray<FSlateBrush> bpv__Keys__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Inputs", Category="Default", MultiLine="true", OverrideNativeName="Inputs"))
	TArray<FSlateBrush> bpv__Inputs__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_IsDesignTime"))
	bool b0l__K2Node_Event_IsDesignTime__pf;
	UWidget_KeySwap_C__pf3975599377(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Widget_KeySwap__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Widget_KeySwap__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Widget_KeySwap__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called by both the game and the editor.  Allows users to run initial setup for their widgets to better preview\t * the setup in the designer and since generally that same setup code is required at runtime, it\'s called there\t * as well.\t *\t * **WARNING**\t * This is intended purely for cosmetic updates using locally owned data, you can not safely access any game related\t * state, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.\t *\t * In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn off\t * PreConstruct evaluation in the Widget Designer settings in the Editor Preferences.\t */", ToolTip="Called by both the game and the editor.  Allows users to run initial setup for their widgets to better previewthe setup in the designer and since generally that same setup code is required at runtime, it\'s called thereas well.**WARNING**This is intended purely for cosmetic updates using locally owned data, you can not safely access any game relatedstate, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn offPreConstruct evaluation in the Widget Designer settings in the Editor Preferences.", CppFromBpEvent, OverrideNativeName="PreConstruct"))
	virtual void bpf__PreConstruct__pf(bool bpp__IsDesignTime__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetBrush_0"))
	virtual FSlateBrush  bpf__GetBrush_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
