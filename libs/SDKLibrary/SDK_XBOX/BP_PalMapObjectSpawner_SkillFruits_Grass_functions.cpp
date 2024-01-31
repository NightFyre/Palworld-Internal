#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalMapObjectSpawner_SkillFruits_Grass.BP_PalMapObjectSpawner_SkillFruits_Grass_C
// (Actor)

class UClass* ABP_PalMapObjectSpawner_SkillFruits_Grass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalMapObjectSpawner_SkillFruits_Grass_C");

	return Clss;
}


// BP_PalMapObjectSpawner_SkillFruits_Grass_C BP_PalMapObjectSpawner_SkillFruits_Grass.Default__BP_PalMapObjectSpawner_SkillFruits_Grass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalMapObjectSpawner_SkillFruits_Grass_C* ABP_PalMapObjectSpawner_SkillFruits_Grass_C::GetDefaultObj()
{
	static class ABP_PalMapObjectSpawner_SkillFruits_Grass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalMapObjectSpawner_SkillFruits_Grass_C*>(ABP_PalMapObjectSpawner_SkillFruits_Grass_C::StaticClass()->DefaultObject);

	return Default;
}

}


