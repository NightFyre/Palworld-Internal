#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SquadNPCSpawner_ForCamp_Hunter_Grass.BP_SquadNPCSpawner_ForCamp_Hunter_Grass_C
// (Actor)

class UClass* ABP_SquadNPCSpawner_ForCamp_Hunter_Grass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SquadNPCSpawner_ForCamp_Hunter_Grass_C");

	return Clss;
}


// BP_SquadNPCSpawner_ForCamp_Hunter_Grass_C BP_SquadNPCSpawner_ForCamp_Hunter_Grass.Default__BP_SquadNPCSpawner_ForCamp_Hunter_Grass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SquadNPCSpawner_ForCamp_Hunter_Grass_C* ABP_SquadNPCSpawner_ForCamp_Hunter_Grass_C::GetDefaultObj()
{
	static class ABP_SquadNPCSpawner_ForCamp_Hunter_Grass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SquadNPCSpawner_ForCamp_Hunter_Grass_C*>(ABP_SquadNPCSpawner_ForCamp_Hunter_Grass_C::StaticClass()->DefaultObject);

	return Default;
}

}


