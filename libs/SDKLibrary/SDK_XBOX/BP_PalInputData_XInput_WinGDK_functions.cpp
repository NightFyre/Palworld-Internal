#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalInputData_XInput_WinGDK.BP_PalInputData_XInput_WinGDK_C
// (None)

class UClass* UBP_PalInputData_XInput_WinGDK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalInputData_XInput_WinGDK_C");

	return Clss;
}


// BP_PalInputData_XInput_WinGDK_C BP_PalInputData_XInput_WinGDK.Default__BP_PalInputData_XInput_WinGDK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalInputData_XInput_WinGDK_C* UBP_PalInputData_XInput_WinGDK_C::GetDefaultObj()
{
	static class UBP_PalInputData_XInput_WinGDK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalInputData_XInput_WinGDK_C*>(UBP_PalInputData_XInput_WinGDK_C::StaticClass()->DefaultObject);

	return Default;
}

}


