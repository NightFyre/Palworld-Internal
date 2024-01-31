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

// 0x4 (0x4 - 0x0)
// Function BP_AINPC_CombatGunState_MeleeAttack.BP_AINPC_CombatGunState_MeleeAttack_C.StateTick
struct UBP_AINPC_CombatGunState_MeleeAttack_C_StateTick_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x111 (0x111 - 0x0)
// Function BP_AINPC_CombatGunState_MeleeAttack.BP_AINPC_CombatGunState_MeleeAttack_C.ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack
struct UBP_AINPC_CombatGunState_MeleeAttack_C_ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E7F[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActionDynamicParameter               K2Node_MakeStruct_ActionDynamicParameter;          // 0x10(0xE0)(None)
	class UBP_AIAction_NPC_CombatBase_C*         CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat; // 0xF0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTime;                            // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E80[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalActionComponent*                   CallFunc_GetBodyActionComponentRef_ActionComp;     // 0x100(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                        CallFunc_PlayActionParameter_ReturnValue;          // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


