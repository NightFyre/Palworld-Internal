#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionRevive.BP_ActionRevive_C
// (None)

class UClass* UBP_ActionRevive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionRevive_C");

	return Clss;
}


// BP_ActionRevive_C BP_ActionRevive.Default__BP_ActionRevive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionRevive_C* UBP_ActionRevive_C::GetDefaultObj()
{
	static class UBP_ActionRevive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionRevive_C*>(UBP_ActionRevive_C::StaticClass()->DefaultObject);

	return Default;
}

}


