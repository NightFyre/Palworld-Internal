#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalMapObjectSpawner_Poppy.BP_PalMapObjectSpawner_Poppy_C
// (Actor)

class UClass* ABP_PalMapObjectSpawner_Poppy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalMapObjectSpawner_Poppy_C");

	return Clss;
}


// BP_PalMapObjectSpawner_Poppy_C BP_PalMapObjectSpawner_Poppy.Default__BP_PalMapObjectSpawner_Poppy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalMapObjectSpawner_Poppy_C* ABP_PalMapObjectSpawner_Poppy_C::GetDefaultObj()
{
	static class ABP_PalMapObjectSpawner_Poppy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalMapObjectSpawner_Poppy_C*>(ABP_PalMapObjectSpawner_Poppy_C::StaticClass()->DefaultObject);

	return Default;
}

}


