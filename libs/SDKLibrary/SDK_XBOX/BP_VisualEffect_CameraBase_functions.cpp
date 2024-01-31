#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VisualEffect_CameraBase.BP_VisualEffect_CameraBase_C
// (None)

class UClass* UBP_VisualEffect_CameraBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VisualEffect_CameraBase_C");

	return Clss;
}


// BP_VisualEffect_CameraBase_C BP_VisualEffect_CameraBase.Default__BP_VisualEffect_CameraBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VisualEffect_CameraBase_C* UBP_VisualEffect_CameraBase_C::GetDefaultObj()
{
	static class UBP_VisualEffect_CameraBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VisualEffect_CameraBase_C*>(UBP_VisualEffect_CameraBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VisualEffect_CameraBase.BP_VisualEffect_CameraBase_C.UpdateEffectValue
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             WeightValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_CameraBase_C::UpdateEffectValue(double WeightValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_CameraBase_C", "UpdateEffectValue");

	Params::UBP_VisualEffect_CameraBase_C_UpdateEffectValue_Params Parms{};

	Parms.WeightValue = WeightValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VisualEffect_CameraBase.BP_VisualEffect_CameraBase_C.OnBeginVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_VisualEffect_CameraBase_C::OnBeginVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_CameraBase_C", "OnBeginVisualEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VisualEffect_CameraBase.BP_VisualEffect_CameraBase_C.OnEndVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_VisualEffect_CameraBase_C::OnEndVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_CameraBase_C", "OnEndVisualEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VisualEffect_CameraBase.BP_VisualEffect_CameraBase_C.«¹¿à¤ÙóÈ_FadeIIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_VisualEffect_CameraBase_C::_________FadeIIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_CameraBase_C", "«¹¿à¤ÙóÈ_FadeIIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VisualEffect_CameraBase.BP_VisualEffect_CameraBase_C.«¹¿à¤ÙóÈ_FadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_VisualEffect_CameraBase_C::_________FadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_CameraBase_C", "«¹¿à¤ÙóÈ_FadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VisualEffect_CameraBase.BP_VisualEffect_CameraBase_C.ExecuteUbergraph_BP_VisualEffect_CameraBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_CameraBase_C::ExecuteUbergraph_BP_VisualEffect_CameraBase(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_CameraBase_C", "ExecuteUbergraph_BP_VisualEffect_CameraBase");

	Params::UBP_VisualEffect_CameraBase_C_ExecuteUbergraph_BP_VisualEffect_CameraBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1 = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


