#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LowExplosiveModifier.BP_LowExplosiveModifier_C
// (None)

class UClass* UBP_LowExplosiveModifier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LowExplosiveModifier_C");

	return Clss;
}


// BP_LowExplosiveModifier_C BP_LowExplosiveModifier.Default__BP_LowExplosiveModifier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_LowExplosiveModifier_C* UBP_LowExplosiveModifier_C::GetDefaultObj()
{
	static class UBP_LowExplosiveModifier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_LowExplosiveModifier_C*>(UBP_LowExplosiveModifier_C::StaticClass()->DefaultObject);

	return Default;
}

}


