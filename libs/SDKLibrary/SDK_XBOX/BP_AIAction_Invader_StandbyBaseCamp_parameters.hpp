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

// 0x45 (0x45 - 0x0)
// Function BP_AIAction_Invader_StandbyBaseCamp.BP_AIAction_Invader_StandbyBaseCamp_C.SightCheckAndResponse
struct UBP_AIAction_Invader_StandbyBaseCamp_C_SightCheckAndResponse_Params
{
public:
	enum class EPalAIResponseType                Current;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OverrideIsDamage;                                  // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChangeNextAction;                                  // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4201[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCheatManager*                      CallFunc_GetPalCheatManager_ReturnValue;           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAISensorComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDisableEnemyEyeSight_ReturnValue;       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4202[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class APalCharacter*>                 CallFunc_SightCheckAllPlayer_InSightPlayers;       // 0x28(0x10)(ReferenceParm)
	class APalCharacter*                         CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_AIAction_Invader_StandbyBaseCamp.BP_AIAction_Invader_StandbyBaseCamp_C.OnSquadMemberDeadEvent
struct UBP_AIAction_Invader_StandbyBaseCamp_C_OnSquadMemberDeadEvent_Params
{
public:
	struct FPalDeadInfo                          DeadInbfo;                                         // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BP_AIAction_Invader_StandbyBaseCamp.BP_AIAction_Invader_StandbyBaseCamp_C.SoundEvent
struct UBP_AIAction_Invader_StandbyBaseCamp_C_SoundEvent_Params
{
public:
	struct FVector                               EmitLocation;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function BP_AIAction_Invader_StandbyBaseCamp.BP_AIAction_Invader_StandbyBaseCamp_C.Fun_Damage_AIResponse
struct UBP_AIAction_Invader_StandbyBaseCamp_C_Fun_Damage_AIResponse_Params
{
public:
	struct FPalDamageResult                      DamageResult;                                      // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class APalCharacter*                         TempTarget;                                        // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         K2Node_DynamicCast_AsPal_Character;                // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4203[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBattleManager*                     CallFunc_GetBattleManager_ReturnValue;             // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_AIAction_Invader_StandbyBaseCamp.BP_AIAction_Invader_StandbyBaseCamp_C.ActionTick
struct UBP_AIAction_Invader_StandbyBaseCamp_C_ActionTick_Params
{
public:
	class APawn*                                 ControlledPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaSeconds;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BP_AIAction_Invader_StandbyBaseCamp.BP_AIAction_Invader_StandbyBaseCamp_C.ExecuteUbergraph_BP_AIAction_Invader_StandbyBaseCamp
struct UBP_AIAction_Invader_StandbyBaseCamp_C_ExecuteUbergraph_BP_AIAction_Invader_StandbyBaseCamp_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SightCheckAndResponse_ChangeNextAction;   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4204[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 K2Node_Event_ControlledPawn;                       // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


