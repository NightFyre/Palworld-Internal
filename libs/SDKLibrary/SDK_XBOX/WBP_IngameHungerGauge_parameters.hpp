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

// 0xC (0xC - 0x0)
// Function WBP_IngameHungerGauge.WBP_IngameHungerGauge_C.SetHunger_ByRate
struct UWBP_IngameHungerGauge_C_SetHunger_ByRate_Params
{
public:
	double                                       Rate;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_IngameHungerGauge.WBP_IngameHungerGauge_C.SetHunger
struct UWBP_IngameHungerGauge_C_SetHunger_Params
{
public:
	struct FFixedPoint                           NowHunger;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint                           MaxHunger;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint                           CallFunc_Divide_FixedPointFixedPoint_ReturnValue;  // 0x8(0x4)(NoDestructor)
	float                                        CallFunc_Convert_FixedPointToFloat_ReturnValue;    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_IngameHungerGauge.WBP_IngameHungerGauge_C.ExecuteUbergraph_WBP_IngameHungerGauge
struct UWBP_IngameHungerGauge_C_ExecuteUbergraph_WBP_IngameHungerGauge_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_3;              // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


