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

// 0x10 (0x10 - 0x0)
// Function WBP_Title_WorldSelect_OverlayWindow_InputCode.WBP_Title_WorldSelect_OverlayWindow_InputCode_C.CustomNavi_ToTextBox
struct UWBP_Title_WorldSelect_OverlayWindow_InputCode_C_CustomNavi_ToTextBox_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A7C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_Title_WorldSelect_OverlayWindow_InputCode.WBP_Title_WorldSelect_OverlayWindow_InputCode_C.CustomNavi_ToCloseButton
struct UWBP_Title_WorldSelect_OverlayWindow_InputCode_C_CustomNavi_ToCloseButton_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A7D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function WBP_Title_WorldSelect_OverlayWindow_InputCode.WBP_Title_WorldSelect_OverlayWindow_InputCode_C.On Cancel Action
struct UWBP_Title_WorldSelect_OverlayWindow_InputCode_C_On_Cancel_Action_Params
{
public:
	bool                                         CallFunc_HasAnyUserFocus_ReturnValue;              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasKeyboardFocus_ReturnValue;             // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_Title_WorldSelect_OverlayWindow_InputCode.WBP_Title_WorldSelect_OverlayWindow_InputCode_C.BP_GetDesiredFocusTarget
struct UWBP_Title_WorldSelect_OverlayWindow_InputCode_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_Title_WorldSelect_OverlayWindow_InputCode.WBP_Title_WorldSelect_OverlayWindow_InputCode_C.OnNotifyVerifyInviteCodeImpl
struct UWBP_Title_WorldSelect_OverlayWindow_InputCode_C_OnNotifyVerifyInviteCodeImpl_Params
{
public:
	bool                                         IsValidCode;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRequirePassword;                                 // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A81[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function WBP_Title_WorldSelect_OverlayWindow_InputCode.WBP_Title_WorldSelect_OverlayWindow_InputCode_C.OnNotifyVerifyPasswordImpl
struct UWBP_Title_WorldSelect_OverlayWindow_InputCode_C_OnNotifyVerifyPasswordImpl_Params
{
public:
	bool                                         IsValidPassword;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A83[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x8(0x18)(None)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x2E (0x2E - 0x0)
// Function WBP_Title_WorldSelect_OverlayWindow_InputCode.WBP_Title_WorldSelect_OverlayWindow_InputCode_C.OnConfirmInternal
struct UWBP_Title_WorldSelect_OverlayWindow_InputCode_C_OnConfirmInternal_Params
{
public:
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x0(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Len_ReturnValue;                          // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_Title_WorldSelect_OverlayWindow_InputCode.WBP_Title_WorldSelect_OverlayWindow_InputCode_C.OpenWaitWindow
struct UWBP_Title_WorldSelect_OverlayWindow_InputCode_C_OpenWaitWindow_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x10(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function WBP_Title_WorldSelect_OverlayWindow_InputCode.WBP_Title_WorldSelect_OverlayWindow_InputCode_C.ChangeMode
struct UWBP_Title_WorldSelect_OverlayWindow_InputCode_C_ChangeMode_Params
{
public:
	enum class EPalUIJoinGameInputCodeType       InputMode;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A86[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x8(0x18)(None)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x20(0x18)(None)
};

// 0x2 (0x2 - 0x0)
// Function WBP_Title_WorldSelect_OverlayWindow_InputCode.WBP_Title_WorldSelect_OverlayWindow_InputCode_C.OnNotifyVerifyInviteCode
struct UWBP_Title_WorldSelect_OverlayWindow_InputCode_C_OnNotifyVerifyInviteCode_Params
{
public:
	bool                                         IsValidCode;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRequirePassword;                                 // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Title_WorldSelect_OverlayWindow_InputCode.WBP_Title_WorldSelect_OverlayWindow_InputCode_C.OnNotifyVerifyPassword
struct UWBP_Title_WorldSelect_OverlayWindow_InputCode_C_OnNotifyVerifyPassword_Params
{
public:
	bool                                         IsMatchPassword;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_Title_WorldSelect_OverlayWindow_InputCode.WBP_Title_WorldSelect_OverlayWindow_InputCode_C.BndEvt__WBP_Title_WorldSelect_OverlayWindow_InputCode_EditableTextBox_Code_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
struct UWBP_Title_WorldSelect_OverlayWindow_InputCode_C_BndEvt__WBP_Title_WorldSelect_OverlayWindow_InputCode_EditableTextBox_Code_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x19 (0x19 - 0x0)
// Function WBP_Title_WorldSelect_OverlayWindow_InputCode.WBP_Title_WorldSelect_OverlayWindow_InputCode_C.BndEvt__WBP_Title_WorldSelect_OverlayWindow_InputCode_EditableTextBox_Code_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UWBP_Title_WorldSelect_OverlayWindow_InputCode_C_BndEvt__WBP_Title_WorldSelect_OverlayWindow_InputCode_EditableTextBox_Code_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB1 (0xB1 - 0x0)
// Function WBP_Title_WorldSelect_OverlayWindow_InputCode.WBP_Title_WorldSelect_OverlayWindow_InputCode_C.ExecuteUbergraph_WBP_Title_WorldSelect_OverlayWindow_InputCode
struct UWBP_Title_WorldSelect_OverlayWindow_InputCode_C_ExecuteUbergraph_WBP_Title_WorldSelect_OverlayWindow_InputCode_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A8B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalHUDDispatchParameterBase*          CallFunc_GetParam_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParame_JoinGameInputCode* K2Node_DynamicCast_AsPal_HUDDispatch_Parame_Join_Game_Input_Code; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsValidCode;                          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsRequirePassword;                    // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsMatchPassword;                      // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A8C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x20(0x18)(None)
	class FText                                  K2Node_ComponentBoundEvent_Text_1;                 // 0x38(0x18)(ConstParm)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x50(0x18)(None)
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x68(0x18)(ConstParm)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A8D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x84(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A8E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x98(0x18)(None)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


