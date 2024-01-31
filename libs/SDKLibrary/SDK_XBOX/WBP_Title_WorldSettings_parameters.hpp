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

// 0x28 (0x28 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.SetWorldName
struct UWBP_Title_WorldSettings_C_SetWorldName_Params
{
public:
	class FString                                NewWorldName;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x10(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.GetWorldName
struct UWBP_Title_WorldSettings_C_GetWorldName_Params
{
public:
	class FString                                WorldName;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetButtonText_Text;                       // 0x10(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.IsEditedSetting
struct UWBP_Title_WorldSettings_C_IsEditedSetting_Params
{
public:
	bool                                         IsEdited;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.MarkDirtyWorldSetting
struct UWBP_Title_WorldSettings_C_MarkDirtyWorldSetting_Params
{
public:
	int32                                        CallFunc_ConvertDifficultyToUIIndex_UIIndex;       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA1 (0xA1 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.ApplyDifficultyPreset
struct UWBP_Title_WorldSettings_C_ApplyDifficultyPreset_Params
{
public:
	enum class EPalOptionWorldDifficulty         DifficultyType;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_141D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TmpPresetRowName;                                  // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_141E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalOptionWorldPresetRow              CallFunc_GetDataTableRowFromName_OutRow;           // 0x10(0x90)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x128 (0x128 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.GetEditedWorldSetting
struct UWBP_Title_WorldSettings_C_GetEditedWorldSetting_Params
{
public:
	struct FPalOptionWorldSettings               WorldSetting;                                      // 0x0(0x128)(Parm, OutParm)
};

// 0x6 (0x6 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.ConvertUIIndexToDeathPenalty
struct UWBP_Title_WorldSettings_C_ConvertUIIndexToDeathPenalty_Params
{
public:
	int32                                        UIIndex;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalOptionWorldDeathPenalty       DeathPenaltyType;                                  // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.ConvertDeathPenaltyToUIIndex
struct UWBP_Title_WorldSettings_C_ConvertDeathPenaltyToUIIndex_Params
{
public:
	enum class EPalOptionWorldDeathPenalty       DeathPenaltyType;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1421[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UIIndex;                                           // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x100 (0x100 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.CreateDeathPenaltySettingStrings
struct UWBP_Title_WorldSettings_C_CreateDeathPenaltySettingStrings_Params
{
public:
	TArray<class FString>                        OutStrings;                                        // 0x0(0x10)(Parm, OutParm)
	struct FDataTableRowHandle                   FullPenaltyMsgID;                                  // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                   AllItemPenaltylMsgID;                              // 0x20(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                   ItemPenaltyMsgID;                                  // 0x30(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                   NoPanaltyMsgID;                                    // 0x40(0x10)(Edit, BlueprintVisible, NoDestructor)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x50(0x18)(None)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x68(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_2;        // 0xA0(0x18)(None)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_3;        // 0xB8(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0xF0(0x10)(ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.EndCustomDifficultySetting
struct UWBP_Title_WorldSettings_C_EndCustomDifficultySetting_Params
{
public:
	int32                                        CallFunc_GetSelectNameIndex_NowIndex;              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1423[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.IsEditingCustomDifficulty
struct UWBP_Title_WorldSettings_C_IsEditingCustomDifficulty_Params
{
public:
	bool                                         IsEditing;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.DisplayDifficultyDesc
struct UWBP_Title_WorldSettings_C_DisplayDifficultyDesc_Params
{
public:
	enum class EPalOptionWorldDifficulty         DifficultyTyper;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1424[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   TmpMsgID;                                          // 0x8(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                   CustomMsgID;                                       // 0x18(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                   VeryHardMsgID;                                     // 0x28(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                   HardMsgID;                                         // 0x38(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                   NormalMsgID;                                       // 0x48(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                   EasyMsgID;                                         // 0x58(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                   VeryEasyMsgID;                                     // 0x68(0x10)(Edit, BlueprintVisible, NoDestructor)
	class FText                                  TmpText;                                           // 0x78(0x18)(Edit, BlueprintVisible)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1425[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x98(0x18)(None)
};

// 0x6 (0x6 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.ConvertUIIndexToDifficulty
struct UWBP_Title_WorldSettings_C_ConvertUIIndexToDifficulty_Params
{
public:
	int32                                        UIIndex;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalOptionWorldDifficulty         DifficultyType;                                    // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.ConvertDifficultyToUIIndex
struct UWBP_Title_WorldSettings_C_ConvertDifficultyToUIIndex_Params
{
public:
	enum class EPalOptionWorldDifficulty         DifficultyType;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1426[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UIIndex;                                           // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x120 (0x120 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.CreateDifficultySettingStrings
struct UWBP_Title_WorldSettings_C_CreateDifficultySettingStrings_Params
{
public:
	TArray<class FString>                        OutStrings;                                        // 0x0(0x10)(Parm, OutParm)
	struct FDataTableRowHandle                   CustomMsgID;                                       // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                   VeryHardMsgID;                                     // 0x20(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                   HardMsgID;                                         // 0x30(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                   NormalMsgID;                                       // 0x40(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                   EasyMsgID;                                         // 0x50(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                   VeryEasyMsgID;                                     // 0x60(0x10)(Edit, BlueprintVisible, NoDestructor)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x70(0x18)(None)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x88(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_2;        // 0xC0(0x18)(None)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_3;        // 0xD8(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x110(0x10)(ReferenceParm)
};

// 0x2 (0x2 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.CancelTextEdit
struct UWBP_Title_WorldSettings_C_CancelTextEdit_Params
{
public:
	bool                                         CallFunc_IsEditingText_IsEditing;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEditingText_IsEditing_1;                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.IsTextEditing
struct UWBP_Title_WorldSettings_C_IsTextEditing_Params
{
public:
	bool                                         IsEditing;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEditingText_IsEditing;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEditingText_IsEditing_1;                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.GetFocusTarget
struct UWBP_Title_WorldSettings_C_GetFocusTarget_Params
{
public:
	class UWidget*                               TargetWidget;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsXB1_ReturnValue;                        // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x390 (0x390 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.ApplyWorldSettingToUI
struct UWBP_Title_WorldSettings_C_ApplyWorldSettingToUI_Params
{
public:
	struct FPalOptionWorldSettings               WorldSetting;                                      // 0x0(0x128)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1433[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_CreateDeathPenaltySettingStrings_OutStrings; // 0x130(0x10)(ReferenceParm)
	int32                                        CallFunc_ConvertDeathPenaltyToUIIndex_UIIndex;     // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1434[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_NowValue_ImplicitCast;    // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MinValue_ImplicitCast;    // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MaxValue_ImplicitCast;    // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FTrunc_A_ImplicitCast;                    // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_NowValue_ImplicitCast_1;  // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MinValue_ImplicitCast_1;  // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MaxValue_ImplicitCast_1;  // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_NowValue_ImplicitCast_2;  // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MinValue_ImplicitCast_2;  // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MaxValue_ImplicitCast_2;  // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_NowValue_ImplicitCast_3;  // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MinValue_ImplicitCast_3;  // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MaxValue_ImplicitCast_3;  // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_NowValue_ImplicitCast_4;  // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MinValue_ImplicitCast_4;  // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MaxValue_ImplicitCast_4;  // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_NowValue_ImplicitCast_5;  // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MinValue_ImplicitCast_5;  // 0x1E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MaxValue_ImplicitCast_5;  // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_NowValue_ImplicitCast_6;  // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MinValue_ImplicitCast_6;  // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MaxValue_ImplicitCast_6;  // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_NowValue_ImplicitCast_7;  // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MinValue_ImplicitCast_7;  // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MaxValue_ImplicitCast_7;  // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_NowValue_ImplicitCast_8;  // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MinValue_ImplicitCast_8;  // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MaxValue_ImplicitCast_8;  // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_NowValue_ImplicitCast_9;  // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MinValue_ImplicitCast_9;  // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MaxValue_ImplicitCast_9;  // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_NowValue_ImplicitCast_10; // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MinValue_ImplicitCast_10; // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MaxValue_ImplicitCast_10; // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_NowValue_ImplicitCast_11; // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MinValue_ImplicitCast_11; // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MaxValue_ImplicitCast_11; // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_NowValue_ImplicitCast_12; // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MinValue_ImplicitCast_12; // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MaxValue_ImplicitCast_12; // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_NowValue_ImplicitCast_13; // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MinValue_ImplicitCast_13; // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MaxValue_ImplicitCast_13; // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_NowValue_ImplicitCast_14; // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MinValue_ImplicitCast_14; // 0x2B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MaxValue_ImplicitCast_14; // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_NowValue_ImplicitCast_15; // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MinValue_ImplicitCast_15; // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MaxValue_ImplicitCast_15; // 0x2D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_NowValue_ImplicitCast_16; // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MinValue_ImplicitCast_16; // 0x2E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MaxValue_ImplicitCast_16; // 0x2F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_NowValue_ImplicitCast_17; // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MinValue_ImplicitCast_17; // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MaxValue_ImplicitCast_17; // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_NowValue_ImplicitCast_18; // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_NowValue_ImplicitCast_19; // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MinValue_ImplicitCast_18; // 0x320(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MaxValue_ImplicitCast_18; // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MinValue_ImplicitCast_19; // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MaxValue_ImplicitCast_19; // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_NowValue_ImplicitCast_20; // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MinValue_ImplicitCast_20; // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MaxValue_ImplicitCast_20; // 0x350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_NowValue_ImplicitCast_21; // 0x358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MinValue_ImplicitCast_21; // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MaxValue_ImplicitCast_21; // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_NowValue_ImplicitCast_22; // 0x370(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MinValue_ImplicitCast_22; // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_MaxValue_ImplicitCast_22; // 0x380(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetupFloatValue_NowValue_ImplicitCast_23; // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C4 (0x2C4 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.Setup
struct UWBP_Title_WorldSettings_C_Setup_Params
{
public:
	struct FPalOptionWorldSettings               WorldSetting;                                      // 0x0(0x128)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         IsNewWorld;                                        // 0x128(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanMulti;                                          // 0x129(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_143C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                WorldSaveDirectoryName;                            // 0x130(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                WorldName;                                         // 0x140(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x152(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x153(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_143D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_PalOptionSubsystem_C*              CallFunc_SpawnObject_ReturnValue;                  // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalOptionWorldDifficulty         Temp_byte_Variable_2;                              // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_143E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalOptionWorldStaticSettings         CallFunc_GetOptionWorldStaticSettings_ReturnValue; // 0x164(0xF0)(ConstParm, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x255(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x256(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMultiplayRestricted_ReturnValue;        // 0x257(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_6;                              // 0x259(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x25A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsXB1_ReturnValue;                        // 0x25B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x25C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x25D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x25E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_143F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalOptionWorldDifficulty         K2Node_Select_Default_2;                           // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1440[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_CreateDifficultySettingStrings_OutStrings; // 0x270(0x10)(ReferenceParm)
	int32                                        CallFunc_ConvertDifficultyToUIIndex_UIIndex;       // 0x280(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_3;                           // 0x284(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1441[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x288(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x298(0x18)(None)
	class FString                                CallFunc_SelectString_ReturnValue_1;               // 0x2B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_MultiSetting_K2Node_ComponentBoundEvent_0_OnSwitchChanged__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_MultiSetting_K2Node_ComponentBoundEvent_0_OnSwitchChanged__DelegateSignature_Params
{
public:
	bool                                         IsOn;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_PasswordOnOff_K2Node_ComponentBoundEvent_3_OnSwitchChanged__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_PasswordOnOff_K2Node_ComponentBoundEvent_3_OnSwitchChanged__DelegateSignature_Params
{
public:
	bool                                         IsOn;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_PasswordSetting_K2Node_ComponentBoundEvent_5_OnComittedText__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_PasswordSetting_K2Node_ComponentBoundEvent_5_OnComittedText__DelegateSignature_Params
{
public:
	class FString                                NewString;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_DifficultySetting_K2Node_ComponentBoundEvent_6_OnChangedSelectIndex__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WBP_Title_WorldSettings_ListContent_DifficultySetting_K2Node_ComponentBoundEvent_6_OnChangedSelectIndex__DelegateSignature_Params
{
public:
	int32                                        NewIndex;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_Difficulty_InnerSetting_K2Node_ComponentBoundEvent_8_OnChangedSelectIndex__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_Difficulty_InnerSetting_K2Node_ComponentBoundEvent_8_OnChangedSelectIndex__DelegateSignature_Params
{
public:
	int32                                        NewIndex;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_DayTimeSpeedRate_K2Node_ComponentBoundEvent_9_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_DayTimeSpeedRate_K2Node_ComponentBoundEvent_9_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_NightTimeSpeedRate_K2Node_ComponentBoundEvent_10_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_NightTimeSpeedRate_K2Node_ComponentBoundEvent_10_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_ExpRate_K2Node_ComponentBoundEvent_11_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_ExpRate_K2Node_ComponentBoundEvent_11_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PalCaptureRateAdd_K2Node_ComponentBoundEvent_12_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PalCaptureRateAdd_K2Node_ComponentBoundEvent_12_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PalSpawnNumRate_K2Node_ComponentBoundEvent_13_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PalSpawnNumRate_K2Node_ComponentBoundEvent_13_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PalDamageRateAttack_K2Node_ComponentBoundEvent_14_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PalDamageRateAttack_K2Node_ComponentBoundEvent_14_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PalDamageRateDefense_K2Node_ComponentBoundEvent_15_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PalDamageRateDefense_K2Node_ComponentBoundEvent_15_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PalStomachDecreaseRate_K2Node_ComponentBoundEvent_16_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PalStomachDecreaseRate_K2Node_ComponentBoundEvent_16_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PalStaminaDecreaseRate_K2Node_ComponentBoundEvent_17_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PalStaminaDecreaseRate_K2Node_ComponentBoundEvent_17_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PalAutoHPRegeneRate_K2Node_ComponentBoundEvent_18_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PalAutoHPRegeneRate_K2Node_ComponentBoundEvent_18_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PalAutoHpRegeneRateInSleep_K2Node_ComponentBoundEvent_19_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PalAutoHpRegeneRateInSleep_K2Node_ComponentBoundEvent_19_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerDamagerRateAttack_K2Node_ComponentBoundEvent_20_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerDamagerRateAttack_K2Node_ComponentBoundEvent_20_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerDamageRateDefense_K2Node_ComponentBoundEvent_21_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerDamageRateDefense_K2Node_ComponentBoundEvent_21_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerStomachDecreaseRate_K2Node_ComponentBoundEvent_22_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerStomachDecreaseRate_K2Node_ComponentBoundEvent_22_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerStaminaDecreaseRate_K2Node_ComponentBoundEvent_23_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerStaminaDecreaseRate_K2Node_ComponentBoundEvent_23_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerAutoHPRegeneRate_K2Node_ComponentBoundEvent_24_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerAutoHPRegeneRate_K2Node_ComponentBoundEvent_24_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerAutoHPRegeneRateInSleep_K2Node_ComponentBoundEvent_25_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_PlayerAutoHPRegeneRateInSleep_K2Node_ComponentBoundEvent_25_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_BuildObjectDamageRate_K2Node_ComponentBoundEvent_26_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_BuildObjectDamageRate_K2Node_ComponentBoundEvent_26_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_CollectionDropRate_K2Node_ComponentBoundEvent_27_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_CollectionDropRate_K2Node_ComponentBoundEvent_27_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_CollectionObjectHpRate_K2Node_ComponentBoundEvent_28_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_CollectionObjectHpRate_K2Node_ComponentBoundEvent_28_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_CollectionObjectRespawnSpeedRate_K2Node_ComponentBoundEvent_29_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_CollectionObjectRespawnSpeedRate_K2Node_ComponentBoundEvent_29_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_EnemyDropItemRate_K2Node_ComponentBoundEvent_30_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_EnemyDropItemRate_K2Node_ComponentBoundEvent_30_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_DeathPenalty_K2Node_ComponentBoundEvent_32_OnChangedSelectIndex__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_DeathPenalty_K2Node_ComponentBoundEvent_32_OnChangedSelectIndex__DelegateSignature_Params
{
public:
	int32                                        NewIndex;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_AutoResetGuildNoOnlinePlayers_K2Node_ComponentBoundEvent_33_OnSwitchChanged__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_AutoResetGuildNoOnlinePlayers_K2Node_ComponentBoundEvent_33_OnSwitchChanged__DelegateSignature_Params
{
public:
	bool                                         IsOn;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_AutoResetGuildTimeNoOnlinePlayers_K2Node_ComponentBoundEvent_34_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_AutoResetGuildTimeNoOnlinePlayers_K2Node_ComponentBoundEvent_34_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_AGuildPlayerMaxNum_K2Node_ComponentBoundEvent_35_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_AGuildPlayerMaxNum_K2Node_ComponentBoundEvent_35_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.TogglePanel
struct UWBP_Title_WorldSettings_C_TogglePanel_Params
{
public:
	bool                                         IsCustomPanel;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_EggHatchingTimeRate_K2Node_ComponentBoundEvent_4_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_EggHatchingTimeRate_K2Node_ComponentBoundEvent_4_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_BuildObjectDeteriorationRate_K2Node_ComponentBoundEvent_36_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_BuildObjectDeteriorationRate_K2Node_ComponentBoundEvent_36_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_EnablePoop_K2Node_ComponentBoundEvent_37_OnSwitchChanged__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_EnablePoop_K2Node_ComponentBoundEvent_37_OnSwitchChanged__DelegateSignature_Params
{
public:
	bool                                         IsOn;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_MaxPoopNum_K2Node_ComponentBoundEvent_38_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_MaxPoopNum_K2Node_ComponentBoundEvent_38_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_MaxDropItemNum_K2Node_ComponentBoundEvent_39_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_MaxDropItemNum_K2Node_ComponentBoundEvent_39_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_EnableRaid_K2Node_ComponentBoundEvent_40_OnSwitchChanged__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_EnableRaid_K2Node_ComponentBoundEvent_40_OnSwitchChanged__DelegateSignature_Params
{
public:
	bool                                         IsOn;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.BndEvt__WBP_Title_WorldSettings_WorldSettings_BaseCampWorkerNum_K2Node_ComponentBoundEvent_41_OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_C_BndEvt__WBP_Title_WorldSettings_WorldSettings_BaseCampWorkerNum_K2Node_ComponentBoundEvent_41_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D0 (0x1D0 - 0x0)
// Function WBP_Title_WorldSettings.WBP_Title_WorldSettings_C.ExecuteUbergraph_WBP_Title_WorldSettings
struct UWBP_Title_WorldSettings_C_ExecuteUbergraph_WBP_Title_WorldSettings_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_IsOn_4;                 // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsOn_IsOn;                                // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_IsOn_3;                 // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1482[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_NewString;              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsOn_IsOn_1;                              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1483[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Len_ReturnValue;                          // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1484[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_NewIndex_2;             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalOptionWorldDifficulty         CallFunc_ConvertUIIndexToDifficulty_DifficultyType; // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1485[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewIndex_1;             // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalOptionWorldDifficulty         CallFunc_ConvertUIIndexToDifficulty_DifficultyType_1; // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1486[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_ComponentBoundEvent_NewValue_28;            // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewValue_27;            // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewValue_26;            // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewValue_25;            // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewValue_24;            // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewValue_23;            // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewValue_22;            // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewValue_21;            // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewValue_20;            // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewValue_19;            // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewValue_18;            // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewValue_17;            // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewValue_16;            // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewValue_15;            // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewValue_14;            // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewValue_13;            // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewValue_12;            // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewValue_11;            // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewValue_10;            // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewValue_9;             // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewValue_8;             // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewValue_7;             // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_NewIndex;               // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalOptionWorldDeathPenalty       CallFunc_ConvertUIIndexToDeathPenalty_DeathPenaltyType; // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_IsOn_2;                 // 0xFD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1488[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_ComponentBoundEvent_NewValue_6;             // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewValue_5;             // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsCustomPanel;                  // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1489[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetSelectNameIndex_NowIndex;              // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x125(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x126(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x127(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewValue_4;             // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_NewValue_3;             // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_IsOn_1;                 // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x13A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_148A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_ComponentBoundEvent_NewValue_2;             // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_148B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_ComponentBoundEvent_NewValue_1;             // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue_1;                     // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_IsOn;                   // 0x15C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_148C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_ComponentBoundEvent_NewValue;               // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue_2;                     // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_DayTimeSpeedRate_ImplicitCast; // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_NightTimeSpeedRate_ImplicitCast; // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_ExpRate_ImplicitCast;     // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_PalCaptureRate_ImplicitCast; // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_PalSpawnNumRate_ImplicitCast; // 0x17C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_PalDamageRateAttack_ImplicitCast; // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_PalDamageRateDefense_ImplicitCast; // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_PalStomachDecreaceRate_ImplicitCast; // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_PalStaminaDecreaceRate_ImplicitCast; // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_PalAutoHPRegeneRate_ImplicitCast; // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_PalAutoHpRegeneRateInSleep_ImplicitCast; // 0x194(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_PlayerDamageRateAttack_ImplicitCast; // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_PlayerDamageRateDefense_ImplicitCast; // 0x19C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_PlayerStomachDecreaceRate_ImplicitCast; // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_PlayerStaminaDecreaceRate_ImplicitCast; // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_PlayerAutoHPRegeneRate_ImplicitCast; // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_PlayerAutoHpRegeneRateInSleep_ImplicitCast; // 0x1AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_BuildObjectDamageRate_ImplicitCast; // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_CollectionDropRate_ImplicitCast; // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_CollectionObjectHpRate_ImplicitCast; // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_CollectionObjectRespawnSpeedRate_ImplicitCast; // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_EnemyDropItemRate_ImplicitCast; // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_AutoResetGuildTimeNoOnlinePlayers_ImplicitCast; // 0x1C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_PalEggDefaultHatchingTime_ImplicitCast; // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_BuildObjectDeteriorationDamageRate_ImplicitCast; // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


