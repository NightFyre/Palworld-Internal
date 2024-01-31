#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalWorkProgressManager.BP_PalWorkProgressManager_C
// (None)

class UClass* UBP_PalWorkProgressManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalWorkProgressManager_C");

	return Clss;
}


// BP_PalWorkProgressManager_C BP_PalWorkProgressManager.Default__BP_PalWorkProgressManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalWorkProgressManager_C* UBP_PalWorkProgressManager_C::GetDefaultObj()
{
	static class UBP_PalWorkProgressManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalWorkProgressManager_C*>(UBP_PalWorkProgressManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


