#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalWorldSettings.BP_PalWorldSettings_C
// (Actor)

class UClass* ABP_PalWorldSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalWorldSettings_C");

	return Clss;
}


// BP_PalWorldSettings_C BP_PalWorldSettings.Default__BP_PalWorldSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalWorldSettings_C* ABP_PalWorldSettings_C::GetDefaultObj()
{
	static class ABP_PalWorldSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalWorldSettings_C*>(ABP_PalWorldSettings_C::StaticClass()->DefaultObject);

	return Default;
}

}


