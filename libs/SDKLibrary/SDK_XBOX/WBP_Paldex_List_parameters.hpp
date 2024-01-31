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

// 0x1 (0x1 - 0x0)
// Function WBP_Paldex_List.WBP_Paldex_List_C.SetVisibilityNewMark
struct UWBP_Paldex_List_C_SetVisibilityNewMark_Params
{
public:
	enum class ESlateVisibility                  NewVisibility;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function WBP_Paldex_List.WBP_Paldex_List_C.Setup_Captured
struct UWBP_Paldex_List_C_Setup_Captured_Params
{
public:
	struct FPalUIPaldex_DisplayInfo              DisplayInfo;                                       // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UPalDatabaseCharacterParameter*        CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedCharacterName_OutText;        // 0x40(0x18)(None)
};

// 0x58 (0x58 - 0x0)
// Function WBP_Paldex_List.WBP_Paldex_List_C.Setup_Encounted
struct UWBP_Paldex_List_C_Setup_Encounted_Params
{
public:
	struct FPalUIPaldex_DisplayInfo              DisplayInfo;                                       // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UPalDatabaseCharacterParameter*        CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedCharacterName_OutText;        // 0x40(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function WBP_Paldex_List.WBP_Paldex_List_C.Setup_NotEncounted
struct UWBP_Paldex_List_C_Setup_NotEncounted_Params
{
public:
	struct FPalUIPaldex_DisplayInfo              DisplayInfo;                                       // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB2 (0xB2 - 0x0)
// Function WBP_Paldex_List.WBP_Paldex_List_C.Setup
struct UWBP_Paldex_List_C_Setup_Params
{
public:
	struct FPalUIPaldex_DisplayInfo              DisplayInfo;                                       // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EF[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x40(0x18)(None)
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Divide_IntInt_ReturnValue_1;              // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue_1;             // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                K2Node_MakeArray_Array;                            // 0x70(0x10)(ConstParm, ReferenceParm)
	class APalPlayerState*                       CallFunc_GetLocalPlayerState_ReturnValue;          // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalPlayerLocalRecordData*             CallFunc_GetLocalRecordData_ReturnValue;           // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalTribeID                       CallFunc_GetTribeIDFromCharacterID_ReturnValue;    // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_Value;                           // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x93(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPalTextBlockBase*>             K2Node_MakeArray_Array_1;                          // 0x98(0x10)(ReferenceParm, ContainsInstancedReference)
	class UPalDatabaseCharacterParameter*        CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalElementType                   CallFunc_GetElementType_Element1;                  // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalElementType                   CallFunc_GetElementType_Element2;                  // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Paldex_List.WBP_Paldex_List_C.BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
struct UWBP_Paldex_List_C_BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Paldex_List.WBP_Paldex_List_C.BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
struct UWBP_Paldex_List_C_BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Paldex_List.WBP_Paldex_List_C.BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
struct UWBP_Paldex_List_C_BndEvt__WBP_Paldex_List_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function WBP_Paldex_List.WBP_Paldex_List_C.ExecuteUbergraph_WBP_Paldex_List
struct UWBP_Paldex_List_C_ExecuteUbergraph_WBP_Paldex_List_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_347[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_2;               // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_1;               // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_Paldex_List.WBP_Paldex_List_C.OnClicked__DelegateSignature
struct UWBP_Paldex_List_C_OnClicked__DelegateSignature_Params
{
public:
	class FName                                  CharacterID;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Paldex_List_C*                    Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_Paldex_List.WBP_Paldex_List_C.OnHovered__DelegateSignature
struct UWBP_Paldex_List_C_OnHovered__DelegateSignature_Params
{
public:
	class FName                                  CharacterID;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Paldex_List_C*                    SelfWidget;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


