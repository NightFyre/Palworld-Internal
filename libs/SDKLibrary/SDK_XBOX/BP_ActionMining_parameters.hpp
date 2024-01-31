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

// 0x10 (0x10 - 0x0)
// Function BP_ActionMining.BP_ActionMining_C.OnBeginAnimNotify
struct UBP_ActionMining_C_OnBeginAnimNotify_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  NotifyName;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x288 (0x288 - 0x0)
// Function BP_ActionMining.BP_ActionMining_C.ExecuteUbergraph_BP_ActionMining
struct UBP_ActionMining_C_ExecuteUbergraph_BP_ActionMining_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue;           // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                       CallFunc_GetGameSetting_ReturnValue;               // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_DecreaseFullStomachRate_Work_ReturnValue; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4524[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x40(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_1;         // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_2;         // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*             CallFunc_GetMainMesh_ReturnValue;                  // 0xB8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_MiningPickel_C*                    CallFunc_FinishSpawningActor_ReturnValue;          // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4525[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_3;         // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0xD8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_4;         // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4526[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalShooterComponent*                  CallFunc_GetComponentByClass_ReturnValue_1;        // 0xF0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4527[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_5;         // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalSkeletalMeshComponent*             CallFunc_GetMainMesh_ReturnValue_1;                // 0x108(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          K2Node_CustomEvent_Montage;                        // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName;                     // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAnimInstance*                      K2Node_DynamicCast_AsPal_Anim_Instance;            // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4528[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_ActionNotify_MiningImpactTiming_ReturnValue; // 0x134(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x13C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4529[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_ActionNotify_MiningEndTiming_ReturnValue; // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_6;         // 0x148(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_452A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalSkeletalMeshComponent*             CallFunc_GetMainMesh_ReturnValue_2;                // 0x158(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_452B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue_1;            // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAnimInstance*                      K2Node_DynamicCast_AsPal_Anim_Instance_1;          // 0x170(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_452C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_7;         // 0x180(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x188(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_8;         // 0x190(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     K2Node_DynamicCast_AsPlayer_Controller;            // 0x198(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_452D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue_1;              // 0x1A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_9;         // 0x1B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     K2Node_DynamicCast_AsPlayer_Controller_1;          // 0x1B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_452E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalSkeletalMeshComponent*             CallFunc_GetMainMesh_ReturnValue_3;                // 0x1C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_1;              // 0x1D0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetAllSocketNames_ReturnValue;            // 0x230(0x10)(ReferenceParm)
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_10;        // 0x240(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x255(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x256(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_452F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_11;        // 0x258(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_12;        // 0x260(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPalMonster_ReturnValue;                 // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4530[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         CallFunc_GetActionCharacter_ReturnValue_13;        // 0x270(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x278(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_MiningPickel_C*                    CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x280(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


