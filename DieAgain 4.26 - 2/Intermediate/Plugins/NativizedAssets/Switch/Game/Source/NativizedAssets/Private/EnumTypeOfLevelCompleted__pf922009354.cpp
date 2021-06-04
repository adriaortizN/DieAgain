#include "NativizedAssets.h"
#include "EnumTypeOfLevelCompleted__pf922009354.h"
FText E__EnumTypeOfLevelCompleted__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__EnumTypeOfLevelCompleted__pf>(InValue);
	switch(EnumValue)
	{
		case E__EnumTypeOfLevelCompleted__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[F8543463452087B31C59219B7681A368]\", \"C2B97BE64F053B948609B2967BCCAB8C\", \"KillThemAll\")"), Text); break;
		case E__EnumTypeOfLevelCompleted__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[F8543463452087B31C59219B7681A368]\", \"8B64A84F47FE850B93EC17B6BDBA2E1E\", \"KillTarget\")"), Text); break;
		case E__EnumTypeOfLevelCompleted__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[F8543463452087B31C59219B7681A368]\", \"94F1502245502E27AB401B8E6D22D014\", \"GoToLocation\")"), Text); break;
		case E__EnumTypeOfLevelCompleted__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[F8543463452087B31C59219B7681A368]\", \"3BAD0CB54024A6B37760ED9E7A6296B6\", \"Survive\")"), Text); break;
		case E__EnumTypeOfLevelCompleted__pf::E__EnumTypeOfLevelCompleted__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Enum Type Of Level Completed MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
