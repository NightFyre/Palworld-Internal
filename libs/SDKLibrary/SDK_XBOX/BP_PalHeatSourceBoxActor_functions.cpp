#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalHeatSourceBoxActor.BP_PalHeatSourceBoxActor_C
// (Actor)

class UClass* ABP_PalHeatSourceBoxActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalHeatSourceBoxActor_C");

	return Clss;
}


// BP_PalHeatSourceBoxActor_C BP_PalHeatSourceBoxActor.Default__BP_PalHeatSourceBoxActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalHeatSourceBoxActor_C* ABP_PalHeatSourceBoxActor_C::GetDefaultObj()
{
	static class ABP_PalHeatSourceBoxActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalHeatSourceBoxActor_C*>(ABP_PalHeatSourceBoxActor_C::StaticClass()->DefaultObject);

	return Default;
}

}


