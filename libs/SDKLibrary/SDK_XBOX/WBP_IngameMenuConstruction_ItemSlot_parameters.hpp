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

// 0x5 (0x5 - 0x0)
// Function WBP_IngameMenuConstruction_ItemSlot.WBP_IngameMenuConstruction_ItemSlot_C.SetNewIconVisibility
struct UWBP_IngameMenuConstruction_ItemSlot_C_SetNewIconVisibility_Params
{
public:
	bool                                         Visable;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WBP_IngameMenuConstruction_ItemSlot.WBP_IngameMenuConstruction_ItemSlot_C.GetCanvasSize
struct UWBP_IngameMenuConstruction_ItemSlot_C_GetCanvasSize_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      K2Node_DynamicCast_AsCanvas_Panel_Slot;            // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_GetSize_ReturnValue;                      // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_IngameMenuConstruction_ItemSlot.WBP_IngameMenuConstruction_ItemSlot_C.PlayAnimCanNotBuild
struct UWBP_IngameMenuConstruction_ItemSlot_C_PlayAnimCanNotBuild_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_IngameMenuConstruction_ItemSlot.WBP_IngameMenuConstruction_ItemSlot_C.PlayAnimToSmall
struct UWBP_IngameMenuConstruction_ItemSlot_C_PlayAnimToSmall_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function WBP_IngameMenuConstruction_ItemSlot.WBP_IngameMenuConstruction_ItemSlot_C.Setup
struct UWBP_IngameMenuConstruction_ItemSlot_C_Setup_Params
{
public:
	struct FPalBuildObjectData                   BuildObjectData;                                   // 0x0(0x78)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UPalMasterDataTableAccess_BuildObjectIconData* CallFunc_GetBuildObjectIconDataTableAccess_ReturnValue; // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BP_FindRow_bResult;                       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalBuildObjectIconData               CallFunc_BP_FindRow_ReturnValue;                   // 0x88(0x38)(None)
	class FText                                  CallFunc_GetMapObjectName_outName;                 // 0xC0(0x18)(None)
};

}
}


