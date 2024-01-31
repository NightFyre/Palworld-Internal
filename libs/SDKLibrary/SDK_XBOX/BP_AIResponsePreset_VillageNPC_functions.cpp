#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIResponsePreset_VillageNPC.BP_AIResponsePreset_VillageNPC_C
// (None)

class UClass* UBP_AIResponsePreset_VillageNPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIResponsePreset_VillageNPC_C");

	return Clss;
}


// BP_AIResponsePreset_VillageNPC_C BP_AIResponsePreset_VillageNPC.Default__BP_AIResponsePreset_VillageNPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIResponsePreset_VillageNPC_C* UBP_AIResponsePreset_VillageNPC_C::GetDefaultObj()
{
	static class UBP_AIResponsePreset_VillageNPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIResponsePreset_VillageNPC_C*>(UBP_AIResponsePreset_VillageNPC_C::StaticClass()->DefaultObject);

	return Default;
}

}


