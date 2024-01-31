#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeaponCameraShake.BP_WeaponCameraShake_C
// (None)

class UClass* UBP_WeaponCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeaponCameraShake_C");

	return Clss;
}


// BP_WeaponCameraShake_C BP_WeaponCameraShake.Default__BP_WeaponCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_WeaponCameraShake_C* UBP_WeaponCameraShake_C::GetDefaultObj()
{
	static class UBP_WeaponCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_WeaponCameraShake_C*>(UBP_WeaponCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


