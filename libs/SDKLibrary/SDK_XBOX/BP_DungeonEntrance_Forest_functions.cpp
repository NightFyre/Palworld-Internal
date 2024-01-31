#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DungeonEntrance_Forest.BP_DungeonEntrance_Forest_C
// (Actor)

class UClass* ABP_DungeonEntrance_Forest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DungeonEntrance_Forest_C");

	return Clss;
}


// BP_DungeonEntrance_Forest_C BP_DungeonEntrance_Forest.Default__BP_DungeonEntrance_Forest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DungeonEntrance_Forest_C* ABP_DungeonEntrance_Forest_C::GetDefaultObj()
{
	static class ABP_DungeonEntrance_Forest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DungeonEntrance_Forest_C*>(ABP_DungeonEntrance_Forest_C::StaticClass()->DefaultObject);

	return Default;
}

}


