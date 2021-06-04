#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UButton;
class USaveGameBP_C__pf4030252459;
#include "CharacterSelection_WB__pf1209257231.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Levels/CharacterSelection/CharacterSelection_WB.CharacterSelection_WB_C", OverrideNativeName="CharacterSelection_WB_C"))
class UCharacterSelection_WB_C__pf1209257231 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Background", Category="CharacterSelection_WB", OverrideNativeName="Background"))
	UImage* bpv__Background__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_Female", Category="CharacterSelection_WB", OverrideNativeName="Button_Female"))
	UButton* bpv__Button_Female__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_Male", Category="CharacterSelection_WB", OverrideNativeName="Button_Male"))
	UButton* bpv__Button_Male__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Save Ref", Category="Default", MultiLine="true", OverrideNativeName="Save Ref"))
	USaveGameBP_C__pf4030252459* bpv__SavexRef__pfT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Game_BP"))
	USaveGameBP_C__pf4030252459* b0l__K2Node_DynamicCast_AsSave_Game_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsSave_Game_BP_1"))
	USaveGameBP_C__pf4030252459* b0l__K2Node_DynamicCast_AsSave_Game_BP_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UCharacterSelection_WB_C__pf1209257231(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_CharacterSelection_WB__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_112_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_112_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
