#include "NativizedAssets.h"
#include "Enum_Languages__pf1010915279.h"
FText E__Enum_Languages__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Enum_Languages__pf>(InValue);
	switch(EnumValue)
	{
		case E__Enum_Languages__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A4C8189A4A2EAFFA06D208BB57E8D4B1]\", \"7C2BBBDD4DD176265ADA6687F1540F13\", \"English\")"), Text); break;
		case E__Enum_Languages__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A4C8189A4A2EAFFA06D208BB57E8D4B1]\", \"3E28FF5A41601E494C672187B9B56DA5\", \"Ita\")"), Text); break;
		case E__Enum_Languages__pf::E__Enum_Languages__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Enum MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
