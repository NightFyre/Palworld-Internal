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
// Function WBP_DungeonInfo.WBP_DungeonInfo_C.SetDungeonBossSpawned
struct UWBP_DungeonInfo_C_SetDungeonBossSpawned_Params
{
public:
	class UPalDungeonInstanceModel*              DungeonInstanceModel;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDungeonInstanceModel*              DungeonInstanceModel;                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalDungeonInstanceBossState      CallFunc_GetBossState_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function WBP_DungeonInfo.WBP_DungeonInfo_C.UpdateDungeonDisappearRemainTime
struct UWBP_DungeonInfo_C_UpdateDungeonDisappearRemainTime_Params
{
public:
	class ULocalPlayer*                          CallFunc_GetOwningLocalPlayer_ReturnValue;         // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_CalcRemainSecondsBy_ReturnValue;          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D73[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_PalTimeSecondsToString_ReturnValue;       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D74[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(None)
	class FText                                  CallFunc_SelectText_ReturnValue;                   // 0x40(0x18)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_DungeonInfo.WBP_DungeonInfo_C.SetDungeonDisappearTimeAt
struct UWBP_DungeonInfo_C_SetDungeonDisappearTimeAt_Params
{
public:
	class UPalDungeonInstanceModel*              DungeonInstanceModel;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameDateTime                         CallFunc_GetDisappearTimeAt_ReturnValue;           // 0x8(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WBP_DungeonInfo.WBP_DungeonInfo_C.SetDungeonLevel
struct UWBP_DungeonInfo_C_SetDungeonLevel_Params
{
public:
	class UPalDungeonInstanceModel*              DungeonInstanceModel;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDungeonInstanceModel*              DungeonInstanceModel;                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetLevel_ReturnValue;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D75[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x18(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function WBP_DungeonInfo.WBP_DungeonInfo_C.SetDungeonName
struct UWBP_DungeonInfo_C_SetDungeonName_Params
{
public:
	class UPalDungeonInstanceModel*              DungeonInstanceModel;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDungeonInstanceModel*              DungeonInstanceModel;                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDungeonNameText_ReturnValue;           // 0x10(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function WBP_DungeonInfo.WBP_DungeonInfo_C.UpdateDisplayInfo
struct UWBP_DungeonInfo_C_UpdateDisplayInfo_Params
{
public:
	class UPalDungeonInstanceModel*              DungeonInstanceModel;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_DungeonInfo.WBP_DungeonInfo_C.SetupEvents
struct UWBP_DungeonInfo_C_SetupEvents_Params
{
public:
	class UPalStageModelDungeon*                 StageModel;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDungeonInstanceModel*              InstanceModel;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDungeonInstanceModel*              CallFunc_GetInstanceModel_ReturnValue;             // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_DungeonInfo.WBP_DungeonInfo_C.Setup By Stage Model
struct UWBP_DungeonInfo_C_Setup_By_Stage_Model_Params
{
public:
	class UPalStageModelDungeon*                 InStageModel;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDungeonInstanceModel*              InstanceModel;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDungeonInstanceModel*              CallFunc_GetInstanceModel_ReturnValue;             // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function WBP_DungeonInfo.WBP_DungeonInfo_C.Tick
struct UWBP_DungeonInfo_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C (0x4C - 0x0)
// Function WBP_DungeonInfo.WBP_DungeonInfo_C.ExecuteUbergraph_WBP_DungeonInfo
struct UWBP_DungeonInfo_C_ExecuteUbergraph_WBP_DungeonInfo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D7A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x8(0x40)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


