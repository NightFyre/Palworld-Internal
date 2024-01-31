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

// 0x4 (0x4 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.RequestPlaySampleVoice
struct UWBP_CharaCre_C_RequestPlaySampleVoice_Params
{
public:
	int32                                        VoiceID;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnSelectedVoiceID_Internal
struct UWBP_CharaCre_C_OnSelectedVoiceID_Internal_Params
{
public:
	int32                                        VoiceID;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnSelectedPreset_Internal
struct UWBP_CharaCre_C_OnSelectedPreset_Internal_Params
{
public:
	class FName                                  PresetName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.CustomNavi_ToCategoryTop
struct UWBP_CharaCre_C_CustomNavi_ToCategoryTop_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F17[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.GetSelectedEyeHSV
struct UWBP_CharaCre_C_GetSelectedEyeHSV_Params
{
public:
	struct FLinearColor                          HSV;                                               // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetSelectedEyeHSV_HSV;                    // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnSelectedEyeMaterial_Internal
struct UWBP_CharaCre_C_OnSelectedEyeMaterial_Internal_Params
{
public:
	class FName                                  BindedName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.SetEnableNameEdit
struct UWBP_CharaCre_C_SetEnableNameEdit_Params
{
public:
	bool                                         IsEnable;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.SetPlayerName
struct UWBP_CharaCre_C_SetPlayerName_Params
{
public:
	class FText                                  NewName;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x30 (0x30 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.CustomNavi_ToNameChange
struct UWBP_CharaCre_C_CustomNavi_ToNameChange_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F18[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F19[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               Temp_object_Variable;                              // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F1A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Select_Default;                             // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.SetEnableSettingScrollList
struct UWBP_CharaCre_C_SetEnableSettingScrollList_Params
{
public:
	bool                                         IsEnable;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.GetCategoryButtonByCategory
struct UWBP_CharaCre_C_GetCategoryButtonByCategory_Params
{
public:
	enum class E_UICharacterMakeCategory         CategoryType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F1B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_CharaCre_MenuButton_C*            Button;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnClickedCategoryButton_Internal
struct UWBP_CharaCre_C_OnClickedCategoryButton_Internal_Params
{
public:
	class UWBP_CharaCre_MenuButton_C*            Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class E_UICharacterMakeCategory         CallFunc_GetBindedCategory_CategoryType;           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.GetRestoreFocusTarget
struct UWBP_CharaCre_C_GetRestoreFocusTarget_Params
{
public:
	enum class E_UICharacterMakeCategory         CategoryType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F1C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               Widget;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetRestoreFocusTarget_Widget;             // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnClickedHairMesh_Internal
struct UWBP_CharaCre_C_OnClickedHairMesh_Internal_Params
{
public:
	class FName                                  BindedName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnClickedHeadMesh_Internal
struct UWBP_CharaCre_C_OnClickedHeadMesh_Internal_Params
{
public:
	class FName                                  BindedName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnClickedBodyMesh_Internal
struct UWBP_CharaCre_C_OnClickedBodyMesh_Internal_Params
{
public:
	class FName                                  BindedName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedHairColor_Internal
struct UWBP_CharaCre_C_OnChangedHairColor_Internal_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedBrowColor_Internal
struct UWBP_CharaCre_C_OnChangedBrowColor_Internal_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedEyeColor_Internal
struct UWBP_CharaCre_C_OnChangedEyeColor_Internal_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedArmSizeInternal
struct UWBP_CharaCre_C_OnChangedArmSizeInternal_Params
{
public:
	double                                       Value;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedLegSize_Internal
struct UWBP_CharaCre_C_OnChangedLegSize_Internal_Params
{
public:
	double                                       Value;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedTorsoSize_Internal
struct UWBP_CharaCre_C_OnChangedTorsoSize_Internal_Params
{
public:
	double                                       Value;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.GetTopFocusTarget
struct UWBP_CharaCre_C_GetTopFocusTarget_Params
{
public:
	enum class E_UICharacterMakeCategory         NewCategory;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F1D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               Widget;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetTopFocusTarget_Widget;                 // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedArmSize_Internal
struct UWBP_CharaCre_C_OnChangedArmSize_Internal_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F1E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_CallDelegate_Size_ImplicitCast;             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x94 (0x94 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.ApplyMakeInfo
struct UWBP_CharaCre_C_ApplyMakeInfo_Params
{
public:
	struct FPalPlayerDataCharacterMakeInfo       MakeInfo;                                          // 0x0(0x94)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.ChangeMakeCategory
struct UWBP_CharaCre_C_ChangeMakeCategory_Params
{
public:
	enum class E_UICharacterMakeCategory         NewCategory;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.Setup
struct UWBP_CharaCre_C_Setup_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x30(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x40(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x50(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x60(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x70(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x80(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x90(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0xA0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0xB0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0xC0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedSkinColor_Internal
struct UWBP_CharaCre_C_OnChangedSkinColor_Internal_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedTab_Internal
struct UWBP_CharaCre_C_OnChangedTab_Internal_Params
{
public:
	int32                                        OldIndex;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NewIndex;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               FocusTargetWidget;                                 // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_CharaCre_Tab_C*                   K2Node_DynamicCast_AsWBP_Chara_Cre_Tab;            // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UWBP_CharaCre_C_BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
public:
	class UWBP_CharaCre_MenuButton_C*            Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UWBP_CharaCre_C_BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_1_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
public:
	class UWBP_CharaCre_MenuButton_C*            Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_2_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UWBP_CharaCre_C_BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_2_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
public:
	class UWBP_CharaCre_MenuButton_C*            Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Finish_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWBP_CharaCre_C_BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Finish_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
public:
	class UWBP_CharaCre_MenuButton_C*            Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Preset_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UWBP_CharaCre_C_BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Preset_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
public:
	class UWBP_CharaCre_MenuButton_C*            Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Voice_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UWBP_CharaCre_C_BndEvt__WBP_CharaCre_WBP_CharaCre_MenuButton_Voice_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
public:
	class UWBP_CharaCre_MenuButton_C*            Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.ExecuteUbergraph_WBP_CharaCre
struct UWBP_CharaCre_C_ExecuteUbergraph_WBP_CharaCre_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F1F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_CharaCre_MenuButton_C*            K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetLocalPlayerController_ReturnValue;     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_CharaCre_ScrollBoxContentSet_C*   CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_CharaCre_MenuButton_C*            K2Node_ComponentBoundEvent_Button_5;               // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_CharaCre_MenuButton_C*            K2Node_ComponentBoundEvent_Button_4;               // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_CharaCre_MenuButton_C*            K2Node_ComponentBoundEvent_Button_3;               // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x38(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x48(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_CharaCre_MenuButton_C*            K2Node_ComponentBoundEvent_Button_2;               // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_CharaCre_MenuButton_C*            K2Node_ComponentBoundEvent_Button_1;               // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedVoiceID__DelegateSignature
struct UWBP_CharaCre_C_OnChangedVoiceID__DelegateSignature_Params
{
public:
	int32                                        VoiceID;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnSelectedPreset__DelegateSignature
struct UWBP_CharaCre_C_OnSelectedPreset__DelegateSignature_Params
{
public:
	class FName                                  PresetName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnSelectedEyeMaterial__DelegateSignature
struct UWBP_CharaCre_C_OnSelectedEyeMaterial__DelegateSignature_Params
{
public:
	class FName                                  EyeMaterialName;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnClickedCategoryButton__DelegateSignature
struct UWBP_CharaCre_C_OnClickedCategoryButton__DelegateSignature_Params
{
public:
	enum class E_UICharacterMakeCategory         CategoryType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnSelectedHairMesh__DelegateSignature
struct UWBP_CharaCre_C_OnSelectedHairMesh__DelegateSignature_Params
{
public:
	class FName                                  MeshPresetRowName;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnSelecteddHeadMesh__DelegateSignature
struct UWBP_CharaCre_C_OnSelecteddHeadMesh__DelegateSignature_Params
{
public:
	class FName                                  MeshPresetRowName;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnSelectedBodyMesh__DelegateSignature
struct UWBP_CharaCre_C_OnSelectedBodyMesh__DelegateSignature_Params
{
public:
	class FName                                  MeshPresetRowName;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedHairColor__DelegateSignature
struct UWBP_CharaCre_C_OnChangedHairColor__DelegateSignature_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedBrowColor__DelegateSignature
struct UWBP_CharaCre_C_OnChangedBrowColor__DelegateSignature_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedEyeColor__DelegateSignature
struct UWBP_CharaCre_C_OnChangedEyeColor__DelegateSignature_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedArmSize__DelegateSignature
struct UWBP_CharaCre_C_OnChangedArmSize__DelegateSignature_Params
{
public:
	double                                       Size;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedLegSize__DelegateSignature
struct UWBP_CharaCre_C_OnChangedLegSize__DelegateSignature_Params
{
public:
	double                                       Size;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedTorsoSize__DelegateSignature
struct UWBP_CharaCre_C_OnChangedTorsoSize__DelegateSignature_Params
{
public:
	double                                       Size;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedSkinColor__DelegateSignature
struct UWBP_CharaCre_C_OnChangedSkinColor__DelegateSignature_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre.WBP_CharaCre_C.OnChangedTab__DelegateSignature
struct UWBP_CharaCre_C_OnChangedTab__DelegateSignature_Params
{
public:
	class UWBP_CharaCre_Tab_C*                   TabWidget;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


