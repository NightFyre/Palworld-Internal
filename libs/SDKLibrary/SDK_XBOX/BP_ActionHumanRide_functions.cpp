#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionHumanRide.BP_ActionHumanRide_C
// (None)

class UClass* UBP_ActionHumanRide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionHumanRide_C");

	return Clss;
}


// BP_ActionHumanRide_C BP_ActionHumanRide.Default__BP_ActionHumanRide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionHumanRide_C* UBP_ActionHumanRide_C::GetDefaultObj()
{
	static class UBP_ActionHumanRide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionHumanRide_C*>(UBP_ActionHumanRide_C::StaticClass()->DefaultObject);

	return Default;
}

}


