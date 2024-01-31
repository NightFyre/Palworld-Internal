#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Status_LifeSteal.BP_Status_LifeSteal_C
// (None)

class UClass* UBP_Status_LifeSteal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Status_LifeSteal_C");

	return Clss;
}


// BP_Status_LifeSteal_C BP_Status_LifeSteal.Default__BP_Status_LifeSteal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Status_LifeSteal_C* UBP_Status_LifeSteal_C::GetDefaultObj()
{
	static class UBP_Status_LifeSteal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Status_LifeSteal_C*>(UBP_Status_LifeSteal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Status_LifeSteal.BP_Status_LifeSteal_C.OnBeginStatus
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Status_LifeSteal_C::OnBeginStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_LifeSteal_C", "OnBeginStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Status_LifeSteal.BP_Status_LifeSteal_C.OnEndStatus
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Status_LifeSteal_C::OnEndStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_LifeSteal_C", "OnEndStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Status_LifeSteal.BP_Status_LifeSteal_C.OnLifeSteal
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_LifeSteal_C::OnLifeSteal(int32 Damage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_LifeSteal_C", "OnLifeSteal");

	Params::UBP_Status_LifeSteal_C_OnLifeSteal_Params Parms{};

	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_LifeSteal.BP_Status_LifeSteal_C.TickStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_LifeSteal_C::TickStatus(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_LifeSteal_C", "TickStatus");

	Params::UBP_Status_LifeSteal_C_TickStatus_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Status_LifeSteal.BP_Status_LifeSteal_C.ExecuteUbergraph_BP_Status_LifeSteal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_CalucRecoverPoint_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue_3                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetMainMeshByActor_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue_4                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue_5                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_LifeSteal_C::ExecuteUbergraph_BP_Status_LifeSteal(int32 EntryPoint, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 K2Node_Event_damage, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_CalucRecoverPoint_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue_1, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue_2, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMainMeshByActor_ReturnValue, float K2Node_Event_DeltaTime, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue_4, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Status_LifeSteal_C", "ExecuteUbergraph_BP_Status_LifeSteal");

	Params::UBP_Status_LifeSteal_C_ExecuteUbergraph_BP_Status_LifeSteal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPalDebugSetting_ReturnValue = CallFunc_GetPalDebugSetting_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_damage = K2Node_Event_damage;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_CalucRecoverPoint_ReturnValue = CallFunc_CalucRecoverPoint_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetPalDebugSetting_ReturnValue_1 = CallFunc_GetPalDebugSetting_ReturnValue_1;
	Parms.CallFunc_GetPalDebugSetting_ReturnValue_2 = CallFunc_GetPalDebugSetting_ReturnValue_2;
	Parms.CallFunc_GetPalDebugSetting_ReturnValue_3 = CallFunc_GetPalDebugSetting_ReturnValue_3;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetMainMeshByActor_ReturnValue = CallFunc_GetMainMeshByActor_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetPalDebugSetting_ReturnValue_4 = CallFunc_GetPalDebugSetting_ReturnValue_4;
	Parms.CallFunc_GetPalDebugSetting_ReturnValue_5 = CallFunc_GetPalDebugSetting_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


