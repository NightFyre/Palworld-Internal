#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalInventoryModel.BP_PalInventoryModel_C
// (None)

class UClass* UBP_PalInventoryModel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalInventoryModel_C");

	return Clss;
}


// BP_PalInventoryModel_C BP_PalInventoryModel.Default__BP_PalInventoryModel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalInventoryModel_C* UBP_PalInventoryModel_C::GetDefaultObj()
{
	static class UBP_PalInventoryModel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalInventoryModel_C*>(UBP_PalInventoryModel_C::StaticClass()->DefaultObject);

	return Default;
}

}


