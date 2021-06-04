#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "../Plugins/Marketplace/DialoguePlugin/Source/DialoguePlugin/Public/Dialogue.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "GamepadInteraction__pf197907997.h"
class UWidgetAnimation;
class UImage;
class UHorizontalBox;
class UButton;
class UOverlay;
class UTextBlock;
class UVerticalBox;
class UWidget_Information_C__pf3975599377;
class UDialogue;
class UAudioComponent;
class AActor;
class UMyGameInstance_C__pf2410127383;
class UMyReplyWidget_C__pf596304771;
class USoundBase;
class ABaseCharacter_C__pf1010915279;
#include "MyDialogueWidget__pf596304771.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Conversations/MyDialogueWidget.MyDialogueWidget_C", OverrideNativeName="MyDialogueWidget_C"))
class UMyDialogueWidget_C__pf596304771 : public UGamepadInteraction_C__pf197907997
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="Arrow5Anim", Category="Animations", OverrideNativeName="Arrow5Anim"))
	UWidgetAnimation* bpv__Arrow5Anim__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="Arrow4Anim", Category="Animations", OverrideNativeName="Arrow4Anim"))
	UWidgetAnimation* bpv__Arrow4Anim__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="Arrow3Anim", Category="Animations", OverrideNativeName="Arrow3Anim"))
	UWidgetAnimation* bpv__Arrow3Anim__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="Arrow2Anim", Category="Animations", OverrideNativeName="Arrow2Anim"))
	UWidgetAnimation* bpv__Arrow2Anim__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="Arrow1Anim", Category="Animations", OverrideNativeName="Arrow1Anim"))
	UWidgetAnimation* bpv__Arrow1Anim__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ContinueSelectedBackground", Category="MyDialogueWidget", OverrideNativeName="ContinueSelectedBackground"))
	UImage* bpv__ContinueSelectedBackground__pf;
	UPROPERTY(Export, meta=(DisplayName="HorizontalBox_120", OverrideNativeName="HorizontalBox_120"))
	UHorizontalBox* bpv__HorizontalBox_120__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_403", Category="MyDialogueWidget", OverrideNativeName="Image_403"))
	UImage* bpv__Image_403__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_404", Category="MyDialogueWidget", OverrideNativeName="Image_404"))
	UImage* bpv__Image_404__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_405", Category="MyDialogueWidget", OverrideNativeName="Image_405"))
	UImage* bpv__Image_405__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_406", Category="MyDialogueWidget", OverrideNativeName="Image_406"))
	UImage* bpv__Image_406__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_407", Category="MyDialogueWidget", OverrideNativeName="Image_407"))
	UImage* bpv__Image_407__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_870", Category="MyDialogueWidget", OverrideNativeName="Image_870"))
	UImage* bpv__Image_870__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="NextButton", Category="MyDialogueWidget", OverrideNativeName="NextButton"))
	UButton* bpv__NextButton__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="NextButtonContainer", Category="MyDialogueWidget", OverrideNativeName="NextButtonContainer"))
	UOverlay* bpv__NextButtonContainer__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="NextText", Category="MyDialogueWidget", OverrideNativeName="NextText"))
	UTextBlock* bpv__NextText__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="NPCText", Category="MyDialogueWidget", OverrideNativeName="NPCText"))
	UTextBlock* bpv__NPCText__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="PlayerVBox", Category="MyDialogueWidget", OverrideNativeName="PlayerVBox"))
	UVerticalBox* bpv__PlayerVBox__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Skip", Category="MyDialogueWidget", OverrideNativeName="Skip"))
	UWidget_Information_C__pf3975599377* bpv__Skip__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SpeakerName", Category="MyDialogueWidget", OverrideNativeName="SpeakerName"))
	UTextBlock* bpv__SpeakerName__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="In Dialogue", Category="Default", ExposeOnSpawn="true", OverrideNativeName="InDialogue"))
	UDialogue* bpv__InDialogue__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Node", Category="Default", OverrideNativeName="CurrentNode"))
	FDialogueNode bpv__CurrentNode__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Reply Timer", Category="Default", OverrideNativeName="PlayerReplyTimer"))
	FTimerHandle bpv__PlayerReplyTimer__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Player Node", Category="Default", OverrideNativeName="CurrentPlayerNode"))
	FDialogueNode bpv__CurrentPlayerNode__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Currently Selected Reply", Category="Default", OverrideNativeName="currentlySelectedReply"))
	int32 bpv__currentlySelectedReply__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Sound 2D", Category="Default", OverrideNativeName="Sound2D"))
	UAudioComponent* bpv__Sound2D__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Keyboard Key", Category="Default", MultiLine="true", OverrideNativeName="KeyboardKey"))
	FKey bpv__KeyboardKey__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="String Array", Category="Default", MultiLine="true", OverrideNativeName="StringArray"))
	TArray<FString> bpv__StringArray__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Print String", Category="Default", MultiLine="true", OverrideNativeName="PrintString"))
	FString bpv__PrintString__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Counter", Category="Default", MultiLine="true", OverrideNativeName="Counter"))
	int32 bpv__Counter__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Owner Actor", Category="Default", MultiLine="true", OverrideNativeName="OwnerActor"))
	AActor* bpv__OwnerActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance"))
	UMyGameInstance_C__pf2410127383* b1l__K2Node_DynamicCast_AsMy_Game_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NpcNode"))
	FDialogueNode b1l__K2Node_CustomEvent_NpcNode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetNextNodes_ReturnValue"))
	TArray<FDialogueNode> b1l__CallFunc_GetNextNodes_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	FDialogueNode b1l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	FDialogueNode b1l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b1l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Replies"))
	TArray<FDialogueNode> b1l__K2Node_CustomEvent_Replies__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetNextNodes_ReturnValue_1"))
	TArray<FDialogueNode> b1l__CallFunc_GetNextNodes_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Index"))
	int32 b1l__K2Node_CustomEvent_Index__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Click"))
	bool b1l__K2Node_CustomEvent_Click__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Reply_Widget"))
	UMyReplyWidget_C__pf596304771* b1l__K2Node_DynamicCast_AsMy_Reply_Widget__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b1l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateColor_1"))
	FSlateColor b1l__K2Node_MakeStruct_SlateColor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_PlayerNode"))
	FDialogueNode b1l__K2Node_CustomEvent_PlayerNode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b1l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b1l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Reply_Widget_1"))
	UMyReplyWidget_C__pf596304771* b1l__K2Node_DynamicCast_AsMy_Reply_Widget_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b1l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WidgetThatWantsSelection"))
	UMyReplyWidget_C__pf596304771* b1l__K2Node_CustomEvent_WidgetThatWantsSelection__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Reply_Widget_2"))
	UMyReplyWidget_C__pf596304771* b1l__K2Node_DynamicCast_AsMy_Reply_Widget_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b1l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_1"))
	int32 b1l__Temp_int_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Reply_Widget_3"))
	UMyReplyWidget_C__pf596304771* b1l__K2Node_DynamicCast_AsMy_Reply_Widget_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b1l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b1l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Sound"))
	USoundBase* b1l__K2Node_CustomEvent_Sound__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	FDialogueNode b1l__CallFunc_Array_Get_Item_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CheckConditions_Ok"))
	bool b1l__CallFunc_CheckConditions_Ok__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	FTimerDynamicDelegate b1l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b1l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b1l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Text"))
	FString b1l__K2Node_CustomEvent_Text__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCharacterArrayFromString_ReturnValue"))
	TArray<FString> b1l__CallFunc_GetCharacterArrayFromString_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_3"))
	FString b1l__CallFunc_Array_Get_Item_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBase_Character"))
	ABaseCharacter_C__pf1010915279* b1l__K2Node_DynamicCast_AsBase_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b1l__K2Node_DynamicCast_bSuccess_5__pf;
	UMyDialogueWidget_C__pf596304771(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_MyDialogueWidget__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyDialogueWidget__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyDialogueWidget__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_MyDialogueWidget_3"))
	void bpf__ExecuteUbergraph_MyDialogueWidget__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyDialogueWidget__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyDialogueWidget__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyDialogueWidget__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyDialogueWidget__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyDialogueWidget__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyDialogueWidget__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyDialogueWidget__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyDialogueWidget__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyDialogueWidget__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyDialogueWidget__pf_13(int32 bpp__EntryPoint__pf);
	virtual void bpf__InitFocus__pf() override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="TypeWriteText"))
	virtual void bpf__TypeWriteText__pf(const FString& bpp__Text__pf__const);
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf) override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="StopDialogueSound"))
	virtual void bpf__StopDialogueSound__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PlayDialogueSound"))
	virtual void bpf__PlayDialogueSound__pf(USoundBase* bpp__Sound__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MouseSelectReply"))
	virtual void bpf__MouseSelectReply__pf(UMyReplyWidget_C__pf596304771* bpp__WidgetThatWantsSelection__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="HighlightSelectedReply"))
	virtual void bpf__HighlightSelectedReply__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GoToNpcReplyTimer"))
	virtual void bpf__GoToNpcReplyTimer__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PlayPlayerReply"))
	virtual void bpf__PlayPlayerReply__pf(FDialogueNode bpp__PlayerNode__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called when a widget is no longer referenced causing the slate resource to destroyed.  Just like\t * Construct this event can be called multiple times.\t */", Keywords="End Play, Destroy", ToolTip="Called when a widget is no longer referenced causing the slate resource to destroyed.  Just likeConstruct this event can be called multiple times.", CppFromBpEvent, OverrideNativeName="Destruct"))
	virtual void bpf__Destruct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SimulateNextHovered"))
	virtual void bpf__SimulateNextHovered__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SimulateNextClicked"))
	virtual void bpf__SimulateNextClicked__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GamepadReply"))
	virtual void bpf__GamepadReply__pf(int32 bpp__Index__pf, bool bpp__Click__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DisplayReplies"))
	virtual void bpf__DisplayReplies__pf(TArray<FDialogueNode> const& bpp__Replies__pf__const);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__NextButton_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__NextButton_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DisplayNpcNode"))
	virtual void bpf__DisplayNpcNode__pf(FDialogueNode bpp__NpcNode__pf);
	virtual void bpf__Construct__pf() override;
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetContinueColorAndOpacity"))
	virtual FSlateColor  bpf__GetContinueColorAndOpacity__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="CheckConditions"))
	virtual void bpf__CheckConditions__pf(FDialogueNode bpp__Node__pf, /*out*/ bool& bpp__Ok__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DoEvents"))
	virtual void bpf__DoEvents__pf(FDialogueNode bpp__Node__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ToNpcReply"))
	virtual void bpf__ToNpcReply__pf(FDialogueNode bpp__PlayerReply__pf, bool bpp__FireEvents__pf);
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(Category="Input", Comment="/**\t * Called after a key (keyboard, controller, ...) is pressed when this widget has focus (this event bubbles if not handled)\t *\t * @param MyGeometry The Geometry of the widget receiving the event\t * @param  InKeyEvent  Key event\t * @return  Returns whether the event was handled, along with other possible actions\t */", ToolTip="Called after a key (keyboard, controller, ...) is pressed when this widget has focus (this event bubbles if not handled)@param MyGeometry The Geometry of the widget receiving the event@param  InKeyEvent  Key event@return  Returns whether the event was handled, along with other possible actions", CppFromBpEvent, OverrideNativeName="OnKeyDown"))
	virtual FEventReply  bpf__OnKeyDown__pf(FGeometry bpp__MyGeometry__pf, FKeyEvent bpp__InKeyEvent__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Dialogue UI", Comment="//VarStrings", ToolTip="VarStrings", CppFromBpEvent, OverrideNativeName="ReplaceVarStrings"))
	virtual FText  bpf__ReplaceVarStrings__pf(FText const& bpp__InText__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="EndDialogue"))
	virtual void bpf__EndDialogue__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Input", OverrideNativeName="OnKeyboardDown"))
	virtual FEventReply  bpf__OnKeyboardDown__pf(FKeyEvent bpp__InKeyEvent__pf, FKey bpp__NewParam__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetVisibility_0"))
	virtual ESlateVisibility  bpf__GetVisibility_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
