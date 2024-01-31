#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LevelObject_GoddessStatue.BP_LevelObject_GoddessStatue_C
// (Actor)

class UClass* ABP_LevelObject_GoddessStatue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LevelObject_GoddessStatue_C");

	return Clss;
}


// BP_LevelObject_GoddessStatue_C BP_LevelObject_GoddessStatue.Default__BP_LevelObject_GoddessStatue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LevelObject_GoddessStatue_C* ABP_LevelObject_GoddessStatue_C::GetDefaultObj()
{
	static class ABP_LevelObject_GoddessStatue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LevelObject_GoddessStatue_C*>(ABP_LevelObject_GoddessStatue_C::StaticClass()->DefaultObject);

	return Default;
}

}


