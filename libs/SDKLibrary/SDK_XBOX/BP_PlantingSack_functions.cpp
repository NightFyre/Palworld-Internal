#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlantingSack.BP_PlantingSack_C
// (Actor)

class UClass* ABP_PlantingSack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlantingSack_C");

	return Clss;
}


// BP_PlantingSack_C BP_PlantingSack.Default__BP_PlantingSack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PlantingSack_C* ABP_PlantingSack_C::GetDefaultObj()
{
	static class ABP_PlantingSack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PlantingSack_C*>(ABP_PlantingSack_C::StaticClass()->DefaultObject);

	return Default;
}

}


