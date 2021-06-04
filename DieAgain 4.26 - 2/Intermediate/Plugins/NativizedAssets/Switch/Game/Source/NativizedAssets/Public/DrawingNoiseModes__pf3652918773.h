#pragma once
#include "DrawingNoiseModes__pf3652918773.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Chameleon/Enums/DrawingNoiseModes.DrawingNoiseModes", OverrideNativeName="DrawingNoiseModes", EnumDisplayNameFn="E__DrawingNoiseModes__pf__GetUserFriendlyName") )
enum class E__DrawingNoiseModes__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "DrawingNoiseModes::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "DrawingNoiseModes::NewEnumerator1"),
	E__DrawingNoiseModes__pf_MAX = 2 UMETA(OverrideName = "DrawingNoiseModes::DrawingNoiseModes_MAX"),
};
FText E__DrawingNoiseModes__pf__GetUserFriendlyName(int32 InValue);
