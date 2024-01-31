#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C
// (None)

class UClass* UWBP_CharaCre_PartsSelectPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CharaCre_PartsSelectPanel_C");

	return Clss;
}


// WBP_CharaCre_PartsSelectPanel_C WBP_CharaCre_PartsSelectPanel.Default__WBP_CharaCre_PartsSelectPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CharaCre_PartsSelectPanel_C* UWBP_CharaCre_PartsSelectPanel_C::GetDefaultObj()
{
	static class UWBP_CharaCre_PartsSelectPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CharaCre_PartsSelectPanel_C*>(UWBP_CharaCre_PartsSelectPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.SetSelectedPresetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PresetName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_PartsSelect_sq_C*CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_PartsSelectPanel_C::SetSelectedPresetName(class FName PresetName, class UWBP_CharaCre_PartsSelect_sq_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelectPanel_C", "SetSelectedPresetName");

	Params::UWBP_CharaCre_PartsSelectPanel_C_SetSelectedPresetName_Params Parms{};

	Parms.PresetName = PresetName;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.OnClicked_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_PartsSelect_sq_C*Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBindedPresetName_PresetName                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_PartsSelectPanel_C::OnClicked_Internal(class UWBP_CharaCre_PartsSelect_sq_C* Button, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_GetBindedPresetName_PresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelectPanel_C", "OnClicked_Internal");

	Params::UWBP_CharaCre_PartsSelectPanel_C_OnClicked_Internal_Params Parms{};

	Parms.Button = Button;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBindedPresetName_PresetName = CallFunc_GetBindedPresetName_PresetName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.GetTopFocusTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_PartsSelect_sq_C*K2Node_DynamicCast_AsWBP_Chara_Cre_Parts_Select_Sq               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_PartsSelectPanel_C::GetTopFocusTarget(class UWidget** Widget, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_CharaCre_PartsSelect_sq_C* K2Node_DynamicCast_AsWBP_Chara_Cre_Parts_Select_Sq, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelectPanel_C", "GetTopFocusTarget");

	Params::UWBP_CharaCre_PartsSelectPanel_C_GetTopFocusTarget_Params Parms{};

	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Chara_Cre_Parts_Select_Sq = K2Node_DynamicCast_AsWBP_Chara_Cre_Parts_Select_Sq;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.AddPreset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        PresetName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   SoftIconTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_PartsSelect_sq_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_PartsSelectPanel_C::AddPreset(class FName PresetName, TSoftObjectPtr<class UTexture2D> SoftIconTexture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_CharaCre_PartsSelect_sq_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelectPanel_C", "AddPreset");

	Params::UWBP_CharaCre_PartsSelectPanel_C_AddPreset_Params Parms{};

	Parms.PresetName = PresetName;
	Parms.SoftIconTexture = SoftIconTexture;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.AddMeshPresets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, struct FPalCharacterCreationMeshPresetDataRow>PresetMap                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalCharacterCreationMeshPresetDataRowCallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_CharaCre_PartsSelect_sq_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_PartsSelectPanel_C::AddMeshPresets(TMap<class FName, struct FPalCharacterCreationMeshPresetDataRow> PresetMap, int32 Temp_int_Loop_Counter_Variable, TArray<class FName>& CallFunc_Map_Keys_Keys, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class FName CallFunc_Array_Get_Item, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FPalCharacterCreationMeshPresetDataRow& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class UWBP_CharaCre_PartsSelect_sq_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelectPanel_C", "AddMeshPresets");

	Params::UWBP_CharaCre_PartsSelectPanel_C_AddMeshPresets_Params Parms{};

	Parms.PresetMap = PresetMap;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CharaCre_PartsSelectPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelectPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.ExecuteUbergraph_WBP_CharaCre_PartsSelectPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_PartsSelectPanel_C::ExecuteUbergraph_WBP_CharaCre_PartsSelectPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelectPanel_C", "ExecuteUbergraph_WBP_CharaCre_PartsSelectPanel");

	Params::UWBP_CharaCre_PartsSelectPanel_C_ExecuteUbergraph_WBP_CharaCre_PartsSelectPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.OnClickedAnyContent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BindedName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_PartsSelectPanel_C::OnClickedAnyContent__DelegateSignature(class FName BindedName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CharaCre_PartsSelectPanel_C", "OnClickedAnyContent__DelegateSignature");

	Params::UWBP_CharaCre_PartsSelectPanel_C_OnClickedAnyContent__DelegateSignature_Params Parms{};

	Parms.BindedName = BindedName;

	UObject::ProcessEvent(Func, &Parms);

}

}


