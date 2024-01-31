#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CharaCre.WBP_CharaCre_C
// (None)

class UClass* UWBP_CharaCre_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CharaCre_C");

	return Clss;
}


// WBP_CharaCre_C WBP_CharaCre.Default__WBP_CharaCre_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CharaCre_C* UWBP_CharaCre_C::GetDefaultObj()
{
	static class UWBP_CharaCre_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CharaCre_C*>(UWBP_CharaCre_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CharaCre.WBP_CharaCre_C.RequestPlaySampleVoice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              VoiceID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::RequestPlaySampleVoice(int32 VoiceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "RequestPlaySampleVoice");

	Params::UWBP_CharaCre_C_RequestPlaySampleVoice_Params Parms{};

	Parms.VoiceID = VoiceID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnSelectedVoiceID_Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              VoiceID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnSelectedVoiceID_Internal(int32 VoiceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnSelectedVoiceID_Internal");

	Params::UWBP_CharaCre_C_OnSelectedVoiceID_Internal_Params Parms{};

	Parms.VoiceID = VoiceID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnSelectedPreset_Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PresetName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnSelectedPreset_Internal(class FName PresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnSelectedPreset_Internal");

	Params::UWBP_CharaCre_C_OnSelectedPreset_Internal_Params Parms{};

	Parms.PresetName = PresetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.CustomNavi_ToCategoryTop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CharaCre_C::CustomNavi_ToCategoryTop(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "CustomNavi_ToCategoryTop");

	Params::UWBP_CharaCre_C_CustomNavi_ToCategoryTop_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CharaCre.WBP_CharaCre_C.GetSelectedEyeHSV
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                HSV                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetSelectedEyeHSV_HSV                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::GetSelectedEyeHSV(struct FLinearColor* HSV, const struct FLinearColor& CallFunc_GetSelectedEyeHSV_HSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "GetSelectedEyeHSV");

	Params::UWBP_CharaCre_C_GetSelectedEyeHSV_Params Parms{};

	Parms.CallFunc_GetSelectedEyeHSV_HSV = CallFunc_GetSelectedEyeHSV_HSV;

	UObject::ProcessEvent(Func, &Parms);

	if (HSV != nullptr)
		*HSV = std::move(Parms.HSV);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnSelectedEyeMaterial_Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BindedName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnSelectedEyeMaterial_Internal(class FName BindedName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnSelectedEyeMaterial_Internal");

	Params::UWBP_CharaCre_C_OnSelectedEyeMaterial_Internal_Params Parms{};

	Parms.BindedName = BindedName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.SetEnableNameEdit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::SetEnableNameEdit(bool IsEnable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "SetEnableNameEdit");

	Params::UWBP_CharaCre_C_SetEnableNameEdit_Params Parms{};

	Parms.IsEnable = IsEnable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.SetPlayerName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewName                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CharaCre_C::SetPlayerName(class FText NewName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "SetPlayerName");

	Params::UWBP_CharaCre_C_SetPlayerName_Params Parms{};

	Parms.NewName = NewName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnNotifyClosenSelectColorWindow_Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_C::OnNotifyClosenSelectColorWindow_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnNotifyClosenSelectColorWindow_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnNotifyOpenSelectColorWindow_Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_C::OnNotifyOpenSelectColorWindow_Internal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnNotifyOpenSelectColorWindow_Internal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre.WBP_CharaCre_C.CustomNavi_ToNameChange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Temp_object_Variable                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CharaCre_C::CustomNavi_ToNameChange(enum class EUINavigation Navigation, bool Temp_bool_Variable, class UWidget* Temp_object_Variable, bool CallFunc_IsVisible_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "CustomNavi_ToNameChange");

	Params::UWBP_CharaCre_C_CustomNavi_ToNameChange_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CharaCre.WBP_CharaCre_C.SetEnableSettingScrollList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::SetEnableSettingScrollList(bool IsEnable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "SetEnableSettingScrollList");

	Params::UWBP_CharaCre_C_SetEnableSettingScrollList_Params Parms{};

	Parms.IsEnable = IsEnable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.GetCategoryButtonByCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_UICharacterMakeCategoryCategoryType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_MenuButton_C*  Button                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::GetCategoryButtonByCategory(enum class E_UICharacterMakeCategory CategoryType, class UWBP_CharaCre_MenuButton_C** Button, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "GetCategoryButtonByCategory");

	Params::UWBP_CharaCre_C_GetCategoryButtonByCategory_Params Parms{};

	Parms.CategoryType = CategoryType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Button != nullptr)
		*Button = Parms.Button;

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnClickedCategoryButton_Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_MenuButton_C*  Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class E_UICharacterMakeCategoryCallFunc_GetBindedCategory_CategoryType                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnClickedCategoryButton_Internal(class UWBP_CharaCre_MenuButton_C* Button, enum class E_UICharacterMakeCategory CallFunc_GetBindedCategory_CategoryType, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnClickedCategoryButton_Internal");

	Params::UWBP_CharaCre_C_OnClickedCategoryButton_Internal_Params Parms{};

	Parms.Button = Button;
	Parms.CallFunc_GetBindedCategory_CategoryType = CallFunc_GetBindedCategory_CategoryType;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.GetRestoreFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_UICharacterMakeCategoryCategoryType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetRestoreFocusTarget_Widget                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::GetRestoreFocusTarget(enum class E_UICharacterMakeCategory CategoryType, class UWidget** Widget, class UWidget* CallFunc_GetRestoreFocusTarget_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "GetRestoreFocusTarget");

	Params::UWBP_CharaCre_C_GetRestoreFocusTarget_Params Parms{};

	Parms.CategoryType = CategoryType;
	Parms.CallFunc_GetRestoreFocusTarget_Widget = CallFunc_GetRestoreFocusTarget_Widget;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnClickedHairMesh_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BindedName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnClickedHairMesh_Internal(class FName BindedName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnClickedHairMesh_Internal");

	Params::UWBP_CharaCre_C_OnClickedHairMesh_Internal_Params Parms{};

	Parms.BindedName = BindedName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnClickedHeadMesh_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BindedName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnClickedHeadMesh_Internal(class FName BindedName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnClickedHeadMesh_Internal");

	Params::UWBP_CharaCre_C_OnClickedHeadMesh_Internal_Params Parms{};

	Parms.BindedName = BindedName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnClickedBodyMesh_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BindedName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnClickedBodyMesh_Internal(class FName BindedName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnClickedBodyMesh_Internal");

	Params::UWBP_CharaCre_C_OnClickedBodyMesh_Internal_Params Parms{};

	Parms.BindedName = BindedName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedHairColor_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnChangedHairColor_Internal(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnChangedHairColor_Internal");

	Params::UWBP_CharaCre_C_OnChangedHairColor_Internal_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedBrowColor_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnChangedBrowColor_Internal(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnChangedBrowColor_Internal");

	Params::UWBP_CharaCre_C_OnChangedBrowColor_Internal_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedEyeColor_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnChangedEyeColor_Internal(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnChangedEyeColor_Internal");

	Params::UWBP_CharaCre_C_OnChangedEyeColor_Internal_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedArmSizeInternal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnChangedArmSizeInternal(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnChangedArmSizeInternal");

	Params::UWBP_CharaCre_C_OnChangedArmSizeInternal_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedLegSize_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnChangedLegSize_Internal(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnChangedLegSize_Internal");

	Params::UWBP_CharaCre_C_OnChangedLegSize_Internal_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedTorsoSize_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnChangedTorsoSize_Internal(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnChangedTorsoSize_Internal");

	Params::UWBP_CharaCre_C_OnChangedTorsoSize_Internal_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.GetTopFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_UICharacterMakeCategoryNewCategory                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetTopFocusTarget_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::GetTopFocusTarget(enum class E_UICharacterMakeCategory NewCategory, class UWidget** Widget, class UWidget* CallFunc_GetTopFocusTarget_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "GetTopFocusTarget");

	Params::UWBP_CharaCre_C_GetTopFocusTarget_Params Parms{};

	Parms.NewCategory = NewCategory;
	Parms.CallFunc_GetTopFocusTarget_Widget = CallFunc_GetTopFocusTarget_Widget;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedArmSize_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CallDelegate_Size_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnChangedArmSize_Internal(float Value, double K2Node_CallDelegate_Size_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnChangedArmSize_Internal");

	Params::UWBP_CharaCre_C_OnChangedArmSize_Internal_Params Parms{};

	Parms.Value = Value;
	Parms.K2Node_CallDelegate_Size_ImplicitCast = K2Node_CallDelegate_Size_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.ApplyMakeInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalPlayerDataCharacterMakeInfoMakeInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_CharaCre_C::ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "ApplyMakeInfo");

	Params::UWBP_CharaCre_C_ApplyMakeInfo_Params Parms{};

	Parms.MakeInfo = MakeInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.ChangeMakeCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_UICharacterMakeCategoryNewCategory                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::ChangeMakeCategory(enum class E_UICharacterMakeCategory NewCategory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "ChangeMakeCategory");

	Params::UWBP_CharaCre_C_ChangeMakeCategory_Params Parms{};

	Parms.NewCategory = NewCategory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::Setup(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "Setup");

	Params::UWBP_CharaCre_C_Setup_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedSkinColor_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnChangedSkinColor_Internal(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnChangedSkinColor_Internal");

	Params::UWBP_CharaCre_C_OnChangedSkinColor_Internal_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedTab_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     FocusTargetWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_Tab_C*         K2Node_DynamicCast_AsWBP_Chara_Cre_Tab                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnChangedTab_Internal(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget, class UWBP_CharaCre_Tab_C* K2Node_DynamicCast_AsWBP_Chara_Cre_Tab, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnChangedTab_Internal");

	Params::UWBP_CharaCre_C_OnChangedTab_Internal_Params Parms{};

	Parms.OldIndex = OldIndex;
	Parms.NewIndex = NewIndex;
	Parms.FocusTargetWidget = FocusTargetWidget;
	Parms.K2Node_DynamicCast_AsWBP_Chara_Cre_Tab = K2Node_DynamicCast_AsWBP_Chara_Cre_Tab;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.AnmEvent_NoRotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_C::AnmEvent_NoRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "AnmEvent_NoRotation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre.WBP_CharaCre_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre.WBP_CharaCre_C.BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_MenuButton_C*  Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class UWBP_CharaCre_MenuButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	Params::UWBP_CharaCre_C_BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_MenuButton_C*  Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UWBP_CharaCre_MenuButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	Params::UWBP_CharaCre_C_BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_2_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_MenuButton_C*  Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_2_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UWBP_CharaCre_MenuButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_2_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	Params::UWBP_CharaCre_C_BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_2_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.BndEvt__WBP_CharaCre_WBP_CommonButton_65_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CharaCre_C::BndEvt__WBP_CharaCre_WBP_CommonButton_65_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "BndEvt__WBP_CharaCre_WBP_CommonButton_65_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre.WBP_CharaCre_C.BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Finish_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_MenuButton_C*  Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Finish_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_CharaCre_MenuButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Finish_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	Params::UWBP_CharaCre_C_BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Finish_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Preset_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_MenuButton_C*  Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Preset_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWBP_CharaCre_MenuButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Preset_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	Params::UWBP_CharaCre_C_BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Preset_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Voice_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_MenuButton_C*  Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Voice_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UWBP_CharaCre_MenuButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Voice_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	Params::UWBP_CharaCre_C_BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Voice_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.ExecuteUbergraph_WBP_CharaCre
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_MenuButton_C*  K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_ScrollBoxContentSet_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_MenuButton_C*  K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_MenuButton_C*  K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_MenuButton_C*  K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_MenuButton_C*  K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_MenuButton_C*  K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::ExecuteUbergraph_WBP_CharaCre(int32 EntryPoint, class UWBP_CharaCre_MenuButton_C* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_CharaCre_ScrollBoxContentSet_C* CallFunc_Create_ReturnValue, class UWBP_CharaCre_MenuButton_C* K2Node_ComponentBoundEvent_Button_5, class UWBP_CharaCre_MenuButton_C* K2Node_ComponentBoundEvent_Button_4, class UWBP_CharaCre_MenuButton_C* K2Node_ComponentBoundEvent_Button_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWBP_CharaCre_MenuButton_C* K2Node_ComponentBoundEvent_Button_2, class UWBP_CharaCre_MenuButton_C* K2Node_ComponentBoundEvent_Button_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "ExecuteUbergraph_WBP_CharaCre");

	Params::UWBP_CharaCre_C_ExecuteUbergraph_WBP_CharaCre_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedVoiceID__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              VoiceID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnChangedVoiceID__DelegateSignature(int32 VoiceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnChangedVoiceID__DelegateSignature");

	Params::UWBP_CharaCre_C_OnChangedVoiceID__DelegateSignature_Params Parms{};

	Parms.VoiceID = VoiceID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnSelectedPreset__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PresetName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnSelectedPreset__DelegateSignature(class FName PresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnSelectedPreset__DelegateSignature");

	Params::UWBP_CharaCre_C_OnSelectedPreset__DelegateSignature_Params Parms{};

	Parms.PresetName = PresetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnClickedCompleteButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_C::OnClickedCompleteButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnClickedCompleteButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnSelectedEyeMaterial__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EyeMaterialName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnSelectedEyeMaterial__DelegateSignature(class FName EyeMaterialName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnSelectedEyeMaterial__DelegateSignature");

	Params::UWBP_CharaCre_C_OnSelectedEyeMaterial__DelegateSignature_Params Parms{};

	Parms.EyeMaterialName = EyeMaterialName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnClickedEditNameButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_C::OnClickedEditNameButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnClickedEditNameButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnNotifyCloseSelectColorWIndow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_C::OnNotifyCloseSelectColorWIndow__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnNotifyCloseSelectColorWIndow__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnNotifyOpenSelectColorWindow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_C::OnNotifyOpenSelectColorWindow__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnNotifyOpenSelectColorWindow__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnClickedCategoryButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_UICharacterMakeCategoryCategoryType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnClickedCategoryButton__DelegateSignature(enum class E_UICharacterMakeCategory CategoryType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnClickedCategoryButton__DelegateSignature");

	Params::UWBP_CharaCre_C_OnClickedCategoryButton__DelegateSignature_Params Parms{};

	Parms.CategoryType = CategoryType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnSelectedHairMesh__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MeshPresetRowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnSelectedHairMesh__DelegateSignature(class FName MeshPresetRowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnSelectedHairMesh__DelegateSignature");

	Params::UWBP_CharaCre_C_OnSelectedHairMesh__DelegateSignature_Params Parms{};

	Parms.MeshPresetRowName = MeshPresetRowName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnSelecteddHeadMesh__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MeshPresetRowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnSelecteddHeadMesh__DelegateSignature(class FName MeshPresetRowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnSelecteddHeadMesh__DelegateSignature");

	Params::UWBP_CharaCre_C_OnSelecteddHeadMesh__DelegateSignature_Params Parms{};

	Parms.MeshPresetRowName = MeshPresetRowName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnSelectedBodyMesh__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MeshPresetRowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnSelectedBodyMesh__DelegateSignature(class FName MeshPresetRowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnSelectedBodyMesh__DelegateSignature");

	Params::UWBP_CharaCre_C_OnSelectedBodyMesh__DelegateSignature_Params Parms{};

	Parms.MeshPresetRowName = MeshPresetRowName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedHairColor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnChangedHairColor__DelegateSignature(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnChangedHairColor__DelegateSignature");

	Params::UWBP_CharaCre_C_OnChangedHairColor__DelegateSignature_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedBrowColor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnChangedBrowColor__DelegateSignature(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnChangedBrowColor__DelegateSignature");

	Params::UWBP_CharaCre_C_OnChangedBrowColor__DelegateSignature_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedEyeColor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnChangedEyeColor__DelegateSignature(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnChangedEyeColor__DelegateSignature");

	Params::UWBP_CharaCre_C_OnChangedEyeColor__DelegateSignature_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedArmSize__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnChangedArmSize__DelegateSignature(double Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnChangedArmSize__DelegateSignature");

	Params::UWBP_CharaCre_C_OnChangedArmSize__DelegateSignature_Params Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedLegSize__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnChangedLegSize__DelegateSignature(double Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnChangedLegSize__DelegateSignature");

	Params::UWBP_CharaCre_C_OnChangedLegSize__DelegateSignature_Params Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedTorsoSize__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnChangedTorsoSize__DelegateSignature(double Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnChangedTorsoSize__DelegateSignature");

	Params::UWBP_CharaCre_C_OnChangedTorsoSize__DelegateSignature_Params Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedSkinColor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnChangedSkinColor__DelegateSignature(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnChangedSkinColor__DelegateSignature");

	Params::UWBP_CharaCre_C_OnChangedSkinColor__DelegateSignature_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnRightRotationButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_C::OnRightRotationButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnRightRotationButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnLeftRotationButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_C::OnLeftRotationButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnLeftRotationButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedTab__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_Tab_C*         TabWidget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_C::OnChangedTab__DelegateSignature(class UWBP_CharaCre_Tab_C* TabWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_C", "OnChangedTab__DelegateSignature");

	Params::UWBP_CharaCre_C_OnChangedTab__DelegateSignature_Params Parms{};

	Parms.TabWidget = TabWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


