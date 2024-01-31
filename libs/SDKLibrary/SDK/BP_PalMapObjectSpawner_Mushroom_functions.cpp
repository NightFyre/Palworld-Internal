#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalMapObjectSpawner_Mushroom.BP_PalMapObjectSpawner_Mushroom_C
// (Actor)

class UClass* ABP_PalMapObjectSpawner_Mushroom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalMapObjectSpawner_Mushroom_C");

	return Clss;
}


// BP_PalMapObjectSpawner_Mushroom_C BP_PalMapObjectSpawner_Mushroom.Default__BP_PalMapObjectSpawner_Mushroom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalMapObjectSpawner_Mushroom_C* ABP_PalMapObjectSpawner_Mushroom_C::GetDefaultObj()
{
	static class ABP_PalMapObjectSpawner_Mushroom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalMapObjectSpawner_Mushroom_C*>(ABP_PalMapObjectSpawner_Mushroom_C::StaticClass()->DefaultObject);

	return Default;
}

}


