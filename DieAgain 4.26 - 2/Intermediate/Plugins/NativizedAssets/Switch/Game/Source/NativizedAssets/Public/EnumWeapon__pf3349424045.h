#pragma once
#include "EnumWeapon__pf3349424045.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Enemies/EnumWeapon.EnumWeapon", OverrideNativeName="EnumWeapon", EnumDisplayNameFn="E__EnumWeapon__pf__GetUserFriendlyName") )
enum class E__EnumWeapon__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "EnumWeapon::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "EnumWeapon::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "EnumWeapon::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "EnumWeapon::NewEnumerator3"),
	NewEnumerator5 = 4 UMETA(OverrideName = "EnumWeapon::NewEnumerator5"),
	NewEnumerator6 = 5 UMETA(OverrideName = "EnumWeapon::NewEnumerator6"),
	NewEnumerator4 = 6 UMETA(OverrideName = "EnumWeapon::NewEnumerator4"),
	E__EnumWeapon__pf_MAX = 7 UMETA(OverrideName = "EnumWeapon::EnumWeapon_MAX"),
};
FText E__EnumWeapon__pf__GetUserFriendlyName(int32 InValue);
