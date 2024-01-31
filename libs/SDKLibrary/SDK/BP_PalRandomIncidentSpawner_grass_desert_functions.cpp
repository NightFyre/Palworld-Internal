#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalRandomIncidentSpawner_grass_desert.BP_PalRandomIncidentSpawner_grass_desert_C
// (Actor)

class UClass* ABP_PalRandomIncidentSpawner_grass_desert_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalRandomIncidentSpawner_grass_desert_C");

	return Clss;
}


// BP_PalRandomIncidentSpawner_grass_desert_C BP_PalRandomIncidentSpawner_grass_desert.Default__BP_PalRandomIncidentSpawner_grass_desert_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalRandomIncidentSpawner_grass_desert_C* ABP_PalRandomIncidentSpawner_grass_desert_C::GetDefaultObj()
{
	static class ABP_PalRandomIncidentSpawner_grass_desert_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalRandomIncidentSpawner_grass_desert_C*>(ABP_PalRandomIncidentSpawner_grass_desert_C::StaticClass()->DefaultObject);

	return Default;
}

}


