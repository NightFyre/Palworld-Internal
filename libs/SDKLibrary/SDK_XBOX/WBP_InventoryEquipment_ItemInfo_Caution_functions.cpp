#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_InventoryEquipment_ItemInfo_Caution.WBP_InventoryEquipment_ItemInfo_Caution_C
// (None)

class UClass* UWBP_InventoryEquipment_ItemInfo_Caution_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_InventoryEquipment_ItemInfo_Caution_C");

	return Clss;
}


// WBP_InventoryEquipment_ItemInfo_Caution_C WBP_InventoryEquipment_ItemInfo_Caution.Default__WBP_InventoryEquipment_ItemInfo_Caution_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_InventoryEquipment_ItemInfo_Caution_C* UWBP_InventoryEquipment_ItemInfo_Caution_C::GetDefaultObj()
{
	static class UWBP_InventoryEquipment_ItemInfo_Caution_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_InventoryEquipment_ItemInfo_Caution_C*>(UWBP_InventoryEquipment_ItemInfo_Caution_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_InventoryEquipment_ItemInfo_Caution.WBP_InventoryEquipment_ItemInfo_Caution_C.SetRequireName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InventoryEquipment_ItemInfo_Caution_C::SetRequireName(class FText Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ItemInfo_Caution_C", "SetRequireName");

	Params::UWBP_InventoryEquipment_ItemInfo_Caution_C_SetRequireName_Params Parms{};

	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_ItemInfo_Caution.WBP_InventoryEquipment_ItemInfo_Caution_C.ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Caution
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Name                                          (None)

void UWBP_InventoryEquipment_ItemInfo_Caution_C::ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Caution(int32 EntryPoint, class FText K2Node_CustomEvent_Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ItemInfo_Caution_C", "ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Caution");

	Params::UWBP_InventoryEquipment_ItemInfo_Caution_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Caution_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Name = K2Node_CustomEvent_Name;

	UObject::ProcessEvent(Func, &Parms);

}

}


