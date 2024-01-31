#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_EnemyNotice_Ex.WBP_EnemyNotice_Ex_C
// (None)

class UClass* UWBP_EnemyNotice_Ex_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_EnemyNotice_Ex_C");

	return Clss;
}


// WBP_EnemyNotice_Ex_C WBP_EnemyNotice_Ex.Default__WBP_EnemyNotice_Ex_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_EnemyNotice_Ex_C* UWBP_EnemyNotice_Ex_C::GetDefaultObj()
{
	static class UWBP_EnemyNotice_Ex_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_EnemyNotice_Ex_C*>(UWBP_EnemyNotice_Ex_C::StaticClass()->DefaultObject);

	return Default;
}

}


