#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USpotLightComponent;
class URotatingMovementComponent;
class USceneComponent;
#include "AlarmEndingAnswers__pf320430598.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Objects/AlarmLight/AlarmEndingAnswers.AlarmEndingAnswers_C", OverrideNativeName="AlarmEndingAnswers_C"))
class AAlarmEndingAnswers_C__pf320430598 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SpotLight"))
	USpotLightComponent* bpv__SpotLight__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="RotatingMovement"))
	URotatingMovementComponent* bpv__RotatingMovement__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Active at Beggining", Category="Default", MultiLine="true", OverrideNativeName="IsActiveAtBeggining"))
	bool bpv__IsActiveAtBeggining__pf;
	AAlarmEndingAnswers_C__pf320430598(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_AlarmEndingAnswers_0"))
	void bpf__ExecuteUbergraph_AlarmEndingAnswers__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AlarmEndingAnswers__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ActiveRotating"))
	virtual void bpf__ActiveRotating__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
public:
};
