#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionIdleInSpa.BP_ActionIdleInSpa_C
// (None)

class UClass* UBP_ActionIdleInSpa_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionIdleInSpa_C");

	return Clss;
}


// BP_ActionIdleInSpa_C BP_ActionIdleInSpa.Default__BP_ActionIdleInSpa_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionIdleInSpa_C* UBP_ActionIdleInSpa_C::GetDefaultObj()
{
	static class UBP_ActionIdleInSpa_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionIdleInSpa_C*>(UBP_ActionIdleInSpa_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionIdleInSpa.BP_ActionIdleInSpa_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionIdleInSpa_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionIdleInSpa_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionIdleInSpa.BP_ActionIdleInSpa_C.OnEndAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionIdleInSpa_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionIdleInSpa_C", "OnEndAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionIdleInSpa.BP_ActionIdleInSpa_C.ExecuteUbergraph_BP_ActionIdleInSpa
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalFacialComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalFacialComponent*         CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_3                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBossPal_Database_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionIdleInSpa_C::ExecuteUbergraph_BP_ActionIdleInSpa(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalFacialComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalFacialComponent* CallFunc_GetComponentByClass_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class UNiagaraComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsBossPal_Database_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionIdleInSpa_C", "ExecuteUbergraph_BP_ActionIdleInSpa");

	Params::UBP_ActionIdleInSpa_C_ExecuteUbergraph_BP_ActionIdleInSpa_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetActionCharacter_ReturnValue_2 = CallFunc_GetActionCharacter_ReturnValue_2;
	Parms.CallFunc_GetActionCharacter_ReturnValue_3 = CallFunc_GetActionCharacter_ReturnValue_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_IsBossPal_Database_ReturnValue = CallFunc_IsBossPal_Database_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


