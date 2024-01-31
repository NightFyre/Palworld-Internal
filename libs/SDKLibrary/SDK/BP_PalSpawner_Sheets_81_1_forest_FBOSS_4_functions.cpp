#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalSpawner_Sheets_81_1_forest_FBOSS_4.BP_PalSpawner_Sheets_81_1_forest_FBOSS_4_C
// (Actor)

class UClass* ABP_PalSpawner_Sheets_81_1_forest_FBOSS_4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalSpawner_Sheets_81_1_forest_FBOSS_4_C");

	return Clss;
}


// BP_PalSpawner_Sheets_81_1_forest_FBOSS_4_C BP_PalSpawner_Sheets_81_1_forest_FBOSS_4.Default__BP_PalSpawner_Sheets_81_1_forest_FBOSS_4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalSpawner_Sheets_81_1_forest_FBOSS_4_C* ABP_PalSpawner_Sheets_81_1_forest_FBOSS_4_C::GetDefaultObj()
{
	static class ABP_PalSpawner_Sheets_81_1_forest_FBOSS_4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalSpawner_Sheets_81_1_forest_FBOSS_4_C*>(ABP_PalSpawner_Sheets_81_1_forest_FBOSS_4_C::StaticClass()->DefaultObject);

	return Default;
}

}


