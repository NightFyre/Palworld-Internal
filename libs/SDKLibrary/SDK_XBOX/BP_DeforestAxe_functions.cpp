#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DeforestAxe.BP_DeforestAxe_C
// (Actor)

class UClass* ABP_DeforestAxe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DeforestAxe_C");

	return Clss;
}


// BP_DeforestAxe_C BP_DeforestAxe.Default__BP_DeforestAxe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DeforestAxe_C* ABP_DeforestAxe_C::GetDefaultObj()
{
	static class ABP_DeforestAxe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DeforestAxe_C*>(ABP_DeforestAxe_C::StaticClass()->DefaultObject);

	return Default;
}

}


