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

// 0x30 (0x30 - 0x0)
// Function WBP_WarningUI.WBP_WarningUI_C.PlayWarning
struct UWBP_WarningUI_C_PlayWarning_Params
{
public:
	class FText                                  TitleText;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  InfoText;                                          // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x160 (0x160 - 0x0)
// Function WBP_WarningUI.WBP_WarningUI_C.Display
struct UWBP_WarningUI_C_Display_Params
{
public:
	class UPalBaseCampModel*                     TargetBaseCamp;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalInvaderDatabaseRow                ChosenInvaderData;                                 // 0x8(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FDataTableRowHandle                   InvaderGroupName;                                  // 0x78(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                   TitleMsgID;                                        // 0x88(0x10)(Edit, BlueprintVisible, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5111[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLocalizedText_ReturnValue;             // 0xA0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xB8(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x108(0x10)(ReferenceParm)
	class FText                                  CallFunc_GetLocalizedText_ReturnValue_1;           // 0x118(0x18)(None)
	class FText                                  CallFunc_GetLocalizedText_ReturnValue_2;           // 0x130(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x148(0x18)(None)
};

// 0x91 (0x91 - 0x0)
// Function WBP_WarningUI.WBP_WarningUI_C.OnInvaderStart
struct UWBP_WarningUI_C_OnInvaderStart_Params
{
public:
	struct FPalIncidentBroadcastParameter        Parameter;                                         // 0x0(0x90)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function WBP_WarningUI.WBP_WarningUI_C.RegisterEvents
struct UWBP_WarningUI_C_RegisterEvents_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalInvaderManager*                    CallFunc_GetInvaderManager_ReturnValue;            // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_WarningUI.WBP_WarningUI_C.ExecuteUbergraph_WBP_WarningUI
struct UWBP_WarningUI_C_ExecuteUbergraph_WBP_WarningUI_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


