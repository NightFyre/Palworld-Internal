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

// 0x8 (0x8 - 0x0)
// Function WBP_InventoryEquipment_PalIcon.WBP_InventoryEquipment_PalIcon_C.Setup
struct UWBP_InventoryEquipment_PalIcon_C_Setup_Params
{
public:
	class FName                                  IconId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4A (0x4A - 0x0)
// Function WBP_InventoryEquipment_PalIcon.WBP_InventoryEquipment_PalIcon_C.ExecuteUbergraph_WBP_InventoryEquipment_PalIcon
struct UWBP_InventoryEquipment_PalIcon_C_ExecuteUbergraph_WBP_InventoryEquipment_PalIcon_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_IconId;                         // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_PalMonsterData   K2Node_MakeStruct_PalDataTableRowName_PalMonsterData; // 0xC(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BD3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetPalIconInfoByCharacterID_outIcon;      // 0x18(0x30)(UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GetPalIconInfoByCharacterID_outIsRare;    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetPalIconInfoByCharacterID_outIsBoss;    // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


