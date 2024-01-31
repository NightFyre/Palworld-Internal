#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HUDDispatchParameter_WorldNameInput.BP_HUDDispatchParameter_WorldNameInput_C
// (None)

class UClass* UBP_HUDDispatchParameter_WorldNameInput_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HUDDispatchParameter_WorldNameInput_C");

	return Clss;
}


// BP_HUDDispatchParameter_WorldNameInput_C BP_HUDDispatchParameter_WorldNameInput.Default__BP_HUDDispatchParameter_WorldNameInput_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HUDDispatchParameter_WorldNameInput_C* UBP_HUDDispatchParameter_WorldNameInput_C::GetDefaultObj()
{
	static class UBP_HUDDispatchParameter_WorldNameInput_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HUDDispatchParameter_WorldNameInput_C*>(UBP_HUDDispatchParameter_WorldNameInput_C::StaticClass()->DefaultObject);

	return Default;
}

}


