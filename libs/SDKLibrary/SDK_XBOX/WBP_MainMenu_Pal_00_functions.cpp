#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C
// (None)

class UClass* UWBP_MainMenu_Pal_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MainMenu_Pal_00_C");

	return Clss;
}


// WBP_MainMenu_Pal_00_C WBP_MainMenu_Pal_00.Default__WBP_MainMenu_Pal_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MainMenu_Pal_00_C* UWBP_MainMenu_Pal_00_C::GetDefaultObj()
{
	static class UWBP_MainMenu_Pal_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MainMenu_Pal_00_C*>(UWBP_MainMenu_Pal_00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.SetRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsBoss                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsRare                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::SetRarity(bool IsBoss, bool IsRare, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "SetRarity");

	Params::UWBP_MainMenu_Pal_00_C_SetRarity_Params Parms{};

	Parms.IsBoss = IsBoss;
	Parms.IsRare = IsRare;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.SetPartnerSkillLock
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetPalRestrictItemID_ItemID                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPalRestrictItemID_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Get_Partner_Skill_Lock_Item_Name_ReturnText             (None)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPalStaticItemIdAndNum>CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos    (ReferenceParm)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::SetPartnerSkillLock(class FName CharacterID, bool Temp_bool_Variable, class FName CallFunc_GetPalRestrictItemID_ItemID, bool CallFunc_GetPalRestrictItemID_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_Get_Partner_Skill_Lock_Item_Name_ReturnText, TArray<class FName>& K2Node_MakeArray_Array, enum class ESlateVisibility Temp_byte_Variable_1, TArray<struct FPalStaticItemIdAndNum>& CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos, bool CallFunc_Array_IsEmpty_ReturnValue, double CallFunc_SelectFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "SetPartnerSkillLock");

	Params::UWBP_MainMenu_Pal_00_C_SetPartnerSkillLock_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetPalRestrictItemID_ItemID = CallFunc_GetPalRestrictItemID_ItemID;
	Parms.CallFunc_GetPalRestrictItemID_ReturnValue = CallFunc_GetPalRestrictItemID_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Get_Partner_Skill_Lock_Item_Name_ReturnText = CallFunc_Get_Partner_Skill_Lock_Item_Name_ReturnText;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos = CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.OnCloseNameEditWindow
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CharaCreNameEditWindowDispatchParameter_C*K2Node_DynamicCast_AsBP_Chara_Cre_Name_Edit_Window_Dispatch_Parameter(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::OnCloseNameEditWindow(class UPalHUDDispatchParameterBase* Param, class UBP_CharaCreNameEditWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Chara_Cre_Name_Edit_Window_Dispatch_Parameter, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "OnCloseNameEditWindow");

	Params::UWBP_MainMenu_Pal_00_C_OnCloseNameEditWindow_Params Parms{};

	Parms.Param = Param;
	Parms.K2Node_DynamicCast_AsBP_Chara_Cre_Name_Edit_Window_Dispatch_Parameter = K2Node_DynamicCast_AsBP_Chara_Cre_Name_Edit_Window_Dispatch_Parameter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.OpenNameEditWindow
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        DefaultName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDService*              CallFunc_GetHUDService_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CharaCreNameEditWindowDispatchParameter_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::OpenNameEditWindow(class FText DefaultName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UBP_CharaCreNameEditWindowDispatchParameter_C* CallFunc_SpawnObject_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "OpenNameEditWindow");

	Params::UWBP_MainMenu_Pal_00_C_OpenNameEditWindow_Params Parms{};

	Parms.DefaultName = DefaultName;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetHUDService_ReturnValue = CallFunc_GetHUDService_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Push_ReturnValue = CallFunc_Push_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.CustomNavi_ToHPGuide
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_MainMenu_Pal_00_C::CustomNavi_ToHPGuide(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "CustomNavi_ToHPGuide");

	Params::UWBP_MainMenu_Pal_00_C_CustomNavi_ToHPGuide_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.CustomNavi_ToFirstPassiveButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_MainMenu_Pal_00_C::CustomNavi_ToFirstPassiveButton(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "CustomNavi_ToFirstPassiveButton");

	Params::UWBP_MainMenu_Pal_00_C_CustomNavi_ToFirstPassiveButton_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.SetPartnerSkillIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CharacterID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetPartnerSkillIcon_SoftIconTexture                     (HasGetValueTypeHash)
// bool                               CallFunc_GetPartnerSkillIcon_IsSquare                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::SetPartnerSkillIcon(class FName CharacterID, TSoftObjectPtr<class UTexture2D> CallFunc_GetPartnerSkillIcon_SoftIconTexture, bool CallFunc_GetPartnerSkillIcon_IsSquare)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "SetPartnerSkillIcon");

	Params::UWBP_MainMenu_Pal_00_C_SetPartnerSkillIcon_Params Parms{};

	Parms.CharacterID = CharacterID;
	Parms.CallFunc_GetPartnerSkillIcon_SoftIconTexture = CallFunc_GetPartnerSkillIcon_SoftIconTexture;
	Parms.CallFunc_GetPartnerSkillIcon_IsSquare = CallFunc_GetPartnerSkillIcon_IsSquare;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.SetSoulRank
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Rank                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_MainMenu_Pal_00_C::SetSoulRank(int32 Rank, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "SetSoulRank");

	Params::UWBP_MainMenu_Pal_00_C_SetSoulRank_Params Parms{};

	Parms.Rank = Rank;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.UpdateOverlaySkillInfoWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalWazaID              CallFunc_GetBindedWazaID_wazaID                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::UpdateOverlaySkillInfoWindow(bool CallFunc_IsValid_ReturnValue, enum class EPalWazaID CallFunc_GetBindedWazaID_wazaID, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "UpdateOverlaySkillInfoWindow");

	Params::UWBP_MainMenu_Pal_00_C_UpdateOverlaySkillInfoWindow_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBindedWazaID_wazaID = CallFunc_GetBindedWazaID_wazaID;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_MainMenu_Pal_00_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_MainMenu_Pal_00_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.OnTriggeredRemoveWazaAction
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_00_C::OnTriggeredRemoveWazaAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "OnTriggeredRemoveWazaAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.OnUnhoveredPalButtonEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_00_C::OnUnhoveredPalButtonEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "OnUnhoveredPalButtonEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.OnHoveredPalButtonEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*Handle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::OnHoveredPalButtonEvent(class UPalIndividualCharacterHandle* Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "OnHoveredPalButtonEvent");

	Params::UWBP_MainMenu_Pal_00_C_OnHoveredPalButtonEvent_Params Parms{};

	Parms.Handle = Handle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.OnClickedPalButtonEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*Handle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::OnClickedPalButtonEvent(class UPalIndividualCharacterHandle* Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "OnClickedPalButtonEvent");

	Params::UWBP_MainMenu_Pal_00_C_OnClickedPalButtonEvent_Params Parms{};

	Parms.Handle = Handle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.OnUnhoveredConditionButtonEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Pal_State_C*   SelfWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::OnUnhoveredConditionButtonEvent(class UWBP_MainMenu_Pal_State_C* SelfWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "OnUnhoveredConditionButtonEvent");

	Params::UWBP_MainMenu_Pal_00_C_OnUnhoveredConditionButtonEvent_Params Parms{};

	Parms.SelfWidget = SelfWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.OnHoveredConditionButtonEvent
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Pal_State_C*   StateWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPalConditionName_outName                             (None)
// class FText                        CallFunc_GetPalConditionDesc_outDesc                             (None)

void UWBP_MainMenu_Pal_00_C::OnHoveredConditionButtonEvent(class UWBP_MainMenu_Pal_State_C* StateWidget, class FText CallFunc_GetPalConditionName_outName, class FText CallFunc_GetPalConditionDesc_outDesc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "OnHoveredConditionButtonEvent");

	Params::UWBP_MainMenu_Pal_00_C_OnHoveredConditionButtonEvent_Params Parms{};

	Parms.StateWidget = StateWidget;
	Parms.CallFunc_GetPalConditionName_outName = CallFunc_GetPalConditionName_outName;
	Parms.CallFunc_GetPalConditionDesc_outDesc = CallFunc_GetPalConditionDesc_outDesc;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.OnUnhoveredPassiveSkillButtonEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Pal_Skill_Passive_C*SelfWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::OnUnhoveredPassiveSkillButtonEvent(class UWBP_MainMenu_Pal_Skill_Passive_C* SelfWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "OnUnhoveredPassiveSkillButtonEvent");

	Params::UWBP_MainMenu_Pal_00_C_OnUnhoveredPassiveSkillButtonEvent_Params Parms{};

	Parms.SelfWidget = SelfWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.OnHoveredPassiveSkillButtonEvent
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Pal_Skill_Passive_C*SelfWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBindedPassiveSkillName_passiveSkillName              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_BuildPassiveSkillDescText_text                          (None)
// class FText                        CallFunc_GetPassiveSkillName_outName                             (None)

void UWBP_MainMenu_Pal_00_C::OnHoveredPassiveSkillButtonEvent(class UWBP_MainMenu_Pal_Skill_Passive_C* SelfWidget, class FName CallFunc_GetBindedPassiveSkillName_passiveSkillName, class FText CallFunc_BuildPassiveSkillDescText_text, class FText CallFunc_GetPassiveSkillName_outName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "OnHoveredPassiveSkillButtonEvent");

	Params::UWBP_MainMenu_Pal_00_C_OnHoveredPassiveSkillButtonEvent_Params Parms{};

	Parms.SelfWidget = SelfWidget;
	Parms.CallFunc_GetBindedPassiveSkillName_passiveSkillName = CallFunc_GetBindedPassiveSkillName_passiveSkillName;
	Parms.CallFunc_BuildPassiveSkillDescText_text = CallFunc_BuildPassiveSkillDescText_text;
	Parms.CallFunc_GetPassiveSkillName_outName = CallFunc_GetPassiveSkillName_outName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.OnUnhoveredActiveSkillButtonEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Pal_Skill_Active_C*SelfWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::OnUnhoveredActiveSkillButtonEvent(class UWBP_MainMenu_Pal_Skill_Active_C* SelfWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "OnUnhoveredActiveSkillButtonEvent");

	Params::UWBP_MainMenu_Pal_00_C_OnUnhoveredActiveSkillButtonEvent_Params Parms{};

	Parms.SelfWidget = SelfWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.SetGender
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalGenderType          GenderType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::SetGender(enum class EPalGenderType GenderType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "SetGender");

	Params::UWBP_MainMenu_Pal_00_C_SetGender_Params Parms{};

	Parms.GenderType = GenderType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.Update Buff Status
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterParameter*Individual                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCraftSpeed_withBuff_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCraftSpeed_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShotAttack_withBuff_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShotAttack_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDefense_withBuff_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDefense_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderTransformAngle_Angle_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderTransformAngle_Angle_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderTransformAngle_Angle_ImplicitCast_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::Update_Buff_Status(class UPalIndividualCharacterParameter* Individual, bool Temp_bool_Variable, int32 CallFunc_GetCraftSpeed_withBuff_ReturnValue, int32 CallFunc_GetCraftSpeed_ReturnValue, int32 CallFunc_GetShotAttack_withBuff_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, double CallFunc_SelectFloat_ReturnValue, int32 CallFunc_GetShotAttack_ReturnValue, int32 CallFunc_GetDefense_withBuff_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, int32 CallFunc_GetDefense_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Greater_IntInt_ReturnValue_2, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_2, double CallFunc_SelectFloat_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue_2, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default_2, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast_1, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "Update Buff Status");

	Params::UWBP_MainMenu_Pal_00_C_Update_Buff_Status_Params Parms{};

	Parms.Individual = Individual;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCraftSpeed_withBuff_ReturnValue = CallFunc_GetCraftSpeed_withBuff_ReturnValue;
	Parms.CallFunc_GetCraftSpeed_ReturnValue = CallFunc_GetCraftSpeed_ReturnValue;
	Parms.CallFunc_GetShotAttack_withBuff_ReturnValue = CallFunc_GetShotAttack_withBuff_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetShotAttack_ReturnValue = CallFunc_GetShotAttack_ReturnValue;
	Parms.CallFunc_GetDefense_withBuff_ReturnValue = CallFunc_GetDefense_withBuff_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_SelectColor_ReturnValue_1 = CallFunc_SelectColor_ReturnValue_1;
	Parms.CallFunc_GetDefense_ReturnValue = CallFunc_GetDefense_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_SelectColor_ReturnValue_2 = CallFunc_SelectColor_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_2 = CallFunc_NotEqual_IntInt_ReturnValue_2;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_SetRenderTransformAngle_Angle_ImplicitCast = CallFunc_SetRenderTransformAngle_Angle_ImplicitCast;
	Parms.CallFunc_SetRenderTransformAngle_Angle_ImplicitCast_1 = CallFunc_SetRenderTransformAngle_Angle_ImplicitCast_1;
	Parms.CallFunc_SetRenderTransformAngle_Angle_ImplicitCast_2 = CallFunc_SetRenderTransformAngle_Angle_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.Get Partner Skill Lock Item Name
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnText                                                       (Parm, OutParm)
// class FString                      LockItemNameText                                                 (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_outName                                     (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_MainMenu_Pal_00_C::Get_Partner_Skill_Lock_Item_Name(class FName ItemId, class FText* ReturnText, const class FString& LockItemNameText, class FText CallFunc_GetItemName_outName, class FText CallFunc_GetLocalizedTextFromHandle_Text, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "Get Partner Skill Lock Item Name");

	Params::UWBP_MainMenu_Pal_00_C_Get_Partner_Skill_Lock_Item_Name_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.LockItemNameText = LockItemNameText;
	Parms.CallFunc_GetItemName_outName = CallFunc_GetItemName_outName;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnText != nullptr)
		*ReturnText = Parms.ReturnText;

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.Check Valid Work Suitability
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalWorkSuitability     InWorkSuitability                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalWorkSuitability     OutWorkSuitability                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EPalMapObjectMaterialSubType>MaterialSubTypes                                                 (Parm, OutParm)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::Check_Valid_Work_Suitability(enum class EPalWorkSuitability InWorkSuitability, bool* IsValid, enum class EPalWorkSuitability* OutWorkSuitability, TArray<enum class EPalMapObjectMaterialSubType>* MaterialSubTypes, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "Check Valid Work Suitability");

	Params::UWBP_MainMenu_Pal_00_C_Check_Valid_Work_Suitability_Params Parms{};

	Parms.InWorkSuitability = InWorkSuitability;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutWorkSuitability != nullptr)
		*OutWorkSuitability = Parms.OutWorkSuitability;

	if (MaterialSubTypes != nullptr)
		*MaterialSubTypes = std::move(Parms.MaterialSubTypes);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.SetFoodAmount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FoodAmount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::SetFoodAmount(int32 FoodAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "SetFoodAmount");

	Params::UWBP_MainMenu_Pal_00_C_SetFoodAmount_Params Parms{};

	Parms.FoodAmount = FoodAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.Set Work Suitability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<enum class EPalWorkSuitability, int32>WorkSuitabilities                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              CountIndex                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::Set_Work_Suitability(TMap<enum class EPalWorkSuitability, int32> WorkSuitabilities, int32 CountIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "Set Work Suitability");

	Params::UWBP_MainMenu_Pal_00_C_Set_Work_Suitability_Params Parms{};

	Parms.WorkSuitabilities = WorkSuitabilities;
	Parms.CountIndex = CountIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.Update Soul Rank Binded
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*CallFunc_GetBindedHandle_targetHandle                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPalSoulRank_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::Update_Soul_Rank_Binded(class UPalIndividualCharacterHandle* CallFunc_GetBindedHandle_targetHandle, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetPalSoulRank_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "Update Soul Rank Binded");

	Params::UWBP_MainMenu_Pal_00_C_Update_Soul_Rank_Binded_Params Parms{};

	Parms.CallFunc_GetBindedHandle_targetHandle = CallFunc_GetBindedHandle_targetHandle;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPalSoulRank_ReturnValue = CallFunc_GetPalSoulRank_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.Update Buff Binded
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*CallFunc_GetBindedHandle_targetHandle                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetEffectFoodName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalStatusEffectFoodDataRow CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::Update_Buff_Binded(class UPalIndividualCharacterHandle* CallFunc_GetBindedHandle_targetHandle, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, class FName CallFunc_GetEffectFoodName_ReturnValue, const struct FPalStatusEffectFoodDataRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "Update Buff Binded");

	Params::UWBP_MainMenu_Pal_00_C_Update_Buff_Binded_Params Parms{};

	Parms.CallFunc_GetBindedHandle_targetHandle = CallFunc_GetBindedHandle_targetHandle;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_GetEffectFoodName_ReturnValue = CallFunc_GetEffectFoodName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.UpdateExp_Binded
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AddExp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OldExp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NowExpRate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetBindedHandle_targetHandle                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalExpDatabase*             CallFunc_GetExpDatabase_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNextExp_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::UpdateExp_Binded(int32 AddExp, int32 OldExp, double NowExpRate, int32 CallFunc_Add_IntInt_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetBindedHandle_targetHandle, class UPalExpDatabase* CallFunc_GetExpDatabase_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_GetLevel_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_GetNextExp_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "UpdateExp_Binded");

	Params::UWBP_MainMenu_Pal_00_C_UpdateExp_Binded_Params Parms{};

	Parms.AddExp = AddExp;
	Parms.OldExp = OldExp;
	Parms.NowExpRate = NowExpRate;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetBindedHandle_targetHandle = CallFunc_GetBindedHandle_targetHandle;
	Parms.CallFunc_GetExpDatabase_ReturnValue = CallFunc_GetExpDatabase_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetNextExp_ReturnValue = CallFunc_GetNextExp_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.SetRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Rank                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_MainMenu_PalRarityStar_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::SetRank(int32 Rank, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class UWBP_MainMenu_PalRarityStar_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "SetRank");

	Params::UWBP_MainMenu_Pal_00_C_SetRank_Params Parms{};

	Parms.Rank = Rank;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.Update Condition Binded
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetBindedHandle_targetHandle                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EPalUIConditionType>CallFunc_GetUIDisplayPalCondition_outArray                       (ReferenceParm)
// enum class EPalUIConditionType     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_MainMenu_Pal_State_C*   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalUIConditionType     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_MainMenu_Pal_State_C*   CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::Update_Condition_Binded(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UPalIndividualCharacterHandle* CallFunc_GetBindedHandle_targetHandle, TArray<enum class EPalUIConditionType>& CallFunc_GetUIDisplayPalCondition_outArray, enum class EPalUIConditionType CallFunc_Array_Get_Item, class UWBP_MainMenu_Pal_State_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, enum class EPalUIConditionType CallFunc_Array_Get_Item_2, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, class UWBP_MainMenu_Pal_State_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "Update Condition Binded");

	Params::UWBP_MainMenu_Pal_00_C_Update_Condition_Binded_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetBindedHandle_targetHandle = CallFunc_GetBindedHandle_targetHandle;
	Parms.CallFunc_GetUIDisplayPalCondition_outArray = CallFunc_GetUIDisplayPalCondition_outArray;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue_1 = CallFunc_Array_LastIndex_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.SetElementType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalElementType         Type1                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalElementType         Type2                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::SetElementType(enum class EPalElementType Type1, enum class EPalElementType Type2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "SetElementType");

	Params::UWBP_MainMenu_Pal_00_C_SetElementType_Params Parms{};

	Parms.Type1 = Type1;
	Parms.Type2 = Type2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.BindFromHandle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*TargetHandle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCharacterID_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPalFirstActivatedInfo_outName                        (None)
// class APalCharacter*               CallFunc_TryGetIndividualActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetFormatedFirstActivatedInfoText_outFormatedText       (None)

void UWBP_MainMenu_Pal_00_C::BindFromHandle(class UPalIndividualCharacterHandle* TargetHandle, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FName CallFunc_GetCharacterID_ReturnValue, class FText CallFunc_GetPalFirstActivatedInfo_outName, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class FText CallFunc_GetFormatedFirstActivatedInfoText_outFormatedText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "BindFromHandle");

	Params::UWBP_MainMenu_Pal_00_C_BindFromHandle_Params Parms{};

	Parms.TargetHandle = TargetHandle;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCharacterID_ReturnValue = CallFunc_GetCharacterID_ReturnValue;
	Parms.CallFunc_GetPalFirstActivatedInfo_outName = CallFunc_GetPalFirstActivatedInfo_outName;
	Parms.CallFunc_TryGetIndividualActor_ReturnValue = CallFunc_TryGetIndividualActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetFormatedFirstActivatedInfoText_outFormatedText = CallFunc_GetFormatedFirstActivatedInfoText_outFormatedText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.UpdateActiveSkill_Binded
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EPalWazaID>      ActiveSkills                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_MainMenu_Pal_00_C::UpdateActiveSkill_Binded(TArray<enum class EPalWazaID>& ActiveSkills)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "UpdateActiveSkill_Binded");

	Params::UWBP_MainMenu_Pal_00_C_UpdateActiveSkill_Binded_Params Parms{};

	Parms.ActiveSkills = ActiveSkills;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.SetPassiveSkill
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                PassiveSkills                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_MainMenu_Pal_00_C::SetPassiveSkill(TArray<class FName>& PassiveSkills)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "SetPassiveSkill");

	Params::UWBP_MainMenu_Pal_00_C_SetPassiveSkill_Params Parms{};

	Parms.PassiveSkills = PassiveSkills;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.Update Level Binded
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewLevel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_GetBindedHandle_targetHandle                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)

void UWBP_MainMenu_Pal_00_C::Update_Level_Binded(int32 NewLevel, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, class FText CallFunc_Conv_IntToText_ReturnValue, class UMaterialInterface* K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, class UPalIndividualCharacterHandle* CallFunc_GetBindedHandle_targetHandle, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetLevel_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "Update Level Binded");

	Params::UWBP_MainMenu_Pal_00_C_Update_Level_Binded_Params Parms{};

	Parms.NewLevel = NewLevel;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetBindedHandle_targetHandle = CallFunc_GetBindedHandle_targetHandle;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.UpdateSanity_Binded
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NowSanity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NowMaxSanity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::UpdateSanity_Binded(double NowSanity, double NowMaxSanity, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "UpdateSanity_Binded");

	Params::UWBP_MainMenu_Pal_00_C_UpdateSanity_Binded_Params Parms{};

	Parms.NowSanity = NowSanity;
	Parms.NowMaxSanity = NowMaxSanity;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.UpdateHunger_Binded
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NowHunger                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NowMaxHunger                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::UpdateHunger_Binded(double NowHunger, double NowMaxHunger, double CallFunc_Divide_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "UpdateHunger_Binded");

	Params::UWBP_MainMenu_Pal_00_C_UpdateHunger_Binded_Params Parms{};

	Parms.NowHunger = NowHunger;
	Parms.NowMaxHunger = NowMaxHunger;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue_1 = CallFunc_Conv_DoubleToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.UpdateHP_Binded
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64               NowHP                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64               NowMaxHP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              CallFunc_Convert_FixedPoint64ToFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Convert_FixedPoint64ToInt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_Convert_FixedPoint64ToInt_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::UpdateHP_Binded(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue, int32 CallFunc_Convert_FixedPoint64ToInt_ReturnValue, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_Convert_FixedPoint64ToInt_ReturnValue_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "UpdateHP_Binded");

	Params::UWBP_MainMenu_Pal_00_C_UpdateHP_Binded_Params Parms{};

	Parms.NowHP = NowHP;
	Parms.NowMaxHP = NowMaxHP;
	Parms.CallFunc_Convert_FixedPoint64ToFloat_ReturnValue = CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;
	Parms.CallFunc_Convert_FixedPoint64ToInt_ReturnValue = CallFunc_Convert_FixedPoint64ToInt_ReturnValue;
	Parms.CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1 = CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Convert_FixedPoint64ToInt_ReturnValue_1 = CallFunc_Convert_FixedPoint64ToInt_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.SetupEvent
// (Private, BlueprintCallable, BlueprintEvent)
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

void UWBP_MainMenu_Pal_00_C::SetupEvent(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "SetupEvent");

	Params::UWBP_MainMenu_Pal_00_C_SetupEvent_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.CloseChangeActiveSkillList
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalHUDDispatchParameterBase*UPalHUDDispatchParam                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::CloseChangeActiveSkillList(class UPalHUDDispatchParameterBase* UPalHUDDispatchParam, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "CloseChangeActiveSkillList");

	Params::UWBP_MainMenu_Pal_00_C_CloseChangeActiveSkillList_Params Parms{};

	Parms.UPalHUDDispatchParam = UPalHUDDispatchParam;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.OpenChangeActiveSkillList
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Pal_Skill_Active_C*SkillPanelWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_MainMenuSkillSwapParameter_C*CallFunc_CreateDispatchParameterForK2Node_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Push_ReturnValue                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::OpenChangeActiveSkillList(class UWBP_MainMenu_Pal_Skill_Active_C* SkillPanelWidget, class UBP_MainMenuSkillSwapParameter_C* CallFunc_CreateDispatchParameterForK2Node_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGuid& CallFunc_Push_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "OpenChangeActiveSkillList");

	Params::UWBP_MainMenu_Pal_00_C_OpenChangeActiveSkillList_Params Parms{};

	Parms.SkillPanelWidget = SkillPanelWidget;
	Parms.CallFunc_CreateDispatchParameterForK2Node_ReturnValue = CallFunc_CreateDispatchParameterForK2Node_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Push_ReturnValue = CallFunc_Push_ReturnValue;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.Close Overlay Info Window
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_00_C::Close_Overlay_Info_Window()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "Close Overlay Info Window");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.OpenOverlayStatusInfo
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     RelativeWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   AnchorPosition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   OverrideInfoWidgetAlignment                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Title                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Desc                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_PalUIStatusDIsplayParameterStatus                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::OpenOverlayStatusInfo(class UWidget* RelativeWidget, const struct FVector2D& AnchorPosition, const struct FVector2D& OverrideInfoWidgetAlignment, class FText Title, class FText Desc, enum class E_PalUIStatusDIsplayParameter Status, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "OpenOverlayStatusInfo");

	Params::UWBP_MainMenu_Pal_00_C_OpenOverlayStatusInfo_Params Parms{};

	Parms.RelativeWidget = RelativeWidget;
	Parms.AnchorPosition = AnchorPosition;
	Parms.OverrideInfoWidgetAlignment = OverrideInfoWidgetAlignment;
	Parms.Title = Title;
	Parms.Desc = Desc;
	Parms.Status = Status;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.OpenOverlaySkillInfoWindow
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Pal_Skill_Active_C*RelativeWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   AnchorPosition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   OverrideInfoWidgetAlignment                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalWazaID              CallFunc_GetBindedWazaID_wazaID                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EPalWazaID>      CallFunc_GetEquipWaza_ReturnValue                                (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::OpenOverlaySkillInfoWindow(class UWBP_MainMenu_Pal_Skill_Active_C* RelativeWidget, const struct FVector2D& AnchorPosition, const struct FVector2D& OverrideInfoWidgetAlignment, enum class EPalWazaID CallFunc_GetBindedWazaID_wazaID, bool CallFunc_NotEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<enum class EPalWazaID>& CallFunc_GetEquipWaza_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "OpenOverlaySkillInfoWindow");

	Params::UWBP_MainMenu_Pal_00_C_OpenOverlaySkillInfoWindow_Params Parms{};

	Parms.RelativeWidget = RelativeWidget;
	Parms.AnchorPosition = AnchorPosition;
	Parms.OverrideInfoWidgetAlignment = OverrideInfoWidgetAlignment;
	Parms.CallFunc_GetBindedWazaID_wazaID = CallFunc_GetBindedWazaID_wazaID;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetEquipWaza_ReturnValue = CallFunc_GetEquipWaza_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.Open Overlay Info Window
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     RelativeWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   AnchorPosition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   OverrideInfoWidgetAlignment                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Title                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Info                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        SubInfo                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::Open_Overlay_Info_Window(class UWidget* RelativeWidget, const struct FVector2D& AnchorPosition, const struct FVector2D& OverrideInfoWidgetAlignment, class FText Title, class FText Info, class FText SubInfo, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "Open Overlay Info Window");

	Params::UWBP_MainMenu_Pal_00_C_Open_Overlay_Info_Window_Params Parms{};

	Parms.RelativeWidget = RelativeWidget;
	Parms.AnchorPosition = AnchorPosition;
	Parms.OverrideInfoWidgetAlignment = OverrideInfoWidgetAlignment;
	Parms.Title = Title;
	Parms.Info = Info;
	Parms.SubInfo = SubInfo;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.CustomNavi_ToActiveSkillTop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_MainMenu_Pal_00_C::CustomNavi_ToActiveSkillTop(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "CustomNavi_ToActiveSkillTop");

	Params::UWBP_MainMenu_Pal_00_C_CustomNavi_ToActiveSkillTop_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.IsShowingStatusWithList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsShowing                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::IsShowingStatusWithList(bool* IsShowing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "IsShowingStatusWithList");

	Params::UWBP_MainMenu_Pal_00_C_IsShowingStatusWithList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsShowing != nullptr)
		*IsShowing = Parms.IsShowing;

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.Back to List
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_00_C::Back_to_List()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "Back to List");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.ListToStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*Handle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::ListToStatus(class UPalIndividualCharacterHandle* Handle, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "ListToStatus");

	Params::UWBP_MainMenu_Pal_00_C_ListToStatus_Params Parms{};

	Parms.Handle = Handle;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.FocusToParameterPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_00_C::FocusToParameterPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "FocusToParameterPanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.GetRestoreFocusSkillPanelTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     TargetWidget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::GetRestoreFocusSkillPanelTarget(class UWidget** TargetWidget, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "GetRestoreFocusSkillPanelTarget");

	Params::UWBP_MainMenu_Pal_00_C_GetRestoreFocusSkillPanelTarget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetWidget != nullptr)
		*TargetWidget = Parms.TargetWidget;

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.FocusToSkillPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::FocusToSkillPanel(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "FocusToSkillPanel");

	Params::UWBP_MainMenu_Pal_00_C_FocusToSkillPanel_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.FocusToPalPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Menu_PalList_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::FocusToPalPanel(int32 Index, int32 CallFunc_Array_LastIndex_ReturnValue, class UWBP_Menu_PalList_C* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "FocusToPalPanel");

	Params::UWBP_MainMenu_Pal_00_C_FocusToPalPanel_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.Setup Status
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*Handle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRank_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCharacterID_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_GetPartnerSkillName_OutText                             (None)
// class FText                        CallFunc_GetPalFirstActivatedInfo_outName                        (None)
// class FName                        CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetNickName_outName                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::Setup_Status(class UPalIndividualCharacterHandle* Handle, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, int32 CallFunc_GetRank_ReturnValue, class FName CallFunc_GetCharacterID_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_GetPartnerSkillName_OutText, class FText CallFunc_GetPalFirstActivatedInfo_outName, class FName CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName, const class FString& CallFunc_GetNickName_outName, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "Setup Status");

	Params::UWBP_MainMenu_Pal_00_C_Setup_Status_Params Parms{};

	Parms.Handle = Handle;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.CallFunc_GetRank_ReturnValue = CallFunc_GetRank_ReturnValue;
	Parms.CallFunc_GetCharacterID_ReturnValue = CallFunc_GetCharacterID_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetPartnerSkillName_OutText = CallFunc_GetPartnerSkillName_OutText;
	Parms.CallFunc_GetPalFirstActivatedInfo_outName = CallFunc_GetPalFirstActivatedInfo_outName;
	Parms.CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName = CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName;
	Parms.CallFunc_GetNickName_outName = CallFunc_GetNickName_outName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.Set Pal Handles
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPalIndividualCharacterHandle*>Handles                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Menu_PalList_C*         CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Menu_PalList_C*         CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::Set_Pal_Handles(TArray<class UPalIndividualCharacterHandle*>& Handles, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, class UPalIndividualCharacterHandle* CallFunc_Array_Get_Item, class UWBP_Menu_PalList_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, class UWBP_Menu_PalList_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Min_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "Set Pal Handles");

	Params::UWBP_MainMenu_Pal_00_C_Set_Pal_Handles_Params Parms{};

	Parms.Handles = Handles;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue_1 = CallFunc_Array_LastIndex_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.OnHoveredActiveSkillButtonEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Pal_Skill_Active_C*SelfWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::OnHoveredActiveSkillButtonEvent(class UWBP_MainMenu_Pal_Skill_Active_C* SelfWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "OnHoveredActiveSkillButtonEvent");

	Params::UWBP_MainMenu_Pal_00_C_OnHoveredActiveSkillButtonEvent_Params Parms{};

	Parms.SelfWidget = SelfWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.Finished_3B3110DC440BFBD5CFED78B55117839E
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_00_C::Finished_3B3110DC440BFBD5CFED78B55117839E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "Finished_3B3110DC440BFBD5CFED78B55117839E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.Finished_F11D370F4605F1875DFE3B9E5A74FBB3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_00_C::Finished_F11D370F4605F1875DFE3B9E5A74FBB3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "Finished_F11D370F4605F1875DFE3B9E5A74FBB3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.AnmEvent_OpenList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_00_C::AnmEvent_OpenList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "AnmEvent_OpenList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.AnmEvent_ToStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_00_C::AnmEvent_ToStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "AnmEvent_ToStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.AnmEvent_ToList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_00_C::AnmEvent_ToList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "AnmEvent_ToList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.AnmEvent_ToStatus_WithSetup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*Handle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::AnmEvent_ToStatus_WithSetup(class UPalIndividualCharacterHandle* Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "AnmEvent_ToStatus_WithSetup");

	Params::UWBP_MainMenu_Pal_00_C_AnmEvent_ToStatus_WithSetup_Params Parms{};

	Parms.Handle = Handle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.AnmEvent_NoPal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_00_C::AnmEvent_NoPal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "AnmEvent_NoPal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.AnmEvent_ShowSideInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_00_C::AnmEvent_ShowSideInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "AnmEvent_ShowSideInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.AnmEvent_HideSideInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_00_C::AnmEvent_HideSideInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "AnmEvent_HideSideInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_00_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_HP_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_HP_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_HP_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_00_C_BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_HP_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_HP_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_HP_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_HP_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_00_C_BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_HP_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_Hunger_K2Node_ComponentBoundEvent_16_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_Hunger_K2Node_ComponentBoundEvent_16_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_Hunger_K2Node_ComponentBoundEvent_16_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_00_C_BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_Hunger_K2Node_ComponentBoundEvent_16_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_Hunger_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_Hunger_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_Hunger_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_00_C_BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_Hunger_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_SAN_K2Node_ComponentBoundEvent_18_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_SAN_K2Node_ComponentBoundEvent_18_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_SAN_K2Node_ComponentBoundEvent_18_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_00_C_BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_SAN_K2Node_ComponentBoundEvent_18_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_SAN_K2Node_ComponentBoundEvent_19_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_SAN_K2Node_ComponentBoundEvent_19_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_SAN_K2Node_ComponentBoundEvent_19_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_00_C_BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_SAN_K2Node_ComponentBoundEvent_19_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.BndEvt__WBP_MainMenu_Pal_00_WBP_MainMenu_Pal_Skill_Active_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Pal_Skill_Active_C*SelfWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::BndEvt__WBP_MainMenu_Pal_00_WBP_MainMenu_Pal_Skill_Active_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UWBP_MainMenu_Pal_Skill_Active_C* SelfWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "BndEvt__WBP_MainMenu_Pal_00_WBP_MainMenu_Pal_Skill_Active_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_00_C_BndEvt__WBP_MainMenu_Pal_00_WBP_MainMenu_Pal_Skill_Active_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params Parms{};

	Parms.SelfWidget = SelfWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.BndEvt__WBP_MainMenu_Pal_00_WBP_MainMenu_Pal_Skill_Active_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Pal_Skill_Active_C*SelfWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::BndEvt__WBP_MainMenu_Pal_00_WBP_MainMenu_Pal_Skill_Active_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UWBP_MainMenu_Pal_Skill_Active_C* SelfWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "BndEvt__WBP_MainMenu_Pal_00_WBP_MainMenu_Pal_Skill_Active_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_00_C_BndEvt__WBP_MainMenu_Pal_00_WBP_MainMenu_Pal_Skill_Active_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params Parms{};

	Parms.SelfWidget = SelfWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.BndEvt__WBP_MainMenu_Pal_00_WBP_MainMenu_Pal_Skill_Active_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_MainMenu_Pal_Skill_Active_C*SelfWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::BndEvt__WBP_MainMenu_Pal_00_WBP_MainMenu_Pal_Skill_Active_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UWBP_MainMenu_Pal_Skill_Active_C* SelfWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "BndEvt__WBP_MainMenu_Pal_00_WBP_MainMenu_Pal_Skill_Active_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_00_C_BndEvt__WBP_MainMenu_Pal_00_WBP_MainMenu_Pal_Skill_Active_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params Parms{};

	Parms.SelfWidget = SelfWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.OnSelectedSkill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalWazaID              WazaID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::OnSelectedSkill(enum class EPalWazaID WazaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "OnSelectedSkill");

	Params::UWBP_MainMenu_Pal_00_C_OnSelectedSkill_Params Parms{};

	Parms.WazaID = WazaID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Def_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Def_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Def_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_00_C_BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Def_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Def_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Def_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Def_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_00_C_BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Def_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Atk_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Atk_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Atk_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_00_C_BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Atk_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Atk_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Atk_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Atk_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_00_C_BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Atk_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Work_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Work_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Work_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_00_C_BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Work_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Work_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Work_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Work_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_00_C_BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Work_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_00_C_BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_00_C_BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_LevelSync_K2Node_ComponentBoundEvent_22_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_LevelSync_K2Node_ComponentBoundEvent_22_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_LevelSync_K2Node_ComponentBoundEvent_22_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_00_C_BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_LevelSync_K2Node_ComponentBoundEvent_22_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_LevelSync_K2Node_ComponentBoundEvent_23_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_LevelSync_K2Node_ComponentBoundEvent_23_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_LevelSync_K2Node_ComponentBoundEvent_23_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_MainMenu_Pal_00_C_BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_LevelSync_K2Node_ComponentBoundEvent_23_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.BndEvt__WBP_MainMenu_Pal_00_WBP_CommonButton_NameEdit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_00_C::BndEvt__WBP_MainMenu_Pal_00_WBP_CommonButton_NameEdit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "BndEvt__WBP_MainMenu_Pal_00_WBP_CommonButton_NameEdit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_00_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.ExecuteUbergraph_WBP_MainMenu_Pal_00
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUGCFilter_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_MainMenu_Pal_Skill_Passive_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_MainMenu_Pal_Skill_Active_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_MainMenu_Pal_State_C*   CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Menu_PalList_C*         CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_MainMenu_Pal_State_C*   CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*K2Node_CustomEvent_Handle                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Menu_PalList_C*         CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_Menu_PalList_C*> K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// TArray<class UWBP_MainMenu_Pal_Skill_Active_C*>K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*>K2Node_MakeArray_Array_2                                         (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_1                       (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_2                       (None)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_15                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_14                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_13                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_12                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_11                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_10                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_MainMenu_Pal_Skill_Active_C*K2Node_ComponentBoundEvent_SelfWidget_2                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_MainMenu_Pal_Skill_Active_C*K2Node_ComponentBoundEvent_SelfWidget_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_MainMenu_Pal_Skill_Active_C*K2Node_ComponentBoundEvent_SelfWidget                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_MainMenu_PalRarityStar_C*>K2Node_MakeArray_Array_3                                         (ReferenceParm, ContainsInstancedReference)
// TArray<class UWBP_MainMenu_Pal_State_C*>K2Node_MakeArray_Array_4                                         (ReferenceParm, ContainsInstancedReference)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_3                       (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_4                       (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_5                       (None)
// enum class EPalWazaID              K2Node_CustomEvent_WazaId                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_6                       (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalWazaID              CallFunc_GetBindedWazaID_wazaID                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_MainMenu_Pal_State_C*>K2Node_MakeArray_Array_5                                         (ReferenceParm, ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_9                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_8                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_7                       (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_8                       (None)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_7                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_6                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_9                       (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_10                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_11                      (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_12                      (None)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_13                      (None)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCharacterID_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPalFirstActivatedInfo_outName                        (None)
// class FName                        CallFunc_GetPalRestrictItemID_ItemID                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPalRestrictItemID_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPartnerSkillName_OutText                             (None)
// class FText                        CallFunc_Get_Partner_Skill_Lock_Item_Name_ReturnText             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_14                      (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_6                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text_15                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter*CallFunc_TryGetIndividualParameter_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetNickName_outName                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_MainMenu_Pal_00_C::ExecuteUbergraph_WBP_MainMenu_Pal_00(int32 EntryPoint, bool CallFunc_IsUGCFilter_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UWBP_MainMenu_Pal_Skill_Passive_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable_3, class UWBP_MainMenu_Pal_Skill_Active_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_4, class UWBP_MainMenu_Pal_State_C* CallFunc_Array_Get_Item_2, class UWBP_Menu_PalList_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_5, class UWBP_MainMenu_Pal_State_C* CallFunc_Array_Get_Item_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UPalIndividualCharacterHandle* K2Node_CustomEvent_Handle, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UWBP_Menu_PalList_C* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_5, TArray<class UWBP_Menu_PalList_C*>& K2Node_MakeArray_Array, TArray<class UWBP_MainMenu_Pal_Skill_Active_C*>& K2Node_MakeArray_Array_1, int32 Temp_int_Loop_Counter_Variable_4, TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*>& K2Node_MakeArray_Array_2, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_5, class FText CallFunc_GetLocalizedTextFromHandle_Text, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_5, class FText CallFunc_GetLocalizedTextFromHandle_Text_1, class FText CallFunc_GetLocalizedTextFromHandle_Text_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_15, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_14, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_13, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_12, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_11, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_10, class UWBP_MainMenu_Pal_Skill_Active_C* K2Node_ComponentBoundEvent_SelfWidget_2, class UWBP_MainMenu_Pal_Skill_Active_C* K2Node_ComponentBoundEvent_SelfWidget_1, class UWBP_MainMenu_Pal_Skill_Active_C* K2Node_ComponentBoundEvent_SelfWidget, TArray<class UWBP_MainMenu_PalRarityStar_C*>& K2Node_MakeArray_Array_3, TArray<class UWBP_MainMenu_Pal_State_C*>& K2Node_MakeArray_Array_4, class FText CallFunc_GetLocalizedTextFromHandle_Text_3, class FText CallFunc_GetLocalizedTextFromHandle_Text_4, class FText CallFunc_GetLocalizedTextFromHandle_Text_5, enum class EPalWazaID K2Node_CustomEvent_WazaId, class FText CallFunc_GetLocalizedTextFromHandle_Text_6, bool CallFunc_IsValid_ReturnValue_2, enum class EPalWazaID CallFunc_GetBindedWazaID_wazaID, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, TArray<class UWBP_MainMenu_Pal_State_C*>& K2Node_MakeArray_Array_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_9, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_8, class FText CallFunc_GetLocalizedTextFromHandle_Text_7, class FText CallFunc_GetLocalizedTextFromHandle_Text_8, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_7, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_6, class FText CallFunc_GetLocalizedTextFromHandle_Text_9, class FText CallFunc_GetLocalizedTextFromHandle_Text_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_5, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, class FText CallFunc_GetLocalizedTextFromHandle_Text_11, class FText CallFunc_GetLocalizedTextFromHandle_Text_12, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, bool CallFunc_IsValid_ReturnValue_4, class FText CallFunc_GetLocalizedTextFromHandle_Text_13, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class FName CallFunc_GetCharacterID_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class FName CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName, class FText CallFunc_GetPalFirstActivatedInfo_outName, class FName CallFunc_GetPalRestrictItemID_ItemID, bool CallFunc_GetPalRestrictItemID_ReturnValue, class FText CallFunc_GetPartnerSkillName_OutText, class FText CallFunc_Get_Partner_Skill_Lock_Item_Name_ReturnText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetLocalizedTextFromHandle_Text_14, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_6, class FText CallFunc_Format_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UPalIndividualCharacterParameter* CallFunc_TryGetIndividualParameter_ReturnValue_1, const class FString& CallFunc_GetNickName_outName, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "ExecuteUbergraph_WBP_MainMenu_Pal_00");

	Params::UWBP_MainMenu_Pal_00_C_ExecuteUbergraph_WBP_MainMenu_Pal_00_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsUGCFilter_ReturnValue = CallFunc_IsUGCFilter_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CustomEvent_Handle = K2Node_CustomEvent_Handle;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_1 = CallFunc_GetLocalizedTextFromHandle_Text_1;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_2 = CallFunc_GetLocalizedTextFromHandle_Text_2;
	Parms.K2Node_ComponentBoundEvent_Button_15 = K2Node_ComponentBoundEvent_Button_15;
	Parms.K2Node_ComponentBoundEvent_Button_14 = K2Node_ComponentBoundEvent_Button_14;
	Parms.K2Node_ComponentBoundEvent_Button_13 = K2Node_ComponentBoundEvent_Button_13;
	Parms.K2Node_ComponentBoundEvent_Button_12 = K2Node_ComponentBoundEvent_Button_12;
	Parms.K2Node_ComponentBoundEvent_Button_11 = K2Node_ComponentBoundEvent_Button_11;
	Parms.K2Node_ComponentBoundEvent_Button_10 = K2Node_ComponentBoundEvent_Button_10;
	Parms.K2Node_ComponentBoundEvent_SelfWidget_2 = K2Node_ComponentBoundEvent_SelfWidget_2;
	Parms.K2Node_ComponentBoundEvent_SelfWidget_1 = K2Node_ComponentBoundEvent_SelfWidget_1;
	Parms.K2Node_ComponentBoundEvent_SelfWidget = K2Node_ComponentBoundEvent_SelfWidget;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_3 = CallFunc_GetLocalizedTextFromHandle_Text_3;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_4 = CallFunc_GetLocalizedTextFromHandle_Text_4;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_5 = CallFunc_GetLocalizedTextFromHandle_Text_5;
	Parms.K2Node_CustomEvent_WazaId = K2Node_CustomEvent_WazaId;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_6 = CallFunc_GetLocalizedTextFromHandle_Text_6;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetBindedWazaID_wazaID = CallFunc_GetBindedWazaID_wazaID;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_ComponentBoundEvent_Button_9 = K2Node_ComponentBoundEvent_Button_9;
	Parms.K2Node_ComponentBoundEvent_Button_8 = K2Node_ComponentBoundEvent_Button_8;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_7 = CallFunc_GetLocalizedTextFromHandle_Text_7;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_8 = CallFunc_GetLocalizedTextFromHandle_Text_8;
	Parms.K2Node_ComponentBoundEvent_Button_7 = K2Node_ComponentBoundEvent_Button_7;
	Parms.K2Node_ComponentBoundEvent_Button_6 = K2Node_ComponentBoundEvent_Button_6;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_9 = CallFunc_GetLocalizedTextFromHandle_Text_9;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_10 = CallFunc_GetLocalizedTextFromHandle_Text_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_11 = CallFunc_GetLocalizedTextFromHandle_Text_11;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_12 = CallFunc_GetLocalizedTextFromHandle_Text_12;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_13 = CallFunc_GetLocalizedTextFromHandle_Text_13;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue = CallFunc_TryGetIndividualParameter_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_GetCharacterID_ReturnValue = CallFunc_GetCharacterID_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName = CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName;
	Parms.CallFunc_GetPalFirstActivatedInfo_outName = CallFunc_GetPalFirstActivatedInfo_outName;
	Parms.CallFunc_GetPalRestrictItemID_ItemID = CallFunc_GetPalRestrictItemID_ItemID;
	Parms.CallFunc_GetPalRestrictItemID_ReturnValue = CallFunc_GetPalRestrictItemID_ReturnValue;
	Parms.CallFunc_GetPartnerSkillName_OutText = CallFunc_GetPartnerSkillName_OutText;
	Parms.CallFunc_Get_Partner_Skill_Lock_Item_Name_ReturnText = CallFunc_Get_Partner_Skill_Lock_Item_Name_ReturnText;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_14 = CallFunc_GetLocalizedTextFromHandle_Text_14;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text_15 = CallFunc_GetLocalizedTextFromHandle_Text_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_TryGetIndividualParameter_ReturnValue_1 = CallFunc_TryGetIndividualParameter_ReturnValue_1;
	Parms.CallFunc_GetNickName_outName = CallFunc_GetNickName_outName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.OnUnhoveredAnyPalPanel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_MainMenu_Pal_00_C::OnUnhoveredAnyPalPanel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "OnUnhoveredAnyPalPanel__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.OnRequestedRemoveWaza__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPalWazaID              WazaID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*TargetHandle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::OnRequestedRemoveWaza__DelegateSignature(enum class EPalWazaID WazaID, class UPalIndividualCharacterHandle* TargetHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "OnRequestedRemoveWaza__DelegateSignature");

	Params::UWBP_MainMenu_Pal_00_C_OnRequestedRemoveWaza__DelegateSignature_Params Parms{};

	Parms.WazaID = WazaID;
	Parms.TargetHandle = TargetHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.OnSelectedChangeActiveSkill__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*TargetHandle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalWazaID              ChangeWazaID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalWazaID              NewWazaID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::OnSelectedChangeActiveSkill__DelegateSignature(class UPalIndividualCharacterHandle* TargetHandle, enum class EPalWazaID ChangeWazaID, enum class EPalWazaID NewWazaID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "OnSelectedChangeActiveSkill__DelegateSignature");

	Params::UWBP_MainMenu_Pal_00_C_OnSelectedChangeActiveSkill__DelegateSignature_Params Parms{};

	Parms.TargetHandle = TargetHandle;
	Parms.ChangeWazaID = ChangeWazaID;
	Parms.NewWazaID = NewWazaID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.OnChangedNickname__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        EditingNickName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MainMenu_Pal_00_C::OnChangedNickname__DelegateSignature(class FText EditingNickName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "OnChangedNickname__DelegateSignature");

	Params::UWBP_MainMenu_Pal_00_C_OnChangedNickname__DelegateSignature_Params Parms{};

	Parms.EditingNickName = EditingNickName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.OnCommitedNickName__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewNickName                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MainMenu_Pal_00_C::OnCommitedNickName__DelegateSignature(class FText NewNickName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "OnCommitedNickName__DelegateSignature");

	Params::UWBP_MainMenu_Pal_00_C_OnCommitedNickName__DelegateSignature_Params Parms{};

	Parms.NewNickName = NewNickName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.OnHoveredAnyPalPanel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*Handle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::OnHoveredAnyPalPanel__DelegateSignature(class UPalIndividualCharacterHandle* Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "OnHoveredAnyPalPanel__DelegateSignature");

	Params::UWBP_MainMenu_Pal_00_C_OnHoveredAnyPalPanel__DelegateSignature_Params Parms{};

	Parms.Handle = Handle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MainMenu_Pal_00.WBP_MainMenu_Pal_00_C.OnClickedAnyPalPanel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*Handle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_00_C::OnClickedAnyPalPanel__DelegateSignature(class UPalIndividualCharacterHandle* Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MainMenu_Pal_00_C", "OnClickedAnyPalPanel__DelegateSignature");

	Params::UWBP_MainMenu_Pal_00_C_OnClickedAnyPalPanel__DelegateSignature_Params Parms{};

	Parms.Handle = Handle;

	UObject::ProcessEvent(Func, &Parms);

}

}


