#include "NativizedAssets.h"
#include "DrawingNoiseModes__pf3652918773.h"
FText E__DrawingNoiseModes__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__DrawingNoiseModes__pf>(InValue);
	switch(EnumValue)
	{
		case E__DrawingNoiseModes__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[5801155243A59ADFEE1B0EB460F25417]\", \"DA299F574A569620F2DF4FBD1E373AAA\", \"0 - Simplex\")"), Text); break;
		case E__DrawingNoiseModes__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[5801155243A59ADFEE1B0EB460F25417]\", \"8F08267F48507A3504CBB1B24E136702\", \"1 - Perlin\")"), Text); break;
		case E__DrawingNoiseModes__pf::E__DrawingNoiseModes__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Drawing Noise Modes MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
