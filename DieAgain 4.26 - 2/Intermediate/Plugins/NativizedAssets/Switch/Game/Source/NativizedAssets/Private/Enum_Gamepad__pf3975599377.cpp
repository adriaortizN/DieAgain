#include "NativizedAssets.h"
#include "Enum_Gamepad__pf3975599377.h"
FText E__Enum_Gamepad__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Enum_Gamepad__pf>(InValue);
	switch(EnumValue)
	{
		case E__Enum_Gamepad__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[AC84DA1C4FB931DAF0388DA12503DE7A]\", \"3781EC934B24876EE2A27882256A1826\", \"A\")"), Text); break;
		case E__Enum_Gamepad__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[AC84DA1C4FB931DAF0388DA12503DE7A]\", \"AFFC9EEC41141414FFCFE6A3507D3423\", \"B\")"), Text); break;
		case E__Enum_Gamepad__pf::NewEnumerator6: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[AC84DA1C4FB931DAF0388DA12503DE7A]\", \"06BF807A4672DE5BCC0C0594823A20C3\", \"START\")"), Text); break;
		case E__Enum_Gamepad__pf::NewEnumerator7: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[AC84DA1C4FB931DAF0388DA12503DE7A]\", \"09589681446DFAA43207BABB45453C8D\", \"SELECT\")"), Text); break;
		case E__Enum_Gamepad__pf::NewEnumerator8: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[AC84DA1C4FB931DAF0388DA12503DE7A]\", \"D9035C89421A1D59B8AEF88D59C1B170\", \"UP\")"), Text); break;
		case E__Enum_Gamepad__pf::NewEnumerator9: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[AC84DA1C4FB931DAF0388DA12503DE7A]\", \"66CEB9D84E802F6D105BF89EB98F6E67\", \"DOWN\")"), Text); break;
		case E__Enum_Gamepad__pf::NewEnumerator10: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[AC84DA1C4FB931DAF0388DA12503DE7A]\", \"48556E9740E27120C60154AA686A7699\", \"X\")"), Text); break;
		case E__Enum_Gamepad__pf::NewEnumerator11: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[AC84DA1C4FB931DAF0388DA12503DE7A]\", \"5F8D190F4AD717685C37EFAAD0843397\", \"Y\")"), Text); break;
		case E__Enum_Gamepad__pf::NewEnumerator12: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[AC84DA1C4FB931DAF0388DA12503DE7A]\", \"8BE2A8F64BCC16313AC40CB470C6D0CD\", \"LEFT\")"), Text); break;
		case E__Enum_Gamepad__pf::NewEnumerator13: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[AC84DA1C4FB931DAF0388DA12503DE7A]\", \"35FEAB1C4904A0DB26315ABC3A0BC251\", \"RIGHT\")"), Text); break;
		case E__Enum_Gamepad__pf::E__Enum_Gamepad__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Enum MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
