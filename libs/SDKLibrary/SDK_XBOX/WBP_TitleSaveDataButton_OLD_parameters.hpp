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
// Function WBP_TitleSaveDataButton_OLD.WBP_TitleSaveDataButton_OLD_C.BndEvt__WBP_TitleFriendButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
struct UWBP_TitleSaveDataButton_OLD_C_BndEvt__WBP_TitleFriendButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function WBP_TitleSaveDataButton_OLD.WBP_TitleSaveDataButton_OLD_C.ExecuteUbergraph_WBP_TitleSaveDataButton_OLD
struct UWBP_TitleSaveDataButton_OLD_C_ExecuteUbergraph_WBP_TitleSaveDataButton_OLD_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A05[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetWorldName_ReturnValue;                 // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x20(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function WBP_TitleSaveDataButton_OLD.WBP_TitleSaveDataButton_OLD_C.OnClickedSaveDataButton__DelegateSignature
struct UWBP_TitleSaveDataButton_OLD_C_OnClickedSaveDataButton__DelegateSignature_Params
{
public:
	class FString                                WorldSaveDirectoryName;                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

}
}


