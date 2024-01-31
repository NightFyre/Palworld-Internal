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

// 0x19 (0x19 - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.GetMyBB
struct ABP_NPCAIController_C_GetMyBB_Params
{
public:
	class UBP_PalAIBlackboard_Common_C*          PalBrackboard;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIBlackboardBase*                  CallFunc_GetMyPalBlackboard_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalAIBlackboard_Common_C*          K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.GetLeaderBB
struct ABP_NPCAIController_C_GetLeaderBB_Params
{
public:
	class UBP_PalAIBlackboard_Common_C*          LeaderPalBrackboard;                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIBlackboardBase*                  CallFunc_GetLeaderPalBlackboard_ReturnValue;       // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalAIBlackboard_Common_C*          K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x79 (0x79 - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.ForceBattleStartToTarget
struct ABP_NPCAIController_C_ForceBattleStartToTarget_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter          K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x8(0x50)(NoDestructor)
	class UPalBattleManager*                     CallFunc_GetBattleManager_ReturnValue;             // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalAIActionBase*                      CallFunc_SetActionClassParameter_ReturnValue;      // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TargetIsPlayerOrPlayersOtomoPal_ReturnValue; // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.IsSleeping
struct ABP_NPCAIController_C_IsSleeping_Params
{
public:
	bool                                         IsSleep;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*       CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.ForceEscapeStartFortOutSide
struct ABP_NPCAIController_C_ForceEscapeStartFortOutSide_Params
{
public:
	class AActor*                                StartActor;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                TargetActor;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSleeping_IsSleep;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.TalkEnd_Func
struct ABP_NPCAIController_C_TalkEnd_Func_Params
{
public:
	class AActor*                                SelfActor;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                TargetActor;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                 K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPawnAction*                           CallFunc_GetCurrentAction_BP_ReturnValue;          // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_Talking_C*            K2Node_DynamicCast_AsBP_AIAction_NPC_Talking;      // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8A (0x8A - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.TalkStart_Func
struct ABP_NPCAIController_C_TalkStart_Func_Params
{
public:
	class AActor*                                SelfActor;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                TargetActor;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter          K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x10(0x50)(NoDestructor)
	class UPalAIActionComponent*                 K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalAIActionBase*                      CallFunc_SetActionClassParameter_ReturnValue;      // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPawnAction*                           CallFunc_GetCurrentAction_BP_ReturnValue;          // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_Talking_C*            K2Node_DynamicCast_AsBP_AIAction_NPC_Talking;      // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsTalking_IsTalking;                   // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.ForceBattleStartForOutside
struct ABP_NPCAIController_C_ForceBattleStartForOutside_Params
{
public:
	class AActor*                                StartActor;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSleeping_IsSleep;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4101[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_CopyTargetFromOtherAI_ReturnValue;        // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4102[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalAIActionDynamicParameter          K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x20(0x50)(NoDestructor)
	class UPalAIActionComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBase*                      CallFunc_SetActionClassParameter_ReturnValue;      // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.StartEscapeMode
struct ABP_NPCAIController_C_StartEscapeMode_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ByOutSide;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4111[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalAIActionComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter          K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x18(0x50)(NoDestructor)
	class UPalAIActionBase*                      CallFunc_SetActionClassParameter_ReturnValue;      // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.SetAutoDefaultAIAction
struct ABP_NPCAIController_C_SetAutoDefaultAIAction_Params
{
public:
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.SetSpawnedInfo
struct ABP_NPCAIController_C_SetSpawnedInfo_Params
{
public:
	struct FVector                               SpawnerLoc;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ReturnRadius;                                      // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FF_NPC_PathWalkArray                  PathWalk;                                          // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FName                                  Otomo;                                             // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PalAIBlackboard_Common_C*          CallFunc_GetMyBB_PalBrackboard;                    // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.ReturnToTerritory
struct ABP_NPCAIController_C_ReturnToTerritory_Params
{
public:
	class UPalAIActionComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBase*                      CallFunc_SetActionClassParameter_ReturnValue;      // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.StartCombatMode
struct ABP_NPCAIController_C_StartCombatMode_Params
{
public:
	class AActor*                                TempEscapeTarget;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalNPCAIWeaponHandle*                 CallFunc_GetWeaponHandle_WeaponHandle;             // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UPalAIActionBase>          CallFunc_GetCombatClass_ReturnValue;               // 0x18(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4112[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalAIActionBase*                      CallFunc_SetActionClassParameter_ReturnValue;      // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.GetWeaponHandle
struct ABP_NPCAIController_C_GetWeaponHandle_Params
{
public:
	class UPalNPCAIWeaponHandle*                 WeaponHandle;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.SetupWeaponHandle
struct ABP_NPCAIController_C_SetupWeaponHandle_Params
{
public:
	class APalWeaponBase*                        Weapon;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.StartDefaultAIAction
struct ABP_NPCAIController_C_StartDefaultAIAction_Params
{
public:
	class UPalAIActionBase*                      CallFunc_SpawnObject_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                 K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4113[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_AIAction_NPC_Relax_PathWalk_C*     K2Node_DynamicCast_AsBP_AIAction_NPC_Relax_Path_Walk; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.OverrideDefaultAction
struct ABP_NPCAIController_C_OverrideDefaultAction_Params
{
public:
	class UClass*                                DefaultAction;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.«¹¿à¤ÙóÈ_0
struct ABP_NPCAIController_C__________0_Params
{
public:
	struct FPalInstanceID                        ID;                                                // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.«¹¿à¤ÙóÈ_4
struct ABP_NPCAIController_C__________4_Params
{
public:
	class AController*                           HolderController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         OtomoPal;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.ReceiveTick
struct ABP_NPCAIController_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.ReceivePossess
struct ABP_NPCAIController_C_ReceivePossess_Params
{
public:
	class APawn*                                 PossessedPawn;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.«¹¿à¤ÙóÈ_2
struct ABP_NPCAIController_C__________2_Params
{
public:
	struct FPalDeadInfo                          DeadInfo;                                          // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.ReceiveEndPlay
struct ABP_NPCAIController_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.OnNpcTalkIncidentNotify
struct ABP_NPCAIController_C_OnNpcTalkIncidentNotify_Params
{
public:
	class UPalIncidentNotifyListener*            Listener;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalIncidentState                 IncidentState;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4114[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalIncidentNotifyParameter           Parameter;                                         // 0x10(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.NotifyTalkStart
struct ABP_NPCAIController_C_NotifyTalkStart_Params
{
public:
	class APalPlayerCharacter*                   TalkPlayer;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.NotifyTalkEnd
struct ABP_NPCAIController_C_NotifyTalkEnd_Params
{
public:
	class APalPlayerCharacter*                   TalkPlayer;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x528 (0x528 - 0x0)
// Function BP_NPCAIController.BP_NPCAIController_C.ExecuteUbergraph_BP_NPCAIController
struct ABP_NPCAIController_C_ExecuteUbergraph_BP_NPCAIController_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4115[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalPlayerCharacter*                   K2Node_Event_TalkPlayer;                           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalIncidentNotifyListener_NPCTalk_C* CallFunc_SpawnObject_ReturnValue;                  // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4116[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 K2Node_MakeStruct_Guid;                            // 0x3C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4117[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalCharacterManager*                  CallFunc_GetCharacterManager_ReturnValue;          // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalInstanceID                        K2Node_CustomEvent_ID;                             // 0x58(0x30)(HasGetValueTypeHash)
	class UPalCharacterManager*                  CallFunc_GetCharacterManager_ReturnValue_1;        // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*         CallFunc_GetIndividualHandle_ReturnValue;          // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddOtomoHandleToFreeSlot_ReturnValue;     // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4118[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalCharacterParameterComponent*       CallFunc_GetComponentByClass_ReturnValue;          // 0xA8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SynchronizedGroup_ReturnValue;            // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4119[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xB4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_411A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_1;                 // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*       CallFunc_GetComponentByClass_ReturnValue_1;        // 0xD0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetLevel_ReturnValue;                     // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_411B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           K2Node_CustomEvent_HolderController;               // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         K2Node_CustomEvent_OtomoPal;                       // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalIndividualCharacterSaveParameter  CallFunc_GetInitializedCharacterSaveParemter_outParameter; // 0xF0(0x218)(None)
	bool                                         CallFunc_GetInitializedCharacterSaveParemter_ReturnValue; // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_411C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalCharacterParameterComponent*       CallFunc_GetComponentByClass_ReturnValue_2;        // 0x310(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalAIController*                      K2Node_DynamicCast_AsPal_AIController;             // 0x318(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_411D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalSquad*                             CallFunc_GetSquad_ReturnValue;                     // 0x328(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalInstanceID                        CallFunc_GetIndividualID_ReturnValue;              // 0x330(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue_1;               // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_411E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DeltaSeconds;                         // 0x364(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 K2Node_Event_PossessedPawn;                        // 0x368(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_2;                 // 0x370(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*       CallFunc_GetComponentByClass_ReturnValue_3;        // 0x378(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_NPCAIWeaponHandle_C*               CallFunc_SpawnObject_ReturnValue_1;                // 0x380(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_3;                 // 0x388(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalNPCAIWeaponHandle*                 CallFunc_GetWeaponHandle_WeaponHandle;             // 0x390(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEndInitialize_ReturnValue;              // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_411F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_4;                 // 0x3A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*        CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x3A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*       CallFunc_GetComponentByClass_ReturnValue_4;        // 0x3B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_5;                 // 0x3B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetCharacterID_ReturnValue;               // 0x3C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalDamageReactionComponent*           CallFunc_GetComponentByClass_ReturnValue_5;        // 0x3C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EPalWeaponType                    CallFunc_GetWeaponType_ReturnValue;                // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x3D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4120[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalDeadInfo                          K2Node_CustomEvent_DeadInfo;                       // 0x3D8(0x50)(NoDestructor)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_6;                 // 0x428(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSquad*                             CallFunc_GetSquad_ReturnValue_1;                   // 0x430(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x438(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsSquadBehaviour_ReturnValue;          // 0x439(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x43A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x43B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsSquadBehaviour_ReturnValue_1;        // 0x43C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4121[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalSquad*                             CallFunc_GetSquad_ReturnValue_2;                   // 0x440(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x448(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x459(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4122[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PalAIBlackboard_Common_C*          CallFunc_GetMyBB_PalBrackboard;                    // 0x460(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBattleManager*                     CallFunc_GetBattleManager_ReturnValue;             // 0x468(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_7;                 // 0x470(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x478(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x488(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*         CallFunc_CreateIndividual_ReturnValue;             // 0x498(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIncidentNotifyListener*            K2Node_CustomEvent_Listener;                       // 0x4A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalIncidentState                 K2Node_CustomEvent_IncidentState;                  // 0x4A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4123[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalIncidentNotifyParameter           K2Node_CustomEvent_Parameter;                      // 0x4B0(0x28)(ConstParm, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x4D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4124[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalIncidentDynamicParameter*          CallFunc_GetDynamicParameter_ReturnValue;          // 0x4E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x4E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4125[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_8;                 // 0x4F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSquad*                             CallFunc_GetSquad_ReturnValue_3;                   // 0x4F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSquad*                             CallFunc_GetSquad_ReturnValue_4;                   // 0x500(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x508(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x518(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4126[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalPlayerCharacter*                   K2Node_Event_TalkPlayer_1;                         // 0x520(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


