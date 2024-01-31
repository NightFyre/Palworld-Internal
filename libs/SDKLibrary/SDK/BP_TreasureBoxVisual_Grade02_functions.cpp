#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TreasureBoxVisual_Grade02.BP_TreasureBoxVisual_Grade02_C
// (Actor)

class UClass* ABP_TreasureBoxVisual_Grade02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TreasureBoxVisual_Grade02_C");

	return Clss;
}


// BP_TreasureBoxVisual_Grade02_C BP_TreasureBoxVisual_Grade02.Default__BP_TreasureBoxVisual_Grade02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TreasureBoxVisual_Grade02_C* ABP_TreasureBoxVisual_Grade02_C::GetDefaultObj()
{
	static class ABP_TreasureBoxVisual_Grade02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TreasureBoxVisual_Grade02_C*>(ABP_TreasureBoxVisual_Grade02_C::StaticClass()->DefaultObject);

	return Default;
}

}


