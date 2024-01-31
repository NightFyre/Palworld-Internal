#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_InventoryEquipment_ItemInfo_addeffect.WBP_InventoryEquipment_ItemInfo_addeffect_C
// (None)

class UClass* UWBP_InventoryEquipment_ItemInfo_addeffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_InventoryEquipment_ItemInfo_addeffect_C");

	return Clss;
}


// WBP_InventoryEquipment_ItemInfo_addeffect_C WBP_InventoryEquipment_ItemInfo_addeffect.Default__WBP_InventoryEquipment_ItemInfo_addeffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_InventoryEquipment_ItemInfo_addeffect_C* UWBP_InventoryEquipment_ItemInfo_addeffect_C::GetDefaultObj()
{
	static class UWBP_InventoryEquipment_ItemInfo_addeffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_InventoryEquipment_ItemInfo_addeffect_C*>(UWBP_InventoryEquipment_ItemInfo_addeffect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_InventoryEquipment_ItemInfo_addeffect.WBP_InventoryEquipment_ItemInfo_addeffect_C.SetImportantDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InventoryEquipment_ItemInfo_addeffect_C::SetImportantDescription(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ItemInfo_addeffect_C", "SetImportantDescription");

	Params::UWBP_InventoryEquipment_ItemInfo_addeffect_C_SetImportantDescription_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_ItemInfo_addeffect.WBP_InventoryEquipment_ItemInfo_addeffect_C.SetSimpleDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InventoryEquipment_ItemInfo_addeffect_C::SetSimpleDescription(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_ItemInfo_addeffect_C", "SetSimpleDescription");

	Params::UWBP_InventoryEquipment_ItemInfo_addeffect_C_SetSimpleDescription_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}

}


