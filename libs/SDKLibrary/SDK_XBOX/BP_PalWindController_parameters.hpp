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

// 0x28 (0x28 - 0x0)
// Function BP_PalWindController.BP_PalWindController_C.UpdateNPC
struct ABP_PalWindController_C_UpdateNPC_Params
{
public:
	struct FPalWindInfo                          WindInfo;                                          // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	class UNiagaraParameterCollectionInstance*   CallFunc_GetNiagaraParameterCollection_ReturnValue; // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_PalWindController.BP_PalWindController_C.UpdateNiagaraParameterCollection
struct ABP_PalWindController_C_UpdateNiagaraParameterCollection_Params
{
public:
	struct FPalWindInfo                          WindInfo;                                          // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function BP_PalWindController.BP_PalWindController_C.ExecuteUbergraph_BP_PalWindController
struct ABP_PalWindController_C_ExecuteUbergraph_BP_PalWindController_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalWindInfo                          K2Node_Event_WindInfo;                             // 0x8(0x20)(ConstParm, NoDestructor)
};

}
}


