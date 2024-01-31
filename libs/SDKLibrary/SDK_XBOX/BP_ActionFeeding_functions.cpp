#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionFeeding.BP_ActionFeeding_C
// (None)

class UClass* UBP_ActionFeeding_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionFeeding_C");

	return Clss;
}


// BP_ActionFeeding_C BP_ActionFeeding.Default__BP_ActionFeeding_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionFeeding_C* UBP_ActionFeeding_C::GetDefaultObj()
{
	static class UBP_ActionFeeding_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionFeeding_C*>(UBP_ActionFeeding_C::StaticClass()->DefaultObject);

	return Default;
}

}


