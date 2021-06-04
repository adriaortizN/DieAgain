#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UWidgetAnimation;
class UTextBlock;
class UBackgroundBlur;
class UImage;
class UProgressBar;
class UScaleBox;
class UWidget_Information_C__pf3975599377;
class ALevelCompleterBP_C__pf922009354;
class UMyGameInstance_C__pf2410127383;
class AThirdPersonCharacter_C__pf2222656877;
class AEnemyShootingCh_C__pf3349424045;
#include "HUDre__pf2299784250.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/GameOverHUD/HUDre.HUDre_C", OverrideNativeName="HUDre_C"))
class UHUDre_C__pf2299784250 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="GodModeAnim", Category="Animations", OverrideNativeName="GodModeAnim"))
	UWidgetAnimation* bpv__GodModeAnim__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="FadeIn", Category="Animations", OverrideNativeName="FadeIn"))
	UWidgetAnimation* bpv__FadeIn__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="FadeOut", Category="Animations", OverrideNativeName="FadeOut"))
	UWidgetAnimation* bpv__FadeOut__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="MorePointsAnim", Category="Animations", OverrideNativeName="MorePointsAnim"))
	UWidgetAnimation* bpv__MorePointsAnim__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="PointsAnimation", Category="Animations", OverrideNativeName="PointsAnimation"))
	UWidgetAnimation* bpv__PointsAnimation__pf;
	UPROPERTY(Export, meta=(DisplayName="Arma", OverrideNativeName="Arma"))
	UTextBlock* bpv__Arma__pf;
	UPROPERTY(Export, meta=(DisplayName="ComboText", OverrideNativeName="ComboText"))
	UTextBlock* bpv__ComboText__pf;
	UPROPERTY(Export, meta=(DisplayName="EnemiesRemaining", OverrideNativeName="EnemiesRemaining"))
	UTextBlock* bpv__EnemiesRemaining__pf;
	UPROPERTY(Export, meta=(DisplayName="GameOver", OverrideNativeName="GameOver"))
	UBackgroundBlur* bpv__GameOver__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image", Category="HUDre", OverrideNativeName="Image"))
	UImage* bpv__Image__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_35", Category="HUDre", OverrideNativeName="Image_35"))
	UImage* bpv__Image_35__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_97", Category="HUDre", OverrideNativeName="Image_97"))
	UImage* bpv__Image_97__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_223", Category="HUDre", OverrideNativeName="Image_223"))
	UImage* bpv__Image_223__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_GodMode", Category="HUDre", OverrideNativeName="Image_GodMode"))
	UImage* bpv__Image_GodMode__pf;
	UPROPERTY(Export, meta=(DisplayName="Municion", OverrideNativeName="Municion"))
	UTextBlock* bpv__Municion__pf;
	UPROPERTY(Export, meta=(DisplayName="Objetivo", OverrideNativeName="Objetivo"))
	UTextBlock* bpv__Objetivo__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="PowerUpCooldownImage", Category="HUDre", OverrideNativeName="PowerUpCooldownImage"))
	UProgressBar* bpv__PowerUpCooldownImage__pf;
	UPROPERTY(Export, meta=(DisplayName="ScaleBox_485", OverrideNativeName="ScaleBox_485"))
	UScaleBox* bpv__ScaleBox_485__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_69", OverrideNativeName="TextBlock_69"))
	UTextBlock* bpv__TextBlock_69__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_213", OverrideNativeName="TextBlock_213"))
	UTextBlock* bpv__TextBlock_213__pf;
	UPROPERTY(Export, meta=(DisplayName="TimeSurviveText", OverrideNativeName="TimeSurviveText"))
	UTextBlock* bpv__TimeSurviveText__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="WeaponImage", Category="HUDre", OverrideNativeName="WeaponImage"))
	UImage* bpv__WeaponImage__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Widget_Information", Category="HUDre", OverrideNativeName="Widget_Information"))
	UWidget_Information_C__pf3975599377* bpv__Widget_Information__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Widget_Information_1", Category="HUDre", OverrideNativeName="Widget_Information_1"))
	UWidget_Information_C__pf3975599377* bpv__Widget_Information_1__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ammo", Category="Default", MultiLine="true", OverrideNativeName="Ammo"))
	int32 bpv__Ammo__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ammoo", Category="Default", MultiLine="true", OverrideNativeName="Ammoo"))
	FString bpv__Ammoo__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Weapon Equiped", Category="Default", MultiLine="true", OverrideNativeName="WeaponEquiped"))
	FString bpv__WeaponEquiped__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Level Objective", Category="Default", MultiLine="true", OverrideNativeName="LevelObjective"))
	FText bpv__LevelObjective__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Combo", Category="Default", MultiLine="true", OverrideNativeName="Combo"))
	FString bpv__Combo__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Visible Power Up", Category="Default", MultiLine="true", OverrideNativeName="IsVisiblePowerUp"))
	bool bpv__IsVisiblePowerUp__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Weapon Player", Category="Default", MultiLine="true", OverrideNativeName="WeaponPlayer"))
	FSlateBrush bpv__WeaponPlayer__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Timer Power Up", Category="Default", MultiLine="true", OverrideNativeName="TimerPowerUp"))
	float bpv__TimerPowerUp__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Counting Enemies Deaths?", Category="Default", MultiLine="true", OverrideNativeName="IsCountingEnemiesDeaths?"))
	bool bpv__IsCountingEnemiesDeathsx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Level Completer Ref", Category="Default", MultiLine="true", OverrideNativeName="LevelCompleterRef"))
	ALevelCompleterBP_C__pf922009354* bpv__LevelCompleterRef__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Count Down Boss", Category="Default", MultiLine="true", OverrideNativeName="CountDownBoss"))
	float bpv__CountDownBoss__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Survive?", Category="Default", MultiLine="true", OverrideNativeName="IsSurvive?"))
	bool bpv__IsSurvivex__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="No Ammo Text", Category="Default", MultiLine="true", OverrideNativeName="NoAmmoText"))
	FText bpv__NoAmmoText__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Game_Instance"))
	UMyGameInstance_C__pf2410127383* b0l__K2Node_DynamicCast_AsMy_Game_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ALevelCompleterBP_C__pf922009354*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ALevelCompleterBP_C__pf922009354* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLevel_Completer_BP"))
	ALevelCompleterBP_C__pf922009354* b0l__K2Node_DynamicCast_AsLevel_Completer_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsThird_Person_Character"))
	AThirdPersonCharacter_C__pf2222656877* b0l__K2Node_DynamicCast_AsThird_Person_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Shooting_Ch"))
	AEnemyShootingCh_C__pf3349424045* b0l__K2Node_DynamicCast_AsEnemy_Shooting_Ch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UHUDre_C__pf2299784250(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_HUDre__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_HUDre_1"))
	void bpf__ExecuteUbergraph_HUDre__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetGameOverTextVisibility"))
	virtual ESlateVisibility  bpf__GetGameOverTextVisibility__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetTextAmmo"))
	virtual FText  bpf__GetTextAmmo__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetTextWeapon"))
	virtual FText  bpf__GetTextWeapon__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_2"))
	virtual FText  bpf__GetText_2__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetLevelObjectiveText"))
	virtual FText  bpf__GetLevelObjectiveText__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetVisibility_0"))
	virtual ESlateVisibility  bpf__GetVisibility_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetPuntuation"))
	virtual FText  bpf__GetPuntuation__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_ComboText_Text_0"))
	virtual FText  bpf__Get_ComboText_Text_0__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimationCombo"))
	virtual void bpf__AnimationCombo__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_Objetivo_Visibility_0"))
	virtual ESlateVisibility  bpf__Get_Objetivo_Visibility_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetVisibilityPowerUp"))
	virtual ESlateVisibility  bpf__GetVisibilityPowerUp__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetImageWeapon"))
	virtual FSlateBrush  bpf__GetImageWeapon__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetPercentPowerUp"))
	virtual float  bpf__GetPercentPowerUp__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_DeathCount"))
	virtual FText  bpf__GetText_DeathCount__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetVisibility_DeathCount"))
	virtual ESlateVisibility  bpf__GetVisibility_DeathCount__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_TimeSurviveText_Text_0"))
	virtual FText  bpf__Get_TimeSurviveText_Text_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_TimeSurviveText_Visibility_0"))
	virtual ESlateVisibility  bpf__Get_TimeSurviveText_Visibility_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_0"))
	virtual void bpf__GetText_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_1"))
	virtual void bpf__GetText_1__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetRightMouseVisibility"))
	virtual ESlateVisibility  bpf__GetRightMouseVisibility__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_WeaponImage_Visibility_0"))
	virtual ESlateVisibility  bpf__Get_WeaponImage_Visibility_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_Municion_Visibility_0"))
	virtual ESlateVisibility  bpf__Get_Municion_Visibility_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetVisibility_1"))
	virtual ESlateVisibility  bpf__GetVisibility_1__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetVisibility_2"))
	virtual ESlateVisibility  bpf__GetVisibility_2__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_Image_GodMode_Visibility_0"))
	virtual ESlateVisibility  bpf__Get_Image_GodMode_Visibility_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
