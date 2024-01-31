#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Ingame_InteractDurability.WBP_Ingame_InteractDurability_C
// (None)

class UClass* UWBP_Ingame_InteractDurability_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Ingame_InteractDurability_C");

	return Clss;
}


// WBP_Ingame_InteractDurability_C WBP_Ingame_InteractDurability.Default__WBP_Ingame_InteractDurability_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Ingame_InteractDurability_C* UWBP_Ingame_InteractDurability_C::GetDefaultObj()
{
	static class UWBP_Ingame_InteractDurability_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Ingame_InteractDurability_C*>(UWBP_Ingame_InteractDurability_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Ingame_InteractDurability.WBP_Ingame_InteractDurability_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_InteractDurability_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_InteractDurability_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_InteractDurability.WBP_Ingame_InteractDurability_C.ShowHP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalMapObject*               MapObject                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalHUDDisplayType      DisplayType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_InteractDurability_C::ShowHP(class APalMapObject* MapObject, enum class EPalHUDDisplayType DisplayType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_InteractDurability_C", "ShowHP");

	Params::UWBP_Ingame_InteractDurability_C_ShowHP_Params Parms{};

	Parms.MapObject = MapObject;
	Parms.DisplayType = DisplayType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_InteractDurability.WBP_Ingame_InteractDurability_C.UpdateHP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectModel*          Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_InteractDurability_C::UpdateHP(class UPalMapObjectModel* Model)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_InteractDurability_C", "UpdateHP");

	Params::UWBP_Ingame_InteractDurability_C_UpdateHP_Params Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Ingame_InteractDurability.WBP_Ingame_InteractDurability_C.CollapsePanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ingame_InteractDurability_C::CollapsePanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_InteractDurability_C", "CollapsePanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ingame_InteractDurability.WBP_Ingame_InteractDurability_C.ExecuteUbergraph_WBP_Ingame_InteractDurability
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectHPWorldHUDParameter*K2Node_DynamicCast_AsPal_Map_Object_HPWorld_HUDParameter         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalMapObject*               K2Node_CustomEvent_MapObject                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalHUDDisplayType      K2Node_CustomEvent_DisplayType                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectModel*          CallFunc_GetModel_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectModel*          K2Node_CustomEvent_Model                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalMapObjectStatusValue    CallFunc_GetHP_ReturnValue                                       (ConstParm, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_InteractDurability_C::ExecuteUbergraph_WBP_Ingame_InteractDurability(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalMapObjectHPWorldHUDParameter* K2Node_DynamicCast_AsPal_Map_Object_HPWorld_HUDParameter, bool K2Node_DynamicCast_bSuccess, class APalMapObject* K2Node_CustomEvent_MapObject, enum class EPalHUDDisplayType K2Node_CustomEvent_DisplayType, bool K2Node_SwitchEnum_CmpSuccess, class UPalMapObjectModel* CallFunc_GetModel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalMapObjectModel* K2Node_CustomEvent_Model, const struct FPalMapObjectStatusValue& CallFunc_GetHP_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, class UMaterialInterface* K2Node_Select_Default, class FText CallFunc_Conv_IntToText_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ingame_InteractDurability_C", "ExecuteUbergraph_WBP_Ingame_InteractDurability");

	Params::UWBP_Ingame_InteractDurability_C_ExecuteUbergraph_WBP_Ingame_InteractDurability_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsPal_Map_Object_HPWorld_HUDParameter = K2Node_DynamicCast_AsPal_Map_Object_HPWorld_HUDParameter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_MapObject = K2Node_CustomEvent_MapObject;
	Parms.K2Node_CustomEvent_DisplayType = K2Node_CustomEvent_DisplayType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetModel_ReturnValue = CallFunc_GetModel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Model = K2Node_CustomEvent_Model;
	Parms.CallFunc_GetHP_ReturnValue = CallFunc_GetHP_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


