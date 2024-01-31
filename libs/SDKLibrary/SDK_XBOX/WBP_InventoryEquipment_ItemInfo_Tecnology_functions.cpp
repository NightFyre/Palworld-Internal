#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_InventoryEquipment_ItemInfo_Tecnology.WBP_InventoryEquipment_ItemInfo_Tecnology_C
// (None)

class UClass* UWBP_InventoryEquipment_ItemInfo_Tecnology_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_InventoryEquipment_ItemInfo_Tecnology_C");

	return Clss;
}


// WBP_InventoryEquipment_ItemInfo_Tecnology_C WBP_InventoryEquipment_ItemInfo_Tecnology.Default__WBP_InventoryEquipment_ItemInfo_Tecnology_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_InventoryEquipment_ItemInfo_Tecnology_C* UWBP_InventoryEquipment_ItemInfo_Tecnology_C::GetDefaultObj()
{
	static class UWBP_InventoryEquipment_ItemInfo_Tecnology_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_InventoryEquipment_ItemInfo_Tecnology_C*>(UWBP_InventoryEquipment_ItemInfo_Tecnology_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_InventoryEquipment_ItemInfo_Tecnology.WBP_InventoryEquipment_ItemInfo_Tecnology_C.GetStockNum
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        StaticItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WithStock                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Stock                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPalStaticItemIdAndNum>CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos    (ReferenceParm)
// struct FPalStaticItemIdAndNum      CallFunc_Array_Get_Item                                          (NoDestructor)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_ItemInfo_Tecnology_C::GetStockNum(class FName StaticItemId, bool WithStock, int32* Stock, TArray<class FName>& K2Node_MakeArray_Array, int32 CallFunc_SelectInt_ReturnValue, TArray<struct FPalStaticItemIdAndNum>& CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos, const struct FPalStaticItemIdAndNum& CallFunc_Array_Get_Item, bool CallFunc_Array_IsEmpty_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ItemInfo_Tecnology_C", "GetStockNum");

	Params::UWBP_InventoryEquipment_ItemInfo_Tecnology_C_GetStockNum_Params Parms{};

	Parms.StaticItemId = StaticItemId;
	Parms.WithStock = WithStock;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos = CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue_1 = CallFunc_SelectInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Stock != nullptr)
		*Stock = Parms.Stock;

}


// Function WBP_InventoryEquipment_ItemInfo_Tecnology.WBP_InventoryEquipment_ItemInfo_Tecnology_C.SetWorkSpaceInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_InventoryEquipment_ItemInfo_Tecnology_C::SetWorkSpaceInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ItemInfo_Tecnology_C", "SetWorkSpaceInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_InventoryEquipment_ItemInfo_Tecnology.WBP_InventoryEquipment_ItemInfo_Tecnology_C.SetDetails
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPalStaticItemIdAndNum>MatDetail                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               WithStock                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_ItemInfo_Tecnology_C::SetDetails(TArray<struct FPalStaticItemIdAndNum>& MatDetail, bool WithStock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ItemInfo_Tecnology_C", "SetDetails");

	Params::UWBP_InventoryEquipment_ItemInfo_Tecnology_C_SetDetails_Params Parms{};

	Parms.MatDetail = MatDetail;
	Parms.WithStock = WithStock;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_ItemInfo_Tecnology.WBP_InventoryEquipment_ItemInfo_Tecnology_C.ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPalStaticItemIdAndNum>K2Node_CustomEvent_MatDetail                                     (ConstParm, ReferenceParm)
// bool                               K2Node_CustomEvent_WithStock                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalStaticItemIdAndNum      CallFunc_Array_Get_Item                                          (NoDestructor)
// class UWBP_InventoryEquipment_ItemInfo_TecnologyList_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStockNum_Stock                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_outName                                     (None)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalItemIDManager*           CallFunc_GetItemIDManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            K2Node_DynamicCast_AsVertical_Box_Slot                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalStaticItemDataBase*      CallFunc_GetStaticItemData_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_ItemInfo_Tecnology_C::ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FPalStaticItemIdAndNum>& K2Node_CustomEvent_MatDetail, bool K2Node_CustomEvent_WithStock, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, const struct FPalStaticItemIdAndNum& CallFunc_Array_Get_Item, class UWBP_InventoryEquipment_ItemInfo_TecnologyList_C* CallFunc_SpawnObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetStockNum_Stock, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_GetItemName_outName, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ItemInfo_Tecnology_C", "ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology");

	Params::UWBP_InventoryEquipment_ItemInfo_Tecnology_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Tecnology_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_MatDetail = K2Node_CustomEvent_MatDetail;
	Parms.K2Node_CustomEvent_WithStock = K2Node_CustomEvent_WithStock;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetStockNum_Stock = CallFunc_GetStockNum_Stock;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetItemName_outName = CallFunc_GetItemName_outName;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetItemIDManager_ReturnValue = CallFunc_GetItemIDManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsVertical_Box_Slot = K2Node_DynamicCast_AsVertical_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStaticItemData_ReturnValue = CallFunc_GetStaticItemData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


