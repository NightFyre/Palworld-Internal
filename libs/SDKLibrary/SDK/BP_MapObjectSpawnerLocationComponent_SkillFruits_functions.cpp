#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MapObjectSpawnerLocationComponent_SkillFruits.BP_MapObjectSpawnerLocationComponent_SkillFruits_C
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UBP_MapObjectSpawnerLocationComponent_SkillFruits_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MapObjectSpawnerLocationComponent_SkillFruits_C");

	return Clss;
}


// BP_MapObjectSpawnerLocationComponent_SkillFruits_C BP_MapObjectSpawnerLocationComponent_SkillFruits.Default__BP_MapObjectSpawnerLocationComponent_SkillFruits_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MapObjectSpawnerLocationComponent_SkillFruits_C* UBP_MapObjectSpawnerLocationComponent_SkillFruits_C::GetDefaultObj()
{
	static class UBP_MapObjectSpawnerLocationComponent_SkillFruits_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MapObjectSpawnerLocationComponent_SkillFruits_C*>(UBP_MapObjectSpawnerLocationComponent_SkillFruits_C::StaticClass()->DefaultObject);

	return Default;
}

}


