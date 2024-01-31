#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NPC_WalkPathPoint_1.BP_NPC_WalkPathPoint_1_C
// (Actor)

class UClass* ABP_NPC_WalkPathPoint_1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NPC_WalkPathPoint_1_C");

	return Clss;
}


// BP_NPC_WalkPathPoint_1_C BP_NPC_WalkPathPoint_1.Default__BP_NPC_WalkPathPoint_1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NPC_WalkPathPoint_1_C* ABP_NPC_WalkPathPoint_1_C::GetDefaultObj()
{
	static class ABP_NPC_WalkPathPoint_1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NPC_WalkPathPoint_1_C*>(ABP_NPC_WalkPathPoint_1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_NPC_WalkPathPoint_1.BP_NPC_WalkPathPoint_1_C.ExecuteUbergraph_BP_NPC_WalkPathPoint_1
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NPC_WalkPathPoint_1_C::ExecuteUbergraph_BP_NPC_WalkPathPoint_1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NPC_WalkPathPoint_1_C", "ExecuteUbergraph_BP_NPC_WalkPathPoint_1");

	Params::ABP_NPC_WalkPathPoint_1_C_ExecuteUbergraph_BP_NPC_WalkPathPoint_1_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


