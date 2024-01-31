#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CrimeList_RankGauge.WBP_CrimeList_RankGauge_C
// (None)

class UClass* UWBP_CrimeList_RankGauge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CrimeList_RankGauge_C");

	return Clss;
}


// WBP_CrimeList_RankGauge_C WBP_CrimeList_RankGauge.Default__WBP_CrimeList_RankGauge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CrimeList_RankGauge_C* UWBP_CrimeList_RankGauge_C::GetDefaultObj()
{
	static class UWBP_CrimeList_RankGauge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CrimeList_RankGauge_C*>(UWBP_CrimeList_RankGauge_C::StaticClass()->DefaultObject);

	return Default;
}

}


