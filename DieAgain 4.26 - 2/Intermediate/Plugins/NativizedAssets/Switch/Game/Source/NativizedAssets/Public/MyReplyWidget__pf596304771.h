#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "../Plugins/Marketplace/DialoguePlugin/Source/DialoguePlugin/Public/Dialogue.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UImage;
class UTextBlock;
class UMyDialogueWidget_C__pf596304771;
#include "MyReplyWidget__pf596304771.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Conversations/MyReplyWidget.MyReplyWidget_C", OverrideNativeName="MyReplyWidget_C"))
class UMyReplyWidget_C__pf596304771 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ButtonReply", Category="MyReplyWidget", OverrideNativeName="ButtonReply"))
	UButton* bpv__ButtonReply__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SelectedReplyBackground", Category="MyReplyWidget", OverrideNativeName="SelectedReplyBackground"))
	UImage* bpv__SelectedReplyBackground__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextBlock", Category="MyReplyWidget", OverrideNativeName="TextBlock"))
	UTextBlock* bpv__TextBlock__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Owner Widget", Category="Default", ExposeOnSpawn="true", OverrideNativeName="OwnerWidget"))
	UMyDialogueWidget_C__pf596304771* bpv__OwnerWidget__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Reply Node", Category="Default", ExposeOnSpawn="true", OverrideNativeName="ReplyNode"))
	FDialogueNode bpv__ReplyNode__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Selected", Category="Default", OverrideNativeName="isSelected"))
	bool bpv__isSelected__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor"))
	FSlateColor b0l__K2Node_MakeStruct_SlateColor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MouseEvent"))
	FPointerEvent b0l__K2Node_Event_MouseEvent__pf;
	UMyReplyWidget_C__pf596304771(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_MyReplyWidget__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyReplyWidget__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyReplyWidget__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyReplyWidget__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="Mouse", Comment="/**\t * The system will use this event to notify a widget that the cursor has entered it. This event is NOT bubbled.\t *\t * @param MyGeometry The Geometry of the widget receiving the event\t * @param MouseEvent Information about the input event\t */", ToolTip="The system will use this event to notify a widget that the cursor has entered it. This event is NOT bubbled.@param MyGeometry The Geometry of the widget receiving the event@param MouseEvent Information about the input event", CppFromBpEvent, OverrideNativeName="OnMouseEnter"))
	virtual void bpf__OnMouseEnter__pf(FGeometry bpp__MyGeometry__pf, FPointerEvent const& bpp__MouseEvent__pf__const);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SimulateHover"))
	virtual void bpf__SimulateHover__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SimulateClick"))
	virtual void bpf__SimulateClick__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_52_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_52_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetTextColorAndOpacity"))
	virtual FSlateColor  bpf__GetTextColorAndOpacity__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_SelectedReplyBackground_Visibility_0"))
	virtual ESlateVisibility  bpf__Get_SelectedReplyBackground_Visibility_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
