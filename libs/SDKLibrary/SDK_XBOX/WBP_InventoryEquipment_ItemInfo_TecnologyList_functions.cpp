#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_InventoryEquipment_ItemInfo_TecnologyList.WBP_InventoryEquipment_ItemInfo_TecnologyList_C
// (None)

class UClass* UWBP_InventoryEquipment_ItemInfo_TecnologyList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_InventoryEquipment_ItemInfo_TecnologyList_C");

	return Clss;
}


// WBP_InventoryEquipment_ItemInfo_TecnologyList_C WBP_InventoryEquipment_ItemInfo_TecnologyList.Default__WBP_InventoryEquipment_ItemInfo_TecnologyList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_InventoryEquipment_ItemInfo_TecnologyList_C* UWBP_InventoryEquipment_ItemInfo_TecnologyList_C::GetDefaultObj()
{
	static class UWBP_InventoryEquipment_ItemInfo_TecnologyList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_InventoryEquipment_ItemInfo_TecnologyList_C*>(UWBP_InventoryEquipment_ItemInfo_TecnologyList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_InventoryEquipment_ItemInfo_TecnologyList.WBP_InventoryEquipment_ItemInfo_TecnologyList_C.SetInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Num                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Stock                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_ItemInfo_TecnologyList_C::SetInfo(class FText Name, int32 Num, TSoftObjectPtr<class UTexture2D> Icon, int32 Stock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ItemInfo_TecnologyList_C", "SetInfo");

	Params::UWBP_InventoryEquipment_ItemInfo_TecnologyList_C_SetInfo_Params Parms{};

	Parms.Name = Name;
	Parms.Num = Num;
	Parms.Icon = Icon;
	Parms.Stock = Stock;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_ItemInfo_TecnologyList.WBP_InventoryEquipment_ItemInfo_TecnologyList_C.ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_TecnologyList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Name                                          (None)
// int32                              K2Node_CustomEvent_Num                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_CustomEvent_Icon                                          (HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Stock                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_ItemInfo_TecnologyList_C::ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_TecnologyList(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class FText K2Node_CustomEvent_Name, int32 K2Node_CustomEvent_Num, TSoftObjectPtr<class UTexture2D> K2Node_CustomEvent_Icon, int32 K2Node_CustomEvent_Stock, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, class UMaterialInterface* K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_Conv_IntToText_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ItemInfo_TecnologyList_C", "ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_TecnologyList");

	Params::UWBP_InventoryEquipment_ItemInfo_TecnologyList_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_TecnologyList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_CustomEvent_Name = K2Node_CustomEvent_Name;
	Parms.K2Node_CustomEvent_Num = K2Node_CustomEvent_Num;
	Parms.K2Node_CustomEvent_Icon = K2Node_CustomEvent_Icon;
	Parms.K2Node_CustomEvent_Stock = K2Node_CustomEvent_Stock;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


