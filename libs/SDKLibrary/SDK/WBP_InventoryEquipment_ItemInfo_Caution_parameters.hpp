#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo_Caution.WBP_InventoryEquipment_ItemInfo_Caution_C.SetRequireName
struct UWBP_InventoryEquipment_ItemInfo_Caution_C_SetRequireName_Params
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x20 (0x20 - 0x0)
// Function WBP_InventoryEquipment_ItemInfo_Caution.WBP_InventoryEquipment_ItemInfo_Caution_C.ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Caution
struct UWBP_InventoryEquipment_ItemInfo_Caution_C_ExecuteUbergraph_WBP_InventoryEquipment_ItemInfo_Caution_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BDD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_Name;                           // 0x8(0x18)(None)
};

}
}


