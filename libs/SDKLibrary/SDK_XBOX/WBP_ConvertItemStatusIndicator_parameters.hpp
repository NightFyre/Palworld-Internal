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

// 0x30 (0x30 - 0x0)
// Function WBP_ConvertItemStatusIndicator.WBP_ConvertItemStatusIndicator_C.OnUpdatedWorkerPal
struct UWBP_ConvertItemStatusIndicator_C_OnUpdatedWorkerPal_Params
{
public:
	class UPalWorkBase*                          Work;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalWorkSuitability               CallFunc_GetWorkSuitability_ReturnValue;           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 CallFunc_GetWorkId_ReturnValue;                    // 0xC(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPalIndividualCharacterSlot*>   CallFunc_GetAssignedCharacters_IndividualSlots;    // 0x20(0x10)(ReferenceParm)
};

// 0x19 (0x19 - 0x0)
// Function WBP_ConvertItemStatusIndicator.WBP_ConvertItemStatusIndicator_C.DisplayDetail
struct UWBP_ConvertItemStatusIndicator_C_DisplayDetail_Params
{
public:
	class UPalMapObjectWorkeeModule*             CallFunc_GetWorkeeModule_ReturnValue;              // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalWorkProgress*                      CallFunc_GetWorkProgress_ReturnValue;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_ConvertItemStatusIndicator.WBP_ConvertItemStatusIndicator_C.OnReflectWorkProgress
struct UWBP_ConvertItemStatusIndicator_C_OnReflectWorkProgress_Params
{
public:
	class UPalWorkProgress*                      WorkProgress;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetProgressRate_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56A3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SetWorkProgressRate_rate_ImplicitCast;    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9C (0x9C - 0x0)
// Function WBP_ConvertItemStatusIndicator.WBP_ConvertItemStatusIndicator_C.OnUpdateProductSlot
struct UWBP_ConvertItemStatusIndicator_C_OnUpdateProductSlot_Params
{
public:
	class UPalItemSlot*                          Slot;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        RemainCreateNum;                                   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ProductStackCount;                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetRemainCreateNum_ReturnValue;           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56A4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalItemRecipe                        CallFunc_GetCurrentRecipe_ReturnValue;             // 0x18(0x70)(None)
	int32                                        CallFunc_GetRemainCreateNum_ReturnValue_1;         // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsProductNumInfinite_ReturnValue;         // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56A5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetStackCount_ReturnValue;                // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_ConvertItemStatusIndicator.WBP_ConvertItemStatusIndicator_C.UpdateProductNum
struct UWBP_ConvertItemStatusIndicator_C_UpdateProductNum_Params
{
public:
	class UPalMapObjectConvertItemModel*         Model;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalItemSlot*                          CallFunc_GetProductSlot_ReturnValue;               // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xF0 (0xF0 - 0x0)
// Function WBP_ConvertItemStatusIndicator.WBP_ConvertItemStatusIndicator_C.OnUpdateRecipe
struct UWBP_ConvertItemStatusIndicator_C_OnUpdateRecipe_Params
{
public:
	class UPalMapObjectConvertItemModel*         Model;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalItemRecipe                        CurrentRecipe;                                     // 0x8(0x70)(Edit, BlueprintVisible)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x78(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x79(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56A6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalItemRecipe                        CallFunc_GetCurrentRecipe_ReturnValue;             // 0x80(0x70)(None)
};

// 0xC9 (0xC9 - 0x0)
// Function WBP_ConvertItemStatusIndicator.WBP_ConvertItemStatusIndicator_C.Initialize
struct UWBP_ConvertItemStatusIndicator_C_Initialize_Params
{
public:
	class UPalMapObjectWorkeeModule*             CallFunc_GetWorkeeModule_ReturnValue;              // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalWorkProgress*                      CallFunc_GetWorkProgress_ReturnValue;              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectWorkeeModule*             CallFunc_GetWorkeeModule_ReturnValue_1;            // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectWorkeeModule*             CallFunc_GetWorkeeModule_ReturnValue_2;            // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalWorkProgress*                      CallFunc_GetWorkProgress_ReturnValue_1;            // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalWorkProgress*                      CallFunc_GetWorkProgress_ReturnValue_2;            // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalItemSlot*                          CallFunc_GetProductSlot_ReturnValue;               // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x48(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectEnergyModule*             CallFunc_GetEnergyModule_ReturnValue;              // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x60(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x70(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x80(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x90(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameterBase*          CallFunc_GetParam_ReturnValue;                     // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalUIMapObjectStatusIndicatorParameterBase* K2Node_DynamicCast_AsPal_UIMap_Object_Status_Indicator_Parameter_Base; // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalMapObjectConcreteModelBase*        CallFunc_GetConcreteModel_ReturnValue;             // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectConvertItemModel*         K2Node_DynamicCast_AsPal_Map_Object_Convert_Item_Model; // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function WBP_ConvertItemStatusIndicator.WBP_ConvertItemStatusIndicator_C.ExecuteUbergraph_WBP_ConvertItemStatusIndicator
struct UWBP_ConvertItemStatusIndicator_C_ExecuteUbergraph_WBP_ConvertItemStatusIndicator_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetMapObjectLocation_outVector;           // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                   CallFunc_GetPalmi_ReturnValue;                     // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Vector_Distance_ReturnValue;              // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                       CallFunc_GetGameSetting_ReturnValue;               // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x5C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56AD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x70(0x8)(NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Less_DoubleDouble_B_ImplicitCast;         // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


