#include "NativizedAssets.h"
#include "Enum_GoodSky_Effects__pf194322682.h"
FText E__Enum_GoodSky_Effects__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Enum_GoodSky_Effects__pf>(InValue);
	switch(EnumValue)
	{
		case E__Enum_GoodSky_Effects__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[68F3DA3541EE19F0261F678C62B3692C]\", \"CAD0764E421E4668CDA3C0AB83D4FF79\", \"None\")"), Text); break;
		case E__Enum_GoodSky_Effects__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[68F3DA3541EE19F0261F678C62B3692C]\", \"BA14B30F4BA70E68D2378DB904091966\", \"Sun / Stars ( From Custom Mode / Time of Day  )\")"), Text); break;
		case E__Enum_GoodSky_Effects__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[68F3DA3541EE19F0261F678C62B3692C]\", \"5D6BB73E4593BD54F7B50DB0F71B5192\", \"Moon\")"), Text); break;
		case E__Enum_GoodSky_Effects__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[68F3DA3541EE19F0261F678C62B3692C]\", \"7D12D3E14DD8297C0F3663AC4E8F339C\", \"Storm\")"), Text); break;
		case E__Enum_GoodSky_Effects__pf::E__Enum_GoodSky_Effects__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Enum Good Sky MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
