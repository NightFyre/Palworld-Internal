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
// Function BP_MonsterAIController_Wild.BP_MonsterAIController_Wild_C.GetMyBB
struct ABP_MonsterAIController_Wild_C_GetMyBB_Params
{
public:
	class UBP_PalAIBlackboard_Common_C*          PalBrackboard;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIBlackboardBase*                  CallFunc_GetMyPalBlackboard_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalAIBlackboard_Common_C*          K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_MonsterAIController_Wild.BP_MonsterAIController_Wild_C.GetLeaderBB
struct ABP_MonsterAIController_Wild_C_GetLeaderBB_Params
{
public:
	class UBP_PalAIBlackboard_Common_C*          LeaderPalBrackboard;                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIBlackboardBase*                  CallFunc_GetLeaderPalBlackboard_ReturnValue;       // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalAIBlackboard_Common_C*          K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_MonsterAIController_Wild.BP_MonsterAIController_Wild_C.IsSleeping
struct ABP_MonsterAIController_Wild_C_IsSleeping_Params
{
public:
	bool                                         Sleep;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_442F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*       CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x138 (0x138 - 0x0)
// Function BP_MonsterAIController_Wild.BP_MonsterAIController_Wild_C.ForceEscaleStartForOutside
struct ABP_MonsterAIController_Wild_C_ForceEscaleStartForOutside_Params
{
public:
	class AActor*                                StartFriend;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Enemy;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1;        // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPawnAction*                           CallFunc_GetCurrentAction_BP_ReturnValue;          // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBossPal_Database_ReturnValue;           // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4430[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_AIAction_WildLife_C*               K2Node_DynamicCast_AsBP_AIAction_Wild_Life;        // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4431[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x70(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                 CallFunc_GetComponentByClass_ReturnValue_2;        // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Vector_Distance_ReturnValue;              // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_2;                 // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4432[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSleeping_Sleep;                         // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4433[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0xC8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter          K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0xE0(0x50)(NoDestructor)
	class UPalAIActionBase*                      CallFunc_SetActionClassParameter_ReturnValue;      // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function BP_MonsterAIController_Wild.BP_MonsterAIController_Wild_C.SetupSleepTime
struct ABP_MonsterAIController_Wild_C_SetupSleepTime_Params
{
public:
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                       CallFunc_GetGameSetting_ReturnValue;               // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard;     // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4434[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PalAIBlackboard_Common_C*          CallFunc_GetMyBB_PalBrackboard;                    // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x79 (0x79 - 0x0)
// Function BP_MonsterAIController_Wild.BP_MonsterAIController_Wild_C.ForceBattleStartToTarget
struct ABP_MonsterAIController_Wild_C_ForceBattleStartToTarget_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter          K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x8(0x50)(NoDestructor)
	class UPalBattleManager*                     CallFunc_GetBattleManager_ReturnValue;             // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4435[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalAIActionBase*                      CallFunc_SetActionClassParameter_ReturnValue;      // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TargetIsPlayerOrPlayersOtomoPal_ReturnValue; // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MonsterAIController_Wild.BP_MonsterAIController_Wild_C.PerformanceSetup
struct ABP_MonsterAIController_Wild_C_PerformanceSetup_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function BP_MonsterAIController_Wild.BP_MonsterAIController_Wild_C.SetSpawndInfo
struct ABP_MonsterAIController_Wild_C_SetSpawndInfo_Params
{
public:
	struct FVector                               SpawnerLoc;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ReturnRadius;                                      // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       WalkRadius;                                        // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard;     // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4436[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PalAIBlackboard_Common_C*          CallFunc_GetMyBB_PalBrackboard;                    // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function BP_MonsterAIController_Wild.BP_MonsterAIController_Wild_C.DebugBattleStartInternal
struct ABP_MonsterAIController_Wild_C_DebugBattleStartInternal_Params
{
public:
	class AActor*                                Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter          K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0x10(0x50)(NoDestructor)
	class UPalAIActionBase*                      CallFunc_SetActionClassParameter_ReturnValue;      // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_MonsterAIController_Wild.BP_MonsterAIController_Wild_C.ReturnToTerritory
struct ABP_MonsterAIController_Wild_C_ReturnToTerritory_Params
{
public:
	class UPalAIActionComponent*                 K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4437[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalAIActionBase*                      CallFunc_SetActionClassParameter_ReturnValue;      // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xF8 (0xF8 - 0x0)
// Function BP_MonsterAIController_Wild.BP_MonsterAIController_Wild_C.ForceBattleStartForOutside
struct ABP_MonsterAIController_Wild_C_ForceBattleStartForOutside_Params
{
public:
	class AActor*                                StartPalActor;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSleeping_Sleep;                         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_443B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_CopyTargetFromOtherAI_ReturnValue;        // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_443C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Vector_Distance_ReturnValue;              // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x88(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalAIActionDynamicParameter          K2Node_MakeStruct_PalAIActionDynamicParameter;     // 0xA0(0x50)(NoDestructor)
	class UPalAIActionBase*                      CallFunc_SetActionClassParameter_ReturnValue;      // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_MonsterAIController_Wild.BP_MonsterAIController_Wild_C.OnDeadDelegate_¤ÙóÈ_0
struct ABP_MonsterAIController_Wild_C_OnDeadDelegate______0_Params
{
public:
	struct FPalDeadInfo                          DeadInfo;                                          // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_MonsterAIController_Wild.BP_MonsterAIController_Wild_C.«¹¿à¤ÙóÈ_1
struct ABP_MonsterAIController_Wild_C__________1_Params
{
public:
	class APalCharacter*                         InCharacter;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_MonsterAIController_Wild.BP_MonsterAIController_Wild_C.ReceiveEndPlay
struct ABP_MonsterAIController_Wild_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MonsterAIController_Wild.BP_MonsterAIController_Wild_C.DebugBattleStart
struct ABP_MonsterAIController_Wild_C_DebugBattleStart_Params
{
public:
	class AActor*                                Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MonsterAIController_Wild.BP_MonsterAIController_Wild_C.ReceivePossess
struct ABP_MonsterAIController_Wild_C_ReceivePossess_Params
{
public:
	class APawn*                                 PossessedPawn;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x168 (0x168 - 0x0)
// Function BP_MonsterAIController_Wild.BP_MonsterAIController_Wild_C.ExecuteUbergraph_BP_MonsterAIController_Wild
struct ABP_MonsterAIController_Wild_C_ExecuteUbergraph_BP_MonsterAIController_Wild_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_443D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 K2Node_Event_PossessedPawn;                        // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBattleManager*                     CallFunc_GetBattleManager_ReturnValue;             // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDeadInfo                          K2Node_CustomEvent_DeadInfo;                       // 0x38(0x50)(NoDestructor)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_2;                 // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         K2Node_DynamicCast_AsPal_Character;                // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_443E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         K2Node_CustomEvent_InCharacter;                    // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterOnCompleteInitializeParameterWrapper* CallFunc_GetOnCompleteInitializeParameterDelegate_ReturnValue; // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsSquadBehaviour_ReturnValue;          // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_443F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalSquad*                             CallFunc_GetSquad_ReturnValue;                     // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsSquadBehaviour_ReturnValue_1;        // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4440[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalSquad*                             CallFunc_GetSquad_ReturnValue_1;                   // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xD0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_Player;                               // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard;     // 0xE8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4441[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xFC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4442[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PalAIBlackboard_Common_C*          CallFunc_GetMyBB_PalBrackboard;                    // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_3;                 // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDamageReactionComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x120(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_4;                 // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_5;                 // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*       CallFunc_GetComponentByClass_ReturnValue_1;        // 0x138(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalSquad*                             CallFunc_GetSquad_ReturnValue_2;                   // 0x140(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRarePal_ReturnValue;                    // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4443[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x14C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4444[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalSquad*                             CallFunc_GetSquad_ReturnValue_3;                   // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MonsterAIController_Wild.BP_MonsterAIController_Wild_C.BattleStartEvent__DelegateSignature
struct ABP_MonsterAIController_Wild_C_BattleStartEvent__DelegateSignature_Params
{
public:
	class AActor*                                StartPalActor;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


