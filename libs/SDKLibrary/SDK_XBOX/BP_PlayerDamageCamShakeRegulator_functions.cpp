#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerDamageCamShakeRegulator.BP_PlayerDamageCamShakeRegulator_C
// (None)

class UClass* UBP_PlayerDamageCamShakeRegulator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerDamageCamShakeRegulator_C");

	return Clss;
}


// BP_PlayerDamageCamShakeRegulator_C BP_PlayerDamageCamShakeRegulator.Default__BP_PlayerDamageCamShakeRegulator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PlayerDamageCamShakeRegulator_C* UBP_PlayerDamageCamShakeRegulator_C::GetDefaultObj()
{
	static class UBP_PlayerDamageCamShakeRegulator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PlayerDamageCamShakeRegulator_C*>(UBP_PlayerDamageCamShakeRegulator_C::StaticClass()->DefaultObject);

	return Default;
}

}


