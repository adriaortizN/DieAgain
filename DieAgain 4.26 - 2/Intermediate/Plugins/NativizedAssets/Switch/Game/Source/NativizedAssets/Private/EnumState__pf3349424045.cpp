#include "NativizedAssets.h"
#include "EnumState__pf3349424045.h"
FText E__EnumState__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__EnumState__pf>(InValue);
	switch(EnumValue)
	{
		case E__EnumState__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[BCCB3B4D499DD13A4E7C60839D89B43A]\", \"8C3C600D4F6F5D32E60AA6927780661C\", \"Walking\")"), Text); break;
		case E__EnumState__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[BCCB3B4D499DD13A4E7C60839D89B43A]\", \"C299DFF34DB39493A16F22B46BFB6CC7\", \"Running\")"), Text); break;
		case E__EnumState__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[BCCB3B4D499DD13A4E7C60839D89B43A]\", \"FB8749404B6AF7545F95B0BE13AB5CF9\", \"Shooting\")"), Text); break;
		case E__EnumState__pf::E__EnumState__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Enum State MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
