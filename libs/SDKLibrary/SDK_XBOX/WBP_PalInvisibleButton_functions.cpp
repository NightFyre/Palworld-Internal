#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalInvisibleButton.WBP_PalInvisibleButton_C
// (None)

class UClass* UWBP_PalInvisibleButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalInvisibleButton_C");

	return Clss;
}


// WBP_PalInvisibleButton_C WBP_PalInvisibleButton.Default__WBP_PalInvisibleButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalInvisibleButton_C* UWBP_PalInvisibleButton_C::GetDefaultObj()
{
	static class UWBP_PalInvisibleButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalInvisibleButton_C*>(UWBP_PalInvisibleButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


