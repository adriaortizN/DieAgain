#pragma once
#include "BlendModes__pf3652918773.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Chameleon/Enums/BlendModes.BlendModes", OverrideNativeName="BlendModes", EnumDisplayNameFn="E__BlendModes__pf__GetUserFriendlyName") )
enum class E__BlendModes__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(DisplayName = "0 - Normal",OverrideName = "BlendModes::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(DisplayName = "1 - Color Burn",OverrideName = "BlendModes::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(DisplayName = "2 - Color Dodge",OverrideName = "BlendModes::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(DisplayName = "3 - Difference",OverrideName = "BlendModes::NewEnumerator3"),
	NewEnumerator4 = 4 UMETA(DisplayName = "4 - Exclusion",OverrideName = "BlendModes::NewEnumerator4"),
	NewEnumerator5 = 5 UMETA(DisplayName = "5 - Hardlight",OverrideName = "BlendModes::NewEnumerator5"),
	NewEnumerator6 = 6 UMETA(DisplayName = "6 - Linear Burn",OverrideName = "BlendModes::NewEnumerator6"),
	NewEnumerator7 = 7 UMETA(DisplayName = "7 - Linear Dodge",OverrideName = "BlendModes::NewEnumerator7"),
	NewEnumerator8 = 8 UMETA(DisplayName = "8 - Linear Light",OverrideName = "BlendModes::NewEnumerator8"),
	NewEnumerator9 = 9 UMETA(DisplayName = "9 - Pin Light",OverrideName = "BlendModes::NewEnumerator9"),
	NewEnumerator10 = 10 UMETA(DisplayName = "10 - Soft Light",OverrideName = "BlendModes::NewEnumerator10"),
	NewEnumerator11 = 11 UMETA(DisplayName = "11 - Screen",OverrideName = "BlendModes::NewEnumerator11"),
	NewEnumerator12 = 12 UMETA(DisplayName = "12 - Lighten",OverrideName = "BlendModes::NewEnumerator12"),
	NewEnumerator13 = 13 UMETA(DisplayName = "13 - Darken",OverrideName = "BlendModes::NewEnumerator13"),
	NewEnumerator14 = 14 UMETA(DisplayName = "14 - Overlay",OverrideName = "BlendModes::NewEnumerator14"),
	NewEnumerator15 = 15 UMETA(DisplayName = "15 - Multiply",OverrideName = "BlendModes::NewEnumerator15"),
	E__BlendModes__pf_MAX = 16 UMETA(OverrideName = "BlendModes::BlendModes_MAX"),
};
FText E__BlendModes__pf__GetUserFriendlyName(int32 InValue);
