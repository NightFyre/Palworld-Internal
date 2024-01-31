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
// Function BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C.IsEndSelfState
struct UBP_AINPC_CombatState_Base_C_IsEndSelfState_Params
{
public:
	bool                                         IsEnd;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C.ShootAbleSlefForwardDot
struct UBP_AINPC_CombatState_Base_C_ShootAbleSlefForwardDot_Params
{
public:
	bool                                         ShootAble;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F13[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         CallFunc_GetSelfActor_SelfActor;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetTargetActor_TargetActor;               // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_InFanShapAimTarget_ReturnValue;           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F14[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         CallFunc_GetSelfActor_SelfActor_1;                 // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F15[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetTargetActor_TargetActor_1;             // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C.AttackAblePlayerCamera
struct UBP_AINPC_CombatState_Base_C_AttackAblePlayerCamera_Params
{
public:
	bool                                         AttackAble;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F16[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         CallFunc_GetSelfActor_SelfActor;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetTargetActor_TargetActor;               // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAIAttackAbleByPlayerCamera_ReturnValue; // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C.GetControllerRef
struct UBP_AINPC_CombatState_Base_C_GetControllerRef_Params
{
public:
	class ABP_NPCAIController_C*                 NPCAICon;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*         CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat; // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_NPCAIController_C*                 CallFunc_GetControllerRef_NPCAICon;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C.GetShooterComponent
struct UBP_AINPC_CombatState_Base_C_GetShooterComponent_Params
{
public:
	class UPalShooterComponent*                  ShooterComp;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetSelfActor_SelfActor;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C.GetSelfActor
struct UBP_AINPC_CombatState_Base_C_GetSelfActor_Params
{
public:
	class APalCharacter*                         SelfActor;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*         CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat; // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C.GetTargetActor
struct UBP_AINPC_CombatState_Base_C_GetTargetActor_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*         CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat; // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_AINPC_CombatState_Base.BP_AINPC_CombatState_Base_C.GetCombatAIActionRef
struct UBP_AINPC_CombatState_Base_C_GetCombatAIActionRef_Params
{
public:
	class UBP_AIAction_NPC_CombatBase_C*         BPAIActionNPCCombat;                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                               CallFunc_GetOuterObject_ReturnValue;               // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*         K2Node_DynamicCast_AsBP_AIAction_NPC_Combat_Base;  // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


