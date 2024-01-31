#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Title_MenuBG.WBP_Title_MenuBG_C
// (None)

class UClass* UWBP_Title_MenuBG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Title_MenuBG_C");

	return Clss;
}


// WBP_Title_MenuBG_C WBP_Title_MenuBG.Default__WBP_Title_MenuBG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Title_MenuBG_C* UWBP_Title_MenuBG_C::GetDefaultObj()
{
	static class UWBP_Title_MenuBG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Title_MenuBG_C*>(UWBP_Title_MenuBG_C::StaticClass()->DefaultObject);

	return Default;
}

}


