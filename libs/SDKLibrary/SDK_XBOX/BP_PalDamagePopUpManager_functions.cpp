#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalDamagePopUpManager.BP_PalDamagePopUpManager_C
// (None)

class UClass* UBP_PalDamagePopUpManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalDamagePopUpManager_C");

	return Clss;
}


// BP_PalDamagePopUpManager_C BP_PalDamagePopUpManager.Default__BP_PalDamagePopUpManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalDamagePopUpManager_C* UBP_PalDamagePopUpManager_C::GetDefaultObj()
{
	static class UBP_PalDamagePopUpManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalDamagePopUpManager_C*>(UBP_PalDamagePopUpManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


