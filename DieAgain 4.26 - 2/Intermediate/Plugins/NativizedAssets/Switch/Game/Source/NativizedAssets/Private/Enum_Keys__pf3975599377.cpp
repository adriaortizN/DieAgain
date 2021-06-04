#include "NativizedAssets.h"
#include "Enum_Keys__pf3975599377.h"
FText E__Enum_Keys__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Enum_Keys__pf>(InValue);
	switch(EnumValue)
	{
		case E__Enum_Keys__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[D31CE7474B38871D87BBA3912E8EFF96]\", \"F89D03AA4AE6BE56798290B91884A329\", \"W\")"), Text); break;
		case E__Enum_Keys__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[D31CE7474B38871D87BBA3912E8EFF96]\", \"2271497047EE24C8CDF4EF9ADBF10FBA\", \"A\")"), Text); break;
		case E__Enum_Keys__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[D31CE7474B38871D87BBA3912E8EFF96]\", \"D42D4A134DCC41AD484071A829EB3A69\", \"S\")"), Text); break;
		case E__Enum_Keys__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[D31CE7474B38871D87BBA3912E8EFF96]\", \"4D19DF3B400BD92A450722936A144FB3\", \"D\")"), Text); break;
		case E__Enum_Keys__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[D31CE7474B38871D87BBA3912E8EFF96]\", \"B5345DD240F2194CF9B4B280E465DE31\", \"E\")"), Text); break;
		case E__Enum_Keys__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[D31CE7474B38871D87BBA3912E8EFF96]\", \"AB0BB0B1480F2939F160C1898A1E55E6\", \"P\")"), Text); break;
		case E__Enum_Keys__pf::NewEnumerator6: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[D31CE7474B38871D87BBA3912E8EFF96]\", \"A72C69794C366AA11655EB9BCA373C1E\", \"SPACE\")"), Text); break;
		case E__Enum_Keys__pf::NewEnumerator9: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[D31CE7474B38871D87BBA3912E8EFF96]\", \"DF16093D4B8007363A253EAAFD47BD9E\", \"R\")"), Text); break;
		case E__Enum_Keys__pf::NewEnumerator10: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[D31CE7474B38871D87BBA3912E8EFF96]\", \"E500DE0240E20F9D6159DB99599621F9\", \"ESCAPE\")"), Text); break;
		case E__Enum_Keys__pf::E__Enum_Keys__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Enum MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
