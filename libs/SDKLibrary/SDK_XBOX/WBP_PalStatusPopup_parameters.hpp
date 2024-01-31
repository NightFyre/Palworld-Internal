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

// 0x1 (0x1 - 0x0)
// Function WBP_PalStatusPopup.WBP_PalStatusPopup_C.OnCancelAction
struct UWBP_PalStatusPopup_C_OnCancelAction_Params
{
public:
	bool                                         CallFunc_Is_Editing_Nick_Name_isEditing;           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalStatusPopup.WBP_PalStatusPopup_C.BP_GetDesiredFocusTarget
struct UWBP_PalStatusPopup_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function WBP_PalStatusPopup.WBP_PalStatusPopup_C.ExecuteUbergraph_WBP_PalStatusPopup
struct UWBP_PalStatusPopup_C_ExecuteUbergraph_WBP_PalStatusPopup_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56F0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalHUDDispatchParameterBase*          CallFunc_GetParam_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalHUDDispatchParameter_MonsterDetail* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Monster_Detail; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x24(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLocalizedText_ReturnValue;             // 0x38(0x18)(None)
};

}
}


