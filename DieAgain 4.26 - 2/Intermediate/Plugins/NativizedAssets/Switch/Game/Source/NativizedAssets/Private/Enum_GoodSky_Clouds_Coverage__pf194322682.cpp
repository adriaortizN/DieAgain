#include "NativizedAssets.h"
#include "Enum_GoodSky_Clouds_Coverage__pf194322682.h"
FText E__Enum_GoodSky_Clouds_Coverage__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__Enum_GoodSky_Clouds_Coverage__pf>(InValue);
	switch(EnumValue)
	{
		case E__Enum_GoodSky_Clouds_Coverage__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[BE7EB5504214ACA37DACD68579557F16]\", \"9EB3571141A4EB92521A79BFC2B5CD37\", \"Super Heavy\")"), Text); break;
		case E__Enum_GoodSky_Clouds_Coverage__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[BE7EB5504214ACA37DACD68579557F16]\", \"E485B53C497959D834C7088A70034595\", \"Default\")"), Text); break;
		case E__Enum_GoodSky_Clouds_Coverage__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[BE7EB5504214ACA37DACD68579557F16]\", \"F6F8CC434FB81ABF49E0B2BBD34F8B00\", \"Middle\")"), Text); break;
		case E__Enum_GoodSky_Clouds_Coverage__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[BE7EB5504214ACA37DACD68579557F16]\", \"620C7EDB422ED85DBC47DE92B28E29FC\", \"Slight\")"), Text); break;
		case E__Enum_GoodSky_Clouds_Coverage__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[BE7EB5504214ACA37DACD68579557F16]\", \"E2E6F61F4E21E4ABDD5244B05A592CF7\", \"Super Slight\")"), Text); break;
		case E__Enum_GoodSky_Clouds_Coverage__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[BE7EB5504214ACA37DACD68579557F16]\", \"B748CA3D4F63342AA79A63988A883087\", \"Clear\")"), Text); break;
		case E__Enum_GoodSky_Clouds_Coverage__pf::E__Enum_GoodSky_Clouds_Coverage__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Enum Good Sky Clouds MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
