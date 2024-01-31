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
// Function BP_AIAction_NPC_Relax_SalesPerson.BP_AIAction_NPC_Relax_SalesPerson_C.GetTransitionableJudgementType
struct UBP_AIAction_NPC_Relax_SalesPerson_C_GetTransitionableJudgementType_Params
{
public:
	TArray<enum class EPalAISightJudgementType>  JudgeTypeList;                                     // 0x0(0x10)(Parm, OutParm)
	TArray<enum class EPalAISightJudgementType>  NewLocalVar_0;                                     // 0x10(0x10)(Edit, BlueprintVisible)
	TArray<enum class EPalAISightJudgementType>  K2Node_MakeArray_Array;                            // 0x20(0x10)(ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function BP_AIAction_NPC_Relax_SalesPerson.BP_AIAction_NPC_Relax_SalesPerson_C.SoundEvent
struct UBP_AIAction_NPC_Relax_SalesPerson_C_SoundEvent_Params
{
public:
	struct FVector                               EmitLocation;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


