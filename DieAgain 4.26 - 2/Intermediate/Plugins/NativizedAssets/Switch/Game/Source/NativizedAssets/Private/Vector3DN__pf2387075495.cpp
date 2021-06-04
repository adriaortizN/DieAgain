#include "NativizedAssets.h"
#include "Vector3DN__pf2387075495.h"
FVector3DN__pf2387075495::FVector3DN__pf2387075495()
{
	bpv__X_2_61690A0C49AE65EEBEA3F1869ED7C8B0__pf = 0.000000f;
	bpv__Y_4_99EA40724D71AB71DA2E298FBE765633__pf = 0.000000f;
	bpv__Z_7_3931AEC34F09EC9204600DB26430DD22__pf = 0.000000f;
}
PRAGMA_DISABLE_OPTIMIZATION
void FVector3DN__pf2387075495::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FVector3DN__pf2387075495
{
	FRegisterHelper__FVector3DN__pf2387075495()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Chameleon/Structures/Vector3DN"), &FVector3DN__pf2387075495::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FVector3DN__pf2387075495 Instance;
};
FRegisterHelper__FVector3DN__pf2387075495 FRegisterHelper__FVector3DN__pf2387075495::Instance;
