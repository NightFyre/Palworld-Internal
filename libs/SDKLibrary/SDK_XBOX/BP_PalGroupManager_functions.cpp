#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalGroupManager.BP_PalGroupManager_C
// (None)

class UClass* UBP_PalGroupManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalGroupManager_C");

	return Clss;
}


// BP_PalGroupManager_C BP_PalGroupManager.Default__BP_PalGroupManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalGroupManager_C* UBP_PalGroupManager_C::GetDefaultObj()
{
	static class UBP_PalGroupManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalGroupManager_C*>(UBP_PalGroupManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


