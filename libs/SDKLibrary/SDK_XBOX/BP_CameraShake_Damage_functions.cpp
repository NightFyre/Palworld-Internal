#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CameraShake_Damage.BP_CameraShake_Damage_C
// (None)

class UClass* UBP_CameraShake_Damage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CameraShake_Damage_C");

	return Clss;
}


// BP_CameraShake_Damage_C BP_CameraShake_Damage.Default__BP_CameraShake_Damage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CameraShake_Damage_C* UBP_CameraShake_Damage_C::GetDefaultObj()
{
	static class UBP_CameraShake_Damage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CameraShake_Damage_C*>(UBP_CameraShake_Damage_C::StaticClass()->DefaultObject);

	return Default;
}

}


