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

// 0x2C (0x2C - 0x0)
// Function BP_AINPC_CombatGunState_FireMove_FlameThrower.BP_AINPC_CombatGunState_FireMove_FlameThrower_C.ExecuteUbergraph_BP_AINPC_CombatGunState_FireMove_FlameThrower
struct UBP_AINPC_CombatGunState_FireMove_FlameThrower_C_ExecuteUbergraph_BP_AINPC_CombatGunState_FireMove_FlameThrower_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3ADF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_NPCAIController_C*                 CallFunc_GetControllerRef_NPCAICon;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalNPCAIWeaponHandle*                 CallFunc_GetWeaponHandle_WeaponHandle;             // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_NPCAIController_C*                 CallFunc_GetControllerRef_NPCAICon_1;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalNPCAIWeaponHandle*                 CallFunc_GetWeaponHandle_WeaponHandle_1;           // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetRandomMoveTimeMin_ReturnValue;         // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


