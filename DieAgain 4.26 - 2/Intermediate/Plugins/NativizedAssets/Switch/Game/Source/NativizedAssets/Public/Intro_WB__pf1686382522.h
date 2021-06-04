#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UWidgetAnimation;
class UImage;
class UTextBlock;
#include "Intro_WB__pf1686382522.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/IntroCutscene/Intro_WB.Intro_WB_C", OverrideNativeName="Intro_WB_C"))
class UIntro_WB_C__pf1686382522 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="FadeInBlack", Category="Animations", OverrideNativeName="FadeInBlack"))
	UWidgetAnimation* bpv__FadeInBlack__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="FadeOutYear3030", Category="Animations", OverrideNativeName="FadeOutYear3030"))
	UWidgetAnimation* bpv__FadeOutYear3030__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="FadeInYear3030", Category="Animations", OverrideNativeName="FadeInYear3030"))
	UWidgetAnimation* bpv__FadeInYear3030__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="FadeOut", Category="Animations", OverrideNativeName="FadeOut"))
	UWidgetAnimation* bpv__FadeOut__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="FadeIn", Category="Animations", OverrideNativeName="FadeIn"))
	UWidgetAnimation* bpv__FadeIn__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Black_Image", Category="Intro_WB", OverrideNativeName="Black_Image"))
	UImage* bpv__Black_Image__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_47", OverrideNativeName="TextBlock_47"))
	UTextBlock* bpv__TextBlock_47__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Text Intro", Category="Default", MultiLine="true", OverrideNativeName="TextIntro"))
	FText bpv__TextIntro__pf;
	UIntro_WB_C__pf1686382522(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Intro_WB_0"))
	void bpf__ExecuteUbergraph_Intro_WB__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SpawnText"))
	virtual void bpf__SpawnText__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RemoveText"))
	virtual void bpf__RemoveText__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_Intro"))
	virtual FText  bpf__GetText_Intro__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
