#include "NativizedAssets.h"
#include "Enum_GoodSky_Style_Clouds__pf194322682.h"
FText E__Enum_GoodSky_Style_Clouds__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Enum_GoodSky_Style_Clouds__pf>(InValue);
	switch(EnumValue)
	{
		case E__Enum_GoodSky_Style_Clouds__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[4396D3CD4214B8EA2DF4949B60B50E70]\", \"E49FD754435D4647E8C809A6B7ABB6E8\", \"Style Clouds Cumulus A\")"), Text); break;
		case E__Enum_GoodSky_Style_Clouds__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[4396D3CD4214B8EA2DF4949B60B50E70]\", \"A1A7263E4112E6F319C9D4B1698CFA71\", \"Style Clouds Cumulus B\")"), Text); break;
		case E__Enum_GoodSky_Style_Clouds__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[4396D3CD4214B8EA2DF4949B60B50E70]\", \"7E824CC04E9DF5390884088B6BBCA4F9\", \"Style Clouds Stratus\")"), Text); break;
		case E__Enum_GoodSky_Style_Clouds__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[4396D3CD4214B8EA2DF4949B60B50E70]\", \"B682162444B63ACC95565DA904BB0CBB\", \"Style Clouds Cirriform\")"), Text); break;
		case E__Enum_GoodSky_Style_Clouds__pf::E__Enum_GoodSky_Style_Clouds__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Enum Good Sky Style MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
