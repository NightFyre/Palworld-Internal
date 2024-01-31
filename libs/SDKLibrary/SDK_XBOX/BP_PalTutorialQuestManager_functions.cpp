#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalTutorialQuestManager.BP_PalTutorialQuestManager_C
// (None)

class UClass* UBP_PalTutorialQuestManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalTutorialQuestManager_C");

	return Clss;
}


// BP_PalTutorialQuestManager_C BP_PalTutorialQuestManager.Default__BP_PalTutorialQuestManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalTutorialQuestManager_C* UBP_PalTutorialQuestManager_C::GetDefaultObj()
{
	static class UBP_PalTutorialQuestManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalTutorialQuestManager_C*>(UBP_PalTutorialQuestManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


