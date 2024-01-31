#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WateringCan.BP_WateringCan_C
// (Actor)

class UClass* ABP_WateringCan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WateringCan_C");

	return Clss;
}


// BP_WateringCan_C BP_WateringCan.Default__BP_WateringCan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WateringCan_C* ABP_WateringCan_C::GetDefaultObj()
{
	static class ABP_WateringCan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WateringCan_C*>(ABP_WateringCan_C::StaticClass()->DefaultObject);

	return Default;
}

}


