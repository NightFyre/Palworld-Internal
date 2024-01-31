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
// Function BP_InGameMenuBuildModel.BP_InGameMenuBuildModel_C.Setup
struct UBP_InGameMenuBuildModel_C_Setup_Params
{
public:
	class UBP_PalUIBuildModel_C*                 CallFunc_SpawnObject_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_InGameMenuBuildModel.BP_InGameMenuBuildModel_C.SetInitialTypeA
struct UBP_InGameMenuBuildModel_C_SetInitialTypeA_Params
{
public:
	enum class EPalBuildObjectTypeA              TypeA;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_InGameMenuBuildModel.BP_InGameMenuBuildModel_C.OnUpdateInventory
struct UBP_InGameMenuBuildModel_C_OnUpdateInventory_Params
{
public:
	class UPalItemContainer*                     Container;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_InGameMenuBuildModel.BP_InGameMenuBuildModel_C.ExecuteUbergraph_BP_InGameMenuBuildModel
struct UBP_InGameMenuBuildModel_C_ExecuteUbergraph_BP_InGameMenuBuildModel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalItemContainer*                     K2Node_Event_Container;                            // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


