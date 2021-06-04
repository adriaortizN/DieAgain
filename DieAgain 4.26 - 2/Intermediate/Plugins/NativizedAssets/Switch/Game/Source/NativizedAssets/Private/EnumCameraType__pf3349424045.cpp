#include "NativizedAssets.h"
#include "EnumCameraType__pf3349424045.h"
FText E__EnumCameraType__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__EnumCameraType__pf>(InValue);
	switch(EnumValue)
	{
		case E__EnumCameraType__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6065D79B47602372320C6B85FCCA5F2D]\", \"8DADFE6343FB32D2D35E7992014A8CD8\", \"Horizontal\")"), Text); break;
		case E__EnumCameraType__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6065D79B47602372320C6B85FCCA5F2D]\", \"5D104A644A917BDB57F90597F87B1E7B\", \"Vertical\")"), Text); break;
		case E__EnumCameraType__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6065D79B47602372320C6B85FCCA5F2D]\", \"D2F337A3465B70B2BA29319293385F26\", \"MapCamera\")"), Text); break;
		case E__EnumCameraType__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6065D79B47602372320C6B85FCCA5F2D]\", \"A29EA910446AEE1E1BEE86BAE40F7D6D\", \"HorizontalSpecial\")"), Text); break;
		case E__EnumCameraType__pf::NewEnumerator6: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6065D79B47602372320C6B85FCCA5F2D]\", \"6FA3BDB64C316FA64A919DA7758F4569\", \"HorizontalSpecialZoom\")"), Text); break;
		case E__EnumCameraType__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6065D79B47602372320C6B85FCCA5F2D]\", \"12E744DF4AEF408AFB2B16B564DBC8C6\", \"HorizontalFullRotation\")"), Text); break;
		case E__EnumCameraType__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6065D79B47602372320C6B85FCCA5F2D]\", \"A51394514006836886CAEC9149CD0AAC\", \"Horizontal180\")"), Text); break;
		case E__EnumCameraType__pf::NewEnumerator8: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6065D79B47602372320C6B85FCCA5F2D]\", \"27DFC5224496783AE4F0F6B5017BB58E\", \"NF_Vertical\")"), Text); break;
		case E__EnumCameraType__pf::NewEnumerator9: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6065D79B47602372320C6B85FCCA5F2D]\", \"F700CC544A5B5185E2A35E86FFD3AE67\", \"Vertical_Level13\")"), Text); break;
		case E__EnumCameraType__pf::E__EnumCameraType__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Enum Camera Type MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
