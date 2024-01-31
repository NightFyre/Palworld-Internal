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
// Function WBP_Crime.WBP_Crime_C.SetCrime
struct UWBP_Crime_C_SetCrime_Params
{
public:
	bool                                         Crime;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_Crime.WBP_Crime_C.CrimeBeFound
struct UWBP_Crime_C_CrimeBeFound_Params
{
public:
	TArray<class FName>                          CrimeIds;                                          // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function WBP_Crime.WBP_Crime_C.ExecuteUbergraph_WBP_Crime
struct UWBP_Crime_C_ExecuteUbergraph_WBP_Crime_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Crime;                          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5171[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          K2Node_CustomEvent_CrimeIds;                       // 0x8(0x10)(ConstParm, ReferenceParm)
};

}
}


