#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BackWeapon_PumpActionShotgun.BP_BackWeapon_PumpActionShotgun_C
// (Actor)

class UClass* ABP_BackWeapon_PumpActionShotgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BackWeapon_PumpActionShotgun_C");

	return Clss;
}


// BP_BackWeapon_PumpActionShotgun_C BP_BackWeapon_PumpActionShotgun.Default__BP_BackWeapon_PumpActionShotgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BackWeapon_PumpActionShotgun_C* ABP_BackWeapon_PumpActionShotgun_C::GetDefaultObj()
{
	static class ABP_BackWeapon_PumpActionShotgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BackWeapon_PumpActionShotgun_C*>(ABP_BackWeapon_PumpActionShotgun_C::StaticClass()->DefaultObject);

	return Default;
}

}


