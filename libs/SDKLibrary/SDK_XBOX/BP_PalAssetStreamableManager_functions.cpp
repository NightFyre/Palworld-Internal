#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalAssetStreamableManager.BP_PalAssetStreamableManager_C
// (None)

class UClass* UBP_PalAssetStreamableManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalAssetStreamableManager_C");

	return Clss;
}


// BP_PalAssetStreamableManager_C BP_PalAssetStreamableManager.Default__BP_PalAssetStreamableManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalAssetStreamableManager_C* UBP_PalAssetStreamableManager_C::GetDefaultObj()
{
	static class UBP_PalAssetStreamableManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalAssetStreamableManager_C*>(UBP_PalAssetStreamableManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


