#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DungeonFixedEntrance_forest_5.BP_DungeonFixedEntrance_forest_5_C
// (Actor)

class UClass* ABP_DungeonFixedEntrance_forest_5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DungeonFixedEntrance_forest_5_C");

	return Clss;
}


// BP_DungeonFixedEntrance_forest_5_C BP_DungeonFixedEntrance_forest_5.Default__BP_DungeonFixedEntrance_forest_5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DungeonFixedEntrance_forest_5_C* ABP_DungeonFixedEntrance_forest_5_C::GetDefaultObj()
{
	static class ABP_DungeonFixedEntrance_forest_5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DungeonFixedEntrance_forest_5_C*>(ABP_DungeonFixedEntrance_forest_5_C::StaticClass()->DefaultObject);

	return Default;
}

}


