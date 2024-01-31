#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_EnemyNotice_Q.WBP_EnemyNotice_Q_C
// (None)

class UClass* UWBP_EnemyNotice_Q_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_EnemyNotice_Q_C");

	return Clss;
}


// WBP_EnemyNotice_Q_C WBP_EnemyNotice_Q.Default__WBP_EnemyNotice_Q_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_EnemyNotice_Q_C* UWBP_EnemyNotice_Q_C::GetDefaultObj()
{
	static class UWBP_EnemyNotice_Q_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_EnemyNotice_Q_C*>(UWBP_EnemyNotice_Q_C::StaticClass()->DefaultObject);

	return Default;
}

}


