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
// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.CanClose
struct UWBP_Guild_ForDisplay_C_CanClose_Params
{
public:
	bool                                         CanCloseFlag;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsNameEditMode_IsEditing;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OnTimer_CheckChangeAdmin
struct UWBP_Guild_ForDisplay_C_OnTimer_CheckChangeAdmin_Params
{
public:
	bool                                         CallFunc_IsAdminLocalPlayer_ReturnValue;           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OnTimer_CheckBanPlayer
struct UWBP_Guild_ForDisplay_C_OnTimer_CheckBanPlayer_Params
{
public:
	bool                                         CallFunc_IsExistPlayer_ReturnValue;                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x51 (0x51 - 0x0)
// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OnCloseChangeAdminDialog
struct UWBP_Guild_ForDisplay_C_OnCloseChangeAdminDialog_Params
{
public:
	bool                                         bResult;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_555A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_555C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x28(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x30(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_555F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Guild_MemberList_C*               K2Node_DynamicCast_AsWBP_Guild_Member_List;        // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF0 (0xF0 - 0x0)
// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OpenChangeAdminDialog
struct UWBP_Guild_ForDisplay_C_OpenChangeAdminDialog_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x10(0x18)(None)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5561[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Guild_MemberList_C*               K2Node_DynamicCast_AsWBP_Guild_Member_List;        // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5562[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalUIGuildMemberDisplayInfo          CallFunc_GetDisplayInfo_DisplayInfo;               // 0x48(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x60(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x78(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xC8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xD8(0x18)(None)
};

// 0x51 (0x51 - 0x0)
// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OnCloseBanPlayerDialog
struct UWBP_Guild_ForDisplay_C_OnCloseBanPlayerDialog_Params
{
public:
	bool                                         bResult;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_556B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_556C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x30(0x8)(NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_556D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Guild_MemberList_C*               K2Node_DynamicCast_AsWBP_Guild_Member_List;        // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF0 (0xF0 - 0x0)
// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OpenBanPlayerDialog
struct UWBP_Guild_ForDisplay_C_OpenBanPlayerDialog_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x10(0x18)(None)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_556F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Guild_MemberList_C*               K2Node_DynamicCast_AsWBP_Guild_Member_List;        // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5577[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalUIGuildMemberDisplayInfo          CallFunc_GetDisplayInfo_DisplayInfo;               // 0x48(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x60(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x78(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xC8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xD8(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.CloseMemberSettingWindow
struct UWBP_Guild_ForDisplay_C_CloseMemberSettingWindow_Params
{
public:
	class UWidget*                               CallFunc_GetTopMemberFocusTarget_TopButton;        // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Guild_MemberList_C*               K2Node_DynamicCast_AsWBP_Guild_Member_List;        // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5579[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetFocusTarget_TargetWidget;              // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OnTimer_CheckNewGroup_WaitingExitGuild
struct UWBP_Guild_ForDisplay_C_OnTimer_CheckNewGroup_WaitingExitGuild_Params
{
public:
	class UPalGroupGuildBase*                    CallFunc_GetMyGuild_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x51 (0x51 - 0x0)
// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OnUpdateGroupId_WaitingExitGuild
struct UWBP_Guild_ForDisplay_C_OnUpdateGroupId_WaitingExitGuild_Params
{
public:
	struct FGuid                                 NewGroupId;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x30(0x8)(NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                   CallFunc_GetPalmi_ReturnValue;                     // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_557E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalIndividualCharacterParameter*      CallFunc_GetIndividualCharacterParameterByActor_ReturnValue; // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OnClosed_GuildExitDialog
struct UWBP_Guild_ForDisplay_C_OnClosed_GuildExitDialog_Params
{
public:
	bool                                         bResult;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5582[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5583[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalPlayerCharacter*                   CallFunc_GetPalmi_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5584[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalIndividualCharacterParameter*      CallFunc_GetIndividualCharacterParameterByActor_ReturnValue; // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5585[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x34(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5586[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x48(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OnClosed_GuildExitFailedDialog_Admin
struct UWBP_Guild_ForDisplay_C_OnClosed_GuildExitFailedDialog_Admin_Params
{
public:
	bool                                         bResult;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OpenExitGuildDialog
struct UWBP_Guild_ForDisplay_C_OpenExitGuildDialog_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x10(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAdminLocalPlayer_ReturnValue;           // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5588[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x40(0x18)(None)
	bool                                         CallFunc_CanExitGuild_ReturnValue;                 // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OnUpdatedGuildName
struct UWBP_Guild_ForDisplay_C_OnUpdatedGuildName_Params
{
public:
	class FString                                NewGuildName;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x10(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x28(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x78(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x88(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.BP_GetDesiredFocusTarget
struct UWBP_Guild_ForDisplay_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetTopFocusTarget_TargetWidget;           // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetTopMemberFocusTarget_TopButton;        // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x7C (0x7C - 0x0)
// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.SetupGuildLogCategoryButton
struct UWBP_Guild_ForDisplay_C_SetupGuildLogCategoryButton_Params
{
public:
	TArray<class FString>                        TmpCategoryString;                                 // 0x0(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_558E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class E_PalUIGuildMenuLogCategory> CallFunc_Map_Keys_Keys;                            // 0x20(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_PalUIGuildMenuLogCategory       CallFunc_Array_Get_Item;                           // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_558F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_Map_Find_Value;                           // 0x38(0x10)(NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5590[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x50(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.Setup
struct UWBP_Guild_ForDisplay_C_Setup_Params
{
public:
	bool                                         CallFunc_IsAdminLocalPlayer_ReturnValue;           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5591[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalOptionSubsystem*                   CallFunc_GetOptionSubsystem_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalOptionWorldSettings               CallFunc_GetOptionWorldSettings_ReturnValue;       // 0x10(0x128)(ConstParm)
	TMap<struct FGuid, struct FPalUIGuildMemberDisplayInfo> CallFunc_GetGuildMemberInfo_OutDisplayInfoMap;     // 0x138(0x50)(None)
	int32                                        CallFunc_Map_Length_ReturnValue;                   // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x18C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x18D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x18E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5592[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetGuildName_OutGuildName;                // 0x190(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.Tick
struct UWBP_Guild_ForDisplay_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_3_OnClickedGuildMemberButton__DelegateSignature
struct UWBP_Guild_ForDisplay_C_BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_3_OnClickedGuildMemberButton__DelegateSignature_Params
{
public:
	class UWBP_Guild_MemberList_C*               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_2_OnCommiedGuildName__DelegateSignature
struct UWBP_Guild_ForDisplay_C_BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_2_OnCommiedGuildName__DelegateSignature_Params
{
public:
	class FString                                NewName;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OnUpdatedMemberInfo
struct UWBP_Guild_ForDisplay_C_OnUpdatedMemberInfo_Params
{
public:
	struct FGuid                                 PlayerUId;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalUIGuildMemberDisplayInfo          PlayerInfo;                                        // 0x10(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.OnRemovedMemberInfo
struct UWBP_Guild_ForDisplay_C_OnRemovedMemberInfo_Params
{
public:
	struct FGuid                                 PlayerUId;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A4 (0x2A4 - 0x0)
// Function WBP_Guild_ForDisplay.WBP_Guild_ForDisplay_C.ExecuteUbergraph_WBP_Guild_ForDisplay
struct UWBP_Guild_ForDisplay_C_ExecuteUbergraph_WBP_Guild_ForDisplay_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUGCFilter_ReturnValue;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5599[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_NewName;                // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetGuildName_OutGuildName;                // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_559A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 K2Node_Event_PlayerUId_1;                          // 0x2C(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_559C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalUIGuildMemberDisplayInfo          K2Node_Event_PlayerInfo;                           // 0x40(0x18)(ConstParm)
	struct FGuid                                 K2Node_Event_PlayerUId;                            // 0x58(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetTopFocusTarget_TargetWidget;           // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAdminLocalPlayer_ReturnValue;           // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_559E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Guild_MemberList_C*               K2Node_ComponentBoundEvent_Widget;                 // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UWBP_Guild_MemberList_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x80(0x30)(InstancedReference, UObjectWrapper, HasGetValueTypeHash)
	struct FPalUIGuildMemberDisplayInfo          CallFunc_GetDisplayInfo_DisplayInfo;               // 0xB0(0x18)(None)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0xC8(0x40)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_GetLocalPlayerUID_ReturnValue;            // 0x10C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_GuidGuid_ReturnValue;            // 0x11C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_559F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalOptionSubsystem*                   CallFunc_GetOptionSubsystem_ReturnValue;           // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGuid, struct FPalUIGuildMemberDisplayInfo> CallFunc_GetGuildMemberInfo_OutDisplayInfoMap;     // 0x128(0x50)(None)
	struct FPalOptionWorldSettings               CallFunc_GetOptionWorldSettings_ReturnValue;       // 0x178(0x128)(ConstParm)
	int32                                        CallFunc_Map_Length_ReturnValue;                   // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


