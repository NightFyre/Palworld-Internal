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
// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.OnChangedHairColor
struct UWBP_CharaCre_ScrollBoxContent_Hair_C_OnChangedHairColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.GetRestoreFocusTarget
struct UWBP_CharaCre_ScrollBoxContent_Hair_C_GetRestoreFocusTarget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetTopFocusTarget_Widget;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5C (0x5C - 0x0)
// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.OnClosedHairColorSelectWindow
struct UWBP_CharaCre_ScrollBoxContent_Hair_C_OnClosedHairColorSelectWindow_Params
{
public:
	class UPalHUDDispatchParameterBase*          Param;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Chara_Cre_Color_Select_Window_Dispatch_Parameter; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8[0x3];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakColor_R;                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_G;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_B;                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_A;                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9[0x4];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_HSVToRGBLinear_ReturnValue;               // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_R_ImplicitCast;                  // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x94 (0x94 - 0x0)
// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.ApplyMakeInfo
struct UWBP_CharaCre_ScrollBoxContent_Hair_C_ApplyMakeInfo_Params
{
public:
	struct FPalPlayerDataCharacterMakeInfo       MakeInfo;                                          // 0x0(0x94)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.GetTopFocusTarget
struct UWBP_CharaCre_ScrollBoxContent_Hair_C_GetTopFocusTarget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetTopFocusTarget_Widget;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.BndEvt__WBP_CharaCre_ScrollBoxContent_Hair_WBP_CharaCre_ColorSelect_sq_Hair_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_CharaCre_ScrollBoxContent_Hair_C_BndEvt__WBP_CharaCre_ScrollBoxContent_Hair_WBP_CharaCre_ColorSelect_sq_Hair_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
public:
	class UWBP_CharaCre_ColorSelect_sq_C*        Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1A8 (0x1A8 - 0x0)
// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Hair
struct UWBP_CharaCre_ScrollBoxContent_Hair_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Hair_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalCharacterCreationColorPresetDataRow CallFunc_GetDataTableRowFromName_OutRow;           // 0x10(0x18)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A[0x7];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x30(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalCharacterCreationMeshPresetDataRow CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x48(0x108)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B[0x3];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C[0x7];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_CharaCre_ColorSelect_sq_C*        K2Node_ComponentBoundEvent_Widget;                 // 0x160(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                        CallFunc_GetHUDService_ReturnValue;                // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetBindedColor_Color;                     // 0x170(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* CallFunc_SpawnObject_ReturnValue;                  // 0x180(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x188(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x198(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C.OnSelectedHairColor__DelegateSignature
struct UWBP_CharaCre_ScrollBoxContent_Hair_C_OnSelectedHairColor__DelegateSignature_Params
{
public:
	struct FLinearColor                          HSV;                                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


