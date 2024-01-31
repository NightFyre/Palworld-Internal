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

// 0x20 (0x20 - 0x0)
// Function WBP_RecoverPalStateIndicator.WBP_RecoverPalStateIndicator_C.GetSlotWidget
struct UWBP_RecoverPalStateIndicator_C_GetSlotWidget_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B5B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_PalCommonCharacterSlotButton_C*   SlotWidget;                                        // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B5C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_PalCommonCharacterSlotButton_C*   K2Node_Select_Default;                             // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x81 (0x81 - 0x0)
// Function WBP_RecoverPalStateIndicator.WBP_RecoverPalStateIndicator_C.Initialize
struct UWBP_RecoverPalStateIndicator_C_Initialize_Params
{
public:
	class UPalIndividualCharacterContainer*      CharacterContainer;                                // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectRecoverOtomoModel*        ConcreteModel;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B5F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_PalCommonCharacterSlotButton_C*   CallFunc_GetSlotWidget_SlotWidget;                 // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectCharacterContainerModule* CallFunc_GetCharacterContainerModule_ReturnValue;  // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterContainer*      CallFunc_GetContainer_ReturnValue;                 // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B60[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UPalIndividualCharacterSlot*>   CallFunc_GetSlots_ReturnValue;                     // 0x38(0x10)(ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B61[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalIndividualCharacterSlot*           CallFunc_Array_Get_Item;                           // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B62[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalMapObjectRecoverOtomoModel*        CallFunc_TryGetConcreteModel_ConcreteModel;        // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryGetConcreteModel_ReturnValue;          // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B63[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalHUDDispatchParameterBase*          CallFunc_GetParam_ReturnValue;                     // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalUIRecoverPalStatusIndicatorParameter* K2Node_DynamicCast_AsPal_UIRecover_Pal_Status_Indicator_Parameter; // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_RecoverPalStateIndicator.WBP_RecoverPalStateIndicator_C.ExecuteUbergraph_WBP_RecoverPalStateIndicator
struct UWBP_RecoverPalStateIndicator_C_ExecuteUbergraph_WBP_RecoverPalStateIndicator_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


