#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class URotatingMovementComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UMaterialInterface;
#include "Dog_PerfectWorld__pf1065719940.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Art/PerfectWorldArt/Dog_PerfectWorld.Dog_PerfectWorld_C", OverrideNativeName="Dog_PerfectWorld_C"))
class ADog_PerfectWorld_C__pf1065719940 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="RotatingMovement"))
	URotatingMovementComponent* bpv__RotatingMovement__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DogMesh"))
	USkeletalMeshComponent* bpv__DogMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Mat 0", Category="Default", MultiLine="true", OverrideNativeName="Mat0"))
	UMaterialInterface* bpv__Mat0__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Mat 1", Category="Default", MultiLine="true", OverrideNativeName="Mat1"))
	UMaterialInterface* bpv__Mat1__pf;
	ADog_PerfectWorld_C__pf1065719940(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Dog_PerfectWorld__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
public:
};
