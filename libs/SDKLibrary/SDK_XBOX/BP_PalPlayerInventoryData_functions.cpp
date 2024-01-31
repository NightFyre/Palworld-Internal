#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalPlayerInventoryData.BP_PalPlayerInventoryData_C
// (None)

class UClass* UBP_PalPlayerInventoryData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalPlayerInventoryData_C");

	return Clss;
}


// BP_PalPlayerInventoryData_C BP_PalPlayerInventoryData.Default__BP_PalPlayerInventoryData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalPlayerInventoryData_C* UBP_PalPlayerInventoryData_C::GetDefaultObj()
{
	static class UBP_PalPlayerInventoryData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalPlayerInventoryData_C*>(UBP_PalPlayerInventoryData_C::StaticClass()->DefaultObject);

	return Default;
}

}


