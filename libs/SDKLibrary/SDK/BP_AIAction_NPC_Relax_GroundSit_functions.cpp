#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_NPC_Relax_GroundSit.BP_AIAction_NPC_Relax_GroundSit_C
// (None)

class UClass* UBP_AIAction_NPC_Relax_GroundSit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_NPC_Relax_GroundSit_C");

	return Clss;
}


// BP_AIAction_NPC_Relax_GroundSit_C BP_AIAction_NPC_Relax_GroundSit.Default__BP_AIAction_NPC_Relax_GroundSit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_NPC_Relax_GroundSit_C* UBP_AIAction_NPC_Relax_GroundSit_C::GetDefaultObj()
{
	static class UBP_AIAction_NPC_Relax_GroundSit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_NPC_Relax_GroundSit_C*>(UBP_AIAction_NPC_Relax_GroundSit_C::StaticClass()->DefaultObject);

	return Default;
}

}


