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

// 0x1 (0x1 - 0x0)
// Function BP_AIAction_Trap_MovingPanel.BP_AIAction_Trap_MovingPanel_C.OnChangeTrapExist
struct UBP_AIAction_Trap_MovingPanel_C_OnChangeTrapExist_Params
{
public:
	bool                                         Exist;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_AIAction_Trap_MovingPanel.BP_AIAction_Trap_MovingPanel_C.GetCPC
struct UBP_AIAction_Trap_MovingPanel_C_GetCPC_Params
{
public:
	class UPalCharacterParameterComponent*       CPC;                                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetCharacter_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*       CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_AIAction_Trap_MovingPanel.BP_AIAction_Trap_MovingPanel_C.ActionStart
struct UBP_AIAction_Trap_MovingPanel_C_ActionStart_Params
{
public:
	class APawn*                                 ControlledPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_AIAction_Trap_MovingPanel.BP_AIAction_Trap_MovingPanel_C.ActionAbort
struct UBP_AIAction_Trap_MovingPanel_C_ActionAbort_Params
{
public:
	class APawn*                                 ControlledPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_AIAction_Trap_MovingPanel.BP_AIAction_Trap_MovingPanel_C.ActionFinished
struct UBP_AIAction_Trap_MovingPanel_C_ActionFinished_Params
{
public:
	class APawn*                                 ControlledPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPawnActionResult                 WithResult;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_AIAction_Trap_MovingPanel.BP_AIAction_Trap_MovingPanel_C.ActionPause
struct UBP_AIAction_Trap_MovingPanel_C_ActionPause_Params
{
public:
	class APawn*                                 ControlledPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function BP_AIAction_Trap_MovingPanel.BP_AIAction_Trap_MovingPanel_C.ExecuteUbergraph_BP_AIAction_Trap_MovingPanel
struct UBP_AIAction_Trap_MovingPanel_C_ExecuteUbergraph_BP_AIAction_Trap_MovingPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43E9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalCharacterParameterComponent*       CallFunc_GetCPC_CPC;                               // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 K2Node_Event_ControlledPawn_3;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 K2Node_Event_ControlledPawn_2;                     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 K2Node_Event_ControlledPawn_1;                     // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPawnActionResult                 K2Node_Event_WithResult;                           // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 K2Node_Event_ControlledPawn;                       // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                   CallFunc_GetActionComponent_ReturnValue;           // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                   CallFunc_GetActionComponent_ReturnValue_1;         // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43EB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalActionBase*                        CallFunc_PlayAction_ReturnValue;                   // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*       CallFunc_GetCPC_CPC_1;                             // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x60(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


