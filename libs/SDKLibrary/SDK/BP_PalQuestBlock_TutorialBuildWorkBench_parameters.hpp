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

// 0x100 (0x100 - 0x0)
// Function BP_PalQuestBlock_TutorialBuildWorkBench.BP_PalQuestBlock_TutorialBuildWorkBench_C.GetDescriptionText
struct UBP_PalQuestBlock_TutorialBuildWorkBench_C_GetDescriptionText_Params
{
public:
	class FText                                  OutText;                                           // 0x0(0x18)(Parm, OutParm)
	struct FDataTableRowHandle                   NewLocalVar_0;                                     // 0x18(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                   NewLocalVar;                                       // 0x28(0x10)(Edit, BlueprintVisible, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5342[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetMapObjectName_outName;                 // 0x40(0x18)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5343[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x60(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB0(0x10)(ReferenceParm)
	struct FDataTableRowHandle                   K2Node_Select_Default;                             // 0xC0(0x10)(NoDestructor)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0xD0(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xE8(0x18)(None)
};

}
}


