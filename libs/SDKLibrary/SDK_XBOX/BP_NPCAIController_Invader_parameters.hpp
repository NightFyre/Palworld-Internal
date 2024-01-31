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

// 0x80 (0x80 - 0x0)
// Function BP_NPCAIController_Invader.BP_NPCAIController_Invader_C.ReturnSpawnedPoint
struct ABP_NPCAIController_Invader_C_ReturnSpawnedPoint_Params
{
public:
	struct FVector                               ReturnPos;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter          K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x18(0x50)(NoDestructor)
	class UPalAIActionComponent*                 K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalAIActionBase*                      CallFunc_SetActionClassParameter_ReturnValue;      // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function BP_NPCAIController_Invader.BP_NPCAIController_Invader_C.StartMarch
struct ABP_NPCAIController_Invader_C_StartMarch_Params
{
public:
	struct FVector                               GoalPos;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter          K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x20(0x50)(NoDestructor)
	class UPalAIActionComponent*                 CallFunc_GetComponentByClass_ReturnValue_1;        // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBase*                      CallFunc_SetActionClassParameter_ReturnValue;      // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBase*                      CallFunc_SetActionClassParameter_ReturnValue_1;    // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NPCAIController_Invader.BP_NPCAIController_Invader_C.ForceBattleStartForOutside
struct ABP_NPCAIController_Invader_C_ForceBattleStartForOutside_Params
{
public:
	class AActor*                                StartActor;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_NPCAIController_Invader.BP_NPCAIController_Invader_C.BindOnInvaderArrivedDelegate
struct ABP_NPCAIController_Invader_C_BindOnInvaderArrivedDelegate_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BP_NPCAIController_Invader.BP_NPCAIController_Invader_C.ExecuteUbergraph_BP_NPCAIController_Invader
struct ABP_NPCAIController_Invader_C_ExecuteUbergraph_BP_NPCAIController_Invader_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_Event_Event;                                // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


