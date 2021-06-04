#include "NativizedAssets.h"
#include "EnumLobbyMusic__pf3349424045.h"
FText E__EnumLobbyMusic__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__EnumLobbyMusic__pf>(InValue);
	switch(EnumValue)
	{
		case E__EnumLobbyMusic__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6D353ADA41F253556A265E9D1E84FD15]\", \"6B66262F47CCCBA37ADDF58BAE876055\", \"Tut\")"), Text); break;
		case E__EnumLobbyMusic__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6D353ADA41F253556A265E9D1E84FD15]\", \"3D91ABAC4D116FA04C871CAFBF2C3203\", \"1\")"), Text); break;
		case E__EnumLobbyMusic__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6D353ADA41F253556A265E9D1E84FD15]\", \"88380FE04EF82F0E78E61BB856CDB4A6\", \"2\")"), Text); break;
		case E__EnumLobbyMusic__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6D353ADA41F253556A265E9D1E84FD15]\", \"E1ED2F614138C0E96059BFBB1135FCCB\", \"3\")"), Text); break;
		case E__EnumLobbyMusic__pf::NewEnumerator6: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6D353ADA41F253556A265E9D1E84FD15]\", \"54DDA908447F71D3C30BA4ADB060FB4A\", \"4\")"), Text); break;
		case E__EnumLobbyMusic__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6D353ADA41F253556A265E9D1E84FD15]\", \"ACF972924FE321D11FA0EEBF99AA4B28\", \"5\")"), Text); break;
		case E__EnumLobbyMusic__pf::NewEnumerator7: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6D353ADA41F253556A265E9D1E84FD15]\", \"7CF5FAC5473AD1DB67F68286798168BC\", \"6\")"), Text); break;
		case E__EnumLobbyMusic__pf::NewEnumerator8: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6D353ADA41F253556A265E9D1E84FD15]\", \"ACAC725D40839C729572D5B8E8B0217C\", \"7\")"), Text); break;
		case E__EnumLobbyMusic__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6D353ADA41F253556A265E9D1E84FD15]\", \"5A7777B344C7770F153C95B0D375412E\", \"8\")"), Text); break;
		case E__EnumLobbyMusic__pf::NewEnumerator9: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6D353ADA41F253556A265E9D1E84FD15]\", \"DE473C784EDB2ADCD8FB4F97895F34EF\", \"9\")"), Text); break;
		case E__EnumLobbyMusic__pf::NewEnumerator10: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6D353ADA41F253556A265E9D1E84FD15]\", \"FA17957C49F3E1C2B9C29B96F0C1F3D6\", \"10\")"), Text); break;
		case E__EnumLobbyMusic__pf::NewEnumerator11: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[6D353ADA41F253556A265E9D1E84FD15]\", \"A9AE93644B5915740DC358AAD60E5CB4\", \"11\")"), Text); break;
		case E__EnumLobbyMusic__pf::E__EnumLobbyMusic__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("Enum Lobby Music MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
