#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TutorialManager.BP_TutorialManager_C
// (None)

class UClass* UBP_TutorialManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TutorialManager_C");

	return Clss;
}


// BP_TutorialManager_C BP_TutorialManager.Default__BP_TutorialManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_TutorialManager_C* UBP_TutorialManager_C::GetDefaultObj()
{
	static class UBP_TutorialManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_TutorialManager_C*>(UBP_TutorialManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


