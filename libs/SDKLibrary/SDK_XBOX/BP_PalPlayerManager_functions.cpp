#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalPlayerManager.BP_PalPlayerManager_C
// (None)

class UClass* UBP_PalPlayerManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalPlayerManager_C");

	return Clss;
}


// BP_PalPlayerManager_C BP_PalPlayerManager.Default__BP_PalPlayerManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalPlayerManager_C* UBP_PalPlayerManager_C::GetDefaultObj()
{
	static class UBP_PalPlayerManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalPlayerManager_C*>(UBP_PalPlayerManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


