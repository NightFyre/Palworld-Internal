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

// 0x5A (0x5A - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.ScrollByCharacterID
struct UWBP_Paldex_C_ScrollByCharacterID_Params
{
public:
	class FName                                  CharacterID;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScrollBox*                            CallFunc_GetScrollBox_ScrollBox;                   // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UScrollBox*                            CallFunc_GetScrollBox_ScrollBox_1;                 // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x28(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Paldex_List_C*                    K2Node_DynamicCast_AsWBP_Paldex_List;              // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.ClickByCharacterID
struct UWBP_Paldex_C_ClickByCharacterID_Params
{
public:
	class FName                                  CharacterID;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.ScrollByPanelIndex
struct UWBP_Paldex_C_ScrollByPanelIndex_Params
{
public:
	int32                                        ScrollByPanelIndex;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetAllChildrenNum_index;                  // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScrollBox*                            CallFunc_GetScrollBox_ScrollBox;                   // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Min_ReturnValue;                          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53E2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Paldex_List_C*                    CallFunc_GetWidgetByIndex_Widget;                  // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.ClickByIndex
struct UWBP_Paldex_C_ClickByIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.GetFocusTargetByCharacterID
struct UWBP_Paldex_C_GetFocusTargetByCharacterID_Params
{
public:
	class FName                                  CharacterID;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               Target;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetFocusTargetByCharacterID_widget;       // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.SetEncountedPalNum
struct UWBP_Paldex_C_SetEncountedPalNum_Params
{
public:
	int32                                        Num;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.SetRegisteredPalNum
struct UWBP_Paldex_C_SetRegisteredPalNum_Params
{
public:
	int32                                        Num;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53E4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.SetZoomDisrtibutionMap
struct UWBP_Paldex_C_SetZoomDisrtibutionMap_Params
{
public:
	double                                       Rate;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.IsZoomMax
struct UWBP_Paldex_C_IsZoomMax_Params
{
public:
	bool                                         IsMax;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsZoomMax_isMax;                          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.AddZoomDistributionMap
struct UWBP_Paldex_C_AddZoomDistributionMap_Params
{
public:
	double                                       AddZoomRate;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.AddCapturedActorRotation
struct UWBP_Paldex_C_AddCapturedActorRotation_Params
{
public:
	struct FRotator                              Rotator;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.AddDistributionMapOffset
struct UWBP_Paldex_C_AddDistributionMapOffset_Params
{
public:
	struct FVector2D                             Offset;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.PageSkip_Up
struct UWBP_Paldex_C_PageSkip_Up_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetIndexFromWidget_index;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53E6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.PageSkip_Down
struct UWBP_Paldex_C_PageSkip_Down_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetIndexFromWidget_index;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.DisplayNoDataWidget
struct UWBP_Paldex_C_DisplayNoDataWidget_Params
{
public:
	struct FDataTableRowHandle                   MsgIdHandle;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x10(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.ChangeToDistributionDIsplayMode
struct UWBP_Paldex_C_ChangeToDistributionDIsplayMode_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x7B (0x7B - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.Display Distribution
struct UWBP_Paldex_C_Display_Distribution_Params
{
public:
	struct FPalUIPaldex_DisplayInfo              DisplayInfo;                                       // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class E_PaldexDistributionTimeType      TimeType;                                          // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalUIPaldexDistributionData          CallFunc_GetDataTableRowFromName_OutRow;           // 0x40(0x38)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetDistributionLocations_isNoDistribution; // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.DisplayPalInfo
struct UWBP_Paldex_C_DisplayPalInfo_Params
{
public:
	struct FPalUIPaldex_DisplayInfo              DisplayInfo;                                       // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  CallFunc_GetPalLongDescription_outName;            // 0x38(0x18)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PalMonsterCaptureSet_C*            CallFunc_GetCaptureCameraActor_cameraActor;        // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.CapturePalActor
struct UWBP_Paldex_C_CapturePalActor_Params
{
public:
	class FName                                  CharacterID;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PalMonsterCaptureSet_C*            CallFunc_GetCaptureCameraActor_cameraActor;        // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.GetFocusTargetByIndex
struct UWBP_Paldex_C_GetFocusTargetByIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               Target;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetFocusTargetByIndex_target;             // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.FocusByCharacterID
struct UWBP_Paldex_C_FocusByCharacterID_Params
{
public:
	class FName                                  CharacterID;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.FocusByIndex
struct UWBP_Paldex_C_FocusByIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.SetupCaptureCameraActor
struct UWBP_Paldex_C_SetupCaptureCameraActor_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_PalMonsterCaptureSet_C*            CallFunc_GetCaptureCameraActor_cameraActor;        // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.SetupPalPanelList
struct UWBP_Paldex_C_SetupPalPanelList_Params
{
public:
	TArray<struct FPalUIPaldex_DisplayInfo>      DisplayInfoArray;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.AnmEvent_ChnageTimeType
struct UWBP_Paldex_C_AnmEvent_ChnageTimeType_Params
{
public:
	enum class E_PaldexDistributionTimeType      TimeType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.BndEvt__WBP_Paldex_WBP_PaldexScrollList_K2Node_ComponentBoundEvent_0_OnHoveredAnyPanel__DelegateSignature
struct UWBP_Paldex_C_BndEvt__WBP_Paldex_WBP_PaldexScrollList_K2Node_ComponentBoundEvent_0_OnHoveredAnyPanel__DelegateSignature_Params
{
public:
	class FName                                  CharacterID;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Paldex_List_C*                    SelfWidget;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.BndEvt__WBP_Paldex_WBP_PaldexScrollList_K2Node_ComponentBoundEvent_3_OnClickedAnyPanel__DelegateSignature
struct UWBP_Paldex_C_BndEvt__WBP_Paldex_WBP_PaldexScrollList_K2Node_ComponentBoundEvent_3_OnClickedAnyPanel__DelegateSignature_Params
{
public:
	class FName                                  CharacterID;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Paldex_List_C*                    Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x89 (0x89 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.ExecuteUbergraph_WBP_Paldex
struct UWBP_Paldex_C_ExecuteUbergraph_WBP_Paldex_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53ED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class E_PaldexDistributionTimeType      K2Node_CustomEvent_timeType;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_ComponentBoundEvent_CharacterID_1;          // 0x3C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53F0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Paldex_List_C*                    K2Node_ComponentBoundEvent_SelfWidget;             // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_PalMonsterCaptureSet_C*            CallFunc_GetCaptureCameraActor_cameraActor;        // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x60(0x18)(None)
	class FName                                  K2Node_ComponentBoundEvent_CharacterID;            // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Paldex_List_C*                    K2Node_ComponentBoundEvent_Widget;                 // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.OnClickedAnyPalPanel__DelegateSignature
struct UWBP_Paldex_C_OnClickedAnyPalPanel__DelegateSignature_Params
{
public:
	class FName                                  CharacterID;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Paldex.WBP_Paldex_C.OnHoveredAnyPalPanel__DelegateSignature
struct UWBP_Paldex_C_OnHoveredAnyPalPanel__DelegateSignature_Params
{
public:
	class FName                                  CharacterID;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


