#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
class UStaticMeshComponent;
class ATargetPoint_Cutscene_C__pf2030518057;
#include "Character_Beta__pf2030518057.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Objects/Cutscene/Character_Beta.Character_Beta_C", OverrideNativeName="Character_Beta_C"))
class ACharacter_Beta_C__pf2030518057 : public ACharacter
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GasMask"))
	UStaticMeshComponent* bpv__GasMask__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Weapon"))
	UStaticMeshComponent* bpv__Weapon__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Target Point", Category="Default", MultiLine="true", OverrideNativeName="TargetPoint"))
	ATargetPoint_Cutscene_C__pf2030518057* bpv__TargetPoint__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Turn 180", Category="Default", MultiLine="true", OverrideNativeName="Turn180"))
	bool bpv__Turn180__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf;
	ACharacter_Beta_C__pf2030518057(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Character_Beta_0"))
	void bpf__ExecuteUbergraph_Character_Beta__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoveTo"))
	virtual void bpf__MoveTo__pf(ATargetPoint_Cutscene_C__pf2030518057* bpp__TargetPoint__pf);
public:
};
