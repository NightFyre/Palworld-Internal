#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildingUIParameter.BP_BuildingUIParameter_C
// (None)

class UClass* UBP_BuildingUIParameter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildingUIParameter_C");

	return Clss;
}


// BP_BuildingUIParameter_C BP_BuildingUIParameter.Default__BP_BuildingUIParameter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BuildingUIParameter_C* UBP_BuildingUIParameter_C::GetDefaultObj()
{
	static class UBP_BuildingUIParameter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BuildingUIParameter_C*>(UBP_BuildingUIParameter_C::StaticClass()->DefaultObject);

	return Default;
}

}


