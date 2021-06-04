#include "NativizedAssets.h"
#include "TypeOfAnim_NF__pf1467883722.h"
FText E__TypeOfAnim_NF__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__TypeOfAnim_NF__pf>(InValue);
	switch(EnumValue)
	{
		case E__TypeOfAnim_NF__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[175A02FF485A6C5B1B6F77BDA88C5A4F]\", \"74AB72C242A464F1EC2B7E9C41C7E992\", \"Warming\")"), Text); break;
		case E__TypeOfAnim_NF__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[175A02FF485A6C5B1B6F77BDA88C5A4F]\", \"B9CEF08845739C112C0167A63A077AC0\", \"Punching\")"), Text); break;
		case E__TypeOfAnim_NF__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[175A02FF485A6C5B1B6F77BDA88C5A4F]\", \"663409DF48EE92DA23255BB2E3505D74\", \"Running\")"), Text); break;
		case E__TypeOfAnim_NF__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[175A02FF485A6C5B1B6F77BDA88C5A4F]\", \"2427F6D2455AC6D0DBD5D69441EC1990\", \"Pain\")"), Text); break;
		case E__TypeOfAnim_NF__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[175A02FF485A6C5B1B6F77BDA88C5A4F]\", \"AFD926A94EEF090D6555F2BAC4588A65\", \"Sitting01\")"), Text); break;
		case E__TypeOfAnim_NF__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[175A02FF485A6C5B1B6F77BDA88C5A4F]\", \"5E4F34D3452AF15694C0558A2C0B781D\", \"Sitting02\")"), Text); break;
		case E__TypeOfAnim_NF__pf::NewEnumerator6: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[175A02FF485A6C5B1B6F77BDA88C5A4F]\", \"EFC917554C81751237DDC1BA48DAD8A4\", \"Sitting03\")"), Text); break;
		case E__TypeOfAnim_NF__pf::E__TypeOfAnim_NF__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Type Of Anim MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
