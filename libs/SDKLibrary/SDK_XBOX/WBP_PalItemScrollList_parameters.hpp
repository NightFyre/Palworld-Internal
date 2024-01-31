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

// 0x80 (0x80 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.GetAllItemSlotButton
struct UWBP_PalItemScrollList_C_GetAllItemSlotButton_Params
{
public:
	TArray<class UWBP_PalItemSlotButtonBase_C*>  Slots;                                             // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<class UWBP_PalItemSlotButtonBase_C*>  TmpSlots;                                          // 0x10(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScrollBox*                            CallFunc_GetScrollBox_ScrollBox;                   // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x38(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_PalItemListBlock_C*               K2Node_DynamicCast_AsWBP_Pal_Item_List_Block;      // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWBP_PalItemSlotButtonBase_C*>  CallFunc_GetAllItemSlotButtons_slotButtons;        // 0x70(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.SetQuickMoveTargetContainer
struct UWBP_PalItemScrollList_C_SetQuickMoveTargetContainer_Params
{
public:
	class UPalItemContainer*                     TargetContainer;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.GetLastHoveredSlotButton
struct UWBP_PalItemScrollList_C_GetLastHoveredSlotButton_Params
{
public:
	class UWBP_PalItemSlotButtonBase_C*          SlotButton;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnDragDetected_Internal
struct UWBP_PalItemScrollList_C_OnDragDetected_Internal_Params
{
public:
	class UWBP_PalItemSlotButtonBase_C*          Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnRequestUseItem_Internal
struct UWBP_PalItemScrollList_C_OnRequestUseItem_Internal_Params
{
public:
	class UWBP_PalItemSlotButtonBase_C*          ButtonBase;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xCC (0xCC - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.FilteringBySellableItemDataMap
struct UWBP_PalItemScrollList_C_FilteringBySellableItemDataMap_Params
{
public:
	TMap<class FName, double>                    SellableItemDataMap;                               // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         IsAllNotForsale;                                   // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2540[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_PalItemSlotButtonBase_C*>  CallFunc_GetAllItemSlotButton_Slots;               // 0x60(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2541[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_PalItemSlotButtonBase_C*          CallFunc_Array_Get_Item;                           // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2542[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalItemSlot*                          CallFunc_GetTargetSlot_targetSlot;                 // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalItemId                            CallFunc_GetItemId_ReturnValue;                    // 0x90(0x28)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Contains_ReturnValue;                 // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xBB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2543[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7F (0x7F - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.HiddenEmptySlot
struct UWBP_PalItemScrollList_C_HiddenEmptySlot_Params
{
public:
	bool                                         IsALLEmpty;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_254C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_254E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScrollBox*                            CallFunc_GetScrollBox_ScrollBox;                   // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x28(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2550[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_PalItemListBlock_C*               K2Node_DynamicCast_AsWBP_Pal_Item_List_Block;      // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2551[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWBP_PalItemSlotButtonBase_C*>  CallFunc_GetAllItemSlotButtons_slotButtons;        // 0x58(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWBP_PalItemSlotButtonBase_C*          CallFunc_Array_Get_Item_1;                         // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalItemSlot*                          CallFunc_GetTargetSlot_targetSlot;                 // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x7E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.GetFocusTarget
struct UWBP_PalItemScrollList_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Target;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2559[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScrollBox*                            CallFunc_GetScrollBox_ScrollBox;                   // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x20(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_255A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_255D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_PalItemListBlock_C*               K2Node_DynamicCast_AsWBP_Pal_Item_List_Block;      // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_255F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetFocusTarget_NewParam;                  // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.CreateEmptyBlock
struct UWBP_PalItemScrollList_C_CreateEmptyBlock_Params
{
public:
	class UWBP_PalItemListBlock_C*               CreatedBlock;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UScrollBox*                            CallFunc_GetScrollBox_ScrollBox;                   // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalItemListBlock_C*               CallFunc_CreateBlock_createdBlock;                 // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnUnfocused_Internal
struct UWBP_PalItemScrollList_C_OnUnfocused_Internal_Params
{
public:
	class UWBP_PalItemSlotButtonBase_C*          ButtonBase;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnFocused_Internal
struct UWBP_PalItemScrollList_C_OnFocused_Internal_Params
{
public:
	class UWBP_PalItemSlotButtonBase_C*          ButtonBase;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.InitializeArrowVisibility
struct UWBP_PalItemScrollList_C_InitializeArrowVisibility_Params
{
public:
	class UScrollBox*                            CallFunc_GetScrollBox_ScrollBox;                   // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetScrollOffset_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2565[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_UpdateArrowVisibilityAndAnimation_currentOffset_ImplicitCast; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.Focus
struct UWBP_PalItemScrollList_C_Focus_Params
{
public:
	class UScrollBox*                            CallFunc_GetScrollBox_ScrollBox;                   // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalItemListBlock_C*               K2Node_DynamicCast_AsWBP_Pal_Item_List_Block;      // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnEndHovered_Internal
struct UWBP_PalItemScrollList_C_OnEndHovered_Internal_Params
{
public:
	class UWBP_PalItemSlotButtonBase_C*          ButtonBase;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnHovered_Internal
struct UWBP_PalItemScrollList_C_OnHovered_Internal_Params
{
public:
	class UWBP_PalItemSlotButtonBase_C*          ButtonBase;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnRightClicked_Internal
struct UWBP_PalItemScrollList_C_OnRightClicked_Internal_Params
{
public:
	class UWBP_PalItemSlotButtonBase_C*          ButtonBase;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EPalItemSlotPressType             PressType;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalItemSlotPressType             Temp_byte_Variable;                                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2574[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalItemSlot*                          CallFunc_GetTargetSlot_targetSlot;                 // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x18(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetStackCount_ReturnValue;                // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2575[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Max_ReturnValue;                          // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x2C(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalContainerId                       CallFunc_GetId_ReturnValue;                        // 0x30(0x10)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnMiddleClicked_Internal
struct UWBP_PalItemScrollList_C_OnMiddleClicked_Internal_Params
{
public:
	class UWBP_PalItemSlotButtonBase_C*          ButtonBase;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnLeftClicked_Internal
struct UWBP_PalItemScrollList_C_OnLeftClicked_Internal_Params
{
public:
	class UWBP_PalItemSlotButtonBase_C*          ButtonBase;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EPalItemSlotPressType             PressType;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x108 (0x108 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.CreateBlock
struct UWBP_PalItemScrollList_C_CreateBlock_Params
{
public:
	class UPalItemContainer*                     TargetContainer;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  DisplayName;                                       // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         IgnoreEmptySlot;                                   // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_257E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_PalItemListBlock_C*               CreatedBlock;                                      // 0x28(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_257F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetInventoryCategoryName_outName;         // 0x38(0x18)(None)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2580[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x54(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x64(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x74(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x84(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2581[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalPlayerRecordData*                  CallFunc_GetLocalRecordData_ReturnValue;           // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xA0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0xB0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalItemSlot*                          CallFunc_CreateLocalItemSlot_ReturnValue;          // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0xC8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0xD8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0xE8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetLocalPlayerController_ReturnValue;     // 0xF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalItemListBlock_C*               CallFunc_Create_ReturnValue;                       // 0x100(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.AddItemContainer
struct UWBP_PalItemScrollList_C_AddItemContainer_Params
{
public:
	class UPalItemContainer*                     TargetContainer;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  DisplayName;                                       // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         IgnoreEmptySlot;                                   // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2585[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_PalItemListBlock_C*               CreatedBlock;                                      // 0x28(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UScrollBox*                            CallFunc_GetScrollBox_ScrollBox;                   // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalItemListBlock_C*               CallFunc_CreateBlock_createdBlock;                 // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.ExecuteUbergraph_WBP_PalItemScrollList
struct UWBP_PalItemScrollList_C_ExecuteUbergraph_WBP_PalItemScrollList_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnRequestUseItem__DelegateSignature
struct UWBP_PalItemScrollList_C_OnRequestUseItem__DelegateSignature_Params
{
public:
	class UWBP_PalItemSlotButtonBase_C*          Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnMiddleClickedSlot__DelegateSignature
struct UWBP_PalItemScrollList_C_OnMiddleClickedSlot__DelegateSignature_Params
{
public:
	class UWBP_PalItemSlotButtonBase_C*          ButtonBase;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnDragDetectedSlot__DelegateSignature
struct UWBP_PalItemScrollList_C_OnDragDetectedSlot__DelegateSignature_Params
{
public:
	class UWBP_PalItemSlotButtonBase_C*          Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnUnfocusedSlot__DelegateSignature
struct UWBP_PalItemScrollList_C_OnUnfocusedSlot__DelegateSignature_Params
{
public:
	class UWBP_PalItemSlotButtonBase_C*          ButtonBase;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnFocusedSlot__DelegateSignature
struct UWBP_PalItemScrollList_C_OnFocusedSlot__DelegateSignature_Params
{
public:
	class UWBP_PalItemSlotButtonBase_C*          ButtonBase;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnEndHoveredSlot__DelegateSignature
struct UWBP_PalItemScrollList_C_OnEndHoveredSlot__DelegateSignature_Params
{
public:
	class UWBP_PalItemSlotButtonBase_C*          ButtonBase;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnHoveredSlot__DelegateSignature
struct UWBP_PalItemScrollList_C_OnHoveredSlot__DelegateSignature_Params
{
public:
	class UWBP_PalItemSlotButtonBase_C*          ButtonBase;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnRightClickedSlot__DelegateSignature
struct UWBP_PalItemScrollList_C_OnRightClickedSlot__DelegateSignature_Params
{
public:
	class UWBP_PalItemSlotButtonBase_C*          ButtonBase;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EPalItemSlotPressType             PressType;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnLeftClickedSlot__DelegateSignature
struct UWBP_PalItemScrollList_C_OnLeftClickedSlot__DelegateSignature_Params
{
public:
	class UWBP_PalItemSlotButtonBase_C*          ButtonBase;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EPalItemSlotPressType             PressType;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


