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

// 0x19 (0x19 - 0x0)
// Function BP_MonsterAIController_NPCOtomo.BP_MonsterAIController_NPCOtomo_C.GetMyBB
struct ABP_MonsterAIController_NPCOtomo_C_GetMyBB_Params
{
public:
	class UBP_PalAIBlackboard_Common_C*          PalBrackboard;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIBlackboardBase*                  CallFunc_GetMyPalBlackboard_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalAIBlackboard_Common_C*          K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_MonsterAIController_NPCOtomo.BP_MonsterAIController_NPCOtomo_C.GetLeaderBB
struct ABP_MonsterAIController_NPCOtomo_C_GetLeaderBB_Params
{
public:
	class UBP_PalAIBlackboard_Common_C*          LeaderPalBrackboard;                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIBlackboardBase*                  CallFunc_GetLeaderPalBlackboard_ReturnValue;       // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalAIBlackboard_Common_C*          K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MonsterAIController_NPCOtomo.BP_MonsterAIController_NPCOtomo_C.ReceivePossess
struct ABP_MonsterAIController_NPCOtomo_C_ReceivePossess_Params
{
public:
	class APawn*                                 PossessedPawn;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_MonsterAIController_NPCOtomo.BP_MonsterAIController_NPCOtomo_C.ExecuteUbergraph_BP_MonsterAIController_NPCOtomo
struct ABP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4456[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 K2Node_Event_PossessedPawn;                        // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


