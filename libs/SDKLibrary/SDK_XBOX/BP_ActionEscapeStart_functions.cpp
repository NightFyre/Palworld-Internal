#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionEscapeStart.BP_ActionEscapeStart_C
// (None)

class UClass* UBP_ActionEscapeStart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionEscapeStart_C");

	return Clss;
}


// BP_ActionEscapeStart_C BP_ActionEscapeStart.Default__BP_ActionEscapeStart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionEscapeStart_C* UBP_ActionEscapeStart_C::GetDefaultObj()
{
	static class UBP_ActionEscapeStart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionEscapeStart_C*>(UBP_ActionEscapeStart_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionEscapeStart.BP_ActionEscapeStart_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionEscapeStart_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionEscapeStart_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionEscapeStart.BP_ActionEscapeStart_C.OnEndAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionEscapeStart_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionEscapeStart_C", "OnEndAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionEscapeStart.BP_ActionEscapeStart_C.ExecuteUbergraph_BP_ActionEscapeStart
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionEscapeStart_C::ExecuteUbergraph_BP_ActionEscapeStart(int32 EntryPoint, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionEscapeStart_C", "ExecuteUbergraph_BP_ActionEscapeStart");

	Params::UBP_ActionEscapeStart_C_ExecuteUbergraph_BP_ActionEscapeStart_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


