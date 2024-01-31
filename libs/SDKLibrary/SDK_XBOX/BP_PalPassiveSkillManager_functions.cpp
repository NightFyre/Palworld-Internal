#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalPassiveSkillManager.BP_PalPassiveSkillManager_C
// (None)

class UClass* UBP_PalPassiveSkillManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalPassiveSkillManager_C");

	return Clss;
}


// BP_PalPassiveSkillManager_C BP_PalPassiveSkillManager.Default__BP_PalPassiveSkillManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalPassiveSkillManager_C* UBP_PalPassiveSkillManager_C::GetDefaultObj()
{
	static class UBP_PalPassiveSkillManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalPassiveSkillManager_C*>(UBP_PalPassiveSkillManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


