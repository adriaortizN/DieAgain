#include "NativizedAssets.h"
#include "Enum_SpawnLocation__pf2608056098.h"
FText E__Enum_SpawnLocation__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Enum_SpawnLocation__pf>(InValue);
	switch(EnumValue)
	{
		case E__Enum_SpawnLocation__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[C6D0AE4A44F0427C918CFA906AC3F6D1]\", \"1D778E7B498FE6F8C6E1CFA265983287\", \"Up\")"), Text); break;
		case E__Enum_SpawnLocation__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[C6D0AE4A44F0427C918CFA906AC3F6D1]\", \"B3A2A01946A54D60AF1EEC813766B3B2\", \"Down\")"), Text); break;
		case E__Enum_SpawnLocation__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[C6D0AE4A44F0427C918CFA906AC3F6D1]\", \"83905B904571A5862CCAB9890E15E384\", \"Left\")"), Text); break;
		case E__Enum_SpawnLocation__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[C6D0AE4A44F0427C918CFA906AC3F6D1]\", \"209F452A4E8A916F781C4BBED1B20F23\", \"Right\")"), Text); break;
		case E__Enum_SpawnLocation__pf::E__Enum_SpawnLocation__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Enum MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
