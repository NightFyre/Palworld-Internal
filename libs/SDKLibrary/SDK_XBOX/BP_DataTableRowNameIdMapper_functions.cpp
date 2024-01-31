#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DataTableRowNameIdMapper.BP_DataTableRowNameIdMapper_C
// (None)

class UClass* UBP_DataTableRowNameIdMapper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DataTableRowNameIdMapper_C");

	return Clss;
}


// BP_DataTableRowNameIdMapper_C BP_DataTableRowNameIdMapper.Default__BP_DataTableRowNameIdMapper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DataTableRowNameIdMapper_C* UBP_DataTableRowNameIdMapper_C::GetDefaultObj()
{
	static class UBP_DataTableRowNameIdMapper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DataTableRowNameIdMapper_C*>(UBP_DataTableRowNameIdMapper_C::StaticClass()->DefaultObject);

	return Default;
}

}


