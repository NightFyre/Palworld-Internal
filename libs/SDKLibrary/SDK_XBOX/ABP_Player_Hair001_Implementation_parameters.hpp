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

// 0x20 (0x20 - 0x0)
// Function ABP_Player_Hair001_Implementation.ABP_Player_Hair001_Implementation_C.HairLayer
struct UABP_Player_Hair001_Implementation_C_HairLayer_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             HairLayer;                                         // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ABP_Player_Hair001_Implementation.ABP_Player_Hair001_Implementation_C.AnimGraph
struct UABP_Player_Hair001_Implementation_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4C (0x4C - 0x0)
// Function ABP_Player_Hair001_Implementation.ABP_Player_Hair001_Implementation_C.ExecuteUbergraph_ABP_Player_Hair001_Implementation
struct UABP_Player_Hair001_Implementation_C_ExecuteUbergraph_ABP_Player_Hair001_Implementation_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKawaiiPhysicsSettings                K2Node_MakeStruct_KawaiiPhysicsSettings;           // 0x4(0x18)(NoDestructor)
	struct FKawaiiPhysicsSettings                K2Node_MakeStruct_KawaiiPhysicsSettings_1;         // 0x1C(0x18)(NoDestructor)
	struct FKawaiiPhysicsSettings                K2Node_MakeStruct_KawaiiPhysicsSettings_2;         // 0x34(0x18)(NoDestructor)
};

}
}


