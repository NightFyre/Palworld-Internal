#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Status_DefenseUP.BP_Status_DefenseUP_C
// (None)

class UClass* UBP_Status_DefenseUP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Status_DefenseUP_C");

	return Clss;
}


// BP_Status_DefenseUP_C BP_Status_DefenseUP.Default__BP_Status_DefenseUP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Status_DefenseUP_C* UBP_Status_DefenseUP_C::GetDefaultObj()
{
	static class UBP_Status_DefenseUP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Status_DefenseUP_C*>(UBP_Status_DefenseUP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Status_DefenseUP.BP_Status_DefenseUP_C.OnLoaded_A2F777004366F513ABBD72ACA012C04D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Status_DefenseUP_C::OnLoaded_A2F777004366F513ABBD72ACA012C04D(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_DefenseUP_C", "OnLoaded_A2F777004366F513ABBD72ACA012C04D");

	Params::UBP_Status_DefenseUP_C_OnLoaded_A2F777004366F513ABBD72ACA012C04D_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_DefenseUP.BP_Status_DefenseUP_C.OnBeginStatus
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Status_DefenseUP_C::OnBeginStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_DefenseUP_C", "OnBeginStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Status_DefenseUP.BP_Status_DefenseUP_C.OnEndStatus
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Status_DefenseUP_C::OnEndStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_DefenseUP_C", "OnEndStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Status_DefenseUP.BP_Status_DefenseUP_C.ExecuteUbergraph_BP_Status_DefenseUP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              K2Node_DynamicCast_AsNiagara_System                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_Status_DefenseUP_C::ExecuteUbergraph_BP_Status_DefenseUP(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_DefenseUP_C", "ExecuteUbergraph_BP_Status_DefenseUP");

	Params::UBP_Status_DefenseUP_C_ExecuteUbergraph_BP_Status_DefenseUP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsNiagara_System = K2Node_DynamicCast_AsNiagara_System;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


