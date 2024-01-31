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

// 0x98 (0x98 - 0x0)
// Function BP_ActionDeath_SelfDestruct.BP_ActionDeath_SelfDestruct_C.ExecuteUbergraph_BP_ActionDeath_SelfDestruct
struct UBP_ActionDeath_SelfDestruct_C_ExecuteUbergraph_BP_ActionDeath_SelfDestruct_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4274[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_1;         // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4275[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x20(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PalCryComponent_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffect_SelfDestruct_C*        CallFunc_FinishSpawningActor_ReturnValue;          // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


