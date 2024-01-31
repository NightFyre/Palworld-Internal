#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalCommonNewMark_0.WBP_PalCommonNewMark_0_C
// (None)

class UClass* UWBP_PalCommonNewMark_0_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalCommonNewMark_0_C");

	return Clss;
}


// WBP_PalCommonNewMark_0_C WBP_PalCommonNewMark_0.Default__WBP_PalCommonNewMark_0_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalCommonNewMark_0_C* UWBP_PalCommonNewMark_0_C::GetDefaultObj()
{
	static class UWBP_PalCommonNewMark_0_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalCommonNewMark_0_C*>(UWBP_PalCommonNewMark_0_C::StaticClass()->DefaultObject);

	return Default;
}

}


