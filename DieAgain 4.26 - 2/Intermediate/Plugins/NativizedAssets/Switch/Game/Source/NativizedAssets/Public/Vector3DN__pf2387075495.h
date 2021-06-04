#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Vector3DN__pf2387075495.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Chameleon/Structures/Vector3DN.Vector3DN", OverrideNativeName="Vector3DN"))
struct FVector3DN__pf2387075495
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="X", Tooltip, OverrideNativeName="X_2_61690A0C49AE65EEBEA3F1869ED7C8B0"))
	float bpv__X_2_61690A0C49AE65EEBEA3F1869ED7C8B0__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Y", Tooltip, OverrideNativeName="Y_4_99EA40724D71AB71DA2E298FBE765633"))
	float bpv__Y_4_99EA40724D71AB71DA2E298FBE765633__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Z", Tooltip, OverrideNativeName="Z_7_3931AEC34F09EC9204600DB26430DD22"))
	float bpv__Z_7_3931AEC34F09EC9204600DB26430DD22__pf;
	FVector3DN__pf2387075495();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FVector3DN__pf2387075495& __Other) const
	{
		return FVector3DN__pf2387075495::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FVector3DN__pf2387075495& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FVector3DN__pf2387075495::StaticStruct()); }
};
