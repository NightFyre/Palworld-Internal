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

// 0xF4 (0xF4 - 0x0)
// Function WBP_Menu_CharacterHPGauge.WBP_Menu_CharacterHPGauge_C.UpdateHP
struct UWBP_Menu_CharacterHPGauge_C_UpdateHP_Params
{
public:
	struct FFixedPoint64                         NowHP;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                         NowMaxHP;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int64                                        CallFunc_Convert_FixedPoint64ToInt64_ReturnValue;  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5412[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue;             // 0x20(0x18)(None)
	int64                                        CallFunc_Convert_FixedPoint64ToInt64_ReturnValue_1; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x40(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue_1;           // 0x90(0x18)(None)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xA8(0x10)(ReferenceParm)
	float                                        CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1; // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5413[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xC0(0x18)(None)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function WBP_Menu_CharacterHPGauge.WBP_Menu_CharacterHPGauge_C.ExecuteUbergraph_WBP_Menu_CharacterHPGauge
struct UWBP_Menu_CharacterHPGauge_C_ExecuteUbergraph_WBP_Menu_CharacterHPGauge_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


