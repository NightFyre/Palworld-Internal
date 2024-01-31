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

// 0x140 (0x140 - 0x0)
// Function BP_NPCSpawnPointOnly.BP_NPCSpawnPointOnly_C.GetOneSpawnInfo
struct ABP_NPCSpawnPointOnly_C_GetOneSpawnInfo_Params
{
public:
	struct FF_NPCOnePointSpawnInfo               Info;                                              // 0x0(0x98)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_32EC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FF_NPCOnePointSpawnInfo               CallFunc_Get_Spawn_One_Info_OneInfo;               // 0xA0(0x98)(HasGetValueTypeHash)
	uint8                                        Pad_32ED[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2E8 (0x2E8 - 0x0)
// Function BP_NPCSpawnPointOnly.BP_NPCSpawnPointOnly_C.Get Spawn One Info
struct ABP_NPCSpawnPointOnly_C_Get_Spawn_One_Info_Params
{
public:
	struct FF_NPCOnePointSpawnInfo               OneInfo;                                           // 0x0(0x98)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_32F7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FF_NPC_PathWalkPoint>          TempArray;                                         // 0xA0(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        K2Node_MakeArray_Array;                            // 0xB8(0x10)(ReferenceParm)
	class AActor*                                CallFunc_Array_Get_Item;                           // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FF_NPC_PathWalkPoint>          K2Node_MakeArray_Array_1;                          // 0xE0(0x10)(ReferenceParm)
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0xF0(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FF_NPC_PathWalkArray                  K2Node_MakeStruct_F_NPC_PathWalkArray;             // 0x150(0x10)(HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x164(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32F9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32FA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children;           // 0x170(0x10)(ReferenceParm, ContainsInstancedReference)
	class UClass*                                K2Node_ClassDynamicCast_AsBP_AIAction_NPC_Relax_Path_Walk; // 0x180(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       CallFunc_Array_Get_Item_1;                         // 0x190(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3300[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x1A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3301[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_NPC_WalkPathPoint_1_C*             K2Node_DynamicCast_AsBP_NPC_Walk_Path_Point_1;     // 0x1B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3302[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x1C0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x1D8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3303[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FF_NPC_PathWalkPoint                  K2Node_MakeStruct_F_NPC_PathWalkPoint;             // 0x200(0x30)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3304[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FF_NPCOnePointSpawnInfo               K2Node_MakeStruct_F_NPCOnePointSpawnInfo;          // 0x240(0x98)(HasGetValueTypeHash)
	uint8                                        Pad_3305[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_MakeStruct_Yaw_13_9634CB3043B1505237E811853806822B_ImplicitCast; // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


