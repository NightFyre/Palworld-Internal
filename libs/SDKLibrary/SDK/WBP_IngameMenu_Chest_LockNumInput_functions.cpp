#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameMenu_Chest_LockNumInput.WBP_IngameMenu_Chest_LockNumInput_C
// (None)

class UClass* UWBP_IngameMenu_Chest_LockNumInput_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameMenu_Chest_LockNumInput_C");

	return Clss;
}


// WBP_IngameMenu_Chest_LockNumInput_C WBP_IngameMenu_Chest_LockNumInput.Default__WBP_IngameMenu_Chest_LockNumInput_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameMenu_Chest_LockNumInput_C* UWBP_IngameMenu_Chest_LockNumInput_C::GetDefaultObj()
{
	static class UWBP_IngameMenu_Chest_LockNumInput_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameMenu_Chest_LockNumInput_C*>(UWBP_IngameMenu_Chest_LockNumInput_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameMenu_Chest_LockNumInput.WBP_IngameMenu_Chest_LockNumInput_C.SetOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_LockNumInput_C::SetOn(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_LockNumInput_C", "SetOn");

	Params::UWBP_IngameMenu_Chest_LockNumInput_C_SetOn_Params Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Chest_LockNumInput.WBP_IngameMenu_Chest_LockNumInput_C.PlayAuthAnm
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlayPass                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_LockNumInput_C::PlayAuthAnm(bool PlayPass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_LockNumInput_C", "PlayAuthAnm");

	Params::UWBP_IngameMenu_Chest_LockNumInput_C_PlayAuthAnm_Params Parms{};

	Parms.PlayPass = PlayPass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Chest_LockNumInput.WBP_IngameMenu_Chest_LockNumInput_C.ExecuteUbergraph_WBP_IngameMenu_Chest_LockNumInput
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsON                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_PlayPass                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Chest_LockNumInput_C::ExecuteUbergraph_WBP_IngameMenu_Chest_LockNumInput(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool K2Node_CustomEvent_IsON, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_CustomEvent_PlayPass, class UWidgetAnimation* K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Chest_LockNumInput_C", "ExecuteUbergraph_WBP_IngameMenu_Chest_LockNumInput");

	Params::UWBP_IngameMenu_Chest_LockNumInput_C_ExecuteUbergraph_WBP_IngameMenu_Chest_LockNumInput_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CustomEvent_IsON = K2Node_CustomEvent_IsON;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_PlayPass = K2Node_CustomEvent_PlayPass;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


