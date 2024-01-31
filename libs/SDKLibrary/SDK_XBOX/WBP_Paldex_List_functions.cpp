#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Paldex_List.WBP_Paldex_List_C
// (None)

class UClass* UWBP_Paldex_List_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Paldex_List_C");

	return Clss;
}


// WBP_Paldex_List_C WBP_Paldex_List.Default__WBP_Paldex_List_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Paldex_List_C* UWBP_Paldex_List_C::GetDefaultObj()
{
	static class UWBP_Paldex_List_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Paldex_List_C*>(UWBP_Paldex_List_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Paldex_List.WBP_Paldex_List_C.SetVisibilityNewMark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        NewVisibility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_List_C::SetVisibilityNewMark(enum class ESlateVisibility NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_List_C", "SetVisibilityNewMark");

	Params::UWBP_Paldex_List_C_SetVisibilityNewMark_Params Parms{};

	Parms.NewVisibility = NewVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex_List.WBP_Paldex_List_C.OnClickEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Paldex_List_C::OnClickEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_List_C", "OnClickEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex_List.WBP_Paldex_List_C.Setup_Captured
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUIPaldex_DisplayInfo    DisplayInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedCharacterName_OutText                       (None)

void UWBP_Paldex_List_C::Setup_Captured(const struct FPalUIPaldex_DisplayInfo& DisplayInfo, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class FText CallFunc_GetLocalizedCharacterName_OutText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_List_C", "Setup_Captured");

	Params::UWBP_Paldex_List_C_Setup_Captured_Params Parms{};

	Parms.DisplayInfo = DisplayInfo;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue = CallFunc_GetDatabaseCharacterParameter_ReturnValue;
	Parms.CallFunc_GetLocalizedCharacterName_OutText = CallFunc_GetLocalizedCharacterName_OutText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex_List.WBP_Paldex_List_C.Setup_Encounted
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUIPaldex_DisplayInfo    DisplayInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedCharacterName_OutText                       (None)

void UWBP_Paldex_List_C::Setup_Encounted(const struct FPalUIPaldex_DisplayInfo& DisplayInfo, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, class FText CallFunc_GetLocalizedCharacterName_OutText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_List_C", "Setup_Encounted");

	Params::UWBP_Paldex_List_C_Setup_Encounted_Params Parms{};

	Parms.DisplayInfo = DisplayInfo;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue = CallFunc_GetDatabaseCharacterParameter_ReturnValue;
	Parms.CallFunc_GetLocalizedCharacterName_OutText = CallFunc_GetLocalizedCharacterName_OutText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex_List.WBP_Paldex_List_C.Setup_NotEncounted
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUIPaldex_DisplayInfo    DisplayInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Paldex_List_C::Setup_NotEncounted(const struct FPalUIPaldex_DisplayInfo& DisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_List_C", "Setup_NotEncounted");

	Params::UWBP_Paldex_List_C_Setup_NotEncounted_Params Parms{};

	Parms.DisplayInfo = DisplayInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex_List.WBP_Paldex_List_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Paldex_List_C::Focus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_List_C", "Focus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex_List.WBP_Paldex_List_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUIPaldex_DisplayInfo    DisplayInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class APalPlayerState*             CallFunc_GetLocalPlayerState_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerLocalRecordData*   CallFunc_GetLocalRecordData_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalTribeID             CallFunc_GetTribeIDFromCharacterID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPalTextBlockBase*>   K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// class UPalDatabaseCharacterParameter*CallFunc_GetDatabaseCharacterParameter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalElementType         CallFunc_GetElementType_Element1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalElementType         CallFunc_GetElementType_Element2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_List_C::Setup(const struct FPalUIPaldex_DisplayInfo& DisplayInfo, enum class ESlateVisibility Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, int32 CallFunc_Divide_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_1, TArray<int32>& K2Node_MakeArray_Array, class APalPlayerState* CallFunc_GetLocalPlayerState_ReturnValue, class UPalPlayerLocalRecordData* CallFunc_GetLocalRecordData_ReturnValue, bool Temp_bool_Variable, enum class EPalTribeID CallFunc_GetTribeIDFromCharacterID_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, TArray<class UPalTextBlockBase*>& K2Node_MakeArray_Array_1, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, enum class EPalElementType CallFunc_GetElementType_Element1, enum class EPalElementType CallFunc_GetElementType_Element2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_List_C", "Setup");

	Params::UWBP_Paldex_List_C_Setup_Params Parms{};

	Parms.DisplayInfo = DisplayInfo;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Divide_IntInt_ReturnValue_1 = CallFunc_Divide_IntInt_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue_1 = CallFunc_Percent_IntInt_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetLocalPlayerState_ReturnValue = CallFunc_GetLocalPlayerState_ReturnValue;
	Parms.CallFunc_GetLocalRecordData_ReturnValue = CallFunc_GetLocalRecordData_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetTribeIDFromCharacterID_ReturnValue = CallFunc_GetTribeIDFromCharacterID_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetDatabaseCharacterParameter_ReturnValue = CallFunc_GetDatabaseCharacterParameter_ReturnValue;
	Parms.CallFunc_GetElementType_Element1 = CallFunc_GetElementType_Element1;
	Parms.CallFunc_GetElementType_Element2 = CallFunc_GetElementType_Element2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex_List.WBP_Paldex_List_C.AnmEvent_Focus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Paldex_List_C::AnmEvent_Focus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_List_C", "AnmEvent_Focus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex_List.WBP_Paldex_List_C.AnmEvent_Unfocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Paldex_List_C::AnmEvent_Unfocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_List_C", "AnmEvent_Unfocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex_List.WBP_Paldex_List_C.AnmEvent_NotCapture
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Paldex_List_C::AnmEvent_NotCapture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_List_C", "AnmEvent_NotCapture");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex_List.WBP_Paldex_List_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Paldex_List_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_List_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Paldex_List.WBP_Paldex_List_C.BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_List_C::BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_List_C", "BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Paldex_List_C_BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex_List.WBP_Paldex_List_C.BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_List_C::BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_List_C", "BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Paldex_List_C_BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex_List.WBP_Paldex_List_C.BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_List_C::BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_List_C", "BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Paldex_List_C_BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex_List.WBP_Paldex_List_C.ExecuteUbergraph_WBP_Paldex_List
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_List_C::ExecuteUbergraph_WBP_Paldex_List(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_List_C", "ExecuteUbergraph_WBP_Paldex_List");

	Params::UWBP_Paldex_List_C_ExecuteUbergraph_WBP_Paldex_List_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex_List.WBP_Paldex_List_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Paldex_List_C*          Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_List_C::OnClicked__DelegateSignature(class FName CharacterID, class UWBP_Paldex_List_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_List_C", "OnClicked__DelegateSignature");

	Params::UWBP_Paldex_List_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Paldex_List.WBP_Paldex_List_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Paldex_List_C*          SelfWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Paldex_List_C::OnHovered__DelegateSignature(class FName CharacterID, class UWBP_Paldex_List_C* SelfWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Paldex_List_C", "OnHovered__DelegateSignature");

	Params::UWBP_Paldex_List_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.SelfWidget = SelfWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


