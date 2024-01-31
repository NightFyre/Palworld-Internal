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
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.GetWorkerModuleClass
struct ABP_MonsterAIController_BaseCamp_C_GetWorkerModuleClass_Params
{
public:
	TSubclassOf<class UPalAIControllerWorkerModule> ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetBaseCampActionByClass
struct ABP_MonsterAIController_BaseCamp_C_SetBaseCampActionByClass_Params
{
public:
	TSubclassOf<class UPalAIActionBase>          ActionClass;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPalAIActionBase*                      ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBase*                      CallFunc_SpawnObject_ReturnValue;                  // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                 K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAIRequestPriority                CallFunc_GetRequestPriority_ReturnValue;           // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetBaseCampActionSleep
struct ABP_MonsterAIController_BaseCamp_C_SetBaseCampActionSleep_Params
{
public:
	class UPalAIActionBaseCampSleep*             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBase*                      CallFunc_SetBaseCampActionByClass_ReturnValue;     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIActionBaseCamp_Sleep_C*          K2Node_DynamicCast_AsBP_AIAction_Base_Camp_Sleep;  // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.TerminateBaseCampActionByClass_Internal
struct ABP_MonsterAIController_BaseCamp_C_TerminateBaseCampActionByClass_Internal_Params
{
public:
	class UClass*                                ActionClass;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                 K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_Internal
struct ABP_MonsterAIController_BaseCamp_C_SetAction_Internal_Params
{
public:
	class UPalAIActionComponent*                 AIActionComponent;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBaseCampBase*              NewAction;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EAIRequestPriority                CallFunc_GetRequestPriority_ReturnValue;           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_SpawningForWorker
struct ABP_MonsterAIController_BaseCamp_C_SetAction_SpawningForWorker_Params
{
public:
	class UBP_AIAction_BaseCampSpawningForWorker_C* CallFunc_SpawnObject_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                 K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x13C (0x13C - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.FindFixedAssignableObject
struct ABP_MonsterAIController_BaseCamp_C_FindFixedAssignableObject_Params
{
public:
	struct FGuid                                 WorkId;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Range;                                             // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFound;                                            // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CCA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IPalBaseCampAssignableObjectInterface> FoundObject;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*         IndividualHandle;                                  // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBaseCampModel*                     BaseCamp;                                          // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*       CallFunc_GetComponentByClass_ReturnValue;          // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*       CallFunc_GetComponentByClass_ReturnValue_1;        // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetRadius_ReturnValue;                    // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CCB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_2;                 // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CCC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x80(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IPalBaseCampAssignableObjectInterface> CallFunc_FindNearestAssignableObject_FoundObject;  // 0xE0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_FindNearestAssignableObject_ReturnValue;  // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CCD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 CallFunc_GetBaseCampId_Base_Camp_Id;               // 0xF4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CCE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalWorkBase*                          CallFunc_FindWorkAssignableObject_FoundObject;     // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindWorkAssignableObject_ReturnValue;     // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CCF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalBaseCampManager*                   CallFunc_GetBaseCampManager_ReturnValue;           // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBaseCampModel*                     CallFunc_TryGetModel_OutModel;                     // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryGetModel_ReturnValue;                  // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CD0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FindNearestAssignableObject_Range_ImplicitCast; // 0x138(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.FailedFixedAssign
struct ABP_MonsterAIController_BaseCamp_C_FailedFixedAssign_Params
{
public:
	class UPalCharacterParameterComponent*       CharacterParameter;                                // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalNetworkTransmitter*                CallFunc_GetNetworkTransmitter_ReturnValue;        // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CD2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalNetworkBaseCampComponent*          CallFunc_GetBaseCamp_ReturnValue;                  // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*       CallFunc_GetComponentByClass_ReturnValue;          // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionCompositeBase*             CallFunc_SetAction_BaseCamp_Worker_ReturnValue;    // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CD3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalAIActionCompositeWorker*           K2Node_DynamicCast_AsPal_AIAction_Composite_Worker; // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CD4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalInstanceID                        CallFunc_GetIndividualID_ReturnValue;              // 0x50(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CD5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalMonsterControllerBaseCampLogContent K2Node_MakeStruct_PalMonsterControllerBaseCampLogContent; // 0x88(0x48)(None)
};

// 0x50 (0x50 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetCompositeActionBaseCamp
struct ABP_MonsterAIController_BaseCamp_C_SetCompositeActionBaseCamp_Params
{
public:
	class UClass*                                CompositeActionClass;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionCompositeBase*             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                 AIActionComp;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPalAIActionComponent*                 CallFunc_GetAIActionComponent_ReturnValue;         // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_AIActionComposite_BaseCamp_C*      CallFunc_SpawnObject_ReturnValue;                  // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionCompositeBase*             CallFunc_GetCompositeRoot_ReturnValue;             // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CD7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalAIActionCompositeBase*             CallFunc_GetCompositeRoot_ReturnValue_1;           // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionCompositeBase*             CallFunc_SpawnObject_ReturnValue_1;                // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.GetBaseCampId
struct ABP_MonsterAIController_BaseCamp_C_GetBaseCampId_Params
{
public:
	struct FGuid                                 Base_Camp_Id;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*       CallFunc_GetComponentByClass_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_GetBaseCampId_ReturnValue;                // 0x20(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_WorkerEvent
struct ABP_MonsterAIController_BaseCamp_C_SetAction_WorkerEvent_Params
{
public:
	class UPalAIActionBase*                      Action;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EAIRequestPriority                Priority;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CD8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalAIActionComponent*                 CallFunc_GetAIActionComponent_ReturnValue;         // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_Sleep
struct ABP_MonsterAIController_BaseCamp_C_SetAction_Sleep_Params
{
public:
	class UBP_AIActionBaseCamp_Sleep_C*          CallFunc_SpawnObject_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                 K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_SleepActively
struct ABP_MonsterAIController_BaseCamp_C_SetAction_SleepActively_Params
{
public:
	struct FPalAIActionBaseCampSleepActivelyParameter Parameter;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	uint8                                        Pad_1CD9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_AIActionBaseCamp_SleepActively_C*  CallFunc_SpawnObject_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                 K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_RecoverHungry
struct ABP_MonsterAIController_BaseCamp_C_SetAction_RecoverHungry_Params
{
public:
	struct FPalMonsterControllerBaseCampHungryParameter Parameter;                                         // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                        Pad_1CDB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalAIActionBaseCampBase*              Action;                                            // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBaseCampBase*              CallFunc_SetAction_BaseCamp_Action;                // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalMonsterControllerBaseCampHungryParameter CallFunc_SetHungryParameterToDefault_ReturnValue;  // 0x20(0xC)(NoDestructor)
	uint8                                        Pad_1CDC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalAIActionBaseCampRecoverHungry*     K2Node_DynamicCast_AsPal_AIAction_Base_Camp_Recover_Hungry; // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.NotifyOrderCommandToCurrentRootAction
struct ABP_MonsterAIController_BaseCamp_C_NotifyOrderCommandToCurrentRootAction_Params
{
public:
	enum class EPalMapBaseCampWorkerOrderType    OrderType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CDE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                 K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CE0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalCharacterParameterComponent*       CallFunc_GetComponentByClass_ReturnValue;          // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionCompositeBase*             CallFunc_GetCompositeRoot_ReturnValue;             // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionCompositeBaseCamp*         K2Node_DynamicCast_AsPal_AIAction_Composite_Base_Camp; // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_BaseCamp_FighterGunner
struct ABP_MonsterAIController_BaseCamp_C_SetAction_BaseCamp_FighterGunner_Params
{
public:
	class UPalAIActionBaseCampBase*              Action;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBaseCampBase*              CallFunc_SetAction_BaseCamp_Action;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_BaseCamp_Fighter
struct ABP_MonsterAIController_BaseCamp_C_SetAction_BaseCamp_Fighter_Params
{
public:
	class UPalAIActionBaseCampBase*              Action;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBaseCampBase*              CallFunc_SetAction_BaseCamp_Action;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_BaseCamp_Fighter_ByDefenseType
struct ABP_MonsterAIController_BaseCamp_C_SetAction_BaseCamp_Fighter_ByDefenseType_Params
{
public:
	enum class EPalMapObjectDefenseType          DefenseType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CE1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalAIActionBaseCampFighter*           FighterAction;                                     // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPalAIActionBaseCampBase*              Action;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBaseCampFighter*           K2Node_DynamicCast_AsPal_AIAction_Base_Camp_Fighter; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CE2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalAIActionBaseCampBase*              CallFunc_SetAction_BaseCamp_FighterGunner_Action;  // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBaseCampBase*              CallFunc_SetAction_BaseCamp_Fighter_Action;        // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_BaseCamp_Worker
struct ABP_MonsterAIController_BaseCamp_C_SetAction_BaseCamp_Worker_Params
{
public:
	class UPalAIActionCompositeBase*             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionCompositeWorker*           CompositeAction;                                   // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionCompositeBase*             CallFunc_SetCompositeActionBaseCamp_ReturnValue;   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xB9 (0xB9 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_WithFixAssignRange
struct ABP_MonsterAIController_BaseCamp_C_SetAction_WithFixAssignRange_Params
{
public:
	struct FGuid                                 TargetWorkProgressId;                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Range;                                             // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IPalBaseCampAssignableObjectInterface> FoundAssignableObject;                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPalIndividualCharacterSlot*           NewLocalVar_0;                                     // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBaseCampModel*                     BaseCamp;                                          // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionCompositeBase*             CallFunc_SetAction_BaseCamp_Worker_ReturnValue;    // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindFixedAssignableObject_bFound;         // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CE3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IPalBaseCampAssignableObjectInterface> CallFunc_FindFixedAssignableObject_FoundObject;    // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionCompositeWorker*           K2Node_DynamicCast_AsPal_AIAction_Composite_Worker; // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CE4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IPalMapObjectModelInterface> CallFunc_ToMapObjectModel_ReturnValue;             // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPalWorkBase*                          K2Node_DynamicCast_AsPal_Work_Base;                // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CE5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 CallFunc_GetModelId_ReturnValue;                   // 0x84(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_GetWorkId_ReturnValue;                    // 0x94(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalBaseCampAssignType            CallFunc_GetAssignType_ReturnValue;                // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CE6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalAIActionCompositeBase*             CallFunc_SetAction_BaseCamp_Worker_ReturnValue_1;  // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionCompositeWorker*           K2Node_DynamicCast_AsPal_AIAction_Composite_Worker_1; // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_BaseCamp
struct ABP_MonsterAIController_BaseCamp_C_SetAction_BaseCamp_Params
{
public:
	class UClass*                                AIActionClass;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EAIRequestPriority                Priority;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CE7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalAIActionBaseCampBase*              Action;                                            // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                 CallFunc_GetAIActionComponent_ReturnValue;         // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBaseCampBase*              CallFunc_SpawnObject_ReturnValue;                  // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x100 (0x100 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_DefaultPos
struct ABP_MonsterAIController_BaseCamp_C_SetAction_DefaultPos_Params
{
public:
	class UPalAIActionComponent*                 ActionComp;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPalBaseCampManager*                   CallFunc_GetBaseCampManager_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_GetBaseCampId_Base_Camp_Id;               // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalBaseCampModel*                     CallFunc_TryGetModel_OutModel;                     // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryGetModel_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CE8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_AIAction_ReturnToDefaultPosition_C* CallFunc_SpawnObject_ReturnValue;                  // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetRange_ReturnValue;                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CE9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x40(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0xA0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0xB8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0xD0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                 K2Node_DynamicCast_AsPal_AIAction_Component;       // 0xE8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CEA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Setup_MoveEndDistance_ImplicitCast;       // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_Liftup
struct ABP_MonsterAIController_BaseCamp_C_SetAction_Liftup_Params
{
public:
	class UPalAIActionLiftup*                    CallFunc_SpawnObject_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                 K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_PushAction_ReturnValue;                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetAction_CapturedStorage
struct ABP_MonsterAIController_BaseCamp_C_SetAction_CapturedStorage_Params
{
public:
	class UBP_AIAction_WanderingCage_C*          CallFunc_SpawnObject_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionComponent*                 K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetBaseCampActionWithFixAssign
struct ABP_MonsterAIController_BaseCamp_C_SetBaseCampActionWithFixAssign_Params
{
public:
	struct FGuid                                 TargetWorkProgressId;                              // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DistanceFixAssignTargetting;                       // 0x10(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.NotifyOrderCommand
struct ABP_MonsterAIController_BaseCamp_C_NotifyOrderCommand_Params
{
public:
	enum class EPalMapBaseCampWorkerOrderType    OrderType;                                         // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.ReceivePossess
struct ABP_MonsterAIController_BaseCamp_C_ReceivePossess_Params
{
public:
	class APawn*                                 PossessedPawn;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.OnDeadDelegate_§ŸÛ»_0
struct ABP_MonsterAIController_BaseCamp_C_OnDeadDelegate______0_Params
{
public:
	struct FPalDeadInfo                          DeadInfo;                                          // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.InterruptRecoverHungryAction
struct ABP_MonsterAIController_BaseCamp_C_InterruptRecoverHungryAction_Params
{
public:
	struct FPalMonsterControllerBaseCampHungryParameter Parameter;                                         // 0x0(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.SetBaseCampActionSleepMedicalBed
struct ABP_MonsterAIController_BaseCamp_C_SetBaseCampActionSleepMedicalBed_Params
{
public:
	struct FGuid                                 TargetBedConcreteModelId;                          // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.InterruptPlayWorkerEventAction
struct ABP_MonsterAIController_BaseCamp_C_InterruptPlayWorkerEventAction_Params
{
public:
	class UPalAIActionBase*                      Action;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EAIRequestPriority                Priority;                                          // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.ShowBaseCampLog
struct ABP_MonsterAIController_BaseCamp_C_ShowBaseCampLog_Params
{
public:
	struct FPalMonsterControllerBaseCampLogContent Content;                                           // 0x0(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x4 (0x4 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.InterruptSleepActivelyAction
struct ABP_MonsterAIController_BaseCamp_C_InterruptSleepActivelyAction_Params
{
public:
	struct FPalAIActionBaseCampSleepActivelyParameter Parameter;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.TerminateBaseCampActionByClass
struct ABP_MonsterAIController_BaseCamp_C_TerminateBaseCampActionByClass_Params
{
public:
	TSubclassOf<class UPalAIActionBase>          ActionClass;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x3A0 (0x3A0 - 0x0)
// Function BP_MonsterAIController_BaseCamp.BP_MonsterAIController_BaseCamp_C.ExecuteUbergraph_BP_MonsterAIController_BaseCamp
struct ABP_MonsterAIController_BaseCamp_C_ExecuteUbergraph_BP_MonsterAIController_BaseCamp_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CF3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UPalAIActionBase>          K2Node_Event_ActionClass;                          // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x10(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x68(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x88(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CF4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x178(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CF5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0x194(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CF6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x1A0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x1B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x1D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x1E8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x200(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x208(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x210(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x22C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CF7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x238(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x250(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 K2Node_Event_TargetWorkProgressId;                 // 0x268(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DistanceFixAssignTargetting;          // 0x278(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CF8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalAIActionCompositeBase*             CallFunc_SetAction_BaseCamp_Worker_ReturnValue;    // 0x280(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBaseCampBase*              CallFunc_SetAction_BaseCamp_Fighter_Action;        // 0x288(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalMapBaseCampWorkerOrderType    K2Node_Event_OrderType;                            // 0x290(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CF9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 K2Node_Event_PossessedPawn;                        // 0x298(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBaseCampBase*              CallFunc_SetAction_BaseCamp_FighterGunner_Action;  // 0x2A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_2;                 // 0x2A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDeadInfo                          K2Node_CustomEvent_DeadInfo;                       // 0x2B0(0x50)(NoDestructor)
	class UPalDamageReactionComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x300(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*       CallFunc_GetComponentByClass_ReturnValue_1;        // 0x308(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FPalMonsterControllerBaseCampHungryParameter K2Node_Event_parameter_1;                          // 0x310(0xC)(ConstParm, NoDestructor)
	uint8                                        Pad_1CFA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalAIActionBaseCampBase*              CallFunc_SetAction_RecoverHungry_Action;           // 0x320(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 K2Node_Event_TargetBedConcreteModelId;             // 0x328(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalAIActionBase*                      K2Node_Event_Action;                               // 0x338(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EAIRequestPriority                K2Node_Event_Priority;                             // 0x340(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CFB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalMonsterControllerBaseCampLogContent K2Node_Event_Content;                              // 0x348(0x48)(ConstParm)
	struct FPalAIActionBaseCampSleepActivelyParameter K2Node_Event_parameter;                            // 0x390(0x4)(ConstParm, NoDestructor)
	uint8                                        Pad_1CFC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SetAction_WithFixAssignRange_Range_ImplicitCast; // 0x398(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


