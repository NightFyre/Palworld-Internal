#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_InLevelLoadingFade.WBP_InLevelLoadingFade_C
// (None)

class UClass* UWBP_InLevelLoadingFade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_InLevelLoadingFade_C");

	return Clss;
}


// WBP_InLevelLoadingFade_C WBP_InLevelLoadingFade.Default__WBP_InLevelLoadingFade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_InLevelLoadingFade_C* UWBP_InLevelLoadingFade_C::GetDefaultObj()
{
	static class UWBP_InLevelLoadingFade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_InLevelLoadingFade_C*>(UWBP_InLevelLoadingFade_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_InLevelLoadingFade.WBP_InLevelLoadingFade_C.FadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InLevelLoadingFade_C::FadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InLevelLoadingFade_C", "FadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InLevelLoadingFade.WBP_InLevelLoadingFade_C.FadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InLevelLoadingFade_C::FadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InLevelLoadingFade_C", "FadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InLevelLoadingFade.WBP_InLevelLoadingFade_C.Setup_ForOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InLevelLoadingFade_C::Setup_ForOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InLevelLoadingFade_C", "Setup_ForOverride");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InLevelLoadingFade.WBP_InLevelLoadingFade_C.Finished_50648C2D41952F044CFD8F9629D4027A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InLevelLoadingFade_C::Finished_50648C2D41952F044CFD8F9629D4027A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InLevelLoadingFade_C", "Finished_50648C2D41952F044CFD8F9629D4027A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InLevelLoadingFade.WBP_InLevelLoadingFade_C.Finished_BCA2D9DB46EBD8925174F885E2A96DAA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InLevelLoadingFade_C::Finished_BCA2D9DB46EBD8925174F885E2A96DAA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InLevelLoadingFade_C", "Finished_BCA2D9DB46EBD8925174F885E2A96DAA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InLevelLoadingFade.WBP_InLevelLoadingFade_C.AnmEvent_In
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InLevelLoadingFade_C::AnmEvent_In()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InLevelLoadingFade_C", "AnmEvent_In");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InLevelLoadingFade.WBP_InLevelLoadingFade_C.AnmEvent_Out
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InLevelLoadingFade_C::AnmEvent_Out()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InLevelLoadingFade_C", "AnmEvent_Out");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InLevelLoadingFade.WBP_InLevelLoadingFade_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_InLevelLoadingFade_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InLevelLoadingFade_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InLevelLoadingFade.WBP_InLevelLoadingFade_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_InLevelLoadingFade_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InLevelLoadingFade_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InLevelLoadingFade.WBP_InLevelLoadingFade_C.ExecuteUbergraph_WBP_InLevelLoadingFade
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetObjectName_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerController*        K2Node_DynamicCast_AsPal_Player_Controller_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CreatePlayAnimationProxyObject_PlaybackSpeed_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CreatePlayAnimationTimeRangeProxyObject_PlaybackSpeed_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InLevelLoadingFade_C::ExecuteUbergraph_WBP_InLevelLoadingFade(int32 EntryPoint, const class FString& CallFunc_GetObjectName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName CallFunc_Conv_StringToName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetObjectName_ReturnValue_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_1, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, float CallFunc_CreatePlayAnimationProxyObject_PlaybackSpeed_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_Divide_DoubleDouble_B_ImplicitCast_1, float CallFunc_CreatePlayAnimationTimeRangeProxyObject_PlaybackSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InLevelLoadingFade_C", "ExecuteUbergraph_WBP_InLevelLoadingFade");

	Params::UWBP_InLevelLoadingFade_C_ExecuteUbergraph_WBP_InLevelLoadingFade_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_1 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result = CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue = CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller = K2Node_DynamicCast_AsPal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetObjectName_ReturnValue_1 = CallFunc_GetObjectName_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue_1 = CallFunc_GetLocalPlayerController_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPal_Player_Controller_1 = K2Node_DynamicCast_AsPal_Player_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_CreatePlayAnimationProxyObject_PlaybackSpeed_ImplicitCast = CallFunc_CreatePlayAnimationProxyObject_PlaybackSpeed_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1 = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast_1 = CallFunc_Divide_DoubleDouble_B_ImplicitCast_1;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_PlaybackSpeed_ImplicitCast = CallFunc_CreatePlayAnimationTimeRangeProxyObject_PlaybackSpeed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


