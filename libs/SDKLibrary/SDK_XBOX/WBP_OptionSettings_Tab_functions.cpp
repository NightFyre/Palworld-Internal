#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_OptionSettings_Tab.WBP_OptionSettings_Tab_C
// (None)

class UClass* UWBP_OptionSettings_Tab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_OptionSettings_Tab_C");

	return Clss;
}


// WBP_OptionSettings_Tab_C WBP_OptionSettings_Tab.Default__WBP_OptionSettings_Tab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_OptionSettings_Tab_C* UWBP_OptionSettings_Tab_C::GetDefaultObj()
{
	static class UWBP_OptionSettings_Tab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_OptionSettings_Tab_C*>(UWBP_OptionSettings_Tab_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_OptionSettings_Tab.WBP_OptionSettings_Tab_C.SwitchTab
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Next                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_Tab_C::SwitchTab(bool Next)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_Tab_C", "SwitchTab");

	Params::UWBP_OptionSettings_Tab_C_SwitchTab_Params Parms{};

	Parms.Next = Next;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_Tab.WBP_OptionSettings_Tab_C.SetupTabs
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> Names                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_OptionSettings_Tab_C::SetupTabs(TArray<struct FDataTableRowHandle>& Names)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_Tab_C", "SetupTabs");

	Params::UWBP_OptionSettings_Tab_C_SetupTabs_Params Parms{};

	Parms.Names = Names;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_Tab.WBP_OptionSettings_Tab_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_OptionSettings_C*       SettingPanel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_Tab_C::Setup(class UWBP_OptionSettings_C* SettingPanel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_Tab_C", "Setup");

	Params::UWBP_OptionSettings_Tab_C_Setup_Params Parms{};

	Parms.SettingPanel = SettingPanel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_Tab.WBP_OptionSettings_Tab_C.SwitchTabTo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_Tab_C::SwitchTabTo(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_Tab_C", "SwitchTabTo");

	Params::UWBP_OptionSettings_Tab_C_SwitchTabTo_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_OptionSettings_Tab.WBP_OptionSettings_Tab_C.ExecuteUbergraph_WBP_OptionSettings_Tab
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_OptionSettings_TabButton_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Next                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_OptionSettings_TabButton_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// TArray<struct FDataTableRowHandle> K2Node_CustomEvent_Names                                         (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item_1                                        (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class UWBP_OptionSettings_TabButton_C*CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_OptionSettings_TabButton_C*CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_OptionSettings_TabButton_C*CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_OptionSettings_TabButton_C*CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_OptionSettings_TabButton_C*CallFunc_Array_Get_Item_6                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_OptionSettings_TabButton_C*CallFunc_Array_Get_Item_7                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_OptionSettings_TabButton_C*CallFunc_Array_Get_Item_8                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_OptionSettings_TabButton_C*CallFunc_Array_Get_Item_9                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_OptionSettings_C*       K2Node_CustomEvent_SettingPanel                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_OptionSettings_TabButton_C*CallFunc_Array_Get_Item_10                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_OptionSettings_Tab_C::ExecuteUbergraph_WBP_OptionSettings_Tab(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Variable, class UWBP_OptionSettings_TabButton_C* CallFunc_Array_Get_Item, bool K2Node_CustomEvent_Next, TArray<class UWBP_OptionSettings_TabButton_C*>& K2Node_MakeArray_Array, TArray<struct FDataTableRowHandle>& K2Node_CustomEvent_Names, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, const struct FDataTableRowHandle& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_2, class FText CallFunc_GetLocalizedTextFromHandle_Text, class UWBP_OptionSettings_TabButton_C* CallFunc_Array_Get_Item_2, int32 Temp_int_Variable_1, class UWBP_OptionSettings_TabButton_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWBP_OptionSettings_TabButton_C* CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_3, class UWBP_OptionSettings_TabButton_C* CallFunc_Array_Get_Item_5, class UWBP_OptionSettings_TabButton_C* CallFunc_Array_Get_Item_6, class UWBP_OptionSettings_TabButton_C* CallFunc_Array_Get_Item_7, bool CallFunc_Greater_IntInt_ReturnValue, class UWBP_OptionSettings_TabButton_C* CallFunc_Array_Get_Item_8, class UWBP_OptionSettings_TabButton_C* CallFunc_Array_Get_Item_9, class UWBP_OptionSettings_C* K2Node_CustomEvent_SettingPanel, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 K2Node_CustomEvent_Index, bool CallFunc_NotEqual_IntInt_ReturnValue, class UWBP_OptionSettings_TabButton_C* CallFunc_Array_Get_Item_10)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_OptionSettings_Tab_C", "ExecuteUbergraph_WBP_OptionSettings_Tab");

	Params::UWBP_OptionSettings_Tab_C_ExecuteUbergraph_WBP_OptionSettings_Tab_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CustomEvent_Next = K2Node_CustomEvent_Next;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CustomEvent_Names = K2Node_CustomEvent_Names;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.K2Node_CustomEvent_SettingPanel = K2Node_CustomEvent_SettingPanel;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;

	UObject::ProcessEvent(Func, &Parms);

}

}


