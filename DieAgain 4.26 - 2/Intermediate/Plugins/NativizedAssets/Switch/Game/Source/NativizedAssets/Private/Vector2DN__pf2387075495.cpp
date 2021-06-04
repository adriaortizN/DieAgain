#include "NativizedAssets.h"
#include "Vector2DN__pf2387075495.h"
FVector2DN__pf2387075495::FVector2DN__pf2387075495()
{
	bpv__X_2_61690A0C49AE65EEBEA3F1869ED7C8B0__pf = 0.000000f;
	bpv__Y_4_99EA40724D71AB71DA2E298FBE765633__pf = 0.000000f;
}
PRAGMA_DISABLE_OPTIMIZATION
void FVector2DN__pf2387075495::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FVector2DN__pf2387075495
{
	FRegisterHelper__FVector2DN__pf2387075495()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Chameleon/Structures/Vector2DN"), &FVector2DN__pf2387075495::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FVector2DN__pf2387075495 Instance;
};
FRegisterHelper__FVector2DN__pf2387075495 FRegisterHelper__FVector2DN__pf2387075495::Instance;
