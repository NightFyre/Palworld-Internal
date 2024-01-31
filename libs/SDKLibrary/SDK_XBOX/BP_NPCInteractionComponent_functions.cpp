#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NPCInteractionComponent.BP_NPCInteractionComponent_C
// (None)

class UClass* UBP_NPCInteractionComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NPCInteractionComponent_C");

	return Clss;
}


// BP_NPCInteractionComponent_C BP_NPCInteractionComponent.Default__BP_NPCInteractionComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_NPCInteractionComponent_C* UBP_NPCInteractionComponent_C::GetDefaultObj()
{
	static class UBP_NPCInteractionComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_NPCInteractionComponent_C*>(UBP_NPCInteractionComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


