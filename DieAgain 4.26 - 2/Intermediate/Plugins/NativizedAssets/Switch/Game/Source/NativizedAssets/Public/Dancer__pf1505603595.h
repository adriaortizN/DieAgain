#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Enum_NPCs__pf1725468588.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USkeletalMeshComponent;
class UStaticMeshComponent;
class USceneComponent;
class UAnimPreviewInstance;
#include "Dancer__pf1505603595.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Objects/NPCDancing/Dancer.Dancer_C", OverrideNativeName="Dancer_C"))
class ADancer_C__pf1505603595 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Mask"))
	USkeletalMeshComponent* bpv__Mask__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Weapon"))
	UStaticMeshComponent* bpv__Weapon__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Mesh"))
	USkeletalMeshComponent* bpv__Mesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="NPC", Category="Default", MultiLine="true", OverrideNativeName="NPC"))
	E__Enum_NPCs__pf bpv__NPC__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Mesh Scale", Category="Default", MultiLine="true", OverrideNativeName="MeshScale"))
	FVector bpv__MeshScale__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Animation", Category="Default", MultiLine="true", OverrideNativeName="Animation"))
	UAnimPreviewInstance* bpv__Animation__pf;
	ADancer_C__pf1505603595(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Dancer__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetMesh"))
	virtual void bpf__SetMesh__pf();
public:
};
