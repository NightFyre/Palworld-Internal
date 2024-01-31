#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PanelWidgetChildrenSelectorBase.WBP_PanelWidgetChildrenSelectorBase_C
// (None)

class UClass* UWBP_PanelWidgetChildrenSelectorBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PanelWidgetChildrenSelectorBase_C");

	return Clss;
}


// WBP_PanelWidgetChildrenSelectorBase_C WBP_PanelWidgetChildrenSelectorBase.Default__WBP_PanelWidgetChildrenSelectorBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PanelWidgetChildrenSelectorBase_C* UWBP_PanelWidgetChildrenSelectorBase_C::GetDefaultObj()
{
	static class UWBP_PanelWidgetChildrenSelectorBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PanelWidgetChildrenSelectorBase_C*>(UWBP_PanelWidgetChildrenSelectorBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PanelWidgetChildrenSelectorBase.WBP_PanelWidgetChildrenSelectorBase_C.GetChildrenNum
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ChildrenNum                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPanelChildren_IsValidPanel                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetPanelChildren_Children                               (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PanelWidgetChildrenSelectorBase_C::GetChildrenNum(int32* ChildrenNum, bool CallFunc_GetPanelChildren_IsValidPanel, TArray<class UWidget*>& CallFunc_GetPanelChildren_Children, int32 CallFunc_Array_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PanelWidgetChildrenSelectorBase_C", "GetChildrenNum");

	Params::UWBP_PanelWidgetChildrenSelectorBase_C_GetChildrenNum_Params Parms{};

	Parms.CallFunc_GetPanelChildren_IsValidPanel = CallFunc_GetPanelChildren_IsValidPanel;
	Parms.CallFunc_GetPanelChildren_Children = CallFunc_GetPanelChildren_Children;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ChildrenNum != nullptr)
		*ChildrenNum = Parms.ChildrenNum;

}


// Function WBP_PanelWidgetChildrenSelectorBase.WBP_PanelWidgetChildrenSelectorBase_C.GetPanelChildren
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsValidPanel                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             Children                                                         (Parm, OutParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)

void UWBP_PanelWidgetChildrenSelectorBase_C::GetPanelChildren(bool* IsValidPanel, TArray<class UWidget*>* Children, bool CallFunc_IsValid_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PanelWidgetChildrenSelectorBase_C", "GetPanelChildren");

	Params::UWBP_PanelWidgetChildrenSelectorBase_C_GetPanelChildren_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValidPanel != nullptr)
		*IsValidPanel = Parms.IsValidPanel;

	if (Children != nullptr)
		*Children = std::move(Parms.Children);

}


// Function WBP_PanelWidgetChildrenSelectorBase.WBP_PanelWidgetChildrenSelectorBase_C.GetIndexByWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              FindedIndex                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPanelChildren_IsValidPanel                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetPanelChildren_Children                               (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PanelWidgetChildrenSelectorBase_C::GetIndexByWidget(class UWidget* Widget, int32* FindedIndex, bool CallFunc_GetPanelChildren_IsValidPanel, TArray<class UWidget*>& CallFunc_GetPanelChildren_Children, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PanelWidgetChildrenSelectorBase_C", "GetIndexByWidget");

	Params::UWBP_PanelWidgetChildrenSelectorBase_C_GetIndexByWidget_Params Parms{};

	Parms.Widget = Widget;
	Parms.CallFunc_GetPanelChildren_IsValidPanel = CallFunc_GetPanelChildren_IsValidPanel;
	Parms.CallFunc_GetPanelChildren_Children = CallFunc_GetPanelChildren_Children;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FindedIndex != nullptr)
		*FindedIndex = Parms.FindedIndex;

}


// Function WBP_PanelWidgetChildrenSelectorBase.WBP_PanelWidgetChildrenSelectorBase_C.IsValidIndex
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPanelChildren_IsValidPanel                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetPanelChildren_Children                               (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PanelWidgetChildrenSelectorBase_C::IsValidIndex(int32 Index, bool* IsValid, bool CallFunc_GetPanelChildren_IsValidPanel, TArray<class UWidget*>& CallFunc_GetPanelChildren_Children, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PanelWidgetChildrenSelectorBase_C", "IsValidIndex");

	Params::UWBP_PanelWidgetChildrenSelectorBase_C_IsValidIndex_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_GetPanelChildren_IsValidPanel = CallFunc_GetPanelChildren_IsValidPanel;
	Parms.CallFunc_GetPanelChildren_Children = CallFunc_GetPanelChildren_Children;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function WBP_PanelWidgetChildrenSelectorBase.WBP_PanelWidgetChildrenSelectorBase_C.SetEnableAllChildren
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPanelChildren_IsValidPanel                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetPanelChildren_Children                               (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PanelWidgetChildrenSelectorBase_C::SetEnableAllChildren(bool IsEnable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetPanelChildren_IsValidPanel, TArray<class UWidget*>& CallFunc_GetPanelChildren_Children, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PanelWidgetChildrenSelectorBase_C", "SetEnableAllChildren");

	Params::UWBP_PanelWidgetChildrenSelectorBase_C_SetEnableAllChildren_Params Parms{};

	Parms.IsEnable = IsEnable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPanelChildren_IsValidPanel = CallFunc_GetPanelChildren_IsValidPanel;
	Parms.CallFunc_GetPanelChildren_Children = CallFunc_GetPanelChildren_Children;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PanelWidgetChildrenSelectorBase.WBP_PanelWidgetChildrenSelectorBase_C.SetEnableChild
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TargetIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidIndex_IsValid                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPanelChildren_IsValidPanel                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetPanelChildren_Children                               (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PanelWidgetChildrenSelectorBase_C::SetEnableChild(bool IsEnable, int32 TargetIndex, bool CallFunc_IsValidIndex_IsValid, bool CallFunc_GetPanelChildren_IsValidPanel, TArray<class UWidget*>& CallFunc_GetPanelChildren_Children, class UWidget* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PanelWidgetChildrenSelectorBase_C", "SetEnableChild");

	Params::UWBP_PanelWidgetChildrenSelectorBase_C_SetEnableChild_Params Parms{};

	Parms.IsEnable = IsEnable;
	Parms.TargetIndex = TargetIndex;
	Parms.CallFunc_IsValidIndex_IsValid = CallFunc_IsValidIndex_IsValid;
	Parms.CallFunc_GetPanelChildren_IsValidPanel = CallFunc_GetPanelChildren_IsValidPanel;
	Parms.CallFunc_GetPanelChildren_Children = CallFunc_GetPanelChildren_Children;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PanelWidgetChildrenSelectorBase.WBP_PanelWidgetChildrenSelectorBase_C.IsEnabeChild
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEnable                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPanelChildren_IsValidPanel                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetPanelChildren_Children                               (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValidIndex_IsValid                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PanelWidgetChildrenSelectorBase_C::IsEnabeChild(int32 Index, bool* IsEnable, bool CallFunc_GetPanelChildren_IsValidPanel, TArray<class UWidget*>& CallFunc_GetPanelChildren_Children, bool CallFunc_IsValidIndex_IsValid, class UWidget* CallFunc_Array_Get_Item, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PanelWidgetChildrenSelectorBase_C", "IsEnabeChild");

	Params::UWBP_PanelWidgetChildrenSelectorBase_C_IsEnabeChild_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_GetPanelChildren_IsValidPanel = CallFunc_GetPanelChildren_IsValidPanel;
	Parms.CallFunc_GetPanelChildren_Children = CallFunc_GetPanelChildren_Children;
	Parms.CallFunc_IsValidIndex_IsValid = CallFunc_IsValidIndex_IsValid;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnable != nullptr)
		*IsEnable = Parms.IsEnable;

}


// Function WBP_PanelWidgetChildrenSelectorBase.WBP_PanelWidgetChildrenSelectorBase_C.SelectByIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FocusIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OldIndex                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidIndex_IsValid                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPanelChildren_IsValidPanel                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetPanelChildren_Children                               (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PanelWidgetChildrenSelectorBase_C::SelectByIndex(int32 FocusIndex, int32 OldIndex, bool CallFunc_IsValidIndex_IsValid, bool CallFunc_GetPanelChildren_IsValidPanel, TArray<class UWidget*>& CallFunc_GetPanelChildren_Children, class UWidget* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PanelWidgetChildrenSelectorBase_C", "SelectByIndex");

	Params::UWBP_PanelWidgetChildrenSelectorBase_C_SelectByIndex_Params Parms{};

	Parms.FocusIndex = FocusIndex;
	Parms.OldIndex = OldIndex;
	Parms.CallFunc_IsValidIndex_IsValid = CallFunc_IsValidIndex_IsValid;
	Parms.CallFunc_GetPanelChildren_IsValidPanel = CallFunc_GetPanelChildren_IsValidPanel;
	Parms.CallFunc_GetPanelChildren_Children = CallFunc_GetPanelChildren_Children;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PanelWidgetChildrenSelectorBase.WBP_PanelWidgetChildrenSelectorBase_C.SelectPrev
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             TmpChildren                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              OldIndex                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnabeChild_IsEnable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnabeChild_IsEnable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnabeChild_IsEnable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPanelChildren_IsValidPanel                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetPanelChildren_Children                               (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Max_ReturnValue_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PanelWidgetChildrenSelectorBase_C::SelectPrev(const TArray<class UWidget*>& TmpChildren, int32 OldIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsEnabeChild_IsEnable, bool CallFunc_IsEnabeChild_IsEnable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_IsEnabeChild_IsEnable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_5, int32 CallFunc_Max_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_6, bool CallFunc_GetPanelChildren_IsValidPanel, TArray<class UWidget*>& CallFunc_GetPanelChildren_Children, int32 CallFunc_Max_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PanelWidgetChildrenSelectorBase_C", "SelectPrev");

	Params::UWBP_PanelWidgetChildrenSelectorBase_C_SelectPrev_Params Parms{};

	Parms.TmpChildren = TmpChildren;
	Parms.OldIndex = OldIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_IsEnabeChild_IsEnable = CallFunc_IsEnabeChild_IsEnable;
	Parms.CallFunc_IsEnabeChild_IsEnable_1 = CallFunc_IsEnabeChild_IsEnable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_IsEnabeChild_IsEnable_2 = CallFunc_IsEnabeChild_IsEnable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2 = CallFunc_GreaterEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_3 = CallFunc_GreaterEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_4 = CallFunc_Subtract_IntInt_ReturnValue_4;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_5 = CallFunc_Subtract_IntInt_ReturnValue_5;
	Parms.CallFunc_Max_ReturnValue_1 = CallFunc_Max_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_6 = CallFunc_Subtract_IntInt_ReturnValue_6;
	Parms.CallFunc_GetPanelChildren_IsValidPanel = CallFunc_GetPanelChildren_IsValidPanel;
	Parms.CallFunc_GetPanelChildren_Children = CallFunc_GetPanelChildren_Children;
	Parms.CallFunc_Max_ReturnValue_2 = CallFunc_Max_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PanelWidgetChildrenSelectorBase.WBP_PanelWidgetChildrenSelectorBase_C.SelectNext
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldIndex                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             TmpChildren                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnabeChild_IsEnable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnabeChild_IsEnable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnabeChild_IsEnable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPanelChildren_IsValidPanel                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetPanelChildren_Children                               (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PanelWidgetChildrenSelectorBase_C::SelectNext(int32 OldIndex, const TArray<class UWidget*>& TmpChildren, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsEnabeChild_IsEnable, int32 Temp_int_Variable, bool CallFunc_IsEnabeChild_IsEnable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, bool CallFunc_IsEnabeChild_IsEnable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GetPanelChildren_IsValidPanel, TArray<class UWidget*>& CallFunc_GetPanelChildren_Children, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PanelWidgetChildrenSelectorBase_C", "SelectNext");

	Params::UWBP_PanelWidgetChildrenSelectorBase_C_SelectNext_Params Parms{};

	Parms.OldIndex = OldIndex;
	Parms.TmpChildren = TmpChildren;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsEnabeChild_IsEnable = CallFunc_IsEnabeChild_IsEnable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsEnabeChild_IsEnable_1 = CallFunc_IsEnabeChild_IsEnable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_IsEnabeChild_IsEnable_2 = CallFunc_IsEnabeChild_IsEnable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetPanelChildren_IsValidPanel = CallFunc_GetPanelChildren_IsValidPanel;
	Parms.CallFunc_GetPanelChildren_Children = CallFunc_GetPanelChildren_Children;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PanelWidgetChildrenSelectorBase.WBP_PanelWidgetChildrenSelectorBase_C.RegisterPanelWidget
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                PanelWidget                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PanelWidgetChildrenSelectorBase_C::RegisterPanelWidget(class UPanelWidget** PanelWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PanelWidgetChildrenSelectorBase_C", "RegisterPanelWidget");

	Params::UWBP_PanelWidgetChildrenSelectorBase_C_RegisterPanelWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PanelWidget != nullptr)
		*PanelWidget = Parms.PanelWidget;

}


// Function WBP_PanelWidgetChildrenSelectorBase.WBP_PanelWidgetChildrenSelectorBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PanelWidgetChildrenSelectorBase_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PanelWidgetChildrenSelectorBase_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PanelWidgetChildrenSelectorBase.WBP_PanelWidgetChildrenSelectorBase_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PanelWidgetChildrenSelectorBase_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PanelWidgetChildrenSelectorBase_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PanelWidgetChildrenSelectorBase.WBP_PanelWidgetChildrenSelectorBase_C.ExecuteUbergraph_WBP_PanelWidgetChildrenSelectorBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                CallFunc_RegisterPanelWidget_PanelWidget                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PanelWidgetChildrenSelectorBase_C::ExecuteUbergraph_WBP_PanelWidgetChildrenSelectorBase(int32 EntryPoint, class UPanelWidget* CallFunc_RegisterPanelWidget_PanelWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PanelWidgetChildrenSelectorBase_C", "ExecuteUbergraph_WBP_PanelWidgetChildrenSelectorBase");

	Params::UWBP_PanelWidgetChildrenSelectorBase_C_ExecuteUbergraph_WBP_PanelWidgetChildrenSelectorBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RegisterPanelWidget_PanelWidget = CallFunc_RegisterPanelWidget_PanelWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PanelWidgetChildrenSelectorBase.WBP_PanelWidgetChildrenSelectorBase_C.OnChangeEnableChild__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ChildWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               IsEnable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PanelWidgetChildrenSelectorBase_C::OnChangeEnableChild__DelegateSignature(int32 Index, class UWidget* ChildWidget, bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PanelWidgetChildrenSelectorBase_C", "OnChangeEnableChild__DelegateSignature");

	Params::UWBP_PanelWidgetChildrenSelectorBase_C_OnChangeEnableChild__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.ChildWidget = ChildWidget;
	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PanelWidgetChildrenSelectorBase.WBP_PanelWidgetChildrenSelectorBase_C.OnPrev__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PanelWidgetChildrenSelectorBase_C::OnPrev__DelegateSignature(int32 OldIndex, int32 NewIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PanelWidgetChildrenSelectorBase_C", "OnPrev__DelegateSignature");

	Params::UWBP_PanelWidgetChildrenSelectorBase_C_OnPrev__DelegateSignature_Params Parms{};

	Parms.OldIndex = OldIndex;
	Parms.NewIndex = NewIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PanelWidgetChildrenSelectorBase.WBP_PanelWidgetChildrenSelectorBase_C.OnNext__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PanelWidgetChildrenSelectorBase_C::OnNext__DelegateSignature(int32 OldIndex, int32 NewIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PanelWidgetChildrenSelectorBase_C", "OnNext__DelegateSignature");

	Params::UWBP_PanelWidgetChildrenSelectorBase_C_OnNext__DelegateSignature_Params Parms{};

	Parms.OldIndex = OldIndex;
	Parms.NewIndex = NewIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PanelWidgetChildrenSelectorBase.WBP_PanelWidgetChildrenSelectorBase_C.OnChangedFocusIndex__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     FocusTargetWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PanelWidgetChildrenSelectorBase_C::OnChangedFocusIndex__DelegateSignature(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PanelWidgetChildrenSelectorBase_C", "OnChangedFocusIndex__DelegateSignature");

	Params::UWBP_PanelWidgetChildrenSelectorBase_C_OnChangedFocusIndex__DelegateSignature_Params Parms{};

	Parms.OldIndex = OldIndex;
	Parms.NewIndex = NewIndex;
	Parms.FocusTargetWidget = FocusTargetWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


