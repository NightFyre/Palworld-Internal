#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalNPCManager.BP_PalNPCManager_C
// (None)

class UClass* UBP_PalNPCManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalNPCManager_C");

	return Clss;
}


// BP_PalNPCManager_C BP_PalNPCManager.Default__BP_PalNPCManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalNPCManager_C* UBP_PalNPCManager_C::GetDefaultObj()
{
	static class UBP_PalNPCManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalNPCManager_C*>(UBP_PalNPCManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


