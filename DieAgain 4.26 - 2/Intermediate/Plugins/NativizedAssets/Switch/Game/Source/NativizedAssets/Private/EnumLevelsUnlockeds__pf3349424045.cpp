#include "NativizedAssets.h"
#include "EnumLevelsUnlockeds__pf3349424045.h"
FText E__EnumLevelsUnlockeds__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__EnumLevelsUnlockeds__pf>(InValue);
	switch(EnumValue)
	{
		case E__EnumLevelsUnlockeds__pf::NewEnumerator10: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FBAAC04348A83CE337CFDCA79CB0E134]\", \"46E9460445174A43172460ADA14CC7DB\", \"None\")"), Text); break;
		case E__EnumLevelsUnlockeds__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FBAAC04348A83CE337CFDCA79CB0E134]\", \"61D497DC437264DB50878BBF5288041A\", \"Level1\")"), Text); break;
		case E__EnumLevelsUnlockeds__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FBAAC04348A83CE337CFDCA79CB0E134]\", \"AD89199149D1AF4B56319DB652075555\", \"Level2\")"), Text); break;
		case E__EnumLevelsUnlockeds__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FBAAC04348A83CE337CFDCA79CB0E134]\", \"46E40E144D99421525B7C9852B3715AF\", \"Level3\")"), Text); break;
		case E__EnumLevelsUnlockeds__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FBAAC04348A83CE337CFDCA79CB0E134]\", \"38C412424DDF954ECB5355B552428C5E\", \"Level4\")"), Text); break;
		case E__EnumLevelsUnlockeds__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FBAAC04348A83CE337CFDCA79CB0E134]\", \"31F6924D40A7EB9AA2EA61AFA4277005\", \"Level5\")"), Text); break;
		case E__EnumLevelsUnlockeds__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FBAAC04348A83CE337CFDCA79CB0E134]\", \"0F37187840B2FD802CC4D1AB94F8389F\", \"Level6\")"), Text); break;
		case E__EnumLevelsUnlockeds__pf::NewEnumerator6: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FBAAC04348A83CE337CFDCA79CB0E134]\", \"28178DDB468B3F8AE40FB78C2F8E2BFF\", \"Level7\")"), Text); break;
		case E__EnumLevelsUnlockeds__pf::NewEnumerator7: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FBAAC04348A83CE337CFDCA79CB0E134]\", \"49FA22F54B98A2F20ACAE39E241FD531\", \"Level8\")"), Text); break;
		case E__EnumLevelsUnlockeds__pf::NewEnumerator8: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FBAAC04348A83CE337CFDCA79CB0E134]\", \"0460F4AF43DD8CB6C8034DB2F4A60EA8\", \"Level9\")"), Text); break;
		case E__EnumLevelsUnlockeds__pf::NewEnumerator9: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FBAAC04348A83CE337CFDCA79CB0E134]\", \"9D9D9A864436655DE3754D8090F8AAA0\", \"Level10\")"), Text); break;
		case E__EnumLevelsUnlockeds__pf::NewEnumerator11: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FBAAC04348A83CE337CFDCA79CB0E134]\", \"26DFBFD24F529630BCB347813BE5DD52\", \"Level11\")"), Text); break;
		case E__EnumLevelsUnlockeds__pf::NewEnumerator12: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FBAAC04348A83CE337CFDCA79CB0E134]\", \"9178A7C7443F6B2D8C36A8B3106E7AF9\", \"Level12\")"), Text); break;
		case E__EnumLevelsUnlockeds__pf::NewEnumerator13: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FBAAC04348A83CE337CFDCA79CB0E134]\", \"9DF276784928046BD800B38BDEE3D2CE\", \"Level13\")"), Text); break;
		case E__EnumLevelsUnlockeds__pf::NewEnumerator14: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FBAAC04348A83CE337CFDCA79CB0E134]\", \"8959FC1D479061E562D8628A4CB15A37\", \"Level14\")"), Text); break;
		case E__EnumLevelsUnlockeds__pf::NewEnumerator15: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FBAAC04348A83CE337CFDCA79CB0E134]\", \"B2293EBB4CF4E4D75AEA1D8A13022651\", \"Level15\")"), Text); break;
		case E__EnumLevelsUnlockeds__pf::NewEnumerator16: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FBAAC04348A83CE337CFDCA79CB0E134]\", \"27111C9A42072AE74AF07B99F5A88142\", \"Level16\")"), Text); break;
		case E__EnumLevelsUnlockeds__pf::NewEnumerator17: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FBAAC04348A83CE337CFDCA79CB0E134]\", \"72065F894AC8FE0CE4AD8EB4058A12C8\", \"Level17\")"), Text); break;
		case E__EnumLevelsUnlockeds__pf::NewEnumerator18: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[FBAAC04348A83CE337CFDCA79CB0E134]\", \"867A37A0438E51DBEFF4F382F3102D18\", \"Level18\")"), Text); break;
		case E__EnumLevelsUnlockeds__pf::E__EnumLevelsUnlockeds__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Enum Levels Unlockeds MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
