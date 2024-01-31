#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_WorldMap_Icon_NotImpl.WBP_WorldMap_Icon_NotImpl_C
// (None)

class UClass* UWBP_WorldMap_Icon_NotImpl_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_WorldMap_Icon_NotImpl_C");

	return Clss;
}


// WBP_WorldMap_Icon_NotImpl_C WBP_WorldMap_Icon_NotImpl.Default__WBP_WorldMap_Icon_NotImpl_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_WorldMap_Icon_NotImpl_C* UWBP_WorldMap_Icon_NotImpl_C::GetDefaultObj()
{
	static class UWBP_WorldMap_Icon_NotImpl_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_WorldMap_Icon_NotImpl_C*>(UWBP_WorldMap_Icon_NotImpl_C::StaticClass()->DefaultObject);

	return Default;
}

}


