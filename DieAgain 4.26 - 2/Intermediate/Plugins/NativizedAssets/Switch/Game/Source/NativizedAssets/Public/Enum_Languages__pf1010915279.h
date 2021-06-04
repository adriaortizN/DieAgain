#pragma once
#include "Enum_Languages__pf1010915279.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Enum_Languages.Enum_Languages", OverrideNativeName="Enum_Languages", EnumDisplayNameFn="E__Enum_Languages__pf__GetUserFriendlyName") )
enum class E__Enum_Languages__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "Enum_Languages::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "Enum_Languages::NewEnumerator1"),
	E__Enum_Languages__pf_MAX = 2 UMETA(OverrideName = "Enum_Languages::Enum_MAX"),
};
FText E__Enum_Languages__pf__GetUserFriendlyName(int32 InValue);
