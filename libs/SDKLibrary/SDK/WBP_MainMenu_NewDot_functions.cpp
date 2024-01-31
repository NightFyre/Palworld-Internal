#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_NewDot.WBP_MainMenu_NewDot_C
// (None)

class UClass* UWBP_MainMenu_NewDot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_NewDot_C");

	return Clss;
}


// WBP_MainMenu_NewDot_C WBP_MainMenu_NewDot.Default__WBP_MainMenu_NewDot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_NewDot_C* UWBP_MainMenu_NewDot_C::GetDefaultObj()
{
	static class UWBP_MainMenu_NewDot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_NewDot_C*>(UWBP_MainMenu_NewDot_C::StaticClass()->DefaultObject);

	return Default;
}

}


