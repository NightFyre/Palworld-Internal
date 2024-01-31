#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_EnemyMark.WBP_EnemyMark_C
// (None)

class UClass* UWBP_EnemyMark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_EnemyMark_C");

	return Clss;
}


// WBP_EnemyMark_C WBP_EnemyMark.Default__WBP_EnemyMark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_EnemyMark_C* UWBP_EnemyMark_C::GetDefaultObj()
{
	static class UWBP_EnemyMark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_EnemyMark_C*>(UWBP_EnemyMark_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_EnemyMark.WBP_EnemyMark_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_EnemyMark_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyMark_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EnemyMark.WBP_EnemyMark_C.«¹¿à¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyMark_C::_________0(class APalCharacter* TargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyMark_C", "«¹¿à¤ÙóÈ_0");

	Params::UWBP_EnemyMark_C__________0_Params Parms{};

	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EnemyMark.WBP_EnemyMark_C.«¹¿à¤ÙóÈ_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               TargetCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyMark_C::_________1(class APalCharacter* TargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyMark_C", "«¹¿à¤ÙóÈ_1");

	Params::UWBP_EnemyMark_C__________1_Params Parms{};

	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EnemyMark.WBP_EnemyMark_C.ExecuteUbergraph_WBP_EnemyMark
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBattleManager*           CallFunc_GetBattleManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_CustomEvent_TargetCharacter_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_EnemyExclamationMarkIcon_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalBattleManager*           CallFunc_GetBattleManager_ReturnValue_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_CustomEvent_TargetCharacter                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_EnemyQuestionMarkIcon_C*CallFunc_SpawnObject_ReturnValue_1                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UWBP_EnemyQuestionMarkIcon_C>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (InstancedReference, UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UWBP_EnemyQuestionMarkIcon_C>CallFunc_Array_Get_Item                                          (InstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_EnemyQuestionMarkIcon_C*K2Node_DynamicCast_AsWBP_Enemy_Question_Mark_Icon                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UWBP_EnemyQuestionMarkIcon_C>CallFunc_Array_Get_Item_1                                        (InstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyMark_C::ExecuteUbergraph_WBP_EnemyMark(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, class APalCharacter* K2Node_CustomEvent_TargetCharacter_1, int32 Temp_int_Loop_Counter_Variable_1, class UWBP_EnemyExclamationMarkIcon_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue_1, class APalCharacter* K2Node_CustomEvent_TargetCharacter, class UWBP_EnemyQuestionMarkIcon_C* CallFunc_SpawnObject_ReturnValue_1, TSoftObjectPtr<class UWBP_EnemyQuestionMarkIcon_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, TSoftObjectPtr<class UWBP_EnemyQuestionMarkIcon_C> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_EnemyQuestionMarkIcon_C* K2Node_DynamicCast_AsWBP_Enemy_Question_Mark_Icon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TSoftObjectPtr<class UWBP_EnemyQuestionMarkIcon_C> CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EnemyMark_C", "ExecuteUbergraph_WBP_EnemyMark");

	Params::UWBP_EnemyMark_C_ExecuteUbergraph_WBP_EnemyMark_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetBattleManager_ReturnValue = CallFunc_GetBattleManager_ReturnValue;
	Parms.K2Node_CustomEvent_TargetCharacter_1 = K2Node_CustomEvent_TargetCharacter_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetBattleManager_ReturnValue_1 = CallFunc_GetBattleManager_ReturnValue_1;
	Parms.K2Node_CustomEvent_TargetCharacter = K2Node_CustomEvent_TargetCharacter;
	Parms.CallFunc_SpawnObject_ReturnValue_1 = CallFunc_SpawnObject_ReturnValue_1;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Enemy_Question_Mark_Icon = K2Node_DynamicCast_AsWBP_Enemy_Question_Mark_Icon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_1 = CallFunc_IsValidSoftObjectReference_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


