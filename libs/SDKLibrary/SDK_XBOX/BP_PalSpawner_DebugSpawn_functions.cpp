#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalSpawner_DebugSpawn.BP_PalSpawner_DebugSpawn_C
// (Actor)

class UClass* ABP_PalSpawner_DebugSpawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalSpawner_DebugSpawn_C");

	return Clss;
}


// BP_PalSpawner_DebugSpawn_C BP_PalSpawner_DebugSpawn.Default__BP_PalSpawner_DebugSpawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalSpawner_DebugSpawn_C* ABP_PalSpawner_DebugSpawn_C::GetDefaultObj()
{
	static class ABP_PalSpawner_DebugSpawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalSpawner_DebugSpawn_C*>(ABP_PalSpawner_DebugSpawn_C::StaticClass()->DefaultObject);

	return Default;
}

}


