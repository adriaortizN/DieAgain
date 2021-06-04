#include "NativizedAssets.h"
#include "Enum_GoodSky_MeshType__pf194322682.h"
FText E__Enum_GoodSky_MeshType__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Enum_GoodSky_MeshType__pf>(InValue);
	switch(EnumValue)
	{
		case E__Enum_GoodSky_MeshType__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A26E941E41764A8D08347D8763E0A1D0]\", \"5CBDAB4A4F72A2BB15138F9AEC771415\", \"Sphere\")"), Text); break;
		case E__Enum_GoodSky_MeshType__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A26E941E41764A8D08347D8763E0A1D0]\", \"7C770FC54277B5A08827D19E0EC38BA1\", \"Hemisphere\")"), Text); break;
		case E__Enum_GoodSky_MeshType__pf::E__Enum_GoodSky_MeshType__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Enum Good Sky MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
