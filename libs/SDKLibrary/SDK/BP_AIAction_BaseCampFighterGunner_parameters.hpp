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
// Function BP_AIAction_BaseCampFighterGunner.BP_AIAction_BaseCampFighterGunner_C.ActionStart
struct UBP_AIAction_BaseCampFighterGunner_C_ActionStart_Params
{
public:
	class APawn*                                 ControlledPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_AIAction_BaseCampFighterGunner.BP_AIAction_BaseCampFighterGunner_C.NotifyOrderCommand
struct UBP_AIAction_BaseCampFighterGunner_C_NotifyOrderCommand_Params
{
public:
	enum class EPalMapBaseCampWorkerOrderType    OrderType;                                         // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function BP_AIAction_BaseCampFighterGunner.BP_AIAction_BaseCampFighterGunner_C.ExecuteUbergraph_BP_AIAction_BaseCampFighterGunner
struct UBP_AIAction_BaseCampFighterGunner_C_ExecuteUbergraph_BP_AIAction_BaseCampFighterGunner_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4188[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPawnActionsComponent*                 CallFunc_GetOwnerComponent_ReturnValue;            // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 K2Node_Event_ControlledPawn;                       // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_BaseCampFighterGunner_Wait_C* CallFunc_SpawnObject_ReturnValue;                  // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalMapBaseCampWorkerOrderType    K2Node_Event_OrderType;                            // 0x20(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


