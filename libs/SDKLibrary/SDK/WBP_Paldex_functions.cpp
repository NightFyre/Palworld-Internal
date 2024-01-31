#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Paldex.WBP_Paldex_C
// (None)

class UClass* UWBP_Paldex_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Paldex_C");

	return Clss;
}


// WBP_Paldex_C WBP_Paldex.Default__WBP_Paldex_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Paldex_C* UWBP_Paldex_C::GetDefaultObj()
{
	static class UWBP_Paldex_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Paldex_C*>(UWBP_Paldex_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Paldex.WBP_Paldex_C.ScrollByCharacterID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBox*                  CallFunc_GetScrollBox_ScrollBox                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScrollBox*                  CallFunc_GetScrollBox_ScrollBox_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Paldex_List_C*          K2Node_DynamicCast_AsWBP_Paldex_List                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_C::ScrollByCharacterID(class FName CharacterID, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, class UScrollBox* CallFunc_GetScrollBox_ScrollBox_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_Paldex_List_C* K2Node_DynamicCast_AsWBP_Paldex_List, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "ScrollByCharacterID");

	Params::UWBP_Paldex_C_ScrollByCharacterID_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetScrollBox_ScrollBox = CallFunc_GetScrollBox_ScrollBox;
	Parms.CallFunc_GetScrollBox_ScrollBox_1 = CallFunc_GetScrollBox_ScrollBox_1;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Paldex_List = K2Node_DynamicCast_AsWBP_Paldex_List;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.ClickByCharacterID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_C::ClickByCharacterID(class FName CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "ClickByCharacterID");

	Params::UWBP_Paldex_C_ClickByCharacterID_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.ScrollByPanelIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ScrollByPanelIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAllChildrenNum_index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBox*                  CallFunc_GetScrollBox_ScrollBox                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Paldex_List_C*          CallFunc_GetWidgetByIndex_Widget                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_C::ScrollByPanelIndex(int32 ScrollByPanelIndex, int32 CallFunc_GetAllChildrenNum_index, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Max_ReturnValue, class UWBP_Paldex_List_C* CallFunc_GetWidgetByIndex_Widget, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "ScrollByPanelIndex");

	Params::UWBP_Paldex_C_ScrollByPanelIndex_Params Parms{};

	Parms.ScrollByPanelIndex = ScrollByPanelIndex;
	Parms.CallFunc_GetAllChildrenNum_index = CallFunc_GetAllChildrenNum_index;
	Parms.CallFunc_GetScrollBox_ScrollBox = CallFunc_GetScrollBox_ScrollBox;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_GetWidgetByIndex_Widget = CallFunc_GetWidgetByIndex_Widget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.OnCompleteCapturePalActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Paldex_C::OnCompleteCapturePalActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "OnCompleteCapturePalActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex.WBP_Paldex_C.ClickByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_C::ClickByIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "ClickByIndex");

	Params::UWBP_Paldex_C_ClickByIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.GetFocusTargetByCharacterID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Target                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTargetByCharacterID_widget                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_C::GetFocusTargetByCharacterID(class FName CharacterID, class UWidget** Target, class UWidget* CallFunc_GetFocusTargetByCharacterID_widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "GetFocusTargetByCharacterID");

	Params::UWBP_Paldex_C_GetFocusTargetByCharacterID_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.CallFunc_GetFocusTargetByCharacterID_widget = CallFunc_GetFocusTargetByCharacterID_widget;

	UObject::ProcessEvent(Func, &Parms);

	if (Target != nullptr)
		*Target = Parms.Target;

}


// Function WBP_Paldex.WBP_Paldex_C.SetEncountedPalNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Num                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWBP_Paldex_C::SetEncountedPalNum(int32 Num, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "SetEncountedPalNum");

	Params::UWBP_Paldex_C_SetEncountedPalNum_Params Parms{};

	Parms.Num = Num;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.SetRegisteredPalNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Num                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWBP_Paldex_C::SetRegisteredPalNum(int32 Num, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "SetRegisteredPalNum");

	Params::UWBP_Paldex_C_SetRegisteredPalNum_Params Parms{};

	Parms.Num = Num;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.ResetMapOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Paldex_C::ResetMapOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "ResetMapOffset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex.WBP_Paldex_C.SetZoomDisrtibutionMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Rate                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_C::SetZoomDisrtibutionMap(double Rate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "SetZoomDisrtibutionMap");

	Params::UWBP_Paldex_C_SetZoomDisrtibutionMap_Params Parms{};

	Parms.Rate = Rate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.IsZoomMax
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsMax                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsZoomMax_isMax                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_C::IsZoomMax(bool* IsMax, bool CallFunc_IsZoomMax_isMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "IsZoomMax");

	Params::UWBP_Paldex_C_IsZoomMax_Params Parms{};

	Parms.CallFunc_IsZoomMax_isMax = CallFunc_IsZoomMax_isMax;

	UObject::ProcessEvent(Func, &Parms);

	if (IsMax != nullptr)
		*IsMax = Parms.IsMax;

}


// Function WBP_Paldex.WBP_Paldex_C.AddZoomDistributionMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             AddZoomRate                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_C::AddZoomDistributionMap(double AddZoomRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "AddZoomDistributionMap");

	Params::UWBP_Paldex_C_AddZoomDistributionMap_Params Parms{};

	Parms.AddZoomRate = AddZoomRate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.AddCapturedActorRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    Rotator                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Paldex_C::AddCapturedActorRotation(const struct FRotator& Rotator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "AddCapturedActorRotation");

	Params::UWBP_Paldex_C_AddCapturedActorRotation_Params Parms{};

	Parms.Rotator = Rotator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.AddDistributionMapOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_C::AddDistributionMapOffset(const struct FVector2D& Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "AddDistributionMapOffset");

	Params::UWBP_Paldex_C_AddDistributionMapOffset_Params Parms{};

	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.PageSkip_Up
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIndexFromWidget_index                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_C::PageSkip_Up(enum class EUINavigation Navigation, int32 CallFunc_GetIndexFromWidget_index, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "PageSkip_Up");

	Params::UWBP_Paldex_C_PageSkip_Up_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_GetIndexFromWidget_index = CallFunc_GetIndexFromWidget_index;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.PageSkip_Down
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIndexFromWidget_index                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_C::PageSkip_Down(enum class EUINavigation Navigation, int32 CallFunc_GetIndexFromWidget_index, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "PageSkip_Down");

	Params::UWBP_Paldex_C_PageSkip_Down_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_GetIndexFromWidget_index = CallFunc_GetIndexFromWidget_index;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.DisplayNoDataWidget
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         MsgIdHandle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)

void UWBP_Paldex_C::DisplayNoDataWidget(const struct FDataTableRowHandle& MsgIdHandle, class FText CallFunc_GetLocalizedTextFromHandle_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "DisplayNoDataWidget");

	Params::UWBP_Paldex_C_DisplayNoDataWidget_Params Parms{};

	Parms.MsgIdHandle = MsgIdHandle;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.HideNoDataWidget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Paldex_C::HideNoDataWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "HideNoDataWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex.WBP_Paldex_C.ChangeToModelDisplayModel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Paldex_C::ChangeToModelDisplayModel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "ChangeToModelDisplayModel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex.WBP_Paldex_C.ChangeToDistributionDIsplayMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_C::ChangeToDistributionDIsplayMode(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "ChangeToDistributionDIsplayMode");

	Params::UWBP_Paldex_C_ChangeToDistributionDIsplayMode_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.Display Distribution
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUIPaldex_DisplayInfo    DisplayInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_PaldexDistributionTimeTypeTimeType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalUIPaldexDistributionDataCallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetDistributionLocations_isNoDistribution               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_C::Display_Distribution(const struct FPalUIPaldex_DisplayInfo& DisplayInfo, enum class E_PaldexDistributionTimeType TimeType, const struct FPalUIPaldexDistributionData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_SetDistributionLocations_isNoDistribution)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "Display Distribution");

	Params::UWBP_Paldex_C_Display_Distribution_Params Parms{};

	Parms.DisplayInfo = DisplayInfo;
	Parms.TimeType = TimeType;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SetDistributionLocations_isNoDistribution = CallFunc_SetDistributionLocations_isNoDistribution;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.DisplayPalInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUIPaldex_DisplayInfo    DisplayInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_GetPalLongDescription_outName                           (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PalMonsterCaptureSet_C*  CallFunc_GetCaptureCameraActor_cameraActor                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_C::DisplayPalInfo(const struct FPalUIPaldex_DisplayInfo& DisplayInfo, class FText CallFunc_GetPalLongDescription_outName, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class ABP_PalMonsterCaptureSet_C* CallFunc_GetCaptureCameraActor_cameraActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "DisplayPalInfo");

	Params::UWBP_Paldex_C_DisplayPalInfo_Params Parms{};

	Parms.DisplayInfo = DisplayInfo;
	Parms.CallFunc_GetPalLongDescription_outName = CallFunc_GetPalLongDescription_outName;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetCaptureCameraActor_cameraActor = CallFunc_GetCaptureCameraActor_cameraActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.CapturePalActor
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PalMonsterCaptureSet_C*  CallFunc_GetCaptureCameraActor_cameraActor                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_C::CapturePalActor(class FName CharacterID, bool CallFunc_NotEqual_NameName_ReturnValue, class ABP_PalMonsterCaptureSet_C* CallFunc_GetCaptureCameraActor_cameraActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "CapturePalActor");

	Params::UWBP_Paldex_C_CapturePalActor_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetCaptureCameraActor_cameraActor = CallFunc_GetCaptureCameraActor_cameraActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.GetFocusTargetByIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Target                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetFocusTargetByIndex_target                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_C::GetFocusTargetByIndex(int32 Index, class UWidget** Target, class UWidget* CallFunc_GetFocusTargetByIndex_target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "GetFocusTargetByIndex");

	Params::UWBP_Paldex_C_GetFocusTargetByIndex_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_GetFocusTargetByIndex_target = CallFunc_GetFocusTargetByIndex_target;

	UObject::ProcessEvent(Func, &Parms);

	if (Target != nullptr)
		*Target = Parms.Target;

}


// Function WBP_Paldex.WBP_Paldex_C.FocusByCharacterID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_C::FocusByCharacterID(class FName CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "FocusByCharacterID");

	Params::UWBP_Paldex_C_FocusByCharacterID_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.FocusByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_C::FocusByIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "FocusByIndex");

	Params::UWBP_Paldex_C_FocusByIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.SetupCaptureCameraActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PalMonsterCaptureSet_C*  CallFunc_GetCaptureCameraActor_cameraActor                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_C::SetupCaptureCameraActor(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_PalMonsterCaptureSet_C* CallFunc_GetCaptureCameraActor_cameraActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "SetupCaptureCameraActor");

	Params::UWBP_Paldex_C_SetupCaptureCameraActor_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCaptureCameraActor_cameraActor = CallFunc_GetCaptureCameraActor_cameraActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.SetupPalPanelList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPalUIPaldex_DisplayInfo>DisplayInfoArray                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Paldex_C::SetupPalPanelList(TArray<struct FPalUIPaldex_DisplayInfo>& DisplayInfoArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "SetupPalPanelList");

	Params::UWBP_Paldex_C_SetupPalPanelList_Params Parms{};

	Parms.DisplayInfoArray = DisplayInfoArray;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.AnmEvent_ToModel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Paldex_C::AnmEvent_ToModel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "AnmEvent_ToModel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex.WBP_Paldex_C.AnmEvent_ToDistribution
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Paldex_C::AnmEvent_ToDistribution()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "AnmEvent_ToDistribution");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex.WBP_Paldex_C.AnmEvent_FirstOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Paldex_C::AnmEvent_FirstOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "AnmEvent_FirstOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex.WBP_Paldex_C.AnmEvent_ChnageTimeType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_PaldexDistributionTimeTypeTimeType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_C::AnmEvent_ChnageTimeType(enum class E_PaldexDistributionTimeType TimeType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "AnmEvent_ChnageTimeType");

	Params::UWBP_Paldex_C_AnmEvent_ChnageTimeType_Params Parms{};

	Parms.TimeType = TimeType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Paldex_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex.WBP_Paldex_C.BndEvt__WBP_Paldex_WBP_PaldexScrollList_K2Node_ComponentBoundEvent_0_OnHoveredAnyPanel__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Paldex_List_C*          SelfWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_C::BndEvt__WBP_Paldex_WBP_PaldexScrollList_K2Node_ComponentBoundEvent_0_OnHoveredAnyPanel__DelegateSignature(class FName CharacterID, class UWBP_Paldex_List_C* SelfWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "BndEvt__WBP_Paldex_WBP_PaldexScrollList_K2Node_ComponentBoundEvent_0_OnHoveredAnyPanel__DelegateSignature");

	Params::UWBP_Paldex_C_BndEvt__WBP_Paldex_WBP_PaldexScrollList_K2Node_ComponentBoundEvent_0_OnHoveredAnyPanel__DelegateSignature_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.SelfWidget = SelfWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Paldex_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex.WBP_Paldex_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Paldex_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex.WBP_Paldex_C.BndEvt__WBP_Paldex_WBP_Paldex_tabset_K2Node_ComponentBoundEvent_1_OnSelectedModelTab__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Paldex_C::BndEvt__WBP_Paldex_WBP_Paldex_tabset_K2Node_ComponentBoundEvent_1_OnSelectedModelTab__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "BndEvt__WBP_Paldex_WBP_Paldex_tabset_K2Node_ComponentBoundEvent_1_OnSelectedModelTab__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex.WBP_Paldex_C.BndEvt__WBP_Paldex_WBP_Paldex_tabset_K2Node_ComponentBoundEvent_2_OnSelectedDistributionTab__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Paldex_C::BndEvt__WBP_Paldex_WBP_Paldex_tabset_K2Node_ComponentBoundEvent_2_OnSelectedDistributionTab__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "BndEvt__WBP_Paldex_WBP_Paldex_tabset_K2Node_ComponentBoundEvent_2_OnSelectedDistributionTab__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex.WBP_Paldex_C.BndEvt__WBP_Paldex_WBP_PaldexScrollList_K2Node_ComponentBoundEvent_3_OnClickedAnyPanel__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Paldex_List_C*          Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_C::BndEvt__WBP_Paldex_WBP_PaldexScrollList_K2Node_ComponentBoundEvent_3_OnClickedAnyPanel__DelegateSignature(class FName CharacterID, class UWBP_Paldex_List_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "BndEvt__WBP_Paldex_WBP_PaldexScrollList_K2Node_ComponentBoundEvent_3_OnClickedAnyPanel__DelegateSignature");

	Params::UWBP_Paldex_C_BndEvt__WBP_Paldex_WBP_PaldexScrollList_K2Node_ComponentBoundEvent_3_OnClickedAnyPanel__DelegateSignature_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.ExecuteUbergraph_WBP_Paldex
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_PaldexDistributionTimeTypeK2Node_CustomEvent_timeType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_CharacterID_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Paldex_List_C*          K2Node_ComponentBoundEvent_SelfWidget                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_PalMonsterCaptureSet_C*  CallFunc_GetCaptureCameraActor_cameraActor                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// class FName                        K2Node_ComponentBoundEvent_CharacterID                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Paldex_List_C*          K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_C::ExecuteUbergraph_WBP_Paldex(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, enum class E_PaldexDistributionTimeType K2Node_CustomEvent_timeType, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, class FName K2Node_ComponentBoundEvent_CharacterID_1, class UWBP_Paldex_List_C* K2Node_ComponentBoundEvent_SelfWidget, class ABP_PalMonsterCaptureSet_C* CallFunc_GetCaptureCameraActor_cameraActor, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, class FName K2Node_ComponentBoundEvent_CharacterID, class UWBP_Paldex_List_C* K2Node_ComponentBoundEvent_Widget, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "ExecuteUbergraph_WBP_Paldex");

	Params::UWBP_Paldex_C_ExecuteUbergraph_WBP_Paldex_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CustomEvent_timeType = K2Node_CustomEvent_timeType;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_ComponentBoundEvent_CharacterID_1 = K2Node_ComponentBoundEvent_CharacterID_1;
	Parms.K2Node_ComponentBoundEvent_SelfWidget = K2Node_ComponentBoundEvent_SelfWidget;
	Parms.CallFunc_GetCaptureCameraActor_cameraActor = CallFunc_GetCaptureCameraActor_cameraActor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.K2Node_ComponentBoundEvent_CharacterID = K2Node_ComponentBoundEvent_CharacterID;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.OnClickedAnyPalPanel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_C::OnClickedAnyPalPanel__DelegateSignature(class FName CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "OnClickedAnyPalPanel__DelegateSignature");

	Params::UWBP_Paldex_C_OnClickedAnyPalPanel__DelegateSignature_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex.WBP_Paldex_C.OnClickedDistributionTab__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Paldex_C::OnClickedDistributionTab__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "OnClickedDistributionTab__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex.WBP_Paldex_C.OnClickedModelTab__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Paldex_C::OnClickedModelTab__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "OnClickedModelTab__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex.WBP_Paldex_C.OnHoveredAnyPalPanel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_C::OnHoveredAnyPalPanel__DelegateSignature(class FName CharacterID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_C", "OnHoveredAnyPalPanel__DelegateSignature");

	Params::UWBP_Paldex_C_OnHoveredAnyPalPanel__DelegateSignature_Params Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);

}

}


