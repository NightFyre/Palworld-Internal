#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_BossBattle_TimeOut.WBP_BossBattle_TimeOut_C
// (None)

class UClass* UWBP_BossBattle_TimeOut_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_BossBattle_TimeOut_C");

	return Clss;
}


// WBP_BossBattle_TimeOut_C WBP_BossBattle_TimeOut.Default__WBP_BossBattle_TimeOut_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_BossBattle_TimeOut_C* UWBP_BossBattle_TimeOut_C::GetDefaultObj()
{
	static class UWBP_BossBattle_TimeOut_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_BossBattle_TimeOut_C*>(UWBP_BossBattle_TimeOut_C::StaticClass()->DefaultObject);

	return Default;
}

}


