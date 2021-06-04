#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
#include "BP_Classic_Commode_2__pf1146394805.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/FreeFurniturePack/Blueprints/BP_Classic_Commode_2.BP_Classic_Commode_2_C", OverrideNativeName="BP_Classic_Commode_2_C"))
class ABP_Classic_Commode_2_C__pf1146394805 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SM_Classic_Commode_Drawer_1_5"))
	UStaticMeshComponent* bpv__SM_Classic_Commode_Drawer_1_5__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SM_Classic_Commode_Drawer_1_4"))
	UStaticMeshComponent* bpv__SM_Classic_Commode_Drawer_1_4__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SM_Classic_Commode_Drawer_1_3"))
	UStaticMeshComponent* bpv__SM_Classic_Commode_Drawer_1_3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SM_Classic_Commode_Drawer_1_2"))
	UStaticMeshComponent* bpv__SM_Classic_Commode_Drawer_1_2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SM_Classic_Commode_Drawer_1_1"))
	UStaticMeshComponent* bpv__SM_Classic_Commode_Drawer_1_1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SM_Classic_Commode_Drawer_1"))
	UStaticMeshComponent* bpv__SM_Classic_Commode_Drawer_1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh"))
	UStaticMeshComponent* bpv__StaticMesh__pf;
	ABP_Classic_Commode_2_C__pf1146394805(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
