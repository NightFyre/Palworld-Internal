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

// 0x21 (0x21 - 0x0)
// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.SelfMoveToLocation
struct UBP_AIAction_CanCombatBase_C_SelfMoveToLocation_Params
{
public:
	struct FVector                               Goal;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                      CallFunc_GetPalAIController_ReturnValue;           // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPathFollowingRequestResult       CallFunc_MoveToLocation_ReturnValue;               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.IsLeader
struct UBP_AIAction_CanCombatBase_C_IsLeader_Params
{
public:
	bool                                         Leader;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E5D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                      K2Node_DynamicCast_AsPal_AIController;             // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLeader_ReturnValue;                     // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x161 (0x161 - 0x0)
// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.OnSquadMemberDeadEvent
struct UBP_AIAction_CanCombatBase_C_OnSquadMemberDeadEvent_Params
{
public:
	struct FPalDeadInfo                          DeadInbfo;                                         // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	TArray<class APalCharacter*>                 KillerList;                                        // 0x50(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class AActor*                                TempKiller;                                        // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter          K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x68(0x50)(NoDestructor)
	class UPalAIActionBase*                      CallFunc_SetAIActionClassParameter_ReturnValue;    // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E60[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue_1;              // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         K2Node_DynamicCast_AsPal_Character;                // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E62[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_1;                 // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E63[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalBattleManager*                     CallFunc_GetBattleManager_ReturnValue;             // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue_2;              // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAISensorComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x110(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                      CallFunc_GetPalAIController_ReturnValue;           // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_SelectResponseBySenses_OutTargetCharacter; // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalAIResponseType                CallFunc_SelectResponseBySenses_ReturnValue;       // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E65[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalAIBlackboardBase*                  CallFunc_GetMyPalBlackboard_ReturnValue;           // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E66[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PalAIBlackboard_Common_C*          K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;   // 0x140(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E67[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue_3;              // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAISensorComponent*                 CallFunc_GetComponentByClass_ReturnValue_1;        // 0x158(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInSightKillerAndDeadBody_ReturnValue;   // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.StartFriendlyLookatMode
struct UBP_AIAction_CanCombatBase_C_StartFriendlyLookatMode_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter          K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x8(0x50)(NoDestructor)
	class UPalAIActionBase*                      CallFunc_SetAIActionClassParameter_ReturnValue;    // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.GetLeaderPalBrackBoard
struct UBP_AIAction_CanCombatBase_C_GetLeaderPalBrackBoard_Params
{
public:
	class UBP_PalAIBlackboard_Common_C*          BB;                                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                      CallFunc_GetPalAIController_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIBlackboardBase*                  CallFunc_GetLeaderPalBlackboard_ReturnValue;       // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalAIBlackboard_Common_C*          K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;   // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD2 (0xD2 - 0x0)
// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.Fun_Damage_AIResponse
struct UBP_AIAction_CanCombatBase_C_Fun_Damage_AIResponse_Params
{
public:
	struct FPalDamageResult                      DamageResult;                                      // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class APalCharacter*                         TempTargetActor;                                   // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TArray<class APalCharacter*>                 AttackerList;                                      // 0x58(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E68[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         K2Node_DynamicCast_AsPal_Character;                // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E69[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalCharacterParameterComponent*       CallFunc_GetComponentByClass_ReturnValue;          // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E6A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E6B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalBattleManager*                     CallFunc_GetBattleManager_ReturnValue;             // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E6C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue_1;              // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAISensorComponent*                 CallFunc_GetComponentByClass_ReturnValue_1;        // 0xC0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_SelectResponseBySenses_OutTargetCharacter; // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalAIResponseType                CallFunc_SelectResponseBySenses_ReturnValue;       // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xAD (0xAD - 0x0)
// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.SearchDeadEdibleBody
struct UBP_AIAction_CanCombatBase_C_SearchDeadEdibleBody_Params
{
public:
	bool                                         ChangeNextAction;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E6D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                TempTarget;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter          K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x10(0x50)(NoDestructor)
	class UPalAIActionBase*                      CallFunc_SetAIActionClassParameter_ReturnValue;    // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue_1;              // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAISensorComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*       CallFunc_GetComponentByClass_ReturnValue_1;        // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class APalCharacter*>                 CallFunc_SightCheckAllEdibleDeadNPC_InSightCharacters; // 0x90(0x10)(ReferenceParm)
	class APalCharacter*                         CallFunc_Array_Get_Item;                           // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A (0x2A - 0x0)
// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.SightCheckAndResponse
struct UBP_AIAction_CanCombatBase_C_SightCheckAndResponse_Params
{
public:
	enum class EPalAIResponseType                Current;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OverrideIsDamage;                                  // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChangeNextAction;                                  // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E6E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class APalCharacter*>                 TempTargetList;                                    // 0x8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class AActor*                                TempTarget;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_SightCheck_Target;                        // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalAIResponseType                CallFunc_SightCheck_ResponseType;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SightResponse_ChangeNextAction;           // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.SightResponse
struct UBP_AIAction_CanCombatBase_C_SightResponse_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalAIResponseType                ResponseType;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChangeNextAction;                                  // 0x9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x62 (0x62 - 0x0)
// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.SightCheck
struct UBP_AIAction_CanCombatBase_C_SightCheck_Params
{
public:
	enum class EPalAIResponseType                CurrentState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OverrideIsDamage;                                  // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E70[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Target;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalAIResponseType                ResponseType;                                      // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E71[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class APalCharacter*>                 TempTargetList;                                    // 0x18(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class APalCharacter*>                 CallFunc_SightCheckAllPlayer_InSightPlayers;       // 0x28(0x10)(ReferenceParm)
	TArray<class APalCharacter*>                 CallFunc_SightCheckAllAliveNPC_InSightCharacters;  // 0x38(0x10)(ReferenceParm)
	class APalCharacter*                         CallFunc_SelectResponseBySenses_OutTargetCharacter; // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalAIResponseType                CallFunc_SelectResponseBySenses_ReturnValue;       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E72[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalCheatManager*                      CallFunc_GetPalCheatManager_ReturnValue;           // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDisableEnemyEyeSight_ReturnValue;       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.GetLeader
struct UBP_AIAction_CanCombatBase_C_GetLeader_Params
{
public:
	class APalCharacter*                         Leader;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                      CallFunc_GetPalAIController_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetSquadLeader_ReturnValue;               // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.GetSelfPalBlackBoard
struct UBP_AIAction_CanCombatBase_C_GetSelfPalBlackBoard_Params
{
public:
	class UBP_PalAIBlackboard_Common_C*          PalBlackBoard;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                      CallFunc_GetPalAIController_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIBlackboardBase*                  CallFunc_GetMyPalBlackboard_ReturnValue;           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E74[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PalAIBlackboard_Common_C*          K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;   // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.SoundEvent
struct UBP_AIAction_CanCombatBase_C_SoundEvent_Params
{
public:
	struct FVector                               EmitLocation;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.DamageEventToCombatMode
struct UBP_AIAction_CanCombatBase_C_DamageEventToCombatMode_Params
{
public:
	struct FPalDamageResult                      DamageResult;                                      // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UPalBattleManager*                     CallFunc_GetBattleManager_ReturnValue;             // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TargetIsPlayerOrPlayersOtomoPal_ReturnValue; // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E75[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalBattleManager*                     CallFunc_GetBattleManager_ReturnValue_1;           // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.StartEscapeMode
struct UBP_AIAction_CanCombatBase_C_StartEscapeMode_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter          K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x10(0x50)(NoDestructor)
	class UPalAIActionBase*                      CallFunc_SetAIActionClassParameter_ReturnValue;    // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.StartWarningMode
struct UBP_AIAction_CanCombatBase_C_StartWarningMode_Params
{
public:
	struct FVector                               AttentionLocation;                                 // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter          K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x20(0x50)(NoDestructor)
	class UPalAIActionBase*                      CallFunc_SetAIActionClassParameter_ReturnValue;    // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.StartCombatMode
struct UBP_AIAction_CanCombatBase_C_StartCombatMode_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter          K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x8(0x50)(NoDestructor)
	class UPalAIActionBase*                      CallFunc_SetAIActionClassParameter_ReturnValue;    // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         K2Node_DynamicCast_AsPal_Character;                // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E79[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBattleManager*                     CallFunc_GetBattleManager_ReturnValue;             // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                      K2Node_DynamicCast_AsPal_AIController;             // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TargetIsPlayerOrPlayersOtomoPal_ReturnValue; // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E7A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue_1;              // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue_2;              // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                      K2Node_DynamicCast_AsPal_AIController_1;           // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E7B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue_3;              // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue;          // 0xC0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.ActionResume
struct UBP_AIAction_CanCombatBase_C_ActionResume_Params
{
public:
	class APawn*                                 ControlledPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.ActionStart
struct UBP_AIAction_CanCombatBase_C_ActionStart_Params
{
public:
	class APawn*                                 ControlledPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.ActionPause
struct UBP_AIAction_CanCombatBase_C_ActionPause_Params
{
public:
	class APawn*                                 ControlledPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.ActionFinished
struct UBP_AIAction_CanCombatBase_C_ActionFinished_Params
{
public:
	class APawn*                                 ControlledPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPawnActionResult                 WithResult;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.ActionAbort
struct UBP_AIAction_CanCombatBase_C_ActionAbort_Params
{
public:
	class APawn*                                 ControlledPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x118 (0x118 - 0x0)
// Function BP_AIAction_CanCombatBase.BP_AIAction_CanCombatBase_C.ExecuteUbergraph_BP_AIAction_CanCombatBase
struct UBP_AIAction_CanCombatBase_C_ExecuteUbergraph_BP_AIAction_CanCombatBase_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E82[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 K2Node_Event_ControlledPawn;                       // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 K2Node_Event_ControlledPawn_3;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 K2Node_Event_ControlledPawn_2;                     // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 K2Node_Event_ControlledPawn_1;                     // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPawnActionResult                 K2Node_Event_WithResult;                           // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E83[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue_1;              // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAISensorComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalAISensorComponent*                 CallFunc_GetComponentByClass_ReturnValue_1;        // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x60(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 K2Node_Event_ControlledPawn_4;                     // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue_2;              // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue_3;              // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*       CallFunc_GetComponentByClass_ReturnValue_2;        // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                      K2Node_DynamicCast_AsPal_AIController;             // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsSquadBehaviour_ReturnValue;          // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E84[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalSquad*                             CallFunc_GetSquad_ReturnValue;                     // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xB0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue_4;              // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                      K2Node_DynamicCast_AsPal_AIController_1;           // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue_5;              // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsSquadBehaviour_ReturnValue_1;        // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E86[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_1;                 // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSquad*                             CallFunc_GetSquad_ReturnValue_1;                   // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDamageReactionComponent*           CallFunc_GetComponentByClass_ReturnValue_3;        // 0xF8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x102(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E89[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue_6;              // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAISensorComponent*                 CallFunc_GetComponentByClass_ReturnValue_4;        // 0x110(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


