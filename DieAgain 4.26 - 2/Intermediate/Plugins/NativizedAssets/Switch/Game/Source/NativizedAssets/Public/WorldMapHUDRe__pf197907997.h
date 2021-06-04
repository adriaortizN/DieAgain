#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "EnumLevelsNames__pf3349424045.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UWidgetAnimation;
class UWidget_Information_C__pf3975599377;
class UImage;
class UTextBlock;
class USizeBox;
class UWidget_KeySwap_C__pf3975599377;
class UMyGameInstance_C__pf2410127383;
#include "WorldMapHUDRe__pf197907997.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/WorldMapHUDRe.WorldMapHUDRe_C", OverrideNativeName="WorldMapHUDRe_C"))
class UWorldMapHUDRe_C__pf197907997 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="ARightAnim", Category="Animations", OverrideNativeName="ARightAnim"))
	UWidgetAnimation* bpv__ARightAnim__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="ALeftAnim", Category="Animations", OverrideNativeName="ALeftAnim"))
	UWidgetAnimation* bpv__ALeftAnim__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="NorthernFrontAnim", Category="Animations", OverrideNativeName="NorthernFrontAnim"))
	UWidgetAnimation* bpv__NorthernFrontAnim__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="SaveGameAnim", Category="Animations", OverrideNativeName="SaveGameAnim"))
	UWidgetAnimation* bpv__SaveGameAnim__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Go north", Category="WorldMapHUDRe", OverrideNativeName="Gonorth"))
	UWidget_Information_C__pf3975599377* bpv__Gonorth__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_170", Category="WorldMapHUDRe", OverrideNativeName="Image_170"))
	UImage* bpv__Image_170__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_636", Category="WorldMapHUDRe", OverrideNativeName="Image_636"))
	UImage* bpv__Image_636__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_LevelFondo", Category="WorldMapHUDRe", OverrideNativeName="Image_LevelFondo"))
	UImage* bpv__Image_LevelFondo__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_NumberLevel", Category="WorldMapHUDRe", OverrideNativeName="Image_NumberLevel"))
	UImage* bpv__Image_NumberLevel__pf;
	UPROPERTY(Export, meta=(DisplayName="PuntuationLevel", OverrideNativeName="PuntuationLevel"))
	UTextBlock* bpv__PuntuationLevel__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Return", Category="WorldMapHUDRe", OverrideNativeName="Return"))
	UWidget_Information_C__pf3975599377* bpv__Return__pf;
	UPROPERTY(Export, meta=(DisplayName="SizeBox_201", OverrideNativeName="SizeBox_201"))
	USizeBox* bpv__SizeBox_201__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_96", OverrideNativeName="TextBlock_96"))
	UTextBlock* bpv__TextBlock_96__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_204", OverrideNativeName="TextBlock_204"))
	UTextBlock* bpv__TextBlock_204__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Widget_Information_1", Category="WorldMapHUDRe", OverrideNativeName="Widget_Information_1"))
	UWidget_Information_C__pf3975599377* bpv__Widget_Information_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Widget_KeySwap", Category="WorldMapHUDRe", OverrideNativeName="Widget_KeySwap"))
	UWidget_KeySwap_C__pf3975599377* bpv__Widget_KeySwap__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Widget_KeySwap_277", Category="WorldMapHUDRe", OverrideNativeName="Widget_KeySwap_277"))
	UWidget_KeySwap_C__pf3975599377* bpv__Widget_KeySwap_277__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Name Of the Level", Category="Default", MultiLine="true", OverrideNativeName="NameOfTheLevel"))
	E__EnumLevelsNames__pf bpv__NameOfTheLevel__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="String Name", Category="Default", MultiLine="true", OverrideNativeName="StringName"))
	FText bpv__StringName__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Score Level", Category="Default", MultiLine="true", OverrideNativeName="ScoreLevel"))
	FString bpv__ScoreLevel__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Levels Score", Category="Default", MultiLine="true", OverrideNativeName="LevelsScore"))
	TArray<int32> bpv__LevelsScore__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_IsDesignTime"))
	bool b0l__K2Node_Event_IsDesignTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance"))
	UMyGameInstance_C__pf2410127383* b0l__K2Node_DynamicCast_AsMy_Game_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UWorldMapHUDRe_C__pf197907997(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_WorldMapHUDRe__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_WorldMapHUDRe__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called by both the game and the editor.  Allows users to run initial setup for their widgets to better preview\t * the setup in the designer and since generally that same setup code is required at runtime, it\'s called there\t * as well.\t *\t * **WARNING**\t * This is intended purely for cosmetic updates using locally owned data, you can not safely access any game related\t * state, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.\t *\t * In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn off\t * PreConstruct evaluation in the Widget Designer settings in the Editor Preferences.\t */", ToolTip="Called by both the game and the editor.  Allows users to run initial setup for their widgets to better previewthe setup in the designer and since generally that same setup code is required at runtime, it\'s called thereas well.**WARNING**This is intended purely for cosmetic updates using locally owned data, you can not safely access any game relatedstate, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn offPreConstruct evaluation in the Widget Designer settings in the Editor Preferences.", CppFromBpEvent, OverrideNativeName="PreConstruct"))
	virtual void bpf__PreConstruct__pf(bool bpp__IsDesignTime__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetLevelName"))
	virtual FText  bpf__GetLevelName__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_PuntuationLevel_Text_1"))
	virtual FText  bpf__Get_PuntuationLevel_Text_1__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LoadScoreLevel"))
	virtual void bpf__LoadScoreLevel__pf(int32 bpp__LevelNumber__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_0"))
	virtual void bpf__GetText_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_1"))
	virtual void bpf__GetText_1__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_2"))
	virtual void bpf__GetText_2__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetVisibility_0"))
	virtual ESlateVisibility  bpf__GetVisibility_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetVisibility_1"))
	virtual ESlateVisibility  bpf__GetVisibility_1__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetVisibility_NF_Text"))
	virtual ESlateVisibility  bpf__GetVisibility_NF_Text__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_3"))
	virtual FText  bpf__GetText_3__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetVisibility_2"))
	virtual ESlateVisibility  bpf__GetVisibility_2__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_4"))
	virtual FText  bpf__GetText_4__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetVisibility_3"))
	virtual ESlateVisibility  bpf__GetVisibility_3__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetVisibility_4"))
	virtual ESlateVisibility  bpf__GetVisibility_4__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetVisibility_5"))
	virtual ESlateVisibility  bpf__GetVisibility_5__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetVisibility_6"))
	virtual ESlateVisibility  bpf__GetVisibility_6__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
