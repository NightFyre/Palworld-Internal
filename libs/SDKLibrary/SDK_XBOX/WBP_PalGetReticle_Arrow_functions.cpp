#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PalGetReticle_Arrow.WBP_PalGetReticle_Arrow_C
// (None)

class UClass* UWBP_PalGetReticle_Arrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PalGetReticle_Arrow_C");

	return Clss;
}


// WBP_PalGetReticle_Arrow_C WBP_PalGetReticle_Arrow.Default__WBP_PalGetReticle_Arrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PalGetReticle_Arrow_C* UWBP_PalGetReticle_Arrow_C::GetDefaultObj()
{
	static class UWBP_PalGetReticle_Arrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PalGetReticle_Arrow_C*>(UWBP_PalGetReticle_Arrow_C::StaticClass()->DefaultObject);

	return Default;
}

}


