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
// Function WBP_TechnologyUI.WBP_TechnologyUI_C.On Unlocked Any Technology
struct UWBP_TechnologyUI_C_On_Unlocked_Any_Technology_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_TechnologyUI.WBP_TechnologyUI_C.BP_GetDesiredFocusTarget
struct UWBP_TechnologyUI_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetTopFocusTarget_Target;                 // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1B (0x1B - 0x0)
// Function WBP_TechnologyUI.WBP_TechnologyUI_C.OnUnhoveredTechnology
struct UWBP_TechnologyUI_C_OnUnhoveredTechnology_Params
{
public:
	class UWBP_MainMenu_Technology_Content_C*    Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetBindedTechnologyName_technologyName;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalTechnologyData*                    CallFunc_GetLocalTechnologyData_ReturnValue;       // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsExistNewUnlockedTechnology_ReturnValue; // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsNewUnlockedTechnology_ReturnValue;      // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function WBP_TechnologyUI.WBP_TechnologyUI_C.OnHoveredTechnology
struct UWBP_TechnologyUI_C_OnHoveredTechnology_Params
{
public:
	class UWBP_MainMenu_Technology_Content_C*    Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetBindedTechnologyName_technologyName;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x309 (0x309 - 0x0)
// Function WBP_TechnologyUI.WBP_TechnologyUI_C.OnMouseMove
struct UWBP_TechnologyUI_C_OnMouseMove_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x40(0x98)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xD8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x190(0xB8)(None)
	bool                                         CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1; // 0x249(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54EF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x250(0xB8)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_TechnologyUI.WBP_TechnologyUI_C.On Close Dialog
struct UWBP_TechnologyUI_C_On_Close_Dialog_Params
{
public:
	bool                                         bResult;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54F0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalTechnologyData*                    CallFunc_GetLocalTechnologyData_ReturnValue;       // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetBindedTechnologyName_technologyName;   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x120 (0x120 - 0x0)
// Function WBP_TechnologyUI.WBP_TechnologyUI_C.OnClickedTechnology
struct UWBP_TechnologyUI_C_OnClickedTechnology_Params
{
public:
	class UWBP_MainMenu_Technology_Content_C*    Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalTechnologyData*                    CallFunc_GetLocalTechnologyData_ReturnValue;       // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetBindedTechnologyName_technologyName;   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalTechnologyDataTableRowBase        CallFunc_GetTechlonogyBaseData_ReturnValue;        // 0x18(0x40)(ConstParm)
	bool                                         CallFunc_IsUnlockableRecipeTechnology_ReturnValue; // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLocalizedText_ReturnValue;             // 0x60(0x18)(None)
	bool                                         CallFunc_IsUnlockRecipeTechnology_ReturnValue;     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x80(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xD0(0x10)(ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xE0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetLocalizedText_ReturnValue_1;           // 0xF0(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x108(0x18)(None)
};

// 0x9 (0x9 - 0x0)
// Function WBP_TechnologyUI.WBP_TechnologyUI_C.Setup
struct UWBP_TechnologyUI_C_Setup_Params
{
public:
	class UWidget*                               CallFunc_GetTopUnlockableFocusTarget_Target;       // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function WBP_TechnologyUI.WBP_TechnologyUI_C.Tick
struct UWBP_TechnologyUI_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_TechnologyUI.WBP_TechnologyUI_C.BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_3_OnClickedTchnology__DelegateSignature
struct UWBP_TechnologyUI_C_BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_3_OnClickedTchnology__DelegateSignature_Params
{
public:
	class UWBP_MainMenu_Technology_Content_C*    Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_TechnologyUI.WBP_TechnologyUI_C.BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_4_OnHoveredTechnology__DelegateSignature
struct UWBP_TechnologyUI_C_BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_4_OnHoveredTechnology__DelegateSignature_Params
{
public:
	class UWBP_MainMenu_Technology_Content_C*    Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_TechnologyUI.WBP_TechnologyUI_C.BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_5_OnUnhoveredTechnology__DelegateSignature
struct UWBP_TechnologyUI_C_BndEvt__WBP_TechnologyUI_WBP_MainMenu_Technology_00_K2Node_ComponentBoundEvent_5_OnUnhoveredTechnology__DelegateSignature_Params
{
public:
	class UWBP_MainMenu_Technology_Content_C*    Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8A (0x8A - 0x0)
// Function WBP_TechnologyUI.WBP_TechnologyUI_C.ExecuteUbergraph_WBP_TechnologyUI
struct UWBP_TechnologyUI_C_ExecuteUbergraph_WBP_TechnologyUI_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x18(0x40)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54F6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_MainMenu_Technology_Content_C*    K2Node_ComponentBoundEvent_Widget_2;               // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_MainMenu_Technology_Content_C*    K2Node_ComponentBoundEvent_Widget_1;               // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_MainMenu_Technology_Content_C*    K2Node_ComponentBoundEvent_Widget;                 // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalTechnologyData*                    CallFunc_GetLocalTechnologyData_ReturnValue;       // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_TechnologyUI.WBP_TechnologyUI_C.OnAllClearedNewFlag__DelegateSignature
struct UWBP_TechnologyUI_C_OnAllClearedNewFlag__DelegateSignature_Params
{
public:
	enum class EPalUIInGameMainMenuTabType       Tab;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


