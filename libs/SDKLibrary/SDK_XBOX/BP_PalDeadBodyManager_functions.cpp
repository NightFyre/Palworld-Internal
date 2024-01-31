#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalDeadBodyManager.BP_PalDeadBodyManager_C
// (None)

class UClass* UBP_PalDeadBodyManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalDeadBodyManager_C");

	return Clss;
}


// BP_PalDeadBodyManager_C BP_PalDeadBodyManager.Default__BP_PalDeadBodyManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalDeadBodyManager_C* UBP_PalDeadBodyManager_C::GetDefaultObj()
{
	static class UBP_PalDeadBodyManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalDeadBodyManager_C*>(UBP_PalDeadBodyManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


