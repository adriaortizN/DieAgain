#include "NativizedAssets.h"
#include "BlendModes__pf3652918773.h"
FText E__BlendModes__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__BlendModes__pf>(InValue);
	switch(EnumValue)
	{
		case E__BlendModes__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1E2B8683456BB035FBD890B0E96B73EC]\", \"24CB14A94970AC5FD58EB6BC76A689B7\", \"0 - Normal\")"), Text); break;
		case E__BlendModes__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1E2B8683456BB035FBD890B0E96B73EC]\", \"1E73869C47E3F1F1B5A9B5B0BF4875D0\", \"1 - Color Burn\")"), Text); break;
		case E__BlendModes__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1E2B8683456BB035FBD890B0E96B73EC]\", \"EE4E4D01484AF442510F578E677E07FF\", \"2 - Color Dodge\")"), Text); break;
		case E__BlendModes__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1E2B8683456BB035FBD890B0E96B73EC]\", \"33456C614429CCEE4D7F44B8BC547A9E\", \"3 - Difference\")"), Text); break;
		case E__BlendModes__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1E2B8683456BB035FBD890B0E96B73EC]\", \"AD34AEED4738F9C0B44CCEA825DCBDFA\", \"4 - Exclusion\")"), Text); break;
		case E__BlendModes__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1E2B8683456BB035FBD890B0E96B73EC]\", \"74F6C95B468B09D66C1005A224BDAB00\", \"5 - Hardlight\")"), Text); break;
		case E__BlendModes__pf::NewEnumerator6: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1E2B8683456BB035FBD890B0E96B73EC]\", \"E12A26714E6617F90E18EB912103B66C\", \"6 - Linear Burn\")"), Text); break;
		case E__BlendModes__pf::NewEnumerator7: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1E2B8683456BB035FBD890B0E96B73EC]\", \"F322206241ED2E79A51D4EBACFE66C07\", \"7 - Linear Dodge\")"), Text); break;
		case E__BlendModes__pf::NewEnumerator8: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1E2B8683456BB035FBD890B0E96B73EC]\", \"BC9C6B0F43D4701DBC8825A37CF20B00\", \"8 - Linear Light\")"), Text); break;
		case E__BlendModes__pf::NewEnumerator9: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1E2B8683456BB035FBD890B0E96B73EC]\", \"E2FB36284E8F42F92E4B328BA36A2E7B\", \"9 - Pin Light\")"), Text); break;
		case E__BlendModes__pf::NewEnumerator10: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1E2B8683456BB035FBD890B0E96B73EC]\", \"51D23D604CA486F5B777B58B1B1FD07C\", \"10 - Soft Light\")"), Text); break;
		case E__BlendModes__pf::NewEnumerator11: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1E2B8683456BB035FBD890B0E96B73EC]\", \"DE3971344D28E6F72631D59A6B1F5B77\", \"11 - Screen\")"), Text); break;
		case E__BlendModes__pf::NewEnumerator12: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1E2B8683456BB035FBD890B0E96B73EC]\", \"F21C7F4C41198B9765FBE8A1F1B334B5\", \"12 - Lighten\")"), Text); break;
		case E__BlendModes__pf::NewEnumerator13: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1E2B8683456BB035FBD890B0E96B73EC]\", \"856F102B44B6CCE81C99CDB479011AC7\", \"13 - Darken\")"), Text); break;
		case E__BlendModes__pf::NewEnumerator14: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1E2B8683456BB035FBD890B0E96B73EC]\", \"BF6634904C7A7B3BB400E8816A05740B\", \"14 - Overlay\")"), Text); break;
		case E__BlendModes__pf::NewEnumerator15: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[1E2B8683456BB035FBD890B0E96B73EC]\", \"FC46FCC94F5FA5331F650DB3D49FF575\", \"15 - Multiply\")"), Text); break;
		case E__BlendModes__pf::E__BlendModes__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Blend Modes MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
