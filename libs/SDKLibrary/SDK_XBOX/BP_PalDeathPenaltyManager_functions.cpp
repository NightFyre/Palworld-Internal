#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalDeathPenaltyManager.BP_PalDeathPenaltyManager_C
// (None)

class UClass* UBP_PalDeathPenaltyManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalDeathPenaltyManager_C");

	return Clss;
}


// BP_PalDeathPenaltyManager_C BP_PalDeathPenaltyManager.Default__BP_PalDeathPenaltyManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalDeathPenaltyManager_C* UBP_PalDeathPenaltyManager_C::GetDefaultObj()
{
	static class UBP_PalDeathPenaltyManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalDeathPenaltyManager_C*>(UBP_PalDeathPenaltyManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


