#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NPC_Female_Soldier.BP_NPC_Female_Soldier_C
// (Actor, Pawn)

class UClass* ABP_NPC_Female_Soldier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NPC_Female_Soldier_C");

	return Clss;
}


// BP_NPC_Female_Soldier_C BP_NPC_Female_Soldier.Default__BP_NPC_Female_Soldier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NPC_Female_Soldier_C* ABP_NPC_Female_Soldier_C::GetDefaultObj()
{
	static class ABP_NPC_Female_Soldier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NPC_Female_Soldier_C*>(ABP_NPC_Female_Soldier_C::StaticClass()->DefaultObject);

	return Default;
}

}


