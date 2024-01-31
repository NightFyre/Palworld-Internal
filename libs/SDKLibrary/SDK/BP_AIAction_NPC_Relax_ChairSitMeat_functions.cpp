#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAction_NPC_Relax_ChairSitMeat.BP_AIAction_NPC_Relax_ChairSitMeat_C
// (None)

class UClass* UBP_AIAction_NPC_Relax_ChairSitMeat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAction_NPC_Relax_ChairSitMeat_C");

	return Clss;
}


// BP_AIAction_NPC_Relax_ChairSitMeat_C BP_AIAction_NPC_Relax_ChairSitMeat.Default__BP_AIAction_NPC_Relax_ChairSitMeat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAction_NPC_Relax_ChairSitMeat_C* UBP_AIAction_NPC_Relax_ChairSitMeat_C::GetDefaultObj()
{
	static class UBP_AIAction_NPC_Relax_ChairSitMeat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAction_NPC_Relax_ChairSitMeat_C*>(UBP_AIAction_NPC_Relax_ChairSitMeat_C::StaticClass()->DefaultObject);

	return Default;
}

}


