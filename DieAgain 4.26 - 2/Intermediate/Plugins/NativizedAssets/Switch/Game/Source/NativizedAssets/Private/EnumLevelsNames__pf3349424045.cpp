#include "NativizedAssets.h"
#include "EnumLevelsNames__pf3349424045.h"
FText E__EnumLevelsNames__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__EnumLevelsNames__pf>(InValue);
	switch(EnumValue)
	{
		case E__EnumLevelsNames__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[531B51784954B840939CB58A1D9AE322]\", \"4B41D05F4EA391EF8D6706BB0206D0FC\", \"Tutorial\")"), Text); break;
		case E__EnumLevelsNames__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[531B51784954B840939CB58A1D9AE322]\", \"106D53C14450204C35B60BBCF469F51B\", \"Level 1\")"), Text); break;
		case E__EnumLevelsNames__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[531B51784954B840939CB58A1D9AE322]\", \"F3C7C8FB4AE7AEB535C647BDC319A082\", \"Level 2\")"), Text); break;
		case E__EnumLevelsNames__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[531B51784954B840939CB58A1D9AE322]\", \"13FD4277439DF7D490CD96A5EA70DF44\", \"Level 3\")"), Text); break;
		case E__EnumLevelsNames__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[531B51784954B840939CB58A1D9AE322]\", \"FC2622B74ED556B16A73D9AFA12E9F6A\", \"Level 4\")"), Text); break;
		case E__EnumLevelsNames__pf::E__EnumLevelsNames__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Enum Levels Names MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
