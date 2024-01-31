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

// 0x8 (0x8 - 0x0)
// Function BP_AIAction_BaseCampFighter.BP_AIAction_BaseCampFighter_C.ActionStart
struct UBP_AIAction_BaseCampFighter_C_ActionStart_Params
{
public:
	class APawn*                                 ControlledPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_AIAction_BaseCampFighter.BP_AIAction_BaseCampFighter_C.NotifyOrderCommand
struct UBP_AIAction_BaseCampFighter_C_NotifyOrderCommand_Params
{
public:
	enum class EPalMapBaseCampWorkerOrderType    OrderType;                                         // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_AIAction_BaseCampFighter.BP_AIAction_BaseCampFighter_C.ActionResume
struct UBP_AIAction_BaseCampFighter_C_ActionResume_Params
{
public:
	class APawn*                                 ControlledPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_AIAction_BaseCampFighter.BP_AIAction_BaseCampFighter_C.ExecuteUbergraph_BP_AIAction_BaseCampFighter
struct UBP_AIAction_BaseCampFighter_C_ExecuteUbergraph_BP_AIAction_BaseCampFighter_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4189[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPawnActionsComponent*                 CallFunc_GetOwnerComponent_ReturnValue;            // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 K2Node_Event_ControlledPawn_1;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_BaseCampFighter_Wait_C*   CallFunc_SpawnObject_ReturnValue;                  // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalMapBaseCampWorkerOrderType    K2Node_Event_OrderType;                            // 0x20(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBattleOrderType_ReturnValue;            // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_418A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 K2Node_Event_ControlledPawn;                       // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


