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

// 0x18 (0x18 - 0x0)
// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.OpenChat
struct UWBP_PalHUD_InGame_InputListener_C_OpenChat_Params
{
public:
	bool                                         CallFunc_CanChat_Result;                           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F6C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_ReturnValue;        // 0x14(0x4)(NoDestructor)
};

// 0x13 (0x13 - 0x0)
// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.CanOpenAnyUI
struct UWBP_PalHUD_InGame_InputListener_C_CanOpenAnyUI_Params
{
public:
	bool                                         CanOpenUI;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F6E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalPlayerCharacter*                   CallFunc_GetPalmi_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDead_ReturnValue;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.OpenBuildRadialMenuWithSelectedIndex
struct UWBP_PalHUD_InGame_InputListener_C_OpenBuildRadialMenuWithSelectedIndex_Params
{
public:
	int32                                        SelectedIndex;                                     // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanOpenAnyUI_CanOpenUI;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.OpenBuildRadialMenu
struct UWBP_PalHUD_InGame_InputListener_C_OpenBuildRadialMenu_Params
{
public:
	class FName                                  BuildObjectId;                                     // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalBuildObjectTypeA              SelectObjectType;                                  // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanOpenAnyUI_CanOpenUI;                   // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.OnTriggerWorldMap
struct UWBP_PalHUD_InGame_InputListener_C_OnTriggerWorldMap_Params
{
public:
	bool                                         CallFunc_CanOpenAnyUI_CanOpenUI;                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F6F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalHUDService*                        CallFunc_GetHUDService_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDDispatchParameter_WorldMap*     CallFunc_SpawnObject_ReturnValue;                  // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                        CallFunc_GetHUDService_ReturnValue_1;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_ShowCommonUI_ReturnValue;                 // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.SetupInputAction
struct UWBP_PalHUD_InGame_InputListener_C_SetupInputAction_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_ReturnValue;        // 0x10(0x4)(NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_ReturnValue_1;      // 0x24(0x4)(NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x28(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_ReturnValue_2;      // 0x38(0x4)(NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x3C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x4C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_ReturnValue_3;      // 0x5C(0x4)(NoDestructor)
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_ReturnValue_4;      // 0x60(0x4)(NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x64(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_ReturnValue_5;      // 0x74(0x4)(NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.OpenBuildMenu
struct UWBP_PalHUD_InGame_InputListener_C_OpenBuildMenu_Params
{
public:
	int32                                        BuildObjectTypeA;                                  // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalBuildObjectTypeA              CallFunc_ToBuildObjectTypeA_ReturnValue;           // 0x5(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.OpenMenu_Internal
struct UWBP_PalHUD_InGame_InputListener_C_OpenMenu_Internal_Params
{
public:
	enum class EPalUIInGameMainMenuTabType       TabType;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalBuildObjectTypeA              BuildObjectTypeA;                                  // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanOpenAnyUI_CanOpenUI;                   // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F89[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalHUDService*                        CallFunc_GetHUDService_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_InGameMainMenuParameter_C*         CallFunc_SpawnObject_ReturnValue;                  // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_Push_ReturnValue;                         // 0x18(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.OnTriggerEscape
struct UWBP_PalHUD_InGame_InputListener_C_OnTriggerEscape_Params
{
public:
	bool                                         CallFunc_IsAnyMenuOpened_IsOpened;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.Tick
struct UWBP_PalHUD_InGame_InputListener_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function WBP_PalHUD_InGame_InputListener.WBP_PalHUD_InGame_InputListener_C.ExecuteUbergraph_WBP_PalHUD_InGame_InputListener
struct UWBP_PalHUD_InGame_InputListener_C_ExecuteUbergraph_WBP_PalHUD_InGame_InputListener_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F8A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x8(0x40)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F8B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalDebugSetting*                      CallFunc_GetPalDebugSetting_ReturnValue;           // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F8C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x5C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_ReturnValue;        // 0x6C(0x4)(NoDestructor)
};

}
}


