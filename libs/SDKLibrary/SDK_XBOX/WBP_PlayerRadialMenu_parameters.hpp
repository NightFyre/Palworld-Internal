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

// 0x1 (0x1 - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.IsAnyMenuOpened
struct UWBP_PlayerRadialMenu_C_IsAnyMenuOpened_Params
{
public:
	bool                                         IsOpened;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.SetInteractEnable
struct UWBP_PlayerRadialMenu_C_SetInteractEnable_Params
{
public:
	bool                                         IsInteractEnable;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalPlayerCharacter*                   CallFunc_GetPalmi_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalInteractComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.HasConstructionMenu
struct UWBP_PlayerRadialMenu_C_HasConstructionMenu_Params
{
public:
	bool                                         HasMenu;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.IsPlayerRiding
struct UWBP_PlayerRadialMenu_C_IsPlayerRiding_Params
{
public:
	bool                                         IsRiding;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetLocalPlayerController_ReturnValue;     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                  K2Node_DynamicCast_AsPal_Player_Controller;        // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRiding_ReturnValue;                     // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.CloseConstructionMenu
struct UWBP_PlayerRadialMenu_C_CloseConstructionMenu_Params
{
public:
	class UWBP_IngameMenuConstruction_Radial_C*  Menu;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        FindIndex;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalHUDService*                        CallFunc_GetHUDService_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveChild_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.CreateConstructionMenu
struct UWBP_PlayerRadialMenu_C_CreateConstructionMenu_Params
{
public:
	class UWBP_IngameMenuConstruction_Radial_C*  CreatedWidget;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue;             // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetLocalPlayerController_ReturnValue;     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                              K2Node_MakeStruct_Anchors;                         // 0x18(0x20)(NoDestructor)
	class UWBP_IngameMenuConstruction_Radial_C*  CallFunc_Create_ReturnValue;                       // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x42 (0x42 - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OpenConstructionMenu
struct UWBP_PlayerRadialMenu_C_OpenConstructionMenu_Params
{
public:
	class FName                                  SelectMapObjectId;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SelectedIndex;                                     // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5600[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalHUDService*                        CallFunc_GetHUDService_ReturnValue;                // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasConstructionMenu_HasMenu;              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5601[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_IngameMenuConstruction_Radial_C*  CallFunc_CreateConstructionMenu_createdWidget;     // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayerRiding_IsRiding;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x51 (0x51 - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnDecidedEmoteMenu
struct UWBP_PlayerRadialMenu_C_OnDecidedEmoteMenu_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5605[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                EmoteAction;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5606[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalPlayerCharacter*                   CallFunc_GetPalmi_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5607[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalActionComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                        CallFunc_PlayAction_ReturnValue;                   // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                        CallFunc_GetCurrentAction_ReturnValue;             // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5608[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x118 (0x118 - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.CreateEmoteMenu
struct UWBP_PlayerRadialMenu_C_CreateEmoteMenu_Params
{
public:
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0(0x18)(None)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x18(0x18)(None)
	class UWBP_PlayerRadialMenu_MenuContent_C*   CallFunc_CreateInstructionsAdditionalWidget_createdWidget; // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PlayerRadialMenu_MenuContent_C*   CallFunc_CreateInstructionsAdditionalWidget_createdWidget_1; // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_2;        // 0x40(0x18)(None)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_3;        // 0x58(0x18)(None)
	class UWBP_PlayerRadialMenu_MenuContent_C*   CallFunc_CreateInstructionsAdditionalWidget_createdWidget_2; // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PlayerRadialMenu_MenuContent_C*   CallFunc_CreateInstructionsAdditionalWidget_createdWidget_3; // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_Set_Additional_Widget_Canvas;             // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_Set_Additional_Widget_Canvas_1;           // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_Set_Additional_Widget_Canvas_2;           // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_Set_Additional_Widget_Canvas_3;           // 0x98(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_4;        // 0xA0(0x18)(None)
	class UWBP_PlayerRadialMenu_MenuContent_C*   CallFunc_CreateInstructionsAdditionalWidget_createdWidget_4; // 0xB8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_Set_Additional_Widget_Canvas_4;           // 0xC0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_5;        // 0xC8(0x18)(None)
	class UWBP_PlayerRadialMenu_MenuContent_C*   CallFunc_CreateInstructionsAdditionalWidget_createdWidget_5; // 0xE0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_Set_Additional_Widget_Canvas_5;           // 0xE8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_6;        // 0xF0(0x18)(None)
	class UWBP_PlayerRadialMenu_MenuContent_C*   CallFunc_CreateInstructionsAdditionalWidget_createdWidget_6; // 0x108(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_Set_Additional_Widget_Canvas_6;           // 0x110(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.Open Emote Menu
struct UWBP_PlayerRadialMenu_C_Open_Emote_Menu_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnPlayerRideOn
struct UWBP_PlayerRadialMenu_C_OnPlayerRideOn_Params
{
public:
	class AActor*                                RideActor;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x170 (0x170 - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnDecidedInstruction_Care
struct UWBP_PlayerRadialMenu_C_OnDecidedInstruction_Care_Params
{
public:
	enum class EPalActionType                    HumanAction;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5613[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalPlayerCharacter*                   CallFunc_GetPalmi_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                        CallFunc_GetCurrentAction_ReturnValue;             // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5614[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_ActionPairStandby_Petting_C*       K2Node_DynamicCast_AsBP_Action_Pair_Standby_Petting; // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5615[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_ActionCutPalMeat_Player_C*         K2Node_DynamicCast_AsBP_Action_Cut_Pal_Meat_Player; // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5616[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalPlayerCharacter*                   CallFunc_GetPalmi_ReturnValue_1;                   // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                   CallFunc_GetPalmi_ReturnValue_2;                   // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalWeaponBase*                        CallFunc_GetHasWeapon_ReturnValue;                 // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_MeatCutterKnife_C*                 K2Node_DynamicCast_AsBP_Meat_Cutter_Knife;         // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5617[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalOtomoHolderComponentBase*          CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_TryGetSpawnedOtomo_ReturnValue;           // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FActionDynamicParameter               K2Node_MakeStruct_ActionDynamicParameter;          // 0x80(0xE0)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5618[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalActionBase*                        CallFunc_PlayActionByTypeParameter_ReturnValue;    // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnDecidedInstruction_Feed
struct UWBP_PlayerRadialMenu_C_OnDecidedInstruction_Feed_Params
{
public:
	class UPalOtomoHolderComponentBase*          CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5619[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         CallFunc_TryGetSpawnedOtomo_ReturnValue;           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnDecidedPlayerActionMenu
struct UWBP_PlayerRadialMenu_C_OnDecidedPlayerActionMenu_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_561A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalOtomoHolderComponentBase*          CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalOtomoHolderComponentBase*          CallFunc_GetOtomoHolderComponent_ReturnValue_1;    // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalOtomoHolderComponentBase*          CallFunc_GetOtomoHolderComponent_ReturnValue_2;    // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.UnbindPlayerActionMenuEvent
struct UWBP_PlayerRadialMenu_C_UnbindPlayerActionMenuEvent_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalOtomoHolderComponentBase*          CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x28(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_OtomoPalHolderComponent_C*         K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component; // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5621[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalPlayerCharacter*                   CallFunc_GetPalmi_ReturnValue;                     // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.BindPlayerActionMenuEvent
struct UWBP_PlayerRadialMenu_C_BindPlayerActionMenuEvent_Params
{
public:
	class APalPlayerCharacter*                   CallFunc_GetPalmi_ReturnValue;                     // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x18(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x28(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalOtomoHolderComponentBase*          CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_OtomoPalHolderComponent_C*         K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component; // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.CreateInstructionsAdditionalWidget
struct UWBP_PlayerRadialMenu_C_CreateInstructionsAdditionalWidget_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWBP_PlayerRadialMenu_MenuContent_C*   CreatedWidget;                                     // 0x18(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetLocalPlayerController_ReturnValue;     // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PlayerRadialMenu_MenuContent_C*   CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnDamagedPlayer
struct UWBP_PlayerRadialMenu_C_OnDamagedPlayer_Params
{
public:
	struct FPalDamageResult                      DamageResult;                                      // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.CloseSetup
struct UWBP_PlayerRadialMenu_C_CloseSetup_Params
{
public:
	class APalPlayerCharacter*                   CallFunc_GetPalmi_ReturnValue;                     // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetLocalPlayerController_ReturnValue;     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                  K2Node_DynamicCast_AsPal_Player_Controller;        // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.CloseMenu
struct UWBP_PlayerRadialMenu_C_CloseMenu_Params
{
public:
	class UPalHUDService*                        CallFunc_GetHUDService_ReturnValue;                // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasConstructionMenu_HasMenu;              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x318 (0x318 - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.CreatePlayerActionMenu
struct UWBP_PlayerRadialMenu_C_CreatePlayerActionMenu_Params
{
public:
	struct FDataTableRowHandle                   TmpMsgID;                                          // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor)
	class FString                                OtomoNickName;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FSlateColor                           TextColor_NothingOtomo;                            // 0x20(0x14)(Edit, BlueprintVisible)
	uint8                                        Pad_5624[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalCharacter*                         SpawnedOtomo;                                      // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOtomoActivated;                                  // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5625[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x48(0x18)(None)
	class APalPlayerCharacter*                   CallFunc_GetPalmi_ReturnValue;                     // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x68(0x18)(None)
	class APalWeaponBase*                        CallFunc_GetHasWeapon_ReturnValue;                 // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PlayerRadialMenu_MenuContent_C*   CallFunc_CreateInstructionsAdditionalWidget_createdWidget; // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_MeatCutterKnife_C*                 K2Node_DynamicCast_AsBP_Meat_Cutter_Knife;         // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5626[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      CallFunc_Set_Additional_Widget_Canvas;             // 0xA0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_2;        // 0xA8(0x18)(None)
	class UWBP_PlayerRadialMenu_MenuContent_C*   CallFunc_CreateInstructionsAdditionalWidget_createdWidget_1; // 0xC0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_Set_Additional_Widget_Canvas_1;           // 0xC8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_3;        // 0xD0(0x18)(None)
	class UWBP_PlayerRadialMenu_MenuContent_C*   CallFunc_CreateInstructionsAdditionalWidget_createdWidget_2; // 0xE8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_Set_Additional_Widget_Canvas_2;           // 0xF0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_4;        // 0xF8(0x18)(None)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_5;        // 0x110(0x18)(None)
	class UWBP_PlayerRadialMenu_MenuContent_C*   CallFunc_CreateInstructionsAdditionalWidget_createdWidget_3; // 0x128(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PlayerRadialMenu_MenuContent_C*   CallFunc_CreateInstructionsAdditionalWidget_createdWidget_4; // 0x130(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_Set_Additional_Widget_Canvas_3;           // 0x138(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x140(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x158(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x1A8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x1B8(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1D0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x1E8(0x50)(HasGetValueTypeHash)
	class UWBP_PlayerRadialMenu_MenuContent_C*   CallFunc_CreateInstructionsAdditionalWidget_createdWidget_5; // 0x238(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x240(0x10)(ReferenceParm)
	class UCanvasPanelSlot*                      CallFunc_Set_Additional_Widget_Canvas_4;           // 0x250(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_6;        // 0x258(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x270(0x18)(None)
	class UWBP_PlayerRadialMenu_MenuContent_C*   CallFunc_CreateInstructionsAdditionalWidget_createdWidget_6; // 0x288(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_Set_Additional_Widget_Canvas_5;           // 0x290(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_Set_Additional_Widget_Canvas_6;           // 0x298(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalOtomoHolderComponentBase*          CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x2A0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5627[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_7;        // 0x2B0(0x18)(None)
	class UWBP_PlayerRadialMenu_MenuContent_C*   CallFunc_CreateInstructionsAdditionalWidget_createdWidget_7; // 0x2C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_TryGetSpawnedOtomo_ReturnValue;           // 0x2D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5628[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalCharacterParameterComponent*       CallFunc_GetCharacterParameterComponent_ReturnValue; // 0x2E0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x2E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5629[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalIndividualCharacterParameter*      CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x2F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_562A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetNickName_outName;                      // 0x300(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_Set_Additional_Widget_Canvas_7;           // 0x310(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x2A (0x2A - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.CanOpenPlayerActionMenu
struct UWBP_PlayerRadialMenu_C_CanOpenPlayerActionMenu_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_562B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalPlayerCharacter*                   CallFunc_GetPalmi_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsExecuting_ReturnValue;                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_562C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetLocalPlayerController_ReturnValue;     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                  K2Node_DynamicCast_AsPal_Player_Controller;        // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsRiding_ReturnValue;                     // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OpenSetup
struct UWBP_PlayerRadialMenu_C_OpenSetup_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                   CallFunc_GetPalmi_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x18(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetLocalPlayerController_ReturnValue;     // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                  K2Node_DynamicCast_AsPal_Player_Controller;        // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OpenMenu
struct UWBP_PlayerRadialMenu_C_OpenMenu_Params
{
public:
	class UPalHUDService*                        CallFunc_GetHUDService_ReturnValue;                // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OpenPlayerActionMenu
struct UWBP_PlayerRadialMenu_C_OpenPlayerActionMenu_Params
{
public:
	bool                                         CallFunc_CanOpenPlayerActionMenu_Result;           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_562D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_562E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalOtomoHolderComponentBase*          CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_562F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetSpawnedOtomoID_ReturnValue;            // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         CallFunc_TryGetSpawnedOtomo_ReturnValue;           // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.OnPushedAnyWidget
struct UWBP_PlayerRadialMenu_C_OnPushedAnyWidget_Params
{
public:
	struct FGuid                                 PushedWidgetID;                                    // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC2 (0xC2 - 0x0)
// Function WBP_PlayerRadialMenu.WBP_PlayerRadialMenu_C.ExecuteUbergraph_WBP_PlayerRadialMenu
struct UWBP_PlayerRadialMenu_C_ExecuteUbergraph_WBP_PlayerRadialMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5630[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalHUDService*                        CallFunc_GetHUDService_ReturnValue;                // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                   CallFunc_GetPalmi_ReturnValue;                     // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5631[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalRiderComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5632[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x4C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5633[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetLocalPlayerController_ReturnValue;     // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x68(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5634[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalPlayerController*                  K2Node_DynamicCast_AsPal_Player_Controller;        // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5635[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetLocalPlayerController_ReturnValue_1;   // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5636[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APalPlayerController*                  K2Node_DynamicCast_AsPal_Player_Controller_1;      // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5637[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetLocalPlayerController_ReturnValue_2;   // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerController*                  K2Node_DynamicCast_AsPal_Player_Controller_2;      // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


