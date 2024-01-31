#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NPCPathWalkPointComponent_1.BP_NPCPathWalkPointComponent_1_C
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UBP_NPCPathWalkPointComponent_1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NPCPathWalkPointComponent_1_C");

	return Clss;
}


// BP_NPCPathWalkPointComponent_1_C BP_NPCPathWalkPointComponent_1.Default__BP_NPCPathWalkPointComponent_1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_NPCPathWalkPointComponent_1_C* UBP_NPCPathWalkPointComponent_1_C::GetDefaultObj()
{
	static class UBP_NPCPathWalkPointComponent_1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_NPCPathWalkPointComponent_1_C*>(UBP_NPCPathWalkPointComponent_1_C::StaticClass()->DefaultObject);

	return Default;
}

}


