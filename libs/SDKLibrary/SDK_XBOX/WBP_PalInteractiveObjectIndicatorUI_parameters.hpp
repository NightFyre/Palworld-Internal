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
// Function WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C.SetEnable
struct UWBP_PalInteractiveObjectIndicatorUI_C_SetEnable_Params
{
public:
	bool                                         IsEnable;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C.RegisterAction
struct UWBP_PalInteractiveObjectIndicatorUI_C_RegisterAction_Params
{
public:
	bool                                         IsInputConsume;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1943[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalUserWidget*                        Parent;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  ActionName;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1946[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x2C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    CallFunc_Map_Find_Value;                           // 0x3C(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1947[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_ReturnValue;        // 0x48(0x4)(NoDestructor)
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_ReturnValue_1;      // 0x4C(0x4)(NoDestructor)
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_NotConcume_ReturnValue; // 0x50(0x4)(NoDestructor)
	struct FPalUIActionBindData                  CallFunc_RegisterActionBinding_NotConcume_ReturnValue_1; // 0x54(0x4)(NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C.UpdateButtonType
struct UWBP_PalInteractiveObjectIndicatorUI_C_UpdateButtonType_Params
{
public:
	enum class EPalInteractiveObjectButtonType   NewButtonType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_194F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       NewLongPushTime;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsValidInteract;                                   // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C.Unregister Action
struct UWBP_PalInteractiveObjectIndicatorUI_C_Unregister_Action_Params
{
public:
	class UPalUserWidget*                        Parent;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C.EndTriggerInteract
struct UWBP_PalInteractiveObjectIndicatorUI_C_EndTriggerInteract_Params
{
public:
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalInteractComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInteracting_ReturnValue;                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C.StartTriggerInteract
struct UWBP_PalInteractiveObjectIndicatorUI_C_StartTriggerInteract_Params
{
public:
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalInteractComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C.Deactivate
struct UWBP_PalInteractiveObjectIndicatorUI_C_Deactivate_Params
{
public:
	class UPalUserWidget*                        Parent;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  ActionName;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C.Activate
struct UWBP_PalInteractiveObjectIndicatorUI_C_Activate_Params
{
public:
	bool                                         IsInputConsume;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1965[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalUserWidget*                        Parent;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C.Update Interactable
struct UWBP_PalInteractiveObjectIndicatorUI_C_Update_Interactable_Params
{
public:
	bool                                         bInteractable;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_196B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalUserWidget*                        Parent;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C.UpdateVisible
struct UWBP_PalInteractiveObjectIndicatorUI_C_UpdateVisible_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x118 (0x118 - 0x0)
// Function WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C.UpdateText
struct UWBP_PalInteractiveObjectIndicatorUI_C_UpdateText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         IsLockedByRide;                                    // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1977[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x20(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x70(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x88(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xD8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xE8(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x100(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function WBP_PalInteractiveObjectIndicatorUI.WBP_PalInteractiveObjectIndicatorUI_C.Setup
struct UWBP_PalInteractiveObjectIndicatorUI_C_Setup_Params
{
public:
	enum class EPalInteractiveObjectActionType   ActionType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_197E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IPalInteractiveObjectComponentInterface> Interface;                                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


