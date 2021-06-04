#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UWidgetAnimation;
class UScaleBox;
class UImage;
class UWidget_Information_C__pf3975599377;
class APlayerWalkMap_Character_C__pf2222656877;
#include "WalkMap_HUDre__pf197907997.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/WalkMap_HUDre.WalkMap_HUDre_C", OverrideNativeName="WalkMap_HUDre_C"))
class UWalkMap_HUDre_C__pf197907997 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="LStick", Category="Animations", OverrideNativeName="LStick"))
	UWidgetAnimation* bpv__LStick__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="WalkKeys", Category="Animations", OverrideNativeName="WalkKeys"))
	UWidgetAnimation* bpv__WalkKeys__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="HideADText", Category="Animations", OverrideNativeName="HideADText"))
	UWidgetAnimation* bpv__HideADText__pf;
	UPROPERTY(Export, meta=(DisplayName="ABox", OverrideNativeName="ABox"))
	UScaleBox* bpv__ABox__pf;
	UPROPERTY(Export, meta=(DisplayName="DBox", OverrideNativeName="DBox"))
	UScaleBox* bpv__DBox__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_72", Category="WalkMap_HUDre", OverrideNativeName="Image_72"))
	UImage* bpv__Image_72__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_145", Category="WalkMap_HUDre", OverrideNativeName="Image_145"))
	UImage* bpv__Image_145__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_302", Category="WalkMap_HUDre", OverrideNativeName="Image_302"))
	UImage* bpv__Image_302__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Stick", Category="WalkMap_HUDre", OverrideNativeName="Stick"))
	UImage* bpv__Stick__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Widget_Information_1", Category="WalkMap_HUDre", OverrideNativeName="Widget_Information_1"))
	UWidget_Information_C__pf3975599377* bpv__Widget_Information_1__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Has Moved", Category="Default", MultiLine="true", OverrideNativeName="PlayerHasMoved"))
	bool bpv__PlayerHasMoved__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Has Talked", Category="Default", MultiLine="true", OverrideNativeName="HasTalked"))
	bool bpv__HasTalked__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable_1"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_Walk_Map_Character"))
	APlayerWalkMap_Character_C__pf2222656877* b0l__K2Node_DynamicCast_AsPlayer_Walk_Map_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable_1"))
	bool b0l__Temp_bool_IsClosed_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_Walk_Map_Character_1"))
	APlayerWalkMap_Character_C__pf2222656877* b0l__K2Node_DynamicCast_AsPlayer_Walk_Map_Character_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UWalkMap_HUDre_C__pf197907997(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_WalkMap_HUDre__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_WalkMap_HUDre__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_0"))
	virtual void bpf__GetText_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_1"))
	virtual void bpf__GetText_1__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_DBox_Visibility_0"))
	virtual ESlateVisibility  bpf__Get_DBox_Visibility_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_Stick_Visibility_0"))
	virtual ESlateVisibility  bpf__Get_Stick_Visibility_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
