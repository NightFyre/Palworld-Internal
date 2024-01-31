#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VisualEffect_SpawnFadeIn.BP_VisualEffect_SpawnFadeIn_C
// (None)

class UClass* UBP_VisualEffect_SpawnFadeIn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VisualEffect_SpawnFadeIn_C");

	return Clss;
}


// BP_VisualEffect_SpawnFadeIn_C BP_VisualEffect_SpawnFadeIn.Default__BP_VisualEffect_SpawnFadeIn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VisualEffect_SpawnFadeIn_C* UBP_VisualEffect_SpawnFadeIn_C::GetDefaultObj()
{
	static class UBP_VisualEffect_SpawnFadeIn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VisualEffect_SpawnFadeIn_C*>(UBP_VisualEffect_SpawnFadeIn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VisualEffect_SpawnFadeIn.BP_VisualEffect_SpawnFadeIn_C.SetOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetOpacityForCharacter_opacityIntensity_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_SpawnFadeIn_C::SetOpacity(double Intensity, class AActor* CallFunc_GetOwner_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_SetOpacityForCharacter_opacityIntensity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_SpawnFadeIn_C", "SetOpacity");

	Params::UBP_VisualEffect_SpawnFadeIn_C_SetOpacity_Params Parms{};

	Parms.Intensity = Intensity;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetOpacityForCharacter_opacityIntensity_ImplicitCast = CallFunc_SetOpacityForCharacter_opacityIntensity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VisualEffect_SpawnFadeIn.BP_VisualEffect_SpawnFadeIn_C.OnEndVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_VisualEffect_SpawnFadeIn_C::OnEndVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_SpawnFadeIn_C", "OnEndVisualEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VisualEffect_SpawnFadeIn.BP_VisualEffect_SpawnFadeIn_C.OnBeginVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_VisualEffect_SpawnFadeIn_C::OnBeginVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_SpawnFadeIn_C", "OnBeginVisualEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VisualEffect_SpawnFadeIn.BP_VisualEffect_SpawnFadeIn_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_VisualEffect_SpawnFadeIn_C::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_SpawnFadeIn_C", "Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VisualEffect_SpawnFadeIn.BP_VisualEffect_SpawnFadeIn_C.ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_SpawnFadeIn_C::ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_SpawnFadeIn_C", "ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn");

	Params::UBP_VisualEffect_SpawnFadeIn_C_ExecuteUbergraph_BP_VisualEffect_SpawnFadeIn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


