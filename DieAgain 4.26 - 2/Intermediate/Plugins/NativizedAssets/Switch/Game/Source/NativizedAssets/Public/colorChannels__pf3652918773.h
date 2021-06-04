#pragma once
#include "colorChannels__pf3652918773.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Chameleon/Enums/colorChannels.ColorChannels", OverrideNativeName="ColorChannels", EnumDisplayNameFn="E__ColorChannels__pf__GetUserFriendlyName") )
enum class E__ColorChannels__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(DisplayName = "Red",OverrideName = "ColorChannels::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(DisplayName = "Green",OverrideName = "ColorChannels::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(DisplayName = "Blue",OverrideName = "ColorChannels::NewEnumerator2"),
	E__ColorChannels__pf_MAX = 3 UMETA(OverrideName = "ColorChannels::ColorChannels_MAX"),
};
FText E__ColorChannels__pf__GetUserFriendlyName(int32 InValue);
