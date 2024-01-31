#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_NPC_Child.ABP_NPC_Child_C
// (None)

class UClass* UABP_NPC_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_NPC_Child_C");

	return Clss;
}


// ABP_NPC_Child_C ABP_NPC_Child.Default__ABP_NPC_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_NPC_Child_C* UABP_NPC_Child_C::GetDefaultObj()
{
	static class UABP_NPC_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_NPC_Child_C*>(UABP_NPC_Child_C::StaticClass()->DefaultObject);

	return Default;
}

}


