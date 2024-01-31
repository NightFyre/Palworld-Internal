#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AxeBase.BP_AxeBase_C
// (Actor)

class UClass* ABP_AxeBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AxeBase_C");

	return Clss;
}


// BP_AxeBase_C BP_AxeBase.Default__BP_AxeBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AxeBase_C* ABP_AxeBase_C::GetDefaultObj()
{
	static class ABP_AxeBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AxeBase_C*>(ABP_AxeBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AxeBase.BP_AxeBase_C.GetLeftHandTransform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetLeftHandTransform_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform ABP_AxeBase_C::GetLeftHandTransform(const struct FTransform& CallFunc_GetLeftHandTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AxeBase_C", "GetLeftHandTransform");

	Params::ABP_AxeBase_C_GetLeftHandTransform_Params Parms{};

	Parms.CallFunc_GetLeftHandTransform_ReturnValue = CallFunc_GetLeftHandTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


