#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Map_IconDeath.WBP_Map_IconDeath_C
// (None)

class UClass* UWBP_Map_IconDeath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Map_IconDeath_C");

	return Clss;
}


// WBP_Map_IconDeath_C WBP_Map_IconDeath.Default__WBP_Map_IconDeath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Map_IconDeath_C* UWBP_Map_IconDeath_C::GetDefaultObj()
{
	static class UWBP_Map_IconDeath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Map_IconDeath_C*>(UWBP_Map_IconDeath_C::StaticClass()->DefaultObject);

	return Default;
}

}


