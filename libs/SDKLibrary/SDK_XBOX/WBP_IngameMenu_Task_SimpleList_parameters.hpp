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

// 0x28 (0x28 - 0x0)
// Function WBP_IngameMenu_Task_SimpleList.WBP_IngameMenu_Task_SimpleList_C.UpdateNickName
struct UWBP_IngameMenu_Task_SimpleList_C_UpdateNickName_Params
{
public:
	class FString                                NewNickName;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x10(0x18)(None)
};

// 0x40 (0x40 - 0x0)
// Function WBP_IngameMenu_Task_SimpleList.WBP_IngameMenu_Task_SimpleList_C.Setup
struct UWBP_IngameMenu_Task_SimpleList_C_Setup_Params
{
public:
	class UPalIndividualCharacterSlot*           TargetSlot;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*         CallFunc_GetHandle_ReturnValue;                    // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetWorkerComment_outName;                 // 0x18(0x18)(None)
	TArray<enum class EPalUIConditionType>       CallFunc_GetUIDisplayPalCondition_outArray;        // 0x30(0x10)(ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function WBP_IngameMenu_Task_SimpleList.WBP_IngameMenu_Task_SimpleList_C.UpdateCondition
struct UWBP_IngameMenu_Task_SimpleList_C_UpdateCondition_Params
{
public:
	TArray<enum class EPalUIConditionType>       Conditions;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x28 (0x28 - 0x0)
// Function WBP_IngameMenu_Task_SimpleList.WBP_IngameMenu_Task_SimpleList_C.ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList
struct UWBP_IngameMenu_Task_SimpleList_C_ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWBP_MainMenu_Pal_State_C*>     K2Node_MakeArray_Array;                            // 0x18(0x10)(ReferenceParm, ContainsInstancedReference)
};

}
}


