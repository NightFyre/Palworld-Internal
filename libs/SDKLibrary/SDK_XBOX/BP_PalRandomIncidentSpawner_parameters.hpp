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

// 0x89 (0x89 - 0x0)
// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.CreateDebugShape
struct ABP_PalRandomIncidentSpawner_C_CreateDebugShape_Params
{
public:
	double                                       Delta;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalDebugSetting*                      CallFunc_GetPalDebugSetting_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetAreaRadius_ReturnValue;                // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DD4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalDebugSetting*                      CallFunc_GetPalDebugSetting_ReturnValue_1;         // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetAreaRadius_ReturnValue_1;              // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DD6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalDebugSetting*                      CallFunc_GetPalDebugSetting_ReturnValue_2;         // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetAreaRadius_ReturnValue_2;              // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DD7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalDebugSetting*                      CallFunc_GetPalDebugSetting_ReturnValue_3;         // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.AddWalkPath
struct ABP_PalRandomIncidentSpawner_C_AddWalkPath_Params
{
public:
	class FName                                  PathName;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        PointList;                                         // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FF_NPC_PathWalkArray                  CallFunc_Create_Walk_Path_PathArray;               // 0x18(0x10)(HasGetValueTypeHash)
};

// 0xF0 (0xF0 - 0x0)
// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.Create Walk Path
struct ABP_PalRandomIncidentSpawner_C_Create_Walk_Path_Params
{
public:
	TArray<class AActor*>                        PointArray;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FF_NPC_PathWalkArray                  PathArray;                                         // 0x10(0x10)(Parm, OutParm, HasGetValueTypeHash)
	TArray<struct FF_NPC_PathWalkPoint>          TempWalkArray;                                     // 0x20(0x10)(Edit, BlueprintVisible)
	class ABP_NPC_WalkPathPoint_1_C*             TmpWalkPoint;                                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DEA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_NPC_WalkPathPoint_1_C*             K2Node_DynamicCast_AsBP_NPC_Walk_Path_Point_1;     // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DF5[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FF_NPC_PathWalkArray                  K2Node_MakeStruct_F_NPC_PathWalkArray;             // 0x60(0x10)(HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x70(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x88(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DF8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FF_NPC_PathWalkPoint                  K2Node_MakeStruct_F_NPC_PathWalkPoint;             // 0xB0(0x30)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DF9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_MakeStruct_Yaw_13_9634CB3043B1505237E811853806822B_ImplicitCast; // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8C (0x8C - 0x0)
// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.Collect Walk Path Point
struct ABP_PalRandomIncidentSpawner_C_Collect_Walk_Path_Point_Params
{
public:
	class USceneComponent*                       SceneRoot;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        Actors;                                            // 0x8(0x10)(Parm, OutParm)
	class AActor*                                TmpActor;                                          // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        CheckedActors;                                     // 0x20(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class AActor*>                        ActorList;                                         // 0x30(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children;           // 0x40(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_Array_Get_Item;                           // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E08[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E0A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_NPC_WalkPathPoint_1_C*             K2Node_DynamicCast_AsBP_NPC_Walk_Path_Point_1;     // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E0B[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x25 (0x25 - 0x0)
// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.EditorSetup_WalkPointRef
struct ABP_PalRandomIncidentSpawner_C_EditorSetup_WalkPointRef_Params
{
public:
	TArray<class AActor*>                        TempActorList;                                     // 0x0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class AActor*>                        CallFunc_Collect_Walk_Path_Point_Actors;           // 0x10(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.ReleaseIncident
struct ABP_PalRandomIncidentSpawner_C_ReleaseIncident_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.SetupIncident
struct ABP_PalRandomIncidentSpawner_C_SetupIncident_Params
{
public:
	class UPalIncidentBase*                      Incident;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIncidentDynamicParameterRandom*    Parameter;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalIncidentNotifyListener_C*       CallFunc_SpawnObject_ReturnValue;                  // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.OnIncidentSpawned
struct ABP_PalRandomIncidentSpawner_C_OnIncidentSpawned_Params
{
public:
	class UPalIncidentBase*                      Incident;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIncidentDynamicParameterRandom*    DynamicParameter;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.OnIncidentNotify
struct ABP_PalRandomIncidentSpawner_C_OnIncidentNotify_Params
{
public:
	class UPalIncidentNotifyListener*            Listener;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalIncidentState                 IncidentState;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E17[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalIncidentNotifyParameter           Parameter;                                         // 0x10(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.ReceiveTick
struct ABP_PalRandomIncidentSpawner_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BP_PalRandomIncidentSpawner.BP_PalRandomIncidentSpawner_C.ExecuteUbergraph_BP_PalRandomIncidentSpawner
struct ABP_PalRandomIncidentSpawner_C_ExecuteUbergraph_BP_PalRandomIncidentSpawner_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E70[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalIncidentBase*                      K2Node_Event_Incident;                             // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIncidentDynamicParameterRandom*    K2Node_Event_DynamicParameter;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIncidentNotifyListener*            K2Node_CustomEvent_Listener;                       // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalIncidentState                 K2Node_CustomEvent_IncidentState;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E71[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalIncidentNotifyParameter           K2Node_CustomEvent_Parameter;                      // 0x28(0x28)(ConstParm, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E72[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DeltaSeconds;                         // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_CreateDebugShape_Delta_ImplicitCast;      // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


