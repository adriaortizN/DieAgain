#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USplineComponent;
class USceneComponent;
class USplineMeshComponent;
class UMaterialInstanceDynamic;
#include "BP_Wire01__pf2700416.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/ScienceLab/Blueprints/BP_Wire01.BP_Wire01_C", OverrideNativeName="BP_Wire01_C"))
class ABP_Wire01_C__pf2700416 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Spline"))
	USplineComponent* bpv__Spline__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Spline Length", Category="Default", OverrideNativeName="Spline Length"))
	float bpv__SplinexLength__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Wire Size", Category="Default", OverrideNativeName="Wire Size"))
	float bpv__WirexSize__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Points", Category="Default", OverrideNativeName="Points"))
	int32 bpv__Points__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Specular", Category="Default", OverrideNativeName="Specular"))
	float bpv__Specular__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Roughness", Category="Default", OverrideNativeName="Roughness"))
	float bpv__Roughness__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Color", Category="Default", OverrideNativeName="Color"))
	FLinearColor bpv__Color__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Wire Var", Category="Default", UIMin="0", UIMax="5", OverrideNativeName="Wire Var"))
	int32 bpv__WirexVar__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Texture Var", Category="Default", UIMin="0", UIMax="2", OverrideNativeName="Texture var"))
	int32 bpv__Texturexvar__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Spline Mesh Var", Category="Default", UIMin="0", UIMax="1", OverrideNativeName="Spline Mesh Var"))
	int32 bpv__SplinexMeshxVar__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Spacing", Category="Default", OverrideNativeName="Spacing"))
	float bpv__Spacing__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Tangent Scale", Category="Default", OverrideNativeName="Tangent Scale"))
	float bpv__TangentxScale__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Dirt Color", Category="Default", OverrideNativeName="Dirt Color"))
	FLinearColor bpv__DirtxColor__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Color 2", Category="Default", OverrideNativeName="Color2"))
	FLinearColor bpv__Color2__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Conponent 1", Category="Default", OverrideNativeName="Conponent 1"))
	USplineMeshComponent* bpv__Conponentx1__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M1", Category="Default", OverrideNativeName="M1"))
	UMaterialInstanceDynamic* bpv__M1__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="M2", Category="Default", OverrideNativeName="M2"))
	UMaterialInstanceDynamic* bpv__M2__pf;
	ABP_Wire01_C__pf2700416(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
