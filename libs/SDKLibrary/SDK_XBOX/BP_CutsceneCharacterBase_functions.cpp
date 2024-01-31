#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CutsceneCharacterBase.BP_CutsceneCharacterBase_C
// (Actor)

class UClass* ABP_CutsceneCharacterBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CutsceneCharacterBase_C");

	return Clss;
}


// BP_CutsceneCharacterBase_C BP_CutsceneCharacterBase.Default__BP_CutsceneCharacterBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CutsceneCharacterBase_C* ABP_CutsceneCharacterBase_C::GetDefaultObj()
{
	static class ABP_CutsceneCharacterBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CutsceneCharacterBase_C*>(ABP_CutsceneCharacterBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CutsceneCharacterBase.BP_CutsceneCharacterBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CutsceneCharacterBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CutsceneCharacterBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CutsceneCharacterBase.BP_CutsceneCharacterBase_C.ExecuteUbergraph_BP_CutsceneCharacterBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CutsceneCharacterBase_C::ExecuteUbergraph_BP_CutsceneCharacterBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CutsceneCharacterBase_C", "ExecuteUbergraph_BP_CutsceneCharacterBase");

	Params::ABP_CutsceneCharacterBase_C_ExecuteUbergraph_BP_CutsceneCharacterBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


