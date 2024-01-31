#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalBattleManager.BP_PalBattleManager_C
// (None)

class UClass* UBP_PalBattleManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalBattleManager_C");

	return Clss;
}


// BP_PalBattleManager_C BP_PalBattleManager.Default__BP_PalBattleManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalBattleManager_C* UBP_PalBattleManager_C::GetDefaultObj()
{
	static class UBP_PalBattleManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalBattleManager_C*>(UBP_PalBattleManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


