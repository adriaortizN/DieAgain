#pragma once
#include "EnumCameraType__pf3349424045.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Enemies/EnumCameraType.EnumCameraType", OverrideNativeName="EnumCameraType", EnumDisplayNameFn="E__EnumCameraType__pf__GetUserFriendlyName") )
enum class E__EnumCameraType__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "EnumCameraType::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "EnumCameraType::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "EnumCameraType::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "EnumCameraType::NewEnumerator3"),
	NewEnumerator6 = 4 UMETA(OverrideName = "EnumCameraType::NewEnumerator6"),
	NewEnumerator4 = 5 UMETA(OverrideName = "EnumCameraType::NewEnumerator4"),
	NewEnumerator5 = 6 UMETA(OverrideName = "EnumCameraType::NewEnumerator5"),
	NewEnumerator8 = 7 UMETA(OverrideName = "EnumCameraType::NewEnumerator8"),
	NewEnumerator9 = 8 UMETA(OverrideName = "EnumCameraType::NewEnumerator9"),
	E__EnumCameraType__pf_MAX = 9 UMETA(OverrideName = "EnumCameraType::EnumCameraType_MAX"),
};
FText E__EnumCameraType__pf__GetUserFriendlyName(int32 InValue);
