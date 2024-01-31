#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_IngameMenu_Monitoring.WBP_IngameMenu_Monitoring_C
// (None)

class UClass* UWBP_IngameMenu_Monitoring_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_IngameMenu_Monitoring_C");

	return Clss;
}


// WBP_IngameMenu_Monitoring_C WBP_IngameMenu_Monitoring.Default__WBP_IngameMenu_Monitoring_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_IngameMenu_Monitoring_C* UWBP_IngameMenu_Monitoring_C::GetDefaultObj()
{
	static class UWBP_IngameMenu_Monitoring_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_IngameMenu_Monitoring_C*>(UWBP_IngameMenu_Monitoring_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_IngameMenu_Monitoring.WBP_IngameMenu_Monitoring_C.DisplayHoverWorkHardInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              WorkHardLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Monitoring_C::DisplayHoverWorkHardInfo(int32 WorkHardLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Monitoring_C", "DisplayHoverWorkHardInfo");

	Params::UWBP_IngameMenu_Monitoring_C_DisplayHoverWorkHardInfo_Params Parms{};

	Parms.WorkHardLevel = WorkHardLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Monitoring.WBP_IngameMenu_Monitoring_C.DisplayCurrentWorkHardInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EPalBaseCampPassiveEffectWorkHardType>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Monitoring_C::DisplayCurrentWorkHardInfo(TArray<enum class EPalBaseCampPassiveEffectWorkHardType>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Monitoring_C", "DisplayCurrentWorkHardInfo");

	Params::UWBP_IngameMenu_Monitoring_C_DisplayCurrentWorkHardInfo_Params Parms{};

	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Monitoring.WBP_IngameMenu_Monitoring_C.UpdateWorkHardInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              WorkHardLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor)
// class UWBP_IngameMenu_Monitoring_WorkInfo_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Monitoring_C::UpdateWorkHardInfo(int32 WorkHardLevel, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, class UWBP_IngameMenu_Monitoring_WorkInfo_C* CallFunc_Array_Get_Item_1, class FText CallFunc_GetLocalizedTextFromHandle_Text, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Monitoring_C", "UpdateWorkHardInfo");

	Params::UWBP_IngameMenu_Monitoring_C_UpdateWorkHardInfo_Params Parms{};

	Parms.WorkHardLevel = WorkHardLevel;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Monitoring.WBP_IngameMenu_Monitoring_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_IngameMenu_Monitoring_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Monitoring_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_IngameMenu_Monitoring_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_IngameMenu_Monitoring.WBP_IngameMenu_Monitoring_C.RequestChangeHardWorkLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EPalBaseCampPassiveEffectWorkHardType>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// enum class EPalBaseCampPassiveEffectWorkHardTypeCallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Monitoring_C::RequestChangeHardWorkLevel(int32 Level, TArray<enum class EPalBaseCampPassiveEffectWorkHardType>& CallFunc_Map_Keys_Keys, enum class EPalBaseCampPassiveEffectWorkHardType CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Monitoring_C", "RequestChangeHardWorkLevel");

	Params::UWBP_IngameMenu_Monitoring_C_RequestChangeHardWorkLevel_Params Parms{};

	Parms.Level = Level;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Monitoring.WBP_IngameMenu_Monitoring_C.OnUpdateWorkHardType
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalBaseCampPassiveEffect_WorkHard*EffectWorkHard                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalBaseCampPassiveEffectWorkHardTypeCurrentType                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalBaseCampPassiveEffectWorkHardTypeCallFunc_GetWorkHardType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EPalBaseCampPassiveEffectWorkHardType>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalBaseCampPassiveEffectWorkHardTypeCallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_IngameMenu_Monitoring_WorkButton_C*CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Monitoring_C::OnUpdateWorkHardType(class UPalBaseCampPassiveEffect_WorkHard* EffectWorkHard, enum class EPalBaseCampPassiveEffectWorkHardType CurrentType, enum class EPalBaseCampPassiveEffectWorkHardType CallFunc_GetWorkHardType_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class EPalBaseCampPassiveEffectWorkHardType>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, enum class EPalBaseCampPassiveEffectWorkHardType CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UWBP_IngameMenu_Monitoring_WorkButton_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Monitoring_C", "OnUpdateWorkHardType");

	Params::UWBP_IngameMenu_Monitoring_C_OnUpdateWorkHardType_Params Parms{};

	Parms.EffectWorkHard = EffectWorkHard;
	Parms.CurrentType = CurrentType;
	Parms.CallFunc_GetWorkHardType_ReturnValue = CallFunc_GetWorkHardType_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_IngameMenu_Monitoring.WBP_IngameMenu_Monitoring_C.BndEvt__WBP_IngameMenu_Monitoring_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_Monitoring_C::BndEvt__WBP_IngameMenu_Monitoring_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Monitoring_C", "BndEvt__WBP_IngameMenu_Monitoring_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_Monitoring.WBP_IngameMenu_Monitoring_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_Monitoring_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Monitoring_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_Monitoring.WBP_IngameMenu_Monitoring_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_IngameMenu_Monitoring_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Monitoring_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_IngameMenu_Monitoring.WBP_IngameMenu_Monitoring_C.ExecuteUbergraph_WBP_IngameMenu_Monitoring
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalHUDDispatchParameterBase*CallFunc_GetParam_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalUIActionBindData        CallFunc_RegisterActionBinding_ReturnValue                       (NoDestructor)
// class UPalHUDDispatchParameter_MapObject*K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectBaseCampPassiveWorkHardModel*K2Node_DynamicCast_AsPal_Map_Object_Base_Camp_Passive_Work_Hard_Model(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EPalBaseCampPassiveEffectWorkHardType, class UWBP_IngameMenu_Monitoring_WorkButton_C*>K2Node_MakeMap_Map                                               (ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_IngameMenu_Monitoring_WorkInfo_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class UPalBaseCampPassiveEffect_WorkHard*CallFunc_GetPassiveEffectWorkHard_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_IngameMenu_Monitoring_WorkButton_C*>CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// class UWBP_IngameMenu_Monitoring_WorkButton_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameMenu_Monitoring_C::ExecuteUbergraph_WBP_IngameMenu_Monitoring(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, class UPalHUDDispatchParameter_MapObject* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPalMapObjectBaseCampPassiveWorkHardModel* K2Node_DynamicCast_AsPal_Map_Object_Base_Camp_Passive_Work_Hard_Model, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TMap<enum class EPalBaseCampPassiveEffectWorkHardType, class UWBP_IngameMenu_Monitoring_WorkButton_C*> K2Node_MakeMap_Map, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, TArray<class UWBP_IngameMenu_Monitoring_WorkInfo_C*>& K2Node_MakeArray_Array, class UPalBaseCampPassiveEffect_WorkHard* CallFunc_GetPassiveEffectWorkHard_ReturnValue, TArray<class UWBP_IngameMenu_Monitoring_WorkButton_C*>& CallFunc_Map_Values_Values, class UWBP_IngameMenu_Monitoring_WorkButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_IngameMenu_Monitoring_C", "ExecuteUbergraph_WBP_IngameMenu_Monitoring");

	Params::UWBP_IngameMenu_Monitoring_C_ExecuteUbergraph_WBP_IngameMenu_Monitoring_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetParam_ReturnValue = CallFunc_GetParam_ReturnValue;
	Parms.CallFunc_RegisterActionBinding_ReturnValue = CallFunc_RegisterActionBinding_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object = K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_DynamicCast_AsPal_Map_Object_Base_Camp_Passive_Work_Hard_Model = K2Node_DynamicCast_AsPal_Map_Object_Base_Camp_Passive_Work_Hard_Model;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetPassiveEffectWorkHard_ReturnValue = CallFunc_GetPassiveEffectWorkHard_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


