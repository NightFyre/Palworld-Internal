#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionWorkAttack.BP_ActionWorkAttack_C
// (None)

class UClass* UBP_ActionWorkAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionWorkAttack_C");

	return Clss;
}


// BP_ActionWorkAttack_C BP_ActionWorkAttack.Default__BP_ActionWorkAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionWorkAttack_C* UBP_ActionWorkAttack_C::GetDefaultObj()
{
	static class UBP_ActionWorkAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionWorkAttack_C*>(UBP_ActionWorkAttack_C::StaticClass()->DefaultObject);

	return Default;
}

}


