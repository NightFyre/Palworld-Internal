#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameMenu_CampLevelUp.WBP_IngameMenu_CampLevelUp_C
// (None)

class UClass* UWBP_IngameMenu_CampLevelUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameMenu_CampLevelUp_C");

	return Clss;
}


// WBP_IngameMenu_CampLevelUp_C WBP_IngameMenu_CampLevelUp.Default__WBP_IngameMenu_CampLevelUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameMenu_CampLevelUp_C* UWBP_IngameMenu_CampLevelUp_C::GetDefaultObj()
{
	static class UWBP_IngameMenu_CampLevelUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameMenu_CampLevelUp_C*>(UWBP_IngameMenu_CampLevelUp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameMenu_CampLevelUp.WBP_IngameMenu_CampLevelUp_C.Finished_CFA6A904409DD4F86430DFBC13F511B5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_CampLevelUp_C::Finished_CFA6A904409DD4F86430DFBC13F511B5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_CampLevelUp_C", "Finished_CFA6A904409DD4F86430DFBC13F511B5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_CampLevelUp.WBP_IngameMenu_CampLevelUp_C.ShowLevelUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_CampLevelUp_C::ShowLevelUp(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_CampLevelUp_C", "ShowLevelUp");

	Params::UWBP_IngameMenu_CampLevelUp_C_ShowLevelUp_Params Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_CampLevelUp.WBP_IngameMenu_CampLevelUp_C.ExecuteUbergraph_WBP_IngameMenu_CampLevelUp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Level                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_CampLevelUp_C::ExecuteUbergraph_WBP_IngameMenu_CampLevelUp(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_Level, class FText CallFunc_Conv_IntToText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_CampLevelUp_C", "ExecuteUbergraph_WBP_IngameMenu_CampLevelUp");

	Params::UWBP_IngameMenu_CampLevelUp_C_ExecuteUbergraph_WBP_IngameMenu_CampLevelUp_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Level = K2Node_CustomEvent_Level;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


