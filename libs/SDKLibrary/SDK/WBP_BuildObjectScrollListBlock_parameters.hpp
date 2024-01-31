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
// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.GetFocusTarget
struct UWBP_BuildObjectScrollListBlock_C_GetFocusTarget_Params
{
public:
	class UWidget*                               Target;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalBuildObjectThumbnailButton_C*  K2Node_DynamicCast_AsWBP_Pal_Build_Object_Thumbnail_Button; // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.GetBuildObjectTypeA
struct UWBP_BuildObjectScrollListBlock_C_GetBuildObjectTypeA_Params
{
public:
	enum class EPalBuildObjectTypeA              NewParam;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.FocusTopContent
struct UWBP_BuildObjectScrollListBlock_C_FocusTopContent_Params
{
public:
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalBuildObjectThumbnailButton_C*  K2Node_DynamicCast_AsWBP_Pal_Build_Object_Thumbnail_Button; // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.GetBuildObjectTypeB
struct UWBP_BuildObjectScrollListBlock_C_GetBuildObjectTypeB_Params
{
public:
	enum class EPalBuildObjectTypeB              TypeB;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.OnUnhovered_Internal
struct UWBP_BuildObjectScrollListBlock_C_OnUnhovered_Internal_Params
{
public:
	class UWBP_PalBuildObjectThumbnailButton_C*  SelftWidget;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.OnHovered_Internal
struct UWBP_BuildObjectScrollListBlock_C_OnHovered_Internal_Params
{
public:
	class UWBP_PalBuildObjectThumbnailButton_C*  SelfWidget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.OnClicked_Internal
struct UWBP_BuildObjectScrollListBlock_C_OnClicked_Internal_Params
{
public:
	class UWBP_PalBuildObjectThumbnailButton_C*  SelfWidget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.SetCategoryName
struct UWBP_BuildObjectScrollListBlock_C_SetCategoryName_Params
{
public:
	class FText                                  CategoryNameText;                                  // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xC0 (0xC0 - 0x0)
// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.CreateBuildObjectIconWidget
struct UWBP_BuildObjectScrollListBlock_C_CreateBuildObjectIconWidget_Params
{
public:
	struct FPalBuildObjectData                   BuildObjectData;                                   // 0x0(0x78)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWBP_PalBuildObjectThumbnailButton_C*  CreatedWidget;                                     // 0x78(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x80(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x90(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xA0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetLocalPlayerController_ReturnValue;     // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalBuildObjectThumbnailButton_C*  CallFunc_Create_ReturnValue;                       // 0xB8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.AddBuildObjectList
struct UWBP_BuildObjectScrollListBlock_C_AddBuildObjectList_Params
{
public:
	TArray<struct FPalBuildObjectData>           buildObjectDataArray;                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class EPalBuildObjectTypeB              TypeB;                                             // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalBuildObjectTypeA              TypeA;                                             // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5375[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalBuildObjectData                   CallFunc_Array_Get_Item;                           // 0x20(0x78)(None)
	class UWBP_PalBuildObjectThumbnailButton_C*  CallFunc_CreateBuildObjectIconWidget_createdWidget; // 0x98(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5376[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.OnUnhoveredAnyContent__DelegateSignature
struct UWBP_BuildObjectScrollListBlock_C_OnUnhoveredAnyContent__DelegateSignature_Params
{
public:
	class UWBP_PalBuildObjectThumbnailButton_C*  Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.OnHoveredAnyContent__DelegateSignature
struct UWBP_BuildObjectScrollListBlock_C_OnHoveredAnyContent__DelegateSignature_Params
{
public:
	class UWBP_PalBuildObjectThumbnailButton_C*  Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_BuildObjectScrollListBlock.WBP_BuildObjectScrollListBlock_C.OnClickedAnyContent__DelegateSignature
struct UWBP_BuildObjectScrollListBlock_C_OnClickedAnyContent__DelegateSignature_Params
{
public:
	class UWBP_PalBuildObjectThumbnailButton_C*  Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


