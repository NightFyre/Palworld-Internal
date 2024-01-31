#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BackWeaponBase.BP_BackWeaponBase_C
// (Actor)

class UClass* ABP_BackWeaponBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BackWeaponBase_C");

	return Clss;
}


// BP_BackWeaponBase_C BP_BackWeaponBase.Default__BP_BackWeaponBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BackWeaponBase_C* ABP_BackWeaponBase_C::GetDefaultObj()
{
	static class ABP_BackWeaponBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BackWeaponBase_C*>(ABP_BackWeaponBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


