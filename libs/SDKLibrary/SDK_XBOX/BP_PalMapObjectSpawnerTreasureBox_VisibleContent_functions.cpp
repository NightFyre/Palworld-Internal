#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalMapObjectSpawnerTreasureBox_VisibleContent.BP_PalMapObjectSpawnerTreasureBox_VisibleContent_C
// (Actor)

class UClass* ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalMapObjectSpawnerTreasureBox_VisibleContent_C");

	return Clss;
}


// BP_PalMapObjectSpawnerTreasureBox_VisibleContent_C BP_PalMapObjectSpawnerTreasureBox_VisibleContent.Default__BP_PalMapObjectSpawnerTreasureBox_VisibleContent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_C* ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_C::GetDefaultObj()
{
	static class ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_C*>(ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_C::StaticClass()->DefaultObject);

	return Default;
}

}


