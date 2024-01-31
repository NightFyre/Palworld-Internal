#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkillEffect_SelfDestruct.BP_SkillEffect_SelfDestruct_C
// (Actor)

class UClass* ABP_SkillEffect_SelfDestruct_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkillEffect_SelfDestruct_C");

	return Clss;
}


// BP_SkillEffect_SelfDestruct_C BP_SkillEffect_SelfDestruct.Default__BP_SkillEffect_SelfDestruct_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkillEffect_SelfDestruct_C* ABP_SkillEffect_SelfDestruct_C::GetDefaultObj()
{
	static class ABP_SkillEffect_SelfDestruct_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkillEffect_SelfDestruct_C*>(ABP_SkillEffect_SelfDestruct_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkillEffect_SelfDestruct.BP_SkillEffect_SelfDestruct_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SkillEffect_SelfDestruct_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_SelfDestruct_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkillEffect_SelfDestruct.BP_SkillEffect_SelfDestruct_C.ExecuteUbergraph_BP_SkillEffect_SelfDestruct
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_SelfDestruct_C::ExecuteUbergraph_BP_SkillEffect_SelfDestruct(int32 EntryPoint, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, int32 CallFunc_PostEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_SelfDestruct_C", "ExecuteUbergraph_BP_SkillEffect_SelfDestruct");

	Params::ABP_SkillEffect_SelfDestruct_C_ExecuteUbergraph_BP_SkillEffect_SelfDestruct_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


