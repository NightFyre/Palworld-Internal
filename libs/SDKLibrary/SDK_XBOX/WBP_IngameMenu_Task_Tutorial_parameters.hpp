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
// Function WBP_IngameMenu_Task_Tutorial.WBP_IngameMenu_Task_Tutorial_C.GetNowDisplayQuestWidgetNum
struct UWBP_IngameMenu_Task_Tutorial_C_GetNowDisplayQuestWidgetNum_Params
{
public:
	int32                                        Num;                                               // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Length_ReturnValue;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_IngameMenu_Task_Tutorial.WBP_IngameMenu_Task_Tutorial_C.OnClosedQuestWidget
struct UWBP_IngameMenu_Task_Tutorial_C_OnClosedQuestWidget_Params
{
public:
	class UWBP_IngameMenu_Task_Tutorial_List_C*  Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function WBP_IngameMenu_Task_Tutorial.WBP_IngameMenu_Task_Tutorial_C.AddQuest
struct UWBP_IngameMenu_Task_Tutorial_C_AddQuest_Params
{
public:
	class UPalQuestData*                         QuestData;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BAA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPalQuestData*>                 CallFunc_Map_Values_Values;                        // 0x10(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BAB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x24(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BAC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetLocalPlayerController_ReturnValue;     // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_IngameMenu_Task_Tutorial_List_C*  CallFunc_Create_ReturnValue;                       // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


