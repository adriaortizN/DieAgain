#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class UDecalComponent;
class USceneComponent;
#include "Door_A_Close_BP__pf116893152.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/ModSci_Engineer/Blueprints/Door_A_Close_BP.Door_A_Close_BP_C", OverrideNativeName="Door_A_Close_BP_C"))
class ADoor_A_Close_BP_C__pf116893152 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Door_Small_A_Glass"))
	UStaticMeshComponent* bpv__Door_Small_A_Glass__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Door_Small_UI"))
	UStaticMeshComponent* bpv__Door_Small_UI__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Caution"))
	UDecalComponent* bpv__Caution__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Cautionb"))
	UDecalComponent* bpv__Cautionb__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Key9b"))
	UDecalComponent* bpv__Key9b__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Key8b"))
	UDecalComponent* bpv__Key8b__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Key7b"))
	UDecalComponent* bpv__Key7b__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Key6b"))
	UDecalComponent* bpv__Key6b__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Key5b"))
	UDecalComponent* bpv__Key5b__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Key4b"))
	UDecalComponent* bpv__Key4b__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Key6"))
	UDecalComponent* bpv__Key6__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Key2b"))
	UDecalComponent* bpv__Key2b__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Key1b"))
	UDecalComponent* bpv__Key1b__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Key9"))
	UDecalComponent* bpv__Key9__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Key8"))
	UDecalComponent* bpv__Key8__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Key7"))
	UDecalComponent* bpv__Key7__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Key3b"))
	UDecalComponent* bpv__Key3b__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Key5"))
	UDecalComponent* bpv__Key5__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Key4"))
	UDecalComponent* bpv__Key4__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Key3"))
	UDecalComponent* bpv__Key3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Key2"))
	UDecalComponent* bpv__Key2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Key1"))
	UDecalComponent* bpv__Key1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Door_Small_A"))
	UStaticMeshComponent* bpv__Door_Small_A__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Door Open", Category="Door", OverrideNativeName="DoorOpen"))
	FVector bpv__DoorOpen__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Door Closed", Category="Door", OverrideNativeName="DoorClosed"))
	FVector bpv__DoorClosed__pf;
	ADoor_A_Close_BP_C__pf116893152(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
