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

// 0x25 (0x25 - 0x0)
// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.Try Start Simulate Status Point
struct UWBP_InventoryEquipment_ForDisplay_C_Try_Start_Simulate_Status_Point_Params
{
public:
	class APalPlayerCharacter*                   CallFunc_GetPalmi_ReturnValue;                     // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*       CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSimulatingStatusPoint_IsSimulating;     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4695[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalIndividualCharacterParameter*      CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetUnusedStatusPoint_ReturnValue;         // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.Setup Static Input Action
struct UWBP_InventoryEquipment_ForDisplay_C_Setup_Static_Input_Action_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_ReturnValue;        // 0x20(0x4)(NoDestructor)
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_ReturnValue_1;      // 0x24(0x4)(NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.IsSimulatingStatusPoint
struct UWBP_InventoryEquipment_ForDisplay_C_IsSimulatingStatusPoint_Params
{
public:
	bool                                         IsSimulating;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.BP_GetDesiredFocusTarget
struct UWBP_InventoryEquipment_ForDisplay_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSimulatingStatusPoint_IsSimulating;     // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4696[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetStatusPointTopFocusTarget_TargetWidget; // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_Get_Inventory_Last_Focus_Target_TargetWidget; // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.OnUpdateInventoryWeight
struct UWBP_InventoryEquipment_ForDisplay_C_OnUpdateInventoryWeight_Params
{
public:
	float                                        NowWeight;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4697[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalPlayerInventoryData*               CallFunc_GetLocalInventoryData_ReturnValue;        // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetInventoryWeight_NowWeight_ImplicitCast; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SetInventoryWeight_MaxWeight_ImplicitCast; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.Setup
struct UWBP_InventoryEquipment_ForDisplay_C_Setup_Params
{
public:
	class UBP_InGameMenuInventoryModel_C*        Model;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_2_OnConfirmStatusPointEdit__DelegateSignature
struct UWBP_InventoryEquipment_ForDisplay_C_BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_2_OnConfirmStatusPointEdit__DelegateSignature_Params
{
public:
	TMap<class FName, int32>                     PointMap;                                          // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_3_OnRequestSwapEquipment__DelegateSignature
struct UWBP_InventoryEquipment_ForDisplay_C_BndEvt__WBP_InventoryEquipment_ForDisplay_WBP_InventoryEquipment_K2Node_ComponentBoundEvent_3_OnRequestSwapEquipment__DelegateSignature_Params
{
public:
	enum class EPalPlayerEquipItemSlotType       EquipType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xBC (0xBC - 0x0)
// Function WBP_InventoryEquipment_ForDisplay.WBP_InventoryEquipment_ForDisplay_C.ExecuteUbergraph_WBP_InventoryEquipment_ForDisplay
struct UWBP_InventoryEquipment_ForDisplay_C_ExecuteUbergraph_WBP_InventoryEquipment_ForDisplay_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4698[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, int32>                     K2Node_ComponentBoundEvent_PointMap;               // 0x8(0x50)(None)
	int32                                        CallFunc_Map_Length_ReturnValue;                   // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalPlayerEquipItemSlotType       K2Node_ComponentBoundEvent_EquipType;              // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4699[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalPlayerCharacter*                   CallFunc_GetPalmi_ReturnValue;                     // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x68(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_469A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalGliderComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x88(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGliding_ReturnValue;                    // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x9B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x9C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xAC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


