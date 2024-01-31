#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Title_WorldSettingsInfo.WBP_Title_WorldSettingsInfo_C
// (None)

class UClass* UWBP_Title_WorldSettingsInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Title_WorldSettingsInfo_C");

	return Clss;
}


// WBP_Title_WorldSettingsInfo_C WBP_Title_WorldSettingsInfo.Default__WBP_Title_WorldSettingsInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Title_WorldSettingsInfo_C* UWBP_Title_WorldSettingsInfo_C::GetDefaultObj()
{
	static class UWBP_Title_WorldSettingsInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Title_WorldSettingsInfo_C*>(UWBP_Title_WorldSettingsInfo_C::StaticClass()->DefaultObject);

	return Default;
}

}


