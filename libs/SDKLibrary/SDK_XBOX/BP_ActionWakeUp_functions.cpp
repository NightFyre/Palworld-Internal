#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionWakeUp.BP_ActionWakeUp_C
// (None)

class UClass* UBP_ActionWakeUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionWakeUp_C");

	return Clss;
}


// BP_ActionWakeUp_C BP_ActionWakeUp.Default__BP_ActionWakeUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionWakeUp_C* UBP_ActionWakeUp_C::GetDefaultObj()
{
	static class UBP_ActionWakeUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionWakeUp_C*>(UBP_ActionWakeUp_C::StaticClass()->DefaultObject);

	return Default;
}

}


