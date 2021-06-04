#pragma once
#include "EnumLevelsNames__pf3349424045.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Enemies/EnumLevelsNames.EnumLevelsNames", OverrideNativeName="EnumLevelsNames", EnumDisplayNameFn="E__EnumLevelsNames__pf__GetUserFriendlyName") )
enum class E__EnumLevelsNames__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "EnumLevelsNames::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "EnumLevelsNames::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "EnumLevelsNames::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "EnumLevelsNames::NewEnumerator3"),
	NewEnumerator4 = 4 UMETA(OverrideName = "EnumLevelsNames::NewEnumerator4"),
	E__EnumLevelsNames__pf_MAX = 5 UMETA(OverrideName = "EnumLevelsNames::EnumLevelsNames_MAX"),
};
FText E__EnumLevelsNames__pf__GetUserFriendlyName(int32 InValue);
