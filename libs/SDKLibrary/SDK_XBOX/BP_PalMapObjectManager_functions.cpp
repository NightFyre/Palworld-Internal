#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalMapObjectManager.BP_PalMapObjectManager_C
// (None)

class UClass* UBP_PalMapObjectManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalMapObjectManager_C");

	return Clss;
}


// BP_PalMapObjectManager_C BP_PalMapObjectManager.Default__BP_PalMapObjectManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalMapObjectManager_C* UBP_PalMapObjectManager_C::GetDefaultObj()
{
	static class UBP_PalMapObjectManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalMapObjectManager_C*>(UBP_PalMapObjectManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


