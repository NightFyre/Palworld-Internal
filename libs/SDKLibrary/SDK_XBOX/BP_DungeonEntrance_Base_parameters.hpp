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
// Function BP_DungeonEntrance_Base.BP_DungeonEntrance_Base_C.GetInteractWidget
struct ABP_DungeonEntrance_Base_C_GetInteractWidget_Params
{
public:
	class UPalUserWidget*                        CreatedWidget;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalStageModelDungeon*                 CallFunc_GetStageModel_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetLocalPlayerController_ReturnValue;     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_DungeonInfo_C*                    CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function BP_DungeonEntrance_Base.BP_DungeonEntrance_Base_C.GetWarpPoint
struct ABP_DungeonEntrance_Base_C_GetWarpPoint_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x60(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


