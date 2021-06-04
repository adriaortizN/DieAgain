#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USceneComponent;
class UTimelineComponent;
class UMaterialInstanceDynamic;
#include "BossBulletLocation__pf2608056098.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Objects/Boss/BossBulletLocation.BossBulletLocation_C", OverrideNativeName="BossBulletLocation_C"))
class ABossBulletLocation_C__pf2608056098 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Cylinder"))
	UStaticMeshComponent* bpv__Cylinder__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(meta=(OverrideNativeName="fadeTime_NewTrack_0_EF60CF864E68CD2D4CA022A29C836282"))
	float bpv__fadeTime_NewTrack_0_EF60CF864E68CD2D4CA022A29C836282__pf;
	UPROPERTY(meta=(OverrideNativeName="fadeTime__Direction_EF60CF864E68CD2D4CA022A29C836282"))
	TEnumAsByte<ETimelineDirection::Type> bpv__fadeTime__Direction_EF60CF864E68CD2D4CA022A29C836282__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="BossBulletLocation", OverrideNativeName="fadeTime"))
	UTimelineComponent* bpv__fadeTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateDynamicMaterialInstance_ReturnValue"))
	UMaterialInstanceDynamic* b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
	ABossBulletLocation_C__pf2608056098(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BossBulletLocation__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BossBulletLocation__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BossBulletLocation__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="fadeTime__UpdateFunc"))
	virtual void bpf__fadeTime__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="fadeTime__FinishedFunc"))
	virtual void bpf__fadeTime__FinishedFunc__pf();
public:
};
