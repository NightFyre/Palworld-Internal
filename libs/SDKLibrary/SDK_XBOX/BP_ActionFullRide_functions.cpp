#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionFullRide.BP_ActionFullRide_C
// (None)

class UClass* UBP_ActionFullRide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionFullRide_C");

	return Clss;
}


// BP_ActionFullRide_C BP_ActionFullRide.Default__BP_ActionFullRide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionFullRide_C* UBP_ActionFullRide_C::GetDefaultObj()
{
	static class UBP_ActionFullRide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionFullRide_C*>(UBP_ActionFullRide_C::StaticClass()->DefaultObject);

	return Default;
}

}


