#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_OptionSettings_ListContentButton.WBP_OptionSettings_ListContentButton_C
// (None)

class UClass* UWBP_OptionSettings_ListContentButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_OptionSettings_ListContentButton_C");

	return Clss;
}


// WBP_OptionSettings_ListContentButton_C WBP_OptionSettings_ListContentButton.Default__WBP_OptionSettings_ListContentButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_OptionSettings_ListContentButton_C* UWBP_OptionSettings_ListContentButton_C::GetDefaultObj()
{
	static class UWBP_OptionSettings_ListContentButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_OptionSettings_ListContentButton_C*>(UWBP_OptionSettings_ListContentButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_OptionSettings_ListContentButton.WBP_OptionSettings_ListContentButton_C.SetIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 KeyIcon                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_OptionSettings_ListContentButton_C::SetIcon(const struct FSlateBrush& KeyIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentButton_C", "SetIcon");

	Params::UWBP_OptionSettings_ListContentButton_C_SetIcon_Params Parms{};

	Parms.KeyIcon = KeyIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContentButton.WBP_OptionSettings_ListContentButton_C.EnableWarning
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContentButton_C::EnableWarning(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentButton_C", "EnableWarning");

	Params::UWBP_OptionSettings_ListContentButton_C_EnableWarning_Params Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_ListContentButton.WBP_OptionSettings_ListContentButton_C.ExecuteUbergraph_WBP_OptionSettings_ListContentButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_CustomEvent_KeyIcon                                       (None)
// bool                               K2Node_CustomEvent_IsEnable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_ListContentButton_C::ExecuteUbergraph_WBP_OptionSettings_ListContentButton(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FSlateBrush& K2Node_CustomEvent_KeyIcon, bool K2Node_CustomEvent_IsEnable, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_ListContentButton_C", "ExecuteUbergraph_WBP_OptionSettings_ListContentButton");

	Params::UWBP_OptionSettings_ListContentButton_C_ExecuteUbergraph_WBP_OptionSettings_ListContentButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CustomEvent_KeyIcon = K2Node_CustomEvent_KeyIcon;
	Parms.K2Node_CustomEvent_IsEnable = K2Node_CustomEvent_IsEnable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


