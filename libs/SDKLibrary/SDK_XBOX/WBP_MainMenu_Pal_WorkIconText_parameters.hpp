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

// 0x43 (0x43 - 0x0)
// Function WBP_MainMenu_Pal_WorkIconText.WBP_MainMenu_Pal_WorkIconText_C.SetSuitability
struct UWBP_MainMenu_Pal_WorkIconText_C_SetSuitability_Params
{
public:
	enum class EPalWorkSuitability               Suitability;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Rank;                                              // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_83E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x10(0x18)(None)
	class FText                                  CallFunc_GetWorkSuitabilityName_outName;           // 0x28(0x18)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_MainMenu_Pal_WorkIconText.WBP_MainMenu_Pal_WorkIconText_C.ExecuteUbergraph_WBP_MainMenu_Pal_WorkIconText
struct UWBP_MainMenu_Pal_WorkIconText_C_ExecuteUbergraph_WBP_MainMenu_Pal_WorkIconText_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


