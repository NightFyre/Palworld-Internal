#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PettingPreset.BP_PettingPreset_C
// (None)

class UClass* UBP_PettingPreset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PettingPreset_C");

	return Clss;
}


// BP_PettingPreset_C BP_PettingPreset.Default__BP_PettingPreset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PettingPreset_C* UBP_PettingPreset_C::GetDefaultObj()
{
	static class UBP_PettingPreset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PettingPreset_C*>(UBP_PettingPreset_C::StaticClass()->DefaultObject);

	return Default;
}

}


