#pragma once
#include "EnumState__pf3349424045.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Enemies/EnumState.EnumState", OverrideNativeName="EnumState", EnumDisplayNameFn="E__EnumState__pf__GetUserFriendlyName") )
enum class E__EnumState__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "EnumState::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "EnumState::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "EnumState::NewEnumerator2"),
	E__EnumState__pf_MAX = 3 UMETA(OverrideName = "EnumState::EnumState_MAX"),
};
FText E__EnumState__pf__GetUserFriendlyName(int32 InValue);
