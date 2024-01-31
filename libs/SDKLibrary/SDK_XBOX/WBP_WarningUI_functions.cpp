#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_WarningUI.WBP_WarningUI_C
// (None)

class UClass* UWBP_WarningUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_WarningUI_C");

	return Clss;
}


// WBP_WarningUI_C WBP_WarningUI.Default__WBP_WarningUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_WarningUI_C* UWBP_WarningUI_C::GetDefaultObj()
{
	static class UWBP_WarningUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_WarningUI_C*>(UWBP_WarningUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_WarningUI.WBP_WarningUI_C.PlayWarning
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TitleText                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        InfoText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_WarningUI_C::PlayWarning(class FText TitleText, class FText InfoText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WarningUI_C", "PlayWarning");

	Params::UWBP_WarningUI_C_PlayWarning_Params Parms{};

	Parms.TitleText = TitleText;
	Parms.InfoText = InfoText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WarningUI.WBP_WarningUI_C.Display
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalBaseCampModel*           TargetBaseCamp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalInvaderDatabaseRow      ChosenInvaderData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FDataTableRowHandle         InvaderGroupName                                                 (Edit, BlueprintVisible, NoDestructor)
// struct FDataTableRowHandle         TitleMsgID                                                       (Edit, BlueprintVisible, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedText_ReturnValue                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_GetLocalizedText_ReturnValue_1                          (None)
// class FText                        CallFunc_GetLocalizedText_ReturnValue_2                          (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_WarningUI_C::Display(class UPalBaseCampModel* TargetBaseCamp, const struct FPalInvaderDatabaseRow& ChosenInvaderData, const struct FDataTableRowHandle& InvaderGroupName, const struct FDataTableRowHandle& TitleMsgID, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetLocalizedText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_GetLocalizedText_ReturnValue_1, class FText CallFunc_GetLocalizedText_ReturnValue_2, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WarningUI_C", "Display");

	Params::UWBP_WarningUI_C_Display_Params Parms{};

	Parms.TargetBaseCamp = TargetBaseCamp;
	Parms.ChosenInvaderData = ChosenInvaderData;
	Parms.InvaderGroupName = InvaderGroupName;
	Parms.TitleMsgID = TitleMsgID;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalizedText_ReturnValue = CallFunc_GetLocalizedText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetLocalizedText_ReturnValue_1 = CallFunc_GetLocalizedText_ReturnValue_1;
	Parms.CallFunc_GetLocalizedText_ReturnValue_2 = CallFunc_GetLocalizedText_ReturnValue_2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WarningUI.WBP_WarningUI_C.OnInvaderStart
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalIncidentBroadcastParameterParameter                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WarningUI_C::OnInvaderStart(struct FPalIncidentBroadcastParameter& Parameter, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WarningUI_C", "OnInvaderStart");

	Params::UWBP_WarningUI_C_OnInvaderStart_Params Parms{};

	Parms.Parameter = Parameter;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WarningUI.WBP_WarningUI_C.RegisterEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalInvaderManager*          CallFunc_GetInvaderManager_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WarningUI_C::RegisterEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalInvaderManager* CallFunc_GetInvaderManager_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WarningUI_C", "RegisterEvents");

	Params::UWBP_WarningUI_C_RegisterEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetInvaderManager_ReturnValue = CallFunc_GetInvaderManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WarningUI.WBP_WarningUI_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_WarningUI_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WarningUI_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_WarningUI.WBP_WarningUI_C.ExecuteUbergraph_WBP_WarningUI
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WarningUI_C::ExecuteUbergraph_WBP_WarningUI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WarningUI_C", "ExecuteUbergraph_WBP_WarningUI");

	Params::UWBP_WarningUI_C_ExecuteUbergraph_WBP_WarningUI_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


