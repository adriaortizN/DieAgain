#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UWidgetAnimation;
class UImage;
#include "MouseUI__pf3372741074.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Art/Mouse/MouseUI.MouseUI_C", OverrideNativeName="MouseUI_C"))
class UMouseUI_C__pf3372741074 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="Anim", Category="Animations", OverrideNativeName="Anim"))
	UWidgetAnimation* bpv__Anim__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image", Category="MouseUI", OverrideNativeName="Image"))
	UImage* bpv__Image__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_1", Category="MouseUI", OverrideNativeName="Image_1"))
	UImage* bpv__Image_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_148", Category="MouseUI", OverrideNativeName="Image_148"))
	UImage* bpv__Image_148__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Trash", Category="MouseUI", OverrideNativeName="Trash"))
	UImage* bpv__Trash__pf;
	UMouseUI_C__pf3372741074(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_MouseUI__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
