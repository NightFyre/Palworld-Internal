#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DownWidgetParameter.BP_DownWidgetParameter_C
// (None)

class UClass* UBP_DownWidgetParameter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DownWidgetParameter_C");

	return Clss;
}


// BP_DownWidgetParameter_C BP_DownWidgetParameter.Default__BP_DownWidgetParameter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DownWidgetParameter_C* UBP_DownWidgetParameter_C::GetDefaultObj()
{
	static class UBP_DownWidgetParameter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DownWidgetParameter_C*>(UBP_DownWidgetParameter_C::StaticClass()->DefaultObject);

	return Default;
}

}


