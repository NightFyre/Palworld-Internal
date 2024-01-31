#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalItemContainerManager.BP_PalItemContainerManager_C
// (None)

class UClass* UBP_PalItemContainerManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalItemContainerManager_C");

	return Clss;
}


// BP_PalItemContainerManager_C BP_PalItemContainerManager.Default__BP_PalItemContainerManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalItemContainerManager_C* UBP_PalItemContainerManager_C::GetDefaultObj()
{
	static class UBP_PalItemContainerManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalItemContainerManager_C*>(UBP_PalItemContainerManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


