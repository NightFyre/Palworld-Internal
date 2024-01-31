#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Prop_Base.BP_Prop_Base_C
// (Actor)

class UClass* ABP_Prop_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Prop_Base_C");

	return Clss;
}


// BP_Prop_Base_C BP_Prop_Base.Default__BP_Prop_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Prop_Base_C* ABP_Prop_Base_C::GetDefaultObj()
{
	static class ABP_Prop_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Prop_Base_C*>(ABP_Prop_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Prop_Base.BP_Prop_Base_C.ExecuteUbergraph_BP_Prop_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Prop_Base_C::ExecuteUbergraph_BP_Prop_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Prop_Base_C", "ExecuteUbergraph_BP_Prop_Base");

	Params::ABP_Prop_Base_C_ExecuteUbergraph_BP_Prop_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


