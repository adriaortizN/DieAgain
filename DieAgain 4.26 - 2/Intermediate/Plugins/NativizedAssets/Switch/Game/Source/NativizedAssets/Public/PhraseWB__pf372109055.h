#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UWidgetAnimation;
class UImage;
#include "PhraseWB__pf372109055.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/Phrase/PhraseWB.PhraseWB_C", OverrideNativeName="PhraseWB_C"))
class UPhraseWB_C__pf372109055 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="FadeInCourage", Category="Animations", OverrideNativeName="FadeInCourage"))
	UWidgetAnimation* bpv__FadeInCourage__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="FadeInThruth", Category="Animations", OverrideNativeName="FadeInThruth"))
	UWidgetAnimation* bpv__FadeInThruth__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="FadeInPeople", Category="Animations", OverrideNativeName="FadeInPeople"))
	UWidgetAnimation* bpv__FadeInPeople__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_49", Category="PhraseWB", OverrideNativeName="Image_49"))
	UImage* bpv__Image_49__pf;
	UPhraseWB_C__pf372109055(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_PhraseWB__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
