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

// 0x12 (0x12 - 0x0)
// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.SetDungeonBossSpawned
struct UWBP_DungeonInfo_FixedDungeon_C_SetDungeonBossSpawned_Params
{
public:
	class UPalDungeonInstanceModel*              DungeonInstanceModel;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDungeonInstanceModel*              pDungeonInstanceModel;                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalDungeonInstanceBossState      CallFunc_GetBossState_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.UpdateBossRespawnRemainTime
struct UWBP_DungeonInfo_FixedDungeon_C_UpdateBossRespawnRemainTime_Params
{
public:
	float                                        RemainSeconds;                                     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetOwningLocalPlayer_ReturnValue;         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D76[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_CalcRemainSecondsBy_ReturnValue;          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D77[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FTrunc_A_ImplicitCast;                    // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.SetBossRespawnTimeAt
struct UWBP_DungeonInfo_FixedDungeon_C_SetBossRespawnTimeAt_Params
{
public:
	class UPalDungeonInstanceModel*              DungeonInstanceModel;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDungeonInstanceModelFixedDungeon*  K2Node_DynamicCast_AsPal_Dungeon_Instance_Model_Fixed_Dungeon; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D78[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameDateTime                         CallFunc_GetRespawnBossTimeAt_ReturnValue;         // 0x18(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.Set Dungeon Level
struct UWBP_DungeonInfo_FixedDungeon_C_Set_Dungeon_Level_Params
{
public:
	class UPalDungeonInstanceModel*              DungeonInstanceModel;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDungeonInstanceModel*              pDungeonInstanceModel;                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetLevel_ReturnValue;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D79[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x18(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.SetDungeonName
struct UWBP_DungeonInfo_FixedDungeon_C_SetDungeonName_Params
{
public:
	class UPalDungeonInstanceModel*              DungeonInstanceModel;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDungeonInstanceModel*              pDungeonInstanceModel;                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDungeonNameText_ReturnValue;           // 0x10(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.Update Display Info
struct UWBP_DungeonInfo_FixedDungeon_C_Update_Display_Info_Params
{
public:
	class UPalDungeonInstanceModel*              DungeonInstanceModel;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.SetupEvents
struct UWBP_DungeonInfo_FixedDungeon_C_SetupEvents_Params
{
public:
	class UPalStageModelDungeon*                 StageModel;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDungeonInstanceModel*              InstanceModel;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDungeonInstanceModel*              CallFunc_GetInstanceModel_ReturnValue;             // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.Setup By Stage Model
struct UWBP_DungeonInfo_FixedDungeon_C_Setup_By_Stage_Model_Params
{
public:
	class UPalStageModelDungeon*                 InStageModel;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDungeonInstanceModel*              InstanceModel;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDungeonInstanceModel*              CallFunc_GetInstanceModel_ReturnValue;             // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.Tick
struct UWBP_DungeonInfo_FixedDungeon_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C (0x4C - 0x0)
// Function WBP_DungeonInfo_FixedDungeon.WBP_DungeonInfo_FixedDungeon_C.ExecuteUbergraph_WBP_DungeonInfo_FixedDungeon
struct UWBP_DungeonInfo_FixedDungeon_C_ExecuteUbergraph_WBP_DungeonInfo_FixedDungeon_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D7B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x8(0x40)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


