#include "NativizedAssets.h"
#include "EnumWeapon__pf3349424045.h"
FText E__EnumWeapon__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__EnumWeapon__pf>(InValue);
	switch(EnumValue)
	{
		case E__EnumWeapon__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[ADD61060453759EA871E7B9B05B46095]\", \"ACDD06EF4DB56BF2B38E688BB23AB61A\", \"Rifle\")"), Text); break;
		case E__EnumWeapon__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[ADD61060453759EA871E7B9B05B46095]\", \"FDDC110A4F28964FC6781892468E2E0B\", \"Shotgun\")"), Text); break;
		case E__EnumWeapon__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[ADD61060453759EA871E7B9B05B46095]\", \"6C3B73634F487401E3DB66BAB35BB07E\", \"Knife\")"), Text); break;
		case E__EnumWeapon__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[ADD61060453759EA871E7B9B05B46095]\", \"D0AD35AD419ACE9B37BB87AFF59E05FD\", \"Sniper\")"), Text); break;
		case E__EnumWeapon__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[ADD61060453759EA871E7B9B05B46095]\", \"78788B1D4C370B9F68E3D8911C06239F\", \"RPG\")"), Text); break;
		case E__EnumWeapon__pf::NewEnumerator6: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[ADD61060453759EA871E7B9B05B46095]\", \"69AA87064C96B0276B9255A35D71E77D\", \"AShotgun\")"), Text); break;
		case E__EnumWeapon__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[ADD61060453759EA871E7B9B05B46095]\", \"80B5F376409A94A3156F4C8E68E9AB08\", \"None\")"), Text); break;
		case E__EnumWeapon__pf::E__EnumWeapon__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Enum Weapon MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
