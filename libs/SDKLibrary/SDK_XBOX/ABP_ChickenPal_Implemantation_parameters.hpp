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

// 0x38 (0x38 - 0x0)
// Function ABP_ChickenPal_Implemantation.ABP_ChickenPal_Implemantation_C.AimingOverride
struct UABP_ChickenPal_Implemantation_C_AimingOverride_Params
{
public:
	struct FPoseLink                             DefaultPose;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FRotator                              AimRotator;                                        // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPoseLink                             AimingOverride;                                    // 0x28(0x10)(Parm, OutParm, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function ABP_ChickenPal_Implemantation.ABP_ChickenPal_Implemantation_C.LookAtOverride
struct UABP_ChickenPal_Implemantation_C_LookAtOverride_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FVector                               LookAtWorldLocation;                               // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             LookAtOverride;                                    // 0x28(0x10)(Parm, OutParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function ABP_ChickenPal_Implemantation.ABP_ChickenPal_Implemantation_C.UpperOverride
struct UABP_ChickenPal_Implemantation_C_UpperOverride_Params
{
public:
	struct FPoseLink                             NativePose;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ActionPose;                                        // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             UpperOverride;                                     // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ABP_ChickenPal_Implemantation.ABP_ChickenPal_Implemantation_C.AnimGraph
struct UABP_ChickenPal_Implemantation_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function ABP_ChickenPal_Implemantation.ABP_ChickenPal_Implemantation_C.ExecuteUbergraph_ABP_ChickenPal_Implemantation
struct UABP_ChickenPal_Implemantation_C_ExecuteUbergraph_ABP_ChickenPal_Implemantation_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


