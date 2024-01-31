#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HUDDIspatchParameter_DeleteWorld.BP_HUDDIspatchParameter_DeleteWorld_C
// (None)

class UClass* UBP_HUDDIspatchParameter_DeleteWorld_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HUDDIspatchParameter_DeleteWorld_C");

	return Clss;
}


// BP_HUDDIspatchParameter_DeleteWorld_C BP_HUDDIspatchParameter_DeleteWorld.Default__BP_HUDDIspatchParameter_DeleteWorld_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HUDDIspatchParameter_DeleteWorld_C* UBP_HUDDIspatchParameter_DeleteWorld_C::GetDefaultObj()
{
	static class UBP_HUDDIspatchParameter_DeleteWorld_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HUDDIspatchParameter_DeleteWorld_C*>(UBP_HUDDIspatchParameter_DeleteWorld_C::StaticClass()->DefaultObject);

	return Default;
}

}


