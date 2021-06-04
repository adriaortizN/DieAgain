#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UWidgetAnimation;
class UCircularThrobber;
class UImage;
#include "LevelLoading_WB__pf2239747094.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/Loading/LevelLoading_WB.LevelLoading_WB_C", OverrideNativeName="LevelLoading_WB_C"))
class ULevelLoading_WB_C__pf2239747094 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="Loading360", Category="Animations", OverrideNativeName="Loading360"))
	UWidgetAnimation* bpv__Loading360__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CircularThrobber_110", Category="LevelLoading_WB", OverrideNativeName="CircularThrobber_110"))
	UCircularThrobber* bpv__CircularThrobber_110__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_21", Category="LevelLoading_WB", OverrideNativeName="Image_21"))
	UImage* bpv__Image_21__pf;
	ULevelLoading_WB_C__pf2239747094(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_LevelLoading_WB__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
