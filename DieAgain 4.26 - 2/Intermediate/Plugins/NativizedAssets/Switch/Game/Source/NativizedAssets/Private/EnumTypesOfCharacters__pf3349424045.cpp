#include "NativizedAssets.h"
#include "EnumTypesOfCharacters__pf3349424045.h"
FText E__EnumTypesOfCharacters__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__EnumTypesOfCharacters__pf>(InValue);
	switch(EnumValue)
	{
		case E__EnumTypesOfCharacters__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7D0E099442CD2F12464B2492EEE12E24]\", \"FBECCF1849EF606EAFE3B2ACAFA30CE7\", \"Player\")"), Text); break;
		case E__EnumTypesOfCharacters__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7D0E099442CD2F12464B2492EEE12E24]\", \"3FC919414BB8130CA3E501BC0BA105AF\", \"ShootingEnemy\")"), Text); break;
		case E__EnumTypesOfCharacters__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7D0E099442CD2F12464B2492EEE12E24]\", \"37C2A83C4DEAF041D902299388726D25\", \"SuicideEnemy\")"), Text); break;
		case E__EnumTypesOfCharacters__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7D0E099442CD2F12464B2492EEE12E24]\", \"439559854864295D63B2F1AF7629D09F\", \"EliteEnemy\")"), Text); break;
		case E__EnumTypesOfCharacters__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7D0E099442CD2F12464B2492EEE12E24]\", \"05E9AEFD45D13B19AA07F3B1C4459737\", \"Sniper\")"), Text); break;
		case E__EnumTypesOfCharacters__pf::NewEnumerator6: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7D0E099442CD2F12464B2492EEE12E24]\", \"1C9768B3475915345D2B88A444886A09\", \"Slave\")"), Text); break;
		case E__EnumTypesOfCharacters__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7D0E099442CD2F12464B2492EEE12E24]\", \"55FC5A8F476E1F085FF0E8817CBC66A7\", \"SlaveAggressive\")"), Text); break;
		case E__EnumTypesOfCharacters__pf::NewEnumerator8: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[7D0E099442CD2F12464B2492EEE12E24]\", \"AE913C6F4E78FC2E3A295A898623CF5C\", \"Dog\")"), Text); break;
		case E__EnumTypesOfCharacters__pf::E__EnumTypesOfCharacters__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Enum Types Of Characters MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
