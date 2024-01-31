#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_BossBattle_Timer.WBP_BossBattle_Timer_C
// (None)

class UClass* UWBP_BossBattle_Timer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_BossBattle_Timer_C");

	return Clss;
}


// WBP_BossBattle_Timer_C WBP_BossBattle_Timer.Default__WBP_BossBattle_Timer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_BossBattle_Timer_C* UWBP_BossBattle_Timer_C::GetDefaultObj()
{
	static class UWBP_BossBattle_Timer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_BossBattle_Timer_C*>(UWBP_BossBattle_Timer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_BossBattle_Timer.WBP_BossBattle_Timer_C.SetRemainSecond
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RemainSecond                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossBattle_Timer_C::SetRemainSecond(int32 RemainSecond)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossBattle_Timer_C", "SetRemainSecond");

	Params::UWBP_BossBattle_Timer_C_SetRemainSecond_Params Parms{};

	Parms.RemainSecond = RemainSecond;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BossBattle_Timer.WBP_BossBattle_Timer_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_BossBattle_Timer_C::SetText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossBattle_Timer_C", "SetText");

	Params::UWBP_BossBattle_Timer_C_SetText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BossBattle_Timer.WBP_BossBattle_Timer_C.ExecuteUbergraph_WBP_BossBattle_Timer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_RemainSecond                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Text                                          (None)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_BossBattle_Timer_C::ExecuteUbergraph_WBP_BossBattle_Timer(int32 EntryPoint, int32 K2Node_CustomEvent_RemainSecond, class FText K2Node_CustomEvent_Text, int32 CallFunc_Divide_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossBattle_Timer_C", "ExecuteUbergraph_WBP_BossBattle_Timer");

	Params::UWBP_BossBattle_Timer_C_ExecuteUbergraph_WBP_BossBattle_Timer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_RemainSecond = K2Node_CustomEvent_RemainSecond;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


