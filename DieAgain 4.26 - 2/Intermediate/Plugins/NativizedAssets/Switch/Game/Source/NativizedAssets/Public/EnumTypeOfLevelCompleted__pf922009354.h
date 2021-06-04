#pragma once
#include "EnumTypeOfLevelCompleted__pf922009354.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Objects/LevelCompleter/EnumTypeOfLevelCompleted.EnumTypeOfLevelCompleted", OverrideNativeName="EnumTypeOfLevelCompleted", EnumDisplayNameFn="E__EnumTypeOfLevelCompleted__pf__GetUserFriendlyName") )
enum class E__EnumTypeOfLevelCompleted__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "EnumTypeOfLevelCompleted::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "EnumTypeOfLevelCompleted::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "EnumTypeOfLevelCompleted::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "EnumTypeOfLevelCompleted::NewEnumerator3"),
	E__EnumTypeOfLevelCompleted__pf_MAX = 4 UMETA(OverrideName = "EnumTypeOfLevelCompleted::EnumTypeOfLevelCompleted_MAX"),
};
FText E__EnumTypeOfLevelCompleted__pf__GetUserFriendlyName(int32 InValue);
