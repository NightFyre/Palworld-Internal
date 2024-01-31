#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BackWeapon_PickAxe.BP_BackWeapon_PickAxe_C
// (Actor)

class UClass* ABP_BackWeapon_PickAxe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BackWeapon_PickAxe_C");

	return Clss;
}


// BP_BackWeapon_PickAxe_C BP_BackWeapon_PickAxe.Default__BP_BackWeapon_PickAxe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BackWeapon_PickAxe_C* ABP_BackWeapon_PickAxe_C::GetDefaultObj()
{
	static class ABP_BackWeapon_PickAxe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BackWeapon_PickAxe_C*>(ABP_BackWeapon_PickAxe_C::StaticClass()->DefaultObject);

	return Default;
}

}


