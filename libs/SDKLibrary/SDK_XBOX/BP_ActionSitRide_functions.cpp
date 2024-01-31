#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionSitRide.BP_ActionSitRide_C
// (None)

class UClass* UBP_ActionSitRide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionSitRide_C");

	return Clss;
}


// BP_ActionSitRide_C BP_ActionSitRide.Default__BP_ActionSitRide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionSitRide_C* UBP_ActionSitRide_C::GetDefaultObj()
{
	static class UBP_ActionSitRide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionSitRide_C*>(UBP_ActionSitRide_C::StaticClass()->DefaultObject);

	return Default;
}

}


