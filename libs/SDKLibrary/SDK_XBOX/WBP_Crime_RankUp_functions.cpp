#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Crime_RankUp.WBP_Crime_RankUp_C
// (None)

class UClass* UWBP_Crime_RankUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Crime_RankUp_C");

	return Clss;
}


// WBP_Crime_RankUp_C WBP_Crime_RankUp.Default__WBP_Crime_RankUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Crime_RankUp_C* UWBP_Crime_RankUp_C::GetDefaultObj()
{
	static class UWBP_Crime_RankUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Crime_RankUp_C*>(UWBP_Crime_RankUp_C::StaticClass()->DefaultObject);

	return Default;
}

}


