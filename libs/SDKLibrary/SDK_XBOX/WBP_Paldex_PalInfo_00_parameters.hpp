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
// Function WBP_Paldex_PalInfo_00.WBP_Paldex_PalInfo_00_C.HideDropItems
struct UWBP_Paldex_PalInfo_00_C_HideDropItems_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Paldex_DropItem_C*                CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B0 (0x1B0 - 0x0)
// Function WBP_Paldex_PalInfo_00.WBP_Paldex_PalInfo_00_C.Setup_Captured
struct UWBP_Paldex_PalInfo_00_C_Setup_Captured_Params
{
public:
	struct FPalUIPaldex_DisplayInfo              DisplayInfo;                                       // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetPalFirstActivatedInfo_outName;         // 0x40(0x18)(None)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Paldex_DropItem_C*                CallFunc_Array_Get_Item;                           // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalDatabaseCharacterParameter*        CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalTribeID                       CallFunc_GetTribe_ReturnValue;                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalPlayerRecordData*                  CallFunc_GetLocalRecordData_ReturnValue;           // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetRecordData_TribeIdCount_ReturnValue;   // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x90(0x18)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*        CallFunc_GetDatabaseCharacterParameter_ReturnValue_1; // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Paldex_DropItem_C*                CallFunc_Array_Get_Item_1;                         // 0xC0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetFoodAmount_ReturnValue;                // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalDropItemDatabaseRow               CallFunc_GetDropItemData_outData;                  // 0xD0(0x78)(None)
	bool                                         CallFunc_GetDropItemData_ReturnValue;              // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          K2Node_MakeArray_Array;                            // 0x150(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item_2;                         // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x16C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalDatabaseCharacterParameter*        CallFunc_GetDatabaseCharacterParameter_ReturnValue_2; // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetPartnerSkillMsgID_OutMsgID;            // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLocalizedText_ReturnValue;             // 0x190(0x18)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function WBP_Paldex_PalInfo_00.WBP_Paldex_PalInfo_00_C.Setup_Encounted
struct UWBP_Paldex_PalInfo_00_C_Setup_Encounted_Params
{
public:
	struct FPalUIPaldex_DisplayInfo              DisplayInfo;                                       // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x38 (0x38 - 0x0)
// Function WBP_Paldex_PalInfo_00.WBP_Paldex_PalInfo_00_C.Setup_NotEncounted
struct UWBP_Paldex_PalInfo_00_C_Setup_NotEncounted_Params
{
public:
	struct FPalUIPaldex_DisplayInfo              DisplayInfo;                                       // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB4 (0xB4 - 0x0)
// Function WBP_Paldex_PalInfo_00.WBP_Paldex_PalInfo_00_C.Setup
struct UWBP_Paldex_PalInfo_00_C_Setup_Params
{
public:
	struct FPalUIPaldex_DisplayInfo              DisplayInfo;                                       // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UPalDatabaseCharacterParameter*        CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalDatabaseCharacterParameter*        CallFunc_GetDatabaseCharacterParameter_ReturnValue_1; // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalTribeID                       CallFunc_GetTribe_ReturnValue;                     // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EPalWorkSuitability, int32>  CallFunc_GetWorkSuitabilityRank_WorkSuitabilities; // 0x50(0x50)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalPlayerRecordData*                  CallFunc_GetLocalRecordData_ReturnValue;           // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetRecordData_TribeIdCount_ReturnValue;   // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_Paldex_PalInfo_00.WBP_Paldex_PalInfo_00_C.ExecuteUbergraph_WBP_Paldex_PalInfo_00
struct UWBP_Paldex_PalInfo_00_C_ExecuteUbergraph_WBP_Paldex_PalInfo_00_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53CB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWBP_Paldex_DropItem_C*>        K2Node_MakeArray_Array;                            // 0x8(0x10)(ReferenceParm, ContainsInstancedReference)
};

}
}


