#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DungeonEntrance_Desert.BP_DungeonEntrance_Desert_C
// (Actor)

class UClass* ABP_DungeonEntrance_Desert_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DungeonEntrance_Desert_C");

	return Clss;
}


// BP_DungeonEntrance_Desert_C BP_DungeonEntrance_Desert.Default__BP_DungeonEntrance_Desert_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DungeonEntrance_Desert_C* ABP_DungeonEntrance_Desert_C::GetDefaultObj()
{
	static class ABP_DungeonEntrance_Desert_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DungeonEntrance_Desert_C*>(ABP_DungeonEntrance_Desert_C::StaticClass()->DefaultObject);

	return Default;
}

}


