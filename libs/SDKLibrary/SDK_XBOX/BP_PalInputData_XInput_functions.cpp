#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalInputData_XInput.BP_PalInputData_XInput_C
// (None)

class UClass* UBP_PalInputData_XInput_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalInputData_XInput_C");

	return Clss;
}


// BP_PalInputData_XInput_C BP_PalInputData_XInput.Default__BP_PalInputData_XInput_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalInputData_XInput_C* UBP_PalInputData_XInput_C::GetDefaultObj()
{
	static class UBP_PalInputData_XInput_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalInputData_XInput_C*>(UBP_PalInputData_XInput_C::StaticClass()->DefaultObject);

	return Default;
}

}


