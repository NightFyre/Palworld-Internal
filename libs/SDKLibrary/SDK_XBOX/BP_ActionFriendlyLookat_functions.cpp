#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionFriendlyLookat.BP_ActionFriendlyLookat_C
// (None)

class UClass* UBP_ActionFriendlyLookat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionFriendlyLookat_C");

	return Clss;
}


// BP_ActionFriendlyLookat_C BP_ActionFriendlyLookat.Default__BP_ActionFriendlyLookat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionFriendlyLookat_C* UBP_ActionFriendlyLookat_C::GetDefaultObj()
{
	static class UBP_ActionFriendlyLookat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionFriendlyLookat_C*>(UBP_ActionFriendlyLookat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionFriendlyLookat.BP_ActionFriendlyLookat_C.ChangeFace
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Smile                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalFacialComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_ActionFriendlyLookat_C::ChangeFace(bool Smile, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalFacialComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionFriendlyLookat_C", "ChangeFace");

	Params::UBP_ActionFriendlyLookat_C_ChangeFace_Params Parms{};

	Parms.Smile = Smile;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionFriendlyLookat.BP_ActionFriendlyLookat_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionFriendlyLookat_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionFriendlyLookat_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionFriendlyLookat.BP_ActionFriendlyLookat_C.OnEndAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionFriendlyLookat_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionFriendlyLookat_C", "OnEndAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionFriendlyLookat.BP_ActionFriendlyLookat_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionFriendlyLookat_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionFriendlyLookat_C", "TickAction");

	Params::UBP_ActionFriendlyLookat_C_TickAction_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionFriendlyLookat.BP_ActionFriendlyLookat_C.ExecuteUbergraph_BP_ActionFriendlyLookat
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_ActionFriendlyLookat_C::ExecuteUbergraph_BP_ActionFriendlyLookat(int32 EntryPoint, float K2Node_Event_DeltaTime, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionFriendlyLookat_C", "ExecuteUbergraph_BP_ActionFriendlyLookat");

	Params::UBP_ActionFriendlyLookat_C_ExecuteUbergraph_BP_ActionFriendlyLookat_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


