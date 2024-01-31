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
// Function ABP_Pinkcat_Implementation.ABP_Pinkcat_Implementation_C.UpperOverride
struct UABP_Pinkcat_Implementation_C_UpperOverride_Params
{
public:
	struct FPoseLink                             NativePose;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ActionPose;                                        // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             UpperOverride;                                     // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function ABP_Pinkcat_Implementation.ABP_Pinkcat_Implementation_C.AimingOverride
struct UABP_Pinkcat_Implementation_C_AimingOverride_Params
{
public:
	struct FPoseLink                             DefaultPose;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FRotator                              AimRotator;                                        // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPoseLink                             AimingOverride;                                    // 0x28(0x10)(Parm, OutParm, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function ABP_Pinkcat_Implementation.ABP_Pinkcat_Implementation_C.LookAtOverride
struct UABP_Pinkcat_Implementation_C_LookAtOverride_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FVector                               LookAtWorldLocation;                               // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             LookAtOverride;                                    // 0x28(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ABP_Pinkcat_Implementation.ABP_Pinkcat_Implementation_C.AnimGraph
struct UABP_Pinkcat_Implementation_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ABP_Pinkcat_Implementation.ABP_Pinkcat_Implementation_C.ExecuteUbergraph_ABP_Pinkcat_Implementation
struct UABP_Pinkcat_Implementation_C_ExecuteUbergraph_ABP_Pinkcat_Implementation_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


