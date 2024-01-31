#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionShootSkill.BP_ActionShootSkill_C
// (None)

class UClass* UBP_ActionShootSkill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionShootSkill_C");

	return Clss;
}


// BP_ActionShootSkill_C BP_ActionShootSkill.Default__BP_ActionShootSkill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionShootSkill_C* UBP_ActionShootSkill_C::GetDefaultObj()
{
	static class UBP_ActionShootSkill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionShootSkill_C*>(UBP_ActionShootSkill_C::StaticClass()->DefaultObject);

	return Default;
}

}


