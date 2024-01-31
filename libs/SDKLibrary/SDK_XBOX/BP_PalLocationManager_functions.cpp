#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalLocationManager.BP_PalLocationManager_C
// (None)

class UClass* UBP_PalLocationManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalLocationManager_C");

	return Clss;
}


// BP_PalLocationManager_C BP_PalLocationManager.Default__BP_PalLocationManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalLocationManager_C* UBP_PalLocationManager_C::GetDefaultObj()
{
	static class UBP_PalLocationManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalLocationManager_C*>(UBP_PalLocationManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


