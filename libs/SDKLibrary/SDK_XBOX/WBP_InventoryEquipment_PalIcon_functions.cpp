#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_InventoryEquipment_PalIcon.WBP_InventoryEquipment_PalIcon_C
// (None)

class UClass* UWBP_InventoryEquipment_PalIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_InventoryEquipment_PalIcon_C");

	return Clss;
}


// WBP_InventoryEquipment_PalIcon_C WBP_InventoryEquipment_PalIcon.Default__WBP_InventoryEquipment_PalIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_InventoryEquipment_PalIcon_C* UWBP_InventoryEquipment_PalIcon_C::GetDefaultObj()
{
	static class UWBP_InventoryEquipment_PalIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_InventoryEquipment_PalIcon_C*>(UWBP_InventoryEquipment_PalIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_InventoryEquipment_PalIcon.WBP_InventoryEquipment_PalIcon_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        IconId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_PalIcon_C::Setup(class FName IconId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_PalIcon_C", "Setup");

	Params::UWBP_InventoryEquipment_PalIcon_C_Setup_Params Parms{};

	Parms.IconId = IconId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_InventoryEquipment_PalIcon.WBP_InventoryEquipment_PalIcon_C.ExecuteUbergraph_WBP_InventoryEquipment_PalIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_IconId                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalDataTableRowName_PalMonsterDataK2Node_MakeStruct_PalDataTableRowName_PalMonsterData             (NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetPalIconInfoByCharacterID_outIcon                     (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetPalIconInfoByCharacterID_outIsRare                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPalIconInfoByCharacterID_outIsBoss                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryEquipment_PalIcon_C::ExecuteUbergraph_WBP_InventoryEquipment_PalIcon(int32 EntryPoint, class FName K2Node_CustomEvent_IconId, const struct FPalDataTableRowName_PalMonsterData& K2Node_MakeStruct_PalDataTableRowName_PalMonsterData, TSoftObjectPtr<class UTexture2D> CallFunc_GetPalIconInfoByCharacterID_outIcon, bool CallFunc_GetPalIconInfoByCharacterID_outIsRare, bool CallFunc_GetPalIconInfoByCharacterID_outIsBoss)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_InventoryEquipment_PalIcon_C", "ExecuteUbergraph_WBP_InventoryEquipment_PalIcon");

	Params::UWBP_InventoryEquipment_PalIcon_C_ExecuteUbergraph_WBP_InventoryEquipment_PalIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_IconId = K2Node_CustomEvent_IconId;
	Parms.K2Node_MakeStruct_PalDataTableRowName_PalMonsterData = K2Node_MakeStruct_PalDataTableRowName_PalMonsterData;
	Parms.CallFunc_GetPalIconInfoByCharacterID_outIcon = CallFunc_GetPalIconInfoByCharacterID_outIcon;
	Parms.CallFunc_GetPalIconInfoByCharacterID_outIsRare = CallFunc_GetPalIconInfoByCharacterID_outIsRare;
	Parms.CallFunc_GetPalIconInfoByCharacterID_outIsBoss = CallFunc_GetPalIconInfoByCharacterID_outIsBoss;

	UObject::ProcessEvent(Func, &Parms);

}

}


