#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalMapObjectSpawner_SmallStone.BP_PalMapObjectSpawner_SmallStone_C
// (Actor)

class UClass* ABP_PalMapObjectSpawner_SmallStone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalMapObjectSpawner_SmallStone_C");

	return Clss;
}


// BP_PalMapObjectSpawner_SmallStone_C BP_PalMapObjectSpawner_SmallStone.Default__BP_PalMapObjectSpawner_SmallStone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalMapObjectSpawner_SmallStone_C* ABP_PalMapObjectSpawner_SmallStone_C::GetDefaultObj()
{
	static class ABP_PalMapObjectSpawner_SmallStone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalMapObjectSpawner_SmallStone_C*>(ABP_PalMapObjectSpawner_SmallStone_C::StaticClass()->DefaultObject);

	return Default;
}

}


