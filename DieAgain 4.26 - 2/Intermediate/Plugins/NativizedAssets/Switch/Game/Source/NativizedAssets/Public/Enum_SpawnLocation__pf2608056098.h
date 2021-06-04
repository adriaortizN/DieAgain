#pragma once
#include "Enum_SpawnLocation__pf2608056098.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Objects/Boss/Enum_SpawnLocation.Enum_SpawnLocation", OverrideNativeName="Enum_SpawnLocation", EnumDisplayNameFn="E__Enum_SpawnLocation__pf__GetUserFriendlyName") )
enum class E__Enum_SpawnLocation__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "Enum_SpawnLocation::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "Enum_SpawnLocation::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "Enum_SpawnLocation::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "Enum_SpawnLocation::NewEnumerator3"),
	E__Enum_SpawnLocation__pf_MAX = 4 UMETA(OverrideName = "Enum_SpawnLocation::Enum_MAX"),
};
FText E__Enum_SpawnLocation__pf__GetUserFriendlyName(int32 InValue);
