#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_LoadingScreen_Transition.WBP_LoadingScreen_Transition_C
// (None)

class UClass* UWBP_LoadingScreen_Transition_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_LoadingScreen_Transition_C");

	return Clss;
}


// WBP_LoadingScreen_Transition_C WBP_LoadingScreen_Transition.Default__WBP_LoadingScreen_Transition_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_LoadingScreen_Transition_C* UWBP_LoadingScreen_Transition_C::GetDefaultObj()
{
	static class UWBP_LoadingScreen_Transition_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_LoadingScreen_Transition_C*>(UWBP_LoadingScreen_Transition_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_LoadingScreen_Transition.WBP_LoadingScreen_Transition_C.SetBgColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadingScreen_Transition_C::SetBgColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreen_Transition_C", "SetBgColor");

	Params::UWBP_LoadingScreen_Transition_C_SetBgColor_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoadingScreen_Transition.WBP_LoadingScreen_Transition_C.Finished_65AD92BC4646C00F05936392250F90EA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LoadingScreen_Transition_C::Finished_65AD92BC4646C00F05936392250F90EA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreen_Transition_C", "Finished_65AD92BC4646C00F05936392250F90EA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoadingScreen_Transition.WBP_LoadingScreen_Transition_C.Finished_D300E47D4C210C5B9AC12E8500F6AC11
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LoadingScreen_Transition_C::Finished_D300E47D4C210C5B9AC12E8500F6AC11()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreen_Transition_C", "Finished_D300E47D4C210C5B9AC12E8500F6AC11");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoadingScreen_Transition.WBP_LoadingScreen_Transition_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_LoadingScreen_Transition_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreen_Transition_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoadingScreen_Transition.WBP_LoadingScreen_Transition_C.StartFadeIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LoadingScreen_Transition_C::StartFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreen_Transition_C", "StartFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoadingScreen_Transition.WBP_LoadingScreen_Transition_C.StartFadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LoadingScreen_Transition_C::StartFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreen_Transition_C", "StartFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoadingScreen_Transition.WBP_LoadingScreen_Transition_C.ToggleVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visiable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadingScreen_Transition_C::ToggleVisibility(bool Visiable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreen_Transition_C", "ToggleVisibility");

	Params::UWBP_LoadingScreen_Transition_C_ToggleVisibility_Params Parms{};

	Parms.Visiable = Visiable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoadingScreen_Transition.WBP_LoadingScreen_Transition_C.ExecuteUbergraph_WBP_LoadingScreen_Transition
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_LoadingScreen_Transition_C*Temp_object_Variable                                             (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalGameInstance_C*       K2Node_DynamicCast_AsBP_Pal_Game_Instance                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_PalGameInstance_C*       K2Node_DynamicCast_AsBP_Pal_Game_Instance_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PalGameInstance_C*       K2Node_DynamicCast_AsBP_Pal_Game_Instance_2                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalDebugSetting*            CallFunc_GetPalDebugSetting_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Visiable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadingScreen_Transition_C::ExecuteUbergraph_WBP_LoadingScreen_Transition(int32 EntryPoint, class UWBP_LoadingScreen_Transition_C* Temp_object_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, class UBP_PalGameInstance_C* K2Node_DynamicCast_AsBP_Pal_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_PalGameInstance_C* K2Node_DynamicCast_AsBP_Pal_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class UBP_PalGameInstance_C* K2Node_DynamicCast_AsBP_Pal_Game_Instance_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_3, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_4, bool K2Node_CustomEvent_Visiable, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreen_Transition_C", "ExecuteUbergraph_WBP_LoadingScreen_Transition");

	Params::UWBP_LoadingScreen_Transition_C_ExecuteUbergraph_WBP_LoadingScreen_Transition_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Pal_Game_Instance = K2Node_DynamicCast_AsBP_Pal_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Pal_Game_Instance_1 = K2Node_DynamicCast_AsBP_Pal_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Pal_Game_Instance_2 = K2Node_DynamicCast_AsBP_Pal_Game_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetPalDebugSetting_ReturnValue = CallFunc_GetPalDebugSetting_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CustomEvent_Visiable = K2Node_CustomEvent_Visiable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


