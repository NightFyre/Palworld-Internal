#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Reticle_Cancel.WBP_Reticle_Cancel_C
// (None)

class UClass* UWBP_Reticle_Cancel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Reticle_Cancel_C");

	return Clss;
}


// WBP_Reticle_Cancel_C WBP_Reticle_Cancel.Default__WBP_Reticle_Cancel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Reticle_Cancel_C* UWBP_Reticle_Cancel_C::GetDefaultObj()
{
	static class UWBP_Reticle_Cancel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Reticle_Cancel_C*>(UWBP_Reticle_Cancel_C::StaticClass()->DefaultObject);

	return Default;
}

}


