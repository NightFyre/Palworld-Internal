#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Crime_Scene.WBP_Crime_Scene_C
// (None)

class UClass* UWBP_Crime_Scene_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Crime_Scene_C");

	return Clss;
}


// WBP_Crime_Scene_C WBP_Crime_Scene.Default__WBP_Crime_Scene_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Crime_Scene_C* UWBP_Crime_Scene_C::GetDefaultObj()
{
	static class UWBP_Crime_Scene_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Crime_Scene_C*>(UWBP_Crime_Scene_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Crime_Scene.WBP_Crime_Scene_C.Finished_4B4F0B354CEB0EB1043AE5B3C6D7077A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Crime_Scene_C::Finished_4B4F0B354CEB0EB1043AE5B3C6D7077A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crime_Scene_C", "Finished_4B4F0B354CEB0EB1043AE5B3C6D7077A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Crime_Scene.WBP_Crime_Scene_C.Finished_F33B774D46BB4A7E03FF64B35586069D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Crime_Scene_C::Finished_F33B774D46BB4A7E03FF64B35586069D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crime_Scene_C", "Finished_F33B774D46BB4A7E03FF64B35586069D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Crime_Scene.WBP_Crime_Scene_C.SetCrimeSceneEnable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crime_Scene_C::SetCrimeSceneEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crime_Scene_C", "SetCrimeSceneEnable");

	Params::UWBP_Crime_Scene_C_SetCrimeSceneEnable_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crime_Scene.WBP_Crime_Scene_C.ExecuteUbergraph_WBP_Crime_Scene
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Enable                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CreatePlayAnimationProxyObject_StartAtTime_ImplicitCast (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_A_ImplicitCast_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CreatePlayAnimationProxyObject_StartAtTime_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crime_Scene_C::ExecuteUbergraph_WBP_Crime_Scene(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_Enable, bool CallFunc_NotEqual_BoolBool_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, double CallFunc_SelectFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, bool CallFunc_IsAnimationPlaying_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_SelectFloat_A_ImplicitCast, float CallFunc_CreatePlayAnimationProxyObject_StartAtTime_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast_1, float CallFunc_CreatePlayAnimationProxyObject_StartAtTime_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crime_Scene_C", "ExecuteUbergraph_WBP_Crime_Scene");

	Params::UWBP_Crime_Scene_C_ExecuteUbergraph_WBP_Crime_Scene_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Enable = K2Node_CustomEvent_Enable;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue_1 = CallFunc_GetAnimationCurrentTime_ReturnValue_1;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue_1 = CallFunc_IsAnimationPlaying_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SelectFloat_A_ImplicitCast = CallFunc_SelectFloat_A_ImplicitCast;
	Parms.CallFunc_CreatePlayAnimationProxyObject_StartAtTime_ImplicitCast = CallFunc_CreatePlayAnimationProxyObject_StartAtTime_ImplicitCast;
	Parms.CallFunc_SelectFloat_A_ImplicitCast_1 = CallFunc_SelectFloat_A_ImplicitCast_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_StartAtTime_ImplicitCast_1 = CallFunc_CreatePlayAnimationProxyObject_StartAtTime_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


