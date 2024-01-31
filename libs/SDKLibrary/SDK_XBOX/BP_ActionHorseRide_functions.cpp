#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionHorseRide.BP_ActionHorseRide_C
// (None)

class UClass* UBP_ActionHorseRide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionHorseRide_C");

	return Clss;
}


// BP_ActionHorseRide_C BP_ActionHorseRide.Default__BP_ActionHorseRide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionHorseRide_C* UBP_ActionHorseRide_C::GetDefaultObj()
{
	static class UBP_ActionHorseRide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionHorseRide_C*>(UBP_ActionHorseRide_C::StaticClass()->DefaultObject);

	return Default;
}

}


