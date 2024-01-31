#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalAdminSpectator.BP_PalAdminSpectator_C
// (Actor, Pawn)

class UClass* ABP_PalAdminSpectator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalAdminSpectator_C");

	return Clss;
}


// BP_PalAdminSpectator_C BP_PalAdminSpectator.Default__BP_PalAdminSpectator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalAdminSpectator_C* ABP_PalAdminSpectator_C::GetDefaultObj()
{
	static class ABP_PalAdminSpectator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalAdminSpectator_C*>(ABP_PalAdminSpectator_C::StaticClass()->DefaultObject);

	return Default;
}

}


