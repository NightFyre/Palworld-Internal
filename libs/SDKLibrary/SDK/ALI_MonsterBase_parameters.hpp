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
// Function ALI_MonsterBase.ALI_MonsterBase_C.UpperOverride
struct IALI_MonsterBase_C_UpperOverride_Params
{
public:
	struct FPoseLink                             NativePose;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ActionPose;                                        // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             UpperOverride;                                     // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function ALI_MonsterBase.ALI_MonsterBase_C.LookAtOverride
struct IALI_MonsterBase_C_LookAtOverride_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FVector                               LookAtWorldLocation;                               // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             LookAtOverride;                                    // 0x28(0x10)(Parm, OutParm, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function ALI_MonsterBase.ALI_MonsterBase_C.AimingOverride
struct IALI_MonsterBase_C_AimingOverride_Params
{
public:
	struct FPoseLink                             DefaultPose;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FRotator                              AimRotator;                                        // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPoseLink                             AimingOverride;                                    // 0x28(0x10)(Parm, OutParm, NoDestructor)
};

}
}


