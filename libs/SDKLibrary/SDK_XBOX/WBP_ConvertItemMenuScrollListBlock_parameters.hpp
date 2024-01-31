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

// 0x1A (0x1A - 0x0)
// Function WBP_ConvertItemMenuScrollListBlock.WBP_ConvertItemMenuScrollListBlock_C.GetFocusTarget
struct UWBP_ConvertItemMenuScrollListBlock_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Target;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalConvertItemMenu_RecipeSlotButton_C* K2Node_DynamicCast_AsWBP_Pal_Convert_Item_Menu_Recipe_Slot_Button; // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function WBP_ConvertItemMenuScrollListBlock.WBP_ConvertItemMenuScrollListBlock_C.FocusTopContent
struct UWBP_ConvertItemMenuScrollListBlock_C_FocusTopContent_Params
{
public:
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalConvertItemMenu_RecipeSlotButton_C* K2Node_DynamicCast_AsWBP_Pal_Convert_Item_Menu_Recipe_Slot_Button; // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_ConvertItemMenuScrollListBlock.WBP_ConvertItemMenuScrollListBlock_C.OnUnhovered_Internal
struct UWBP_ConvertItemMenuScrollListBlock_C_OnUnhovered_Internal_Params
{
public:
	class UWBP_PalConvertItemMenu_RecipeSlotButton_C* SelftWidget;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_ConvertItemMenuScrollListBlock.WBP_ConvertItemMenuScrollListBlock_C.OnHovered_Internal
struct UWBP_ConvertItemMenuScrollListBlock_C_OnHovered_Internal_Params
{
public:
	class UWBP_PalConvertItemMenu_RecipeSlotButton_C* SelfWidget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_ConvertItemMenuScrollListBlock.WBP_ConvertItemMenuScrollListBlock_C.OnClicked_Internal
struct UWBP_ConvertItemMenuScrollListBlock_C_OnClicked_Internal_Params
{
public:
	class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_ConvertItemMenuScrollListBlock.WBP_ConvertItemMenuScrollListBlock_C.SetCategoryName
struct UWBP_ConvertItemMenuScrollListBlock_C_SetCategoryName_Params
{
public:
	class FText                                  CategoryNameText;                                  // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x50 (0x50 - 0x0)
// Function WBP_ConvertItemMenuScrollListBlock.WBP_ConvertItemMenuScrollListBlock_C.CreateRecipeIconWidget
struct UWBP_ConvertItemMenuScrollListBlock_C_CreateRecipeIconWidget_Params
{
public:
	class FName                                  RecipeID;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalConvertItemMenu_RecipeSlotButton_C* CreatedWidget;                                     // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x30(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetLocalPlayerController_ReturnValue;     // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalConvertItemMenu_RecipeSlotButton_C* CallFunc_Create_ReturnValue;                       // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function WBP_ConvertItemMenuScrollListBlock.WBP_ConvertItemMenuScrollListBlock_C.AddRecipeList
struct UWBP_ConvertItemMenuScrollListBlock_C_AddRecipeList_Params
{
public:
	TArray<class FName>                          RecipeIDArray;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5377[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_PalConvertItemMenu_RecipeSlotButton_C* CallFunc_CreateRecipeIconWidget_createdWidget;     // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5378[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWrapBoxSlot*                          CallFunc_AddChildToWrapBox_ReturnValue;            // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_ConvertItemMenuScrollListBlock.WBP_ConvertItemMenuScrollListBlock_C.OnUnhoveredAnyContent__DelegateSignature
struct UWBP_ConvertItemMenuScrollListBlock_C_OnUnhoveredAnyContent__DelegateSignature_Params
{
public:
	class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_ConvertItemMenuScrollListBlock.WBP_ConvertItemMenuScrollListBlock_C.OnHoveredAnyContent__DelegateSignature
struct UWBP_ConvertItemMenuScrollListBlock_C_OnHoveredAnyContent__DelegateSignature_Params
{
public:
	class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_ConvertItemMenuScrollListBlock.WBP_ConvertItemMenuScrollListBlock_C.OnClickedAnyContent__DelegateSignature
struct UWBP_ConvertItemMenuScrollListBlock_C_OnClickedAnyContent__DelegateSignature_Params
{
public:
	class UWBP_PalConvertItemMenu_RecipeSlotButton_C* Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


