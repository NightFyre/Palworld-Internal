#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalSaveGameManager.BP_PalSaveGameManager_C
// (None)

class UClass* UBP_PalSaveGameManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalSaveGameManager_C");

	return Clss;
}


// BP_PalSaveGameManager_C BP_PalSaveGameManager.Default__BP_PalSaveGameManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalSaveGameManager_C* UBP_PalSaveGameManager_C::GetDefaultObj()
{
	static class UBP_PalSaveGameManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalSaveGameManager_C*>(UBP_PalSaveGameManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


