#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalIncidentBase.BP_PalIncidentBase_C
// (None)

class UClass* UBP_PalIncidentBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalIncidentBase_C");

	return Clss;
}


// BP_PalIncidentBase_C BP_PalIncidentBase.Default__BP_PalIncidentBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalIncidentBase_C* UBP_PalIncidentBase_C::GetDefaultObj()
{
	static class UBP_PalIncidentBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalIncidentBase_C*>(UBP_PalIncidentBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


