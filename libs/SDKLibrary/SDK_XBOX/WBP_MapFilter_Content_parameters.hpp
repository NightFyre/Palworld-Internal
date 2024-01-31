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

// 0x11 (0x11 - 0x0)
// Function WBP_MapFilter_Content.WBP_MapFilter_Content_C.SetFilter
struct UWBP_MapFilter_Content_C_SetFilter_Params
{
public:
	struct FDataTableRowHandle                   MsgId;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	enum class EPalLocationType                  LocationType;                                      // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_MapFilter_Content.WBP_MapFilter_Content_C.BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
struct UWBP_MapFilter_Content_C_BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_MapFilter_Content.WBP_MapFilter_Content_C.BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
struct UWBP_MapFilter_Content_C_BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_MapFilter_Content.WBP_MapFilter_Content_C.BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
struct UWBP_MapFilter_Content_C_BndEvt__WBP_MapFilter_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_MapFilter_Content.WBP_MapFilter_Content_C.SetForceEnable
struct UWBP_MapFilter_Content_C_SetForceEnable_Params
{
public:
	bool                                         Set;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x223 (0x223 - 0x0)
// Function WBP_MapFilter_Content.WBP_MapFilter_Content_C.ExecuteUbergraph_WBP_MapFilter_Content
struct UWBP_MapFilter_Content_C_ExecuteUbergraph_WBP_MapFilter_Content_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4372[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x10(0xD0)(None)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0xE0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0xF0(0x14)(None)
	uint8                                        Pad_4373[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_CustomEvent_MsgId;                          // 0x108(0x10)(NoDestructor)
	enum class EPalLocationType                  K2Node_CustomEvent_LocationType;                   // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4374[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_SetFieldsInStruct_StructOut;                // 0x120(0xD0)(None)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x1F0(0x18)(None)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_2;               // 0x208(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_1;               // 0x210(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x218(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsChecked_ReturnValue;                    // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Set;                            // 0x221(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x222(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function WBP_MapFilter_Content.WBP_MapFilter_Content_C.ChangeFilter__DelegateSignature
struct UWBP_MapFilter_Content_C_ChangeFilter__DelegateSignature_Params
{
public:
	enum class EPalLocationType                  LocationType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnable;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


