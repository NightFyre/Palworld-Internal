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

// 0x13 (0x13 - 0x0)
// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.SetSelectedPresetName
struct UWBP_CharaCre_PartsSelectPanel_C_SetSelectedPresetName_Params
{
public:
	class FName                                  PresetName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CharaCre_PartsSelect_sq_C*        CallFunc_Map_Find_Value;                           // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.OnClicked_Internal
struct UWBP_CharaCre_PartsSelectPanel_C_OnClicked_Internal_Params
{
public:
	class UWBP_CharaCre_PartsSelect_sq_C*        Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4689[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetBindedPresetName_PresetName;           // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.GetTopFocusTarget
struct UWBP_CharaCre_PartsSelectPanel_C_GetTopFocusTarget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_CharaCre_PartsSelect_sq_C*        K2Node_DynamicCast_AsWBP_Chara_Cre_Parts_Select_Sq; // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.AddPreset
struct UWBP_CharaCre_PartsSelectPanel_C_AddPreset_Params
{
public:
	class FName                                  PresetName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             SoftIconTexture;                                   // 0x8(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x38(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetLocalPlayerController_ReturnValue;     // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_CharaCre_PartsSelect_sq_C*        CallFunc_Create_ReturnValue;                       // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1C0 (0x1C0 - 0x0)
// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.AddMeshPresets
struct UWBP_CharaCre_PartsSelectPanel_C_AddMeshPresets_Params
{
public:
	TMap<class FName, struct FPalCharacterCreationMeshPresetDataRow> PresetMap;                                         // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_468A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x58(0x10)(ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_468B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_468C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalCharacterCreationMeshPresetDataRow CallFunc_Map_Find_Value;                           // 0x88(0x108)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_468D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x194(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_468E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetLocalPlayerController_ReturnValue;     // 0x1A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_CharaCre_PartsSelect_sq_C*        CallFunc_Create_ReturnValue;                       // 0x1B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x1B8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.ExecuteUbergraph_WBP_CharaCre_PartsSelectPanel
struct UWBP_CharaCre_PartsSelectPanel_C_ExecuteUbergraph_WBP_CharaCre_PartsSelectPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre_PartsSelectPanel.WBP_CharaCre_PartsSelectPanel_C.OnClickedAnyContent__DelegateSignature
struct UWBP_CharaCre_PartsSelectPanel_C_OnClickedAnyContent__DelegateSignature_Params
{
public:
	class FName                                  BindedName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


