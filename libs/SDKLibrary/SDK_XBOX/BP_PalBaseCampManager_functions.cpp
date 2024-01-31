#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalBaseCampManager.BP_PalBaseCampManager_C
// (None)

class UClass* UBP_PalBaseCampManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalBaseCampManager_C");

	return Clss;
}


// BP_PalBaseCampManager_C BP_PalBaseCampManager.Default__BP_PalBaseCampManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalBaseCampManager_C* UBP_PalBaseCampManager_C::GetDefaultObj()
{
	static class UBP_PalBaseCampManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalBaseCampManager_C*>(UBP_PalBaseCampManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


