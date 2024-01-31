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

// 0xF1 (0xF1 - 0x0)
// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnDrop
struct UWBP_PalCharacterSlotButtonBase_C_OnDrop_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         PointerEvent;                                      // 0x40(0x98)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                    Operation;                                         // 0xD8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xE0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_508F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_PalCharacterSlotButtonBase_C*     K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base; // 0xE8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x320 (0x320 - 0x0)
// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnMouseButtonUp
struct UWBP_PalCharacterSlotButtonBase_C_OnMouseButtonUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x40(0x98)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xD8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x190(0xB8)(None)
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x248(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5090[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x268(0xB8)(None)
};

// 0x300 (0x300 - 0x0)
// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnPreviewMouseButtonDown
struct UWBP_PalCharacterSlotButtonBase_C_OnPreviewMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x40(0x98)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xD8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x190(0xB8)(None)
	struct FEventReply                           CallFunc_DetectDragIfPressed_ReturnValue;          // 0x248(0xB8)(None)
};

// 0x10A (0x10A - 0x0)
// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnDragDetected
struct UWBP_PalCharacterSlotButtonBase_C_OnDragDetected_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         PointerEvent;                                      // 0x40(0x98)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                    Operation;                                         // 0xD8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UDragDropOperation*                    CallFunc_CreateDragDropOperation_ReturnValue;      // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetLocalPlayerController_ReturnValue;     // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5091[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_PalCommonCharacterSlotButton_C*   CallFunc_Create_ReturnValue;                       // 0xF8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterSlot*           CallFunc_GetTargetSlot_targetSlot;                 // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.Focus
struct UWBP_PalCharacterSlotButtonBase_C_Focus_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x261 (0x261 - 0x0)
// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnMouseButtonDown
struct UWBP_PalCharacterSlotButtonBase_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x40(0x98)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xD8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x190(0xB8)(None)
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x248(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnUnhovered_Internal
struct UWBP_PalCharacterSlotButtonBase_C_OnUnhovered_Internal_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnHovered_Internal
struct UWBP_PalCharacterSlotButtonBase_C_OnHovered_Internal_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnClicked_Internal
struct UWBP_PalCharacterSlotButtonBase_C_OnClicked_Internal_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalItemSlotPressType             Temp_byte_Variable;                                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalItemSlotPressType             Temp_byte_Variable_1;                              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5092[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInputKeyDown_ReturnValue;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalItemSlotPressType             K2Node_Select_Default;                             // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.BindButtonEvents
struct UWBP_PalCharacterSlotButtonBase_C_BindButtonEvents_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.GetTargetSlot
struct UWBP_PalCharacterSlotButtonBase_C_GetTargetSlot_Params
{
public:
	class UPalIndividualCharacterSlot*           TargetSlot;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.RegisterCharacterSlotWidget
struct UWBP_PalCharacterSlotButtonBase_C_RegisterCharacterSlotWidget_Params
{
public:
	class UWBP_PalCharacterSlotBase_C*           CharacterSlotWidget;                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.Setup
struct UWBP_PalCharacterSlotButtonBase_C_Setup_Params
{
public:
	class UPalIndividualCharacterSlot*           TargetSlot;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.RegisterButton
struct UWBP_PalCharacterSlotButtonBase_C_RegisterButton_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnAddedToFocusPath
struct UWBP_PalCharacterSlotButtonBase_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnRemovedFromFocusPath
struct UWBP_PalCharacterSlotButtonBase_C_OnRemovedFromFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.ExecuteUbergraph_WBP_PalCharacterSlotButtonBase
struct UWBP_PalCharacterSlotButtonBase_C_ExecuteUbergraph_WBP_PalCharacterSlotButtonBase_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5093[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     CallFunc_RegisterButton_button;                    // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCharacterSlotBase_C*           CallFunc_RegisterCharacterSlotWidget_characterSlotWidget; // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                           K2Node_Event_InFocusEvent_1;                       // 0x18(0x8)(NoDestructor)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x20(0x8)(NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnDropped__DelegateSignature
struct UWBP_PalCharacterSlotButtonBase_C_OnDropped__DelegateSignature_Params
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*     Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnDragged__DelegateSignature
struct UWBP_PalCharacterSlotButtonBase_C_OnDragged__DelegateSignature_Params
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*     Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnRightClickedButton__DelegateSignature
struct UWBP_PalCharacterSlotButtonBase_C_OnRightClickedButton__DelegateSignature_Params
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*     ButtonBase;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnUnhoveredButton__DelegateSignature
struct UWBP_PalCharacterSlotButtonBase_C_OnUnhoveredButton__DelegateSignature_Params
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*     Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnUnFocusedWidget__DelegateSignature
struct UWBP_PalCharacterSlotButtonBase_C_OnUnFocusedWidget__DelegateSignature_Params
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*     Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnFocusedWidget__DelegateSignature
struct UWBP_PalCharacterSlotButtonBase_C_OnFocusedWidget__DelegateSignature_Params
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*     Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnHoveredButton__DelegateSignature
struct UWBP_PalCharacterSlotButtonBase_C_OnHoveredButton__DelegateSignature_Params
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*     Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnClickedButton__DelegateSignature
struct UWBP_PalCharacterSlotButtonBase_C_OnClickedButton__DelegateSignature_Params
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*     Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EPalItemSlotPressType             PressType;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


