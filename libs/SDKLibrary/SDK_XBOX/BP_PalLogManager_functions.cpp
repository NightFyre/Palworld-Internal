#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalLogManager.BP_PalLogManager_C
// (None)

class UClass* UBP_PalLogManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalLogManager_C");

	return Clss;
}


// BP_PalLogManager_C BP_PalLogManager.Default__BP_PalLogManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalLogManager_C* UBP_PalLogManager_C::GetDefaultObj()
{
	static class UBP_PalLogManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalLogManager_C*>(UBP_PalLogManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


