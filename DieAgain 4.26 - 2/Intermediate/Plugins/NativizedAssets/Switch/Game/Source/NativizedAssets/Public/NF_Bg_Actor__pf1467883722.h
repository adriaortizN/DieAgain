#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "EnumTypesOfCharacters__pf3349424045.h"
#include "TypeOfAnim_NF__pf1467883722.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USkeletalMeshComponent;
class USceneComponent;
#include "NF_Bg_Actor__pf1467883722.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/NorthernFront/NF_Bg_Actor.NF_Bg_Actor_C", OverrideNativeName="NF_Bg_Actor_C"))
class ANF_Bg_Actor_C__pf1467883722 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GasMask"))
	UStaticMeshComponent* bpv__GasMask__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Actor"))
	USkeletalMeshComponent* bpv__Actor__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Type Of NPC", Category="Default", MultiLine="true", OverrideNativeName="TypeOfNPC"))
	E__EnumTypesOfCharacters__pf bpv__TypeOfNPC__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Type Of Anim", Category="Default", MultiLine="true", OverrideNativeName="TypeOfAnim"))
	E__TypeOfAnim_NF__pf bpv__TypeOfAnim__pf;
	ANF_Bg_Actor_C__pf1467883722(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_NF_Bg_Actor__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CreateMesh"))
	virtual void bpf__CreateMesh__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="SetMask"))
	virtual void bpf__SetMask__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetAnimation"))
	virtual void bpf__SetAnimation__pf();
public:
};
