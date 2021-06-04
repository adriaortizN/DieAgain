#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
class UTexture;
#include "LOOKCGStruct__pf2387075495.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Chameleon/Structures/LOOKCGStruct.LOOKCGStruct", OverrideNativeName="LOOKCGStruct"))
struct FLOOKCGStruct__pf2387075495
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="File", Tooltip, OverrideNativeName="File_13_63DC650B4BDD73EBAA9B97AAB0ABE957"))
	UTexture* bpv__File_13_63DC650B4BDD73EBAA9B97AAB0ABE957__pf;
	FLOOKCGStruct__pf2387075495();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FLOOKCGStruct__pf2387075495& __Other) const
	{
		return FLOOKCGStruct__pf2387075495::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FLOOKCGStruct__pf2387075495& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FLOOKCGStruct__pf2387075495::StaticStruct()); }
};
