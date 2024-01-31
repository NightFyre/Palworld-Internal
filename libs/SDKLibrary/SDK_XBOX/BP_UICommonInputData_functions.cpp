#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UICommonInputData.BP_UICommonInputData_C
// (None)

class UClass* UBP_UICommonInputData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UICommonInputData_C");

	return Clss;
}


// BP_UICommonInputData_C BP_UICommonInputData.Default__BP_UICommonInputData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UICommonInputData_C* UBP_UICommonInputData_C::GetDefaultObj()
{
	static class UBP_UICommonInputData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UICommonInputData_C*>(UBP_UICommonInputData_C::StaticClass()->DefaultObject);

	return Default;
}

}


