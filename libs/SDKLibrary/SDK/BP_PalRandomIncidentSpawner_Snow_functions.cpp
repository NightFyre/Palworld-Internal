#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalRandomIncidentSpawner_Snow.BP_PalRandomIncidentSpawner_Snow_C
// (Actor)

class UClass* ABP_PalRandomIncidentSpawner_Snow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalRandomIncidentSpawner_Snow_C");

	return Clss;
}


// BP_PalRandomIncidentSpawner_Snow_C BP_PalRandomIncidentSpawner_Snow.Default__BP_PalRandomIncidentSpawner_Snow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalRandomIncidentSpawner_Snow_C* ABP_PalRandomIncidentSpawner_Snow_C::GetDefaultObj()
{
	static class ABP_PalRandomIncidentSpawner_Snow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalRandomIncidentSpawner_Snow_C*>(ABP_PalRandomIncidentSpawner_Snow_C::StaticClass()->DefaultObject);

	return Default;
}

}


