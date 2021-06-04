#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USkeletalMeshComponent;
class USceneComponent;
#include "BP_Shotgun_Moray_Black__pf3806109457.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/BLS_Shotgun/Blueprints/BP_Shotgun_Moray_Black.BP_Shotgun_Moray_Black_C", OverrideNativeName="BP_Shotgun_Moray_Black_C"))
class ABP_Shotgun_Moray_Black_C__pf3806109457 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Handguard"))
	UStaticMeshComponent* bpv__Handguard__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Extra_Ammo_Holder"))
	UStaticMeshComponent* bpv__Extra_Ammo_Holder__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Collimator_with_Railing"))
	UStaticMeshComponent* bpv__Collimator_with_Railing__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Belt_Holder"))
	UStaticMeshComponent* bpv__Belt_Holder__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Barrel_Cover"))
	UStaticMeshComponent* bpv__Barrel_Cover__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Buttstock"))
	UStaticMeshComponent* bpv__Buttstock__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Gun_Body"))
	USkeletalMeshComponent* bpv__Gun_Body__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	ABP_Shotgun_Moray_Black_C__pf3806109457(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
