#include "NativizedAssets.h"
#include "LOOKCGStruct__pf2387075495.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
FLOOKCGStruct__pf2387075495::FLOOKCGStruct__pf2387075495()
{
	bpv__File_13_63DC650B4BDD73EBAA9B97AAB0ABE957__pf = nullptr;
}
PRAGMA_DISABLE_OPTIMIZATION
void FLOOKCGStruct__pf2387075495::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{0, FBlueprintDependencyType(false, true, false, false)},  //  Class /Script/Engine.Texture 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FLOOKCGStruct__pf2387075495
{
	FRegisterHelper__FLOOKCGStruct__pf2387075495()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Chameleon/Structures/LOOKCGStruct"), &FLOOKCGStruct__pf2387075495::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FLOOKCGStruct__pf2387075495 Instance;
};
FRegisterHelper__FLOOKCGStruct__pf2387075495 FRegisterHelper__FLOOKCGStruct__pf2387075495::Instance;
