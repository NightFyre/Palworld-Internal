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

// 0x3 (0x3 - 0x0)
// Function WBP_ItemChest.WBP_ItemChest_C.Sort
struct UWBP_ItemChest_C_Sort_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_ItemChest.WBP_ItemChest_C.Refill
struct UWBP_ItemChest_C_Refill_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_ItemChest.WBP_ItemChest_C.BP_GetDesiredFocusTarget
struct UWBP_ItemChest_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetInventoryTopFocustTarget_FocusTarget;  // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function WBP_ItemChest.WBP_ItemChest_C.AllGet
struct UWBP_ItemChest_C_AllGet_Params
{
public:
	class UPalHUDDispatchParameterBase*          CallFunc_GetParam_ReturnValue;                     // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_MapObject*    K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalMapObjectItemContainerModule*      CallFunc_GetItemContainerModule_ReturnValue;       // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectDeathPenaltyStorageModel* K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model; // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalItemContainer*                     CallFunc_TryGetContainer_OutContainer;             // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryGetContainer_ReturnValue;              // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7D (0x7D - 0x0)
// Function WBP_ItemChest.WBP_ItemChest_C.FastMove
struct UWBP_ItemChest_C_FastMove_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56CA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalItemSlotId                        CallFunc_GetSlotId_ReturnValue;                    // 0xC(0x14)(NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameterBase*          CallFunc_GetParam_ReturnValue;                     // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_MapObject*    K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object; // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56CC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalMapObjectItemContainerModule*      CallFunc_GetItemContainerModule_ReturnValue;       // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalItemContainer*                     CallFunc_TryGetContainer_OutContainer;             // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryGetContainer_ReturnValue;              // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue_1;                    // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56CD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalItemSlot*                          CallFunc_Get_ReturnValue;                          // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalItemSlotId                        CallFunc_GetSlotId_ReturnValue_1;                  // 0x58(0x14)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue_2;                    // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Num_ReturnValue;                          // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function WBP_ItemChest.WBP_ItemChest_C.Setup
struct UWBP_ItemChest_C_Setup_Params
{
public:
	class UPalHUDDispatchParameterBase*          CallFunc_GetParam_ReturnValue;                     // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_MapObject*    K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_TryGetMapObjectId_ReturnValue;            // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalMapObjectItemContainerModule*      CallFunc_GetItemContainerModule_ReturnValue;       // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UPalItemContainer*                     CallFunc_TryGetContainer_OutContainer;             // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryGetContainer_ReturnValue;              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56D1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetMapObjectName_outName;                 // 0x48(0x18)(None)
	class UBP_PalInventoryModel_C*               CallFunc_SpawnObject_ReturnValue;                  // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_ItemChest.WBP_ItemChest_C.BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_9_OnHoveredInventorySlot__DelegateSignature
struct UWBP_ItemChest_C_BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_9_OnHoveredInventorySlot__DelegateSignature_Params
{
public:
	class UWBP_PalItemSlotButtonBase_C*          SlotButton;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_ItemChest.WBP_ItemChest_C.BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_14_OnHoveredTargetContainerSlot__DelegateSignature
struct UWBP_ItemChest_C_BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_14_OnHoveredTargetContainerSlot__DelegateSignature_Params
{
public:
	class UWBP_PalItemSlotButtonBase_C*          SlotButton;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xFC (0xFC - 0x0)
// Function WBP_ItemChest.WBP_ItemChest_C.ExecuteUbergraph_WBP_ItemChest
struct UWBP_ItemChest_C_ExecuteUbergraph_WBP_ItemChest_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_ReturnValue;        // 0x14(0x4)(NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x18(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_ReturnValue_1;      // 0x28(0x4)(NoDestructor)
	uint8                                        Pad_56DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetInventoryLastHoveredFocusTarget_Widget; // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetInventoryTopFocustTarget_FocusTarget;  // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_PalItemSlotButtonBase_C*          K2Node_ComponentBoundEvent_SlotButton_1;           // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetTargetContainerLastHoveredFocusTarget_Widget; // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalItemSlot*                          CallFunc_GetTargetSlot_targetSlot;                 // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56DD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetTargetContainerTopFocustTarget_FocusTarget; // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalItemSlotButtonBase_C*          K2Node_ComponentBoundEvent_SlotButton;             // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalItemSlot*                          CallFunc_GetTargetSlot_targetSlot_1;               // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x80(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameterBase*          CallFunc_GetParam_ReturnValue;                     // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_ReturnValue_2;      // 0x98(0x4)(NoDestructor)
	uint8                                        Pad_56DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalHUDDispatchParameter_MapObject*    K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Map_Object; // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xAC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56E0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_ReturnValue_3;      // 0xC0(0x4)(NoDestructor)
	uint8                                        Pad_56E1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalMapObjectItemContainerModule*      CallFunc_GetItemContainerModule_ReturnValue;       // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xD4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0xE4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_ReturnValue_4;      // 0xF4(0x4)(NoDestructor)
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_ReturnValue_5;      // 0xF8(0x4)(NoDestructor)
};

}
}


