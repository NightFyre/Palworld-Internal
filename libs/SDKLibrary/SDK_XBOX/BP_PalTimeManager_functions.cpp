#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalTimeManager.BP_PalTimeManager_C
// (None)

class UClass* UBP_PalTimeManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalTimeManager_C");

	return Clss;
}


// BP_PalTimeManager_C BP_PalTimeManager.Default__BP_PalTimeManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalTimeManager_C* UBP_PalTimeManager_C::GetDefaultObj()
{
	static class UBP_PalTimeManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalTimeManager_C*>(UBP_PalTimeManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalTimeManager.BP_PalTimeManager_C.Tick_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalTimeManager_C::Tick_BP(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalTimeManager_C", "Tick_BP");

	Params::UBP_PalTimeManager_C_Tick_BP_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalTimeManager.BP_PalTimeManager_C.ExecuteUbergraph_BP_PalTimeManager
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraParameterCollectionInstance*CallFunc_GetNiagaraParameterCollection_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentPalWorldTime_Minute_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentPalWorldTime_Hour_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerState*             CallFunc_GetLocalPlayerState_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInStage_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InValue_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalTimeManager_C::ExecuteUbergraph_BP_PalTimeManager(int32 EntryPoint, class UNiagaraParameterCollectionInstance* CallFunc_GetNiagaraParameterCollection_ReturnValue, int32 CallFunc_GetCurrentPalWorldTime_Minute_ReturnValue, int32 CallFunc_GetCurrentPalWorldTime_Hour_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInStage_ReturnValue, float K2Node_Event_DeltaTime, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetFloatParameter_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalTimeManager_C", "ExecuteUbergraph_BP_PalTimeManager");

	Params::UBP_PalTimeManager_C_ExecuteUbergraph_BP_PalTimeManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetNiagaraParameterCollection_ReturnValue = CallFunc_GetNiagaraParameterCollection_ReturnValue;
	Parms.CallFunc_GetCurrentPalWorldTime_Minute_ReturnValue = CallFunc_GetCurrentPalWorldTime_Minute_ReturnValue;
	Parms.CallFunc_GetCurrentPalWorldTime_Hour_ReturnValue = CallFunc_GetCurrentPalWorldTime_Hour_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetLocalPlayerState_ReturnValue = CallFunc_GetLocalPlayerState_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsInStage_ReturnValue = CallFunc_IsInStage_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_InValue_ImplicitCast = CallFunc_SetFloatParameter_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


