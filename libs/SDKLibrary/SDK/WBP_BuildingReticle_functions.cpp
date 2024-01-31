#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_BuildingReticle.WBP_BuildingReticle_C
// (None)

class UClass* UWBP_BuildingReticle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_BuildingReticle_C");

	return Clss;
}


// WBP_BuildingReticle_C WBP_BuildingReticle.Default__WBP_BuildingReticle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_BuildingReticle_C* UWBP_BuildingReticle_C::GetDefaultObj()
{
	static class UWBP_BuildingReticle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_BuildingReticle_C*>(UWBP_BuildingReticle_C::StaticClass()->DefaultObject);

	return Default;
}

}


