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

// 0x11 (0x11 - 0x0)
// Function WBP_PalDialog.WBP_PalDialog_C.OnShortcutConfirm
struct UWBP_PalDialog_C_OnShortcutConfirm_Params
{
public:
	class UPalHUDDispatchParameterBase*          CallFunc_GetParam_ReturnValue;                     // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDialogParameterDialog*             K2Node_DynamicCast_AsPal_Dialog_Parameter_Dialog;  // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_PalDialog.WBP_PalDialog_C.BP_GetDesiredFocusTarget
struct UWBP_PalDialog_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     CallFunc_GetLeftButton_rightButton;                // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BFB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     CallFunc_GetRightButton_button;                    // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function WBP_PalDialog.WBP_PalDialog_C.SetupUI
struct UWBP_PalDialog_C_SetupUI_Params
{
public:
	enum class EPalDialogType                    DialogType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BFE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Message;                                           // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BFF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x28(0x18)(None)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x40(0x18)(None)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_2;        // 0x58(0x18)(None)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_3;        // 0x70(0x18)(None)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_4;        // 0x88(0x18)(None)
};

// 0x5C (0x5C - 0x0)
// Function WBP_PalDialog.WBP_PalDialog_C.ExecuteUbergraph_WBP_PalDialog
struct UWBP_PalDialog_C_ExecuteUbergraph_WBP_PalDialog_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C02[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalHUDDispatchParameterBase*          CallFunc_GetParam_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDialogParameterDialog*             K2Node_DynamicCast_AsPal_Dialog_Parameter_Dialog;  // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C04[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x2C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C05[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     CallFunc_GetLeftButton_rightButton;                // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     CallFunc_GetRightButton_button;                    // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_Select_Default;                             // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_ReturnValue;        // 0x58(0x4)(NoDestructor)
};

}
}


