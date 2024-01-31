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

// 0xE4 (0xE4 - 0x0)
// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.PlaySampleVoice
struct UWBP_CharaCre_ScrollBoxContent_Voice_C_PlaySampleVoice_Params
{
public:
	int32                                        VoiceID;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x10(0x50)(HasGetValueTypeHash)
	int32                                        CallFunc_Map_Find_Value;                           // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x68(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x78(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Find_Value_1;                         // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Contains_ReturnValue;                 // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0xB0(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalSoundOptions                      K2Node_MakeStruct_PalSoundOptions;                 // 0xB4(0x4)(NoDestructor)
	class UAkAudioEvent*                         CallFunc_Array_Get_Item;                           // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40C0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalHUDService*                        CallFunc_GetHUDService_ReturnValue;                // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40C2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalSoundPlayer*                       CallFunc_GetSoundPlayer_ReturnValue;               // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PlaySound_ReturnValue;                    // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x94 (0x94 - 0x0)
// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.ApplyMakeInfo
struct UWBP_CharaCre_ScrollBoxContent_Voice_C_ApplyMakeInfo_Params
{
public:
	struct FPalPlayerDataCharacterMakeInfo       MakeInfo;                                          // 0x0(0x94)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.GetRestoreFocusTarget
struct UWBP_CharaCre_ScrollBoxContent_Voice_C_GetRestoreFocusTarget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetTopFocusTarget_Widget;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.GetTopFocusTarget
struct UWBP_CharaCre_ScrollBoxContent_Voice_C_GetTopFocusTarget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.BndEvt__WBP_CharaCre_ScrollBoxContent_Voice_WBP_Chara_Cre_VoiceTypeSlider_K2Node_ComponentBoundEvent_1_OnChangedValue__DelegateSignature
struct UWBP_CharaCre_ScrollBoxContent_Voice_C_BndEvt__WBP_CharaCre_ScrollBoxContent_Voice_WBP_Chara_Cre_VoiceTypeSlider_K2Node_ComponentBoundEvent_1_OnChangedValue__DelegateSignature_Params
{
public:
	double                                       Value;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice
struct UWBP_CharaCre_ScrollBoxContent_Voice_C_ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Voice_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_ComponentBoundEvent_Value;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        CallFunc_Conv_DoubleToInt64_ReturnValue;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_CharaCre_ScrollBoxContent_Voice.WBP_CharaCre_ScrollBoxContent_Voice_C.OnChangedVoiceID__DelegateSignature
struct UWBP_CharaCre_ScrollBoxContent_Voice_C_OnChangedVoiceID__DelegateSignature_Params
{
public:
	int32                                        VoiceID;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


