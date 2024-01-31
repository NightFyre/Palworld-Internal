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

// 0x128 (0x128 - 0x0)
// Function BP_AINPC_CombatMeleeState_StepAttack.BP_AINPC_CombatMeleeState_StepAttack_C.ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack
struct UBP_AINPC_CombatMeleeState_StepAttack_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1527[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetTargetActor_TargetActor;               // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*         CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat; // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_1528[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActionDynamicParameter               K2Node_MakeStruct_ActionDynamicParameter;          // 0x20(0xE0)(None)
	class UPalActionComponent*                   CallFunc_GetBodyActionComponentRef_ActionComp;     // 0x100(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*         CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1; // 0x108(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPalActionBase*                        CallFunc_PlayActionParameter_ReturnValue;          // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetSelfActor_SelfActor;                   // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


