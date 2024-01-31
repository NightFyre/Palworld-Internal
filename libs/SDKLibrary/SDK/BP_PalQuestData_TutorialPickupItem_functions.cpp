#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalQuestData_TutorialPickupItem.BP_PalQuestData_TutorialPickupItem_C
// (None)

class UClass* UBP_PalQuestData_TutorialPickupItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalQuestData_TutorialPickupItem_C");

	return Clss;
}


// BP_PalQuestData_TutorialPickupItem_C BP_PalQuestData_TutorialPickupItem.Default__BP_PalQuestData_TutorialPickupItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalQuestData_TutorialPickupItem_C* UBP_PalQuestData_TutorialPickupItem_C::GetDefaultObj()
{
	static class UBP_PalQuestData_TutorialPickupItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalQuestData_TutorialPickupItem_C*>(UBP_PalQuestData_TutorialPickupItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


