#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionMeleeSkill.BP_ActionMeleeSkill_C
// (None)

class UClass* UBP_ActionMeleeSkill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionMeleeSkill_C");

	return Clss;
}


// BP_ActionMeleeSkill_C BP_ActionMeleeSkill.Default__BP_ActionMeleeSkill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionMeleeSkill_C* UBP_ActionMeleeSkill_C::GetDefaultObj()
{
	static class UBP_ActionMeleeSkill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionMeleeSkill_C*>(UBP_ActionMeleeSkill_C::StaticClass()->DefaultObject);

	return Default;
}

}


