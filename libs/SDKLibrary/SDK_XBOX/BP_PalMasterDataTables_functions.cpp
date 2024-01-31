#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalMasterDataTables.BP_PalMasterDataTables_C
// (None)

class UClass* UBP_PalMasterDataTables_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalMasterDataTables_C");

	return Clss;
}


// BP_PalMasterDataTables_C BP_PalMasterDataTables.Default__BP_PalMasterDataTables_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalMasterDataTables_C* UBP_PalMasterDataTables_C::GetDefaultObj()
{
	static class UBP_PalMasterDataTables_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalMasterDataTables_C*>(UBP_PalMasterDataTables_C::StaticClass()->DefaultObject);

	return Default;
}

}


