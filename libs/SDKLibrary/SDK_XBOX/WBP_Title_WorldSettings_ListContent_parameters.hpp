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

// 0x30 (0x30 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.GetButtonText
struct UWBP_Title_WorldSettings_ListContent_C_GetButtonText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm, OutParm)
	class FText                                  CallFunc_GetButtonText_ButtonText;                 // 0x18(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.SetButtonText
struct UWBP_Title_WorldSettings_ListContent_C_SetButtonText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x4 (0x4 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.Set Name Select Index
struct UWBP_Title_WorldSettings_ListContent_C_Set_Name_Select_Index_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.GetSelectNameIndex
struct UWBP_Title_WorldSettings_ListContent_C_GetSelectNameIndex_Params
{
public:
	int32                                        NowIndex;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentIndex_Index;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.SetupFloatValue
struct UWBP_Title_WorldSettings_ListContent_C_SetupFloatValue_Params
{
public:
	double                                       NowValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinValue;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxValue;                                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.SetupIntValue
struct UWBP_Title_WorldSettings_ListContent_C_SetupIntValue_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Min;                                               // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Max;                                               // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.SetEnableCautionMark
struct UWBP_Title_WorldSettings_ListContent_C_SetEnableCautionMark_Params
{
public:
	bool                                         IsEnableMark;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.GetInputText
struct UWBP_Title_WorldSettings_ListContent_C_GetInputText_Params
{
public:
	class FString                                InputTextString;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x10(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.IsEditingText
struct UWBP_Title_WorldSettings_ListContent_C_IsEditingText_Params
{
public:
	bool                                         IsEditing;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyUserFocus_ReturnValue;              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasKeyboardFocus_ReturnValue;             // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.IsOn
struct UWBP_Title_WorldSettings_ListContent_C_IsOn_Params
{
public:
	bool                                         IsOn;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsOn_IsOn;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.SetupSelectString
struct UWBP_Title_WorldSettings_ListContent_C_SetupSelectString_Params
{
public:
	TArray<class FString>                        SelectStrings;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        DefaultSelectIndex;                                // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.SetupTextInput
struct UWBP_Title_WorldSettings_ListContent_C_SetupTextInput_Params
{
public:
	class FString                                DefaultString;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x10(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.OnClickedInternal
struct UWBP_Title_WorldSettings_ListContent_C_OnClickedInternal_Params
{
public:
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.CustomNavi_ToRight
struct UWBP_Title_WorldSettings_ListContent_C_CustomNavi_ToRight_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B6C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsOn_IsOn;                                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.CustomNavi_ToLeft
struct UWBP_Title_WorldSettings_ListContent_C_CustomNavi_ToLeft_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B6D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsOn_IsOn;                                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.SetupOnOff
struct UWBP_Title_WorldSettings_ListContent_C_SetupOnOff_Params
{
public:
	bool                                         IsOn;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.InitializeInternal
struct UWBP_Title_WorldSettings_ListContent_C_InitializeInternal_Params
{
public:
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0(0x18)(None)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x18(0x18)(None)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B73[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x48(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x60(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xC0(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.AnmEvent_SetEnableBuutton
struct UWBP_Title_WorldSettings_ListContent_C_AnmEvent_SetEnableBuutton_Params
{
public:
	bool                                         IsEnableButton;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.BndEvt__WBP_Title_WorldSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
struct UWBP_Title_WorldSettings_ListContent_C_BndEvt__WBP_Title_WorldSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.BndEvt__WBP_Title_WorldSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
struct UWBP_Title_WorldSettings_ListContent_C_BndEvt__WBP_Title_WorldSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.BndEvt__WBP_Title_WorldSettings_ListContent_WBP_OptionSettings_ListContentSwitch_K2Node_ComponentBoundEvent_3_OnSwitcherChanged__DelegateSignature
struct UWBP_Title_WorldSettings_ListContent_C_BndEvt__WBP_Title_WorldSettings_ListContent_WBP_OptionSettings_ListContentSwitch_K2Node_ComponentBoundEvent_3_OnSwitcherChanged__DelegateSignature_Params
{
public:
	bool                                         IsOn;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.BndEvt__WBP_Title_WorldSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
struct UWBP_Title_WorldSettings_ListContent_C_BndEvt__WBP_Title_WorldSettings_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.BndEvt__WBP_Title_WorldSettings_ListContent_EditableTextBox_46_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UWBP_Title_WorldSettings_ListContent_C_BndEvt__WBP_Title_WorldSettings_ListContent_EditableTextBox_46_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.BndEvt__WBP_Title_WorldSettings_ListContent_EditableTextBox_46_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature
struct UWBP_Title_WorldSettings_ListContent_C_BndEvt__WBP_Title_WorldSettings_ListContent_EditableTextBox_46_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x4 (0x4 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.BndEvt__WBP_Title_WorldSettings_ListContent_WBP_OptionSettings_ListContentLR_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature
struct UWBP_Title_WorldSettings_ListContent_C_BndEvt__WBP_Title_WorldSettings_ListContent_WBP_OptionSettings_ListContentLR_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature_Params
{
public:
	int32                                        Selection;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.BndEvt__WBP_Title_WorldSettings_ListContent_WBP_OptionSettings_ListContentSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature
struct UWBP_Title_WorldSettings_ListContent_C_BndEvt__WBP_Title_WorldSettings_ListContent_WBP_OptionSettings_ListContentSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature_Params
{
public:
	double                                       Value;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.PreConstruct
struct UWBP_Title_WorldSettings_ListContent_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x178 (0x178 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.ExecuteUbergraph_WBP_Title_WorldSettings_ListContent
struct UWBP_Title_WorldSettings_ListContent_C_ExecuteUbergraph_WBP_Title_WorldSettings_ListContent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUMGSequencePlayMode              Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUMGSequencePlayMode              Temp_byte_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_isEnableButton;                 // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUMGSequencePlayMode              K2Node_Select_Default;                             // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B74[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_2;               // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_1;               // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_IsOn;                   // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B75[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_ComponentBoundEvent_Text_1;                 // 0x48(0x18)(ConstParm)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B76[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x68(0x18)(ConstParm)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B77[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_Selection;              // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B78[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Left_ReturnValue;                         // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xC0(0x18)(None)
	double                                       K2Node_ComponentBoundEvent_Value;                  // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B79[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0xE8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x100(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x150(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x160(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.OnChangedValue__DelegateSignature
struct UWBP_Title_WorldSettings_ListContent_C_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       NewValue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.OnChangedSelectIndex__DelegateSignature
struct UWBP_Title_WorldSettings_ListContent_C_OnChangedSelectIndex__DelegateSignature_Params
{
public:
	int32                                        NewIndex;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.OnComittedText__DelegateSignature
struct UWBP_Title_WorldSettings_ListContent_C_OnComittedText__DelegateSignature_Params
{
public:
	class FString                                NewString;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Title_WorldSettings_ListContent.WBP_Title_WorldSettings_ListContent_C.OnSwitchChanged__DelegateSignature
struct UWBP_Title_WorldSettings_ListContent_C_OnSwitchChanged__DelegateSignature_Params
{
public:
	bool                                         IsOn;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


