#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalCommonButton.WBP_PalCommonButton_C
// (None)

class UClass* UWBP_PalCommonButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalCommonButton_C");

	return Clss;
}


// WBP_PalCommonButton_C WBP_PalCommonButton.Default__WBP_PalCommonButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalCommonButton_C* UWBP_PalCommonButton_C::GetDefaultObj()
{
	static class UWBP_PalCommonButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalCommonButton_C*>(UWBP_PalCommonButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


