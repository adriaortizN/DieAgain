#include "NativizedAssets.h"
#include "colorChannels__pf3652918773.h"
FText E__ColorChannels__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ColorChannels__pf>(InValue);
	switch(EnumValue)
	{
		case E__ColorChannels__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A8BFD9E944383B5CD6A18A946C5ADE2D]\", \"DE219CF64C81EB462969D08BBBA31D2F\", \"Red\")"), Text); break;
		case E__ColorChannels__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A8BFD9E944383B5CD6A18A946C5ADE2D]\", \"C4674830482712786F57E3B94237B163\", \"Green\")"), Text); break;
		case E__ColorChannels__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[A8BFD9E944383B5CD6A18A946C5ADE2D]\", \"4DD65932440972BB11E3D0AADEEAE783\", \"Blue\")"), Text); break;
		case E__ColorChannels__pf::E__ColorChannels__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Color Channels MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
