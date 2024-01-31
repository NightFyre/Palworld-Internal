#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionHarvesting.BP_ActionHarvesting_C
// (None)

class UClass* UBP_ActionHarvesting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionHarvesting_C");

	return Clss;
}


// BP_ActionHarvesting_C BP_ActionHarvesting.Default__BP_ActionHarvesting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionHarvesting_C* UBP_ActionHarvesting_C::GetDefaultObj()
{
	static class UBP_ActionHarvesting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionHarvesting_C*>(UBP_ActionHarvesting_C::StaticClass()->DefaultObject);

	return Default;
}

}


