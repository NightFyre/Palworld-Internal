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
// Function BP_PalUIBuildingModel.BP_PalUIBuildingModel_C.OnUpdateInventory
struct UBP_PalUIBuildingModel_C_OnUpdateInventory_Params
{
public:
	class UPalItemContainer*                     Container;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PalUIBuildingModel.BP_PalUIBuildingModel_C.ExecuteUbergraph_BP_PalUIBuildingModel
struct UBP_PalUIBuildingModel_C_ExecuteUbergraph_BP_PalUIBuildingModel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_536D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalItemContainer*                     K2Node_Event_Container;                            // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


