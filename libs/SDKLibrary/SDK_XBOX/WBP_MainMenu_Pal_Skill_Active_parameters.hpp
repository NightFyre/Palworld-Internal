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
// Function WBP_MainMenu_Pal_Skill_Active.WBP_MainMenu_Pal_Skill_Active_C.SetEmptyInfo
struct UWBP_MainMenu_Pal_Skill_Active_C_SetEmptyInfo_Params
{
public:
	class FText                                  CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function WBP_MainMenu_Pal_Skill_Active.WBP_MainMenu_Pal_Skill_Active_C.GetBindedWazaID
struct UWBP_MainMenu_Pal_Skill_Active_C_GetBindedWazaID_Params
{
public:
	enum class EPalWazaID                        WazaID;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function WBP_MainMenu_Pal_Skill_Active.WBP_MainMenu_Pal_Skill_Active_C.SetWazaID
struct UWBP_MainMenu_Pal_Skill_Active_C_SetWazaID_Params
{
public:
	enum class EPalWazaID                        WazaID;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetWazaName_outName;                      // 0x8(0x18)(None)
	class UPalWazaDatabase*                      CallFunc_GetWazaDatabase_ReturnValue;              // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalWazaDatabaseRaw                   CallFunc_FindWazaForBP_OutData;                    // 0x28(0x50)(None)
	bool                                         CallFunc_FindWazaForBP_ReturnValue;                // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             CallFunc_Map_Find_Value;                           // 0x80(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0xB8(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function WBP_MainMenu_Pal_Skill_Active.WBP_MainMenu_Pal_Skill_Active_C.BndEvt__WBP_MainMenu_Pal_Skill_Active_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
struct UWBP_MainMenu_Pal_Skill_Active_C_BndEvt__WBP_MainMenu_Pal_Skill_Active_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_MainMenu_Pal_Skill_Active.WBP_MainMenu_Pal_Skill_Active_C.BndEvt__WBP_MainMenu_Pal_Skill_Active_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
struct UWBP_MainMenu_Pal_Skill_Active_C_BndEvt__WBP_MainMenu_Pal_Skill_Active_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_MainMenu_Pal_Skill_Active.WBP_MainMenu_Pal_Skill_Active_C.BndEvt__WBP_MainMenu_Pal_Skill_Active_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
struct UWBP_MainMenu_Pal_Skill_Active_C_BndEvt__WBP_MainMenu_Pal_Skill_Active_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_MainMenu_Pal_Skill_Active.WBP_MainMenu_Pal_Skill_Active_C.ExecuteUbergraph_WBP_MainMenu_Pal_Skill_Active
struct UWBP_MainMenu_Pal_Skill_Active_C_ExecuteUbergraph_WBP_MainMenu_Pal_Skill_Active_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_2;               // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_1;               // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_MainMenu_Pal_Skill_Active.WBP_MainMenu_Pal_Skill_Active_C.OnClicked__DelegateSignature
struct UWBP_MainMenu_Pal_Skill_Active_C_OnClicked__DelegateSignature_Params
{
public:
	class UWBP_MainMenu_Pal_Skill_Active_C*      SelfWidget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_MainMenu_Pal_Skill_Active.WBP_MainMenu_Pal_Skill_Active_C.OnUnhovered__DelegateSignature
struct UWBP_MainMenu_Pal_Skill_Active_C_OnUnhovered__DelegateSignature_Params
{
public:
	class UWBP_MainMenu_Pal_Skill_Active_C*      SelfWidget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_MainMenu_Pal_Skill_Active.WBP_MainMenu_Pal_Skill_Active_C.OnHovered__DelegateSignature
struct UWBP_MainMenu_Pal_Skill_Active_C_OnHovered__DelegateSignature_Params
{
public:
	class UWBP_MainMenu_Pal_Skill_Active_C*      SelfWidget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


