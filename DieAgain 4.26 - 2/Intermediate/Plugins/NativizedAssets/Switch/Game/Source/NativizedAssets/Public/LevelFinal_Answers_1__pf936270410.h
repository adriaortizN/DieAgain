#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/Engine/Public/Net/OnlineBlueprintCallProxyBase.h"
#include "../Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/AchievementWriteCallbackProxy.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "GamepadInteraction__pf197907997.h"
class UWidgetAnimation;
class UButton;
class UImage;
class UAchievementQueryCallbackProxy;
class UAchievementWriteCallbackProxy;
#include "LevelFinal_Answers_1__pf936270410.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/LevelFinal/LevelFinal_Answers_1.LevelFinal_Answers_1_C", OverrideNativeName="LevelFinal_Answers_1_C"))
class ULevelFinal_Answers_1_C__pf936270410 : public UGamepadInteraction_C__pf197907997
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="EmptyOnlineDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE(F__EmptyOnlineDelegate__DelegateSignature__SC_0);
	UDELEGATE(meta=(OverrideNativeName="AchievementWriteDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_ThreeParams(F__AchievementWriteDelegate__DelegateSignature__SC_1, FName , bpp__WrittenAchievementName__pf, float , bpp__WrittenProgress__pf, int32 , bpp__WrittenUserTag__pf);
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="FadeInButton", Category="Animations", OverrideNativeName="FadeInButton"))
	UWidgetAnimation* bpv__FadeInButton__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="FadeInText", Category="Animations", OverrideNativeName="FadeInText"))
	UWidgetAnimation* bpv__FadeInText__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_99", Category="LevelFinal_Answers_1", OverrideNativeName="Button_99"))
	UButton* bpv__Button_99__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_32", Category="LevelFinal_Answers_1", OverrideNativeName="Image_32"))
	UImage* bpv__Image_32__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Text Description", Category="Default", MultiLine="true", OverrideNativeName="TextDescription"))
	FText bpv__TextDescription__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Text Button", Category="Default", MultiLine="true", OverrideNativeName="TextButton"))
	FText bpv__TextButton__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Times Count", Category="Default", MultiLine="true", OverrideNativeName="TimesCount"))
	int32 bpv__TimesCount__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenAchievementName_1"))
	FName b1l__K2Node_CustomEvent_WrittenAchievementName_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenProgress_1"))
	float b1l__K2Node_CustomEvent_WrittenProgress_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenUserTag_1"))
	int32 b1l__K2Node_CustomEvent_WrittenUserTag_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_2"))
	F__AchievementWriteDelegate__DelegateSignature__SC_1 b1l__K2Node_CreateDelegate_OutputDelegate_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenAchievementName"))
	FName b1l__K2Node_CustomEvent_WrittenAchievementName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenProgress"))
	float b1l__K2Node_CustomEvent_WrittenProgress__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_WrittenUserTag"))
	int32 b1l__K2Node_CustomEvent_WrittenUserTag__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_3"))
	F__AchievementWriteDelegate__DelegateSignature__SC_1 b1l__K2Node_CreateDelegate_OutputDelegate_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b1l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_float_Variable"))
	float b1l__Temp_float_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_name_Variable"))
	FName b1l__Temp_name_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b1l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b1l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CacheAchievements_ReturnValue"))
	UAchievementQueryCallbackProxy* b1l__CallFunc_CacheAchievements_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_WriteAchievementProgress_ReturnValue"))
	UAchievementWriteCallbackProxy* b1l__CallFunc_WriteAchievementProgress_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b1l__CallFunc_IsValid_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_1"))
	bool b1l__CallFunc_IsValid_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<UButton*> b1l__K2Node_MakeArray_Array__pf;
	ULevelFinal_Answers_1_C__pf936270410(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_LevelFinal_Answers_1__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LevelFinal_Answers_1__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LevelFinal_Answers_1__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LevelFinal_Answers_1__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LevelFinal_Answers_1__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LevelFinal_Answers_1__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LevelFinal_Answers_1__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_99_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_99_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	virtual void bpf__Construct__pf() override;
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf) override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_85AB08AE417C6C2B9D63528F5558EFD0"))
	virtual void bpf__OnSuccess_85AB08AE417C6C2B9D63528F5558EFD0__pf(FName bpp__WrittenAchievementName__pf, float bpp__WrittenProgress__pf, int32 bpp__WrittenUserTag__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFailure_85AB08AE417C6C2B9D63528F5558EFD0"))
	virtual void bpf__OnFailure_85AB08AE417C6C2B9D63528F5558EFD0__pf(FName bpp__WrittenAchievementName__pf, float bpp__WrittenProgress__pf, int32 bpp__WrittenUserTag__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_1EBA93284F2FF80AA8B7EFBFF64F0CC4"))
	virtual void bpf__OnSuccess_1EBA93284F2FF80AA8B7EFBFF64F0CC4__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFailure_1EBA93284F2FF80AA8B7EFBFF64F0CC4"))
	virtual void bpf__OnFailure_1EBA93284F2FF80AA8B7EFBFF64F0CC4__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_0"))
	virtual FText  bpf__GetText_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_1"))
	virtual FText  bpf__GetText_1__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetBrush_0"))
	virtual FSlateBrush  bpf__GetBrush_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
