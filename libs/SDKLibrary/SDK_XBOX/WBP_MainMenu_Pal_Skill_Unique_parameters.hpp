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

// 0x2B0 (0x2B0 - 0x0)
// Function WBP_MainMenu_Pal_Skill_Unique.WBP_MainMenu_Pal_Skill_Unique_C.SetupBySaveParameter
struct UWBP_MainMenu_Pal_Skill_Unique_C_SetupBySaveParameter_Params
{
public:
	struct FPalIndividualCharacterSaveParameter  Parameter;                                         // 0x0(0x218)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ShowLv;                                            // 0x218(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x219(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BEC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x220(0x18)(None)
	class FName                                  CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName; // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x241(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x242(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BED[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x244(0x14)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x258(0x14)(None)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x26C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BEE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_Select_Default_1;                           // 0x270(0x14)(None)
	uint8                                        Pad_4BEF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalDatabaseCharacterParameter*        CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x288(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetPartnerSkillMsgID_OutMsgID;            // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedText_ReturnValue;             // 0x298(0x18)(None)
};

// 0x70 (0x70 - 0x0)
// Function WBP_MainMenu_Pal_Skill_Unique.WBP_MainMenu_Pal_Skill_Unique_C.SetupFromHandle
struct UWBP_MainMenu_Pal_Skill_Unique_C_SetupFromHandle_Params
{
public:
	class UPalIndividualCharacterHandle*         IndividualHandle;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BF1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalIndividualCharacterParameter*      CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BF2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetRank_ReturnValue;                      // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x20(0x18)(None)
	class FName                                  CallFunc_GetCharacterID_ReturnValue;               // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName; // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*        CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetPartnerSkillMsgID_OutMsgID;            // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedText_ReturnValue;             // 0x58(0x18)(None)
};

}
}


