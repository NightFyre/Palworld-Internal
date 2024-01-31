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
// Function ABP_F_OldCloth001_Implimentation.ABP_F_OldCloth001_Implimentation_C.ClothLayer
struct UABP_F_OldCloth001_Implimentation_C_ClothLayer_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ClothLayer;                                        // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ABP_F_OldCloth001_Implimentation.ABP_F_OldCloth001_Implimentation_C.AnimGraph
struct UABP_F_OldCloth001_Implimentation_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function ABP_F_OldCloth001_Implimentation.ABP_F_OldCloth001_Implimentation_C.ExecuteUbergraph_ABP_F_OldCloth001_Implimentation
struct UABP_F_OldCloth001_Implimentation_C_ExecuteUbergraph_ABP_F_OldCloth001_Implimentation_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKawaiiPhysicsSettings                K2Node_MakeStruct_KawaiiPhysicsSettings;           // 0x4(0x18)(NoDestructor)
};

}
}


