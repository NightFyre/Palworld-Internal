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
// Function BP_PalUIDismantlingModel.BP_PalUIDismantlingModel_C.OnUpdateInventory
struct UBP_PalUIDismantlingModel_C_OnUpdateInventory_Params
{
public:
	class UPalItemContainer*                     Container;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PalUIDismantlingModel.BP_PalUIDismantlingModel_C.ExecuteUbergraph_BP_PalUIDismantlingModel
struct UBP_PalUIDismantlingModel_C_ExecuteUbergraph_BP_PalUIDismantlingModel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A7B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalItemContainer*                     K2Node_Event_Container;                            // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


