#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalIncidentSystem.BP_PalIncidentSystem_C
// (None)

class UClass* UBP_PalIncidentSystem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalIncidentSystem_C");

	return Clss;
}


// BP_PalIncidentSystem_C BP_PalIncidentSystem.Default__BP_PalIncidentSystem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalIncidentSystem_C* UBP_PalIncidentSystem_C::GetDefaultObj()
{
	static class UBP_PalIncidentSystem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalIncidentSystem_C*>(UBP_PalIncidentSystem_C::StaticClass()->DefaultObject);

	return Default;
}

}


