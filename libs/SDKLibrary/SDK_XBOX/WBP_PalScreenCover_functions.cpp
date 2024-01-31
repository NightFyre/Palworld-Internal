#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalScreenCover.WBP_PalScreenCover_C
// (None)

class UClass* UWBP_PalScreenCover_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalScreenCover_C");

	return Clss;
}


// WBP_PalScreenCover_C WBP_PalScreenCover.Default__WBP_PalScreenCover_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalScreenCover_C* UWBP_PalScreenCover_C::GetDefaultObj()
{
	static class UWBP_PalScreenCover_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalScreenCover_C*>(UWBP_PalScreenCover_C::StaticClass()->DefaultObject);

	return Default;
}

}


