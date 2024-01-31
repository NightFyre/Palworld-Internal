#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DungeonPortalMarker_Desert.BP_DungeonPortalMarker_Desert_C
// (Actor)

class UClass* ABP_DungeonPortalMarker_Desert_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DungeonPortalMarker_Desert_C");

	return Clss;
}


// BP_DungeonPortalMarker_Desert_C BP_DungeonPortalMarker_Desert.Default__BP_DungeonPortalMarker_Desert_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DungeonPortalMarker_Desert_C* ABP_DungeonPortalMarker_Desert_C::GetDefaultObj()
{
	static class ABP_DungeonPortalMarker_Desert_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DungeonPortalMarker_Desert_C*>(ABP_DungeonPortalMarker_Desert_C::StaticClass()->DefaultObject);

	return Default;
}

}


