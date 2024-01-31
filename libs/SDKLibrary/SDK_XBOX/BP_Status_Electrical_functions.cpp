#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Status_Electrical.BP_Status_Electrical_C
// (None)

class UClass* UBP_Status_Electrical_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Status_Electrical_C");

	return Clss;
}


// BP_Status_Electrical_C BP_Status_Electrical.Default__BP_Status_Electrical_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Status_Electrical_C* UBP_Status_Electrical_C::GetDefaultObj()
{
	static class UBP_Status_Electrical_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Status_Electrical_C*>(UBP_Status_Electrical_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Status_Electrical.BP_Status_Electrical_C.PlayElecShockAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalAIActionDynamicParameterK2Node_MakeStruct_PalAIActionDynamicParameter                    (NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            CallFunc_SetActionClassParameter_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Electrical_C::PlayElecShockAction(const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_Electrical_C", "PlayElecShockAction");

	Params::UBP_Status_Electrical_C_PlayElecShockAction_Params Parms{};

	Parms.K2Node_MakeStruct_PalAIActionDynamicParameter = K2Node_MakeStruct_PalAIActionDynamicParameter;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_SetActionClassParameter_ReturnValue = CallFunc_SetActionClassParameter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_Electrical.BP_Status_Electrical_C.OnBeginStatus
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Status_Electrical_C::OnBeginStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_Electrical_C", "OnBeginStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Status_Electrical.BP_Status_Electrical_C.OnEndStatus
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Status_Electrical_C::OnEndStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_Electrical_C", "OnEndStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Status_Electrical.BP_Status_Electrical_C.OnBeginSomeStatus
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Status_Electrical_C::OnBeginSomeStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_Electrical_C", "OnBeginSomeStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Status_Electrical.BP_Status_Electrical_C.ExecuteUbergraph_BP_Status_Electrical
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasSelfPalElement_Has                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_Electrical_C::ExecuteUbergraph_BP_Status_Electrical(int32 EntryPoint, bool CallFunc_HasSelfPalElement_Has)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_Electrical_C", "ExecuteUbergraph_BP_Status_Electrical");

	Params::UBP_Status_Electrical_C_ExecuteUbergraph_BP_Status_Electrical_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasSelfPalElement_Has = CallFunc_HasSelfPalElement_Has;

	UObject::ProcessEvent(Func, &Parms);

}

}


