#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Map_IconDungeon.WBP_Map_IconDungeon_C
// (None)

class UClass* UWBP_Map_IconDungeon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Map_IconDungeon_C");

	return Clss;
}


// WBP_Map_IconDungeon_C WBP_Map_IconDungeon.Default__WBP_Map_IconDungeon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Map_IconDungeon_C* UWBP_Map_IconDungeon_C::GetDefaultObj()
{
	static class UWBP_Map_IconDungeon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Map_IconDungeon_C*>(UWBP_Map_IconDungeon_C::StaticClass()->DefaultObject);

	return Default;
}

}


