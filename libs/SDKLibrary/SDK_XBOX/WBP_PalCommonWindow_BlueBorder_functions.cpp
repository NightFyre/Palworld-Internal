#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalCommonWindow_BlueBorder.WBP_PalCommonWindow_BlueBorder_C
// (None)

class UClass* UWBP_PalCommonWindow_BlueBorder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalCommonWindow_BlueBorder_C");

	return Clss;
}


// WBP_PalCommonWindow_BlueBorder_C WBP_PalCommonWindow_BlueBorder.Default__WBP_PalCommonWindow_BlueBorder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalCommonWindow_BlueBorder_C* UWBP_PalCommonWindow_BlueBorder_C::GetDefaultObj()
{
	static class UWBP_PalCommonWindow_BlueBorder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalCommonWindow_BlueBorder_C*>(UWBP_PalCommonWindow_BlueBorder_C::StaticClass()->DefaultObject);

	return Default;
}

}


