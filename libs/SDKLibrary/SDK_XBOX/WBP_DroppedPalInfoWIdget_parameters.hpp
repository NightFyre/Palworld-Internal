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
// Function WBP_DroppedPalInfoWIdget.WBP_DroppedPalInfoWIdget_C.SetGender
struct UWBP_DroppedPalInfoWIdget_C_SetGender_Params
{
public:
	enum class EPalGenderType                    GenderType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_DroppedPalInfoWIdget.WBP_DroppedPalInfoWIdget_C.SetNickName
struct UWBP_DroppedPalInfoWIdget_C_SetNickName_Params
{
public:
	class FString                                NickName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x10(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function WBP_DroppedPalInfoWIdget.WBP_DroppedPalInfoWIdget_C.SetPassiveSkill
struct UWBP_DroppedPalInfoWIdget_C_SetPassiveSkill_Params
{
public:
	TArray<class FName>                          PassiveSkillnameArray;                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function WBP_DroppedPalInfoWIdget.WBP_DroppedPalInfoWIdget_C.SetWaza
struct UWBP_DroppedPalInfoWIdget_C_SetWaza_Params
{
public:
	TArray<enum class EPalWazaID>                WazaArray;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x90 (0x90 - 0x0)
// Function WBP_DroppedPalInfoWIdget.WBP_DroppedPalInfoWIdget_C.SetBaseParameter
struct UWBP_DroppedPalInfoWIdget_C_SetBaseParameter_Params
{
public:
	int32                                        MeleeAttack;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ShotAttack;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Defense;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Support;                                           // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Speed;                                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4513[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x18(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x30(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_2;             // 0x48(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_3;             // 0x60(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_4;             // 0x78(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function WBP_DroppedPalInfoWIdget.WBP_DroppedPalInfoWIdget_C.SetLevelAndExp
struct UWBP_DroppedPalInfoWIdget_C_SetLevelAndExp_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NowExp;                                            // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NextEXP;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4514[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       NowExpRate;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x18(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4515[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x218 (0x218 - 0x0)
// Function WBP_DroppedPalInfoWIdget.WBP_DroppedPalInfoWIdget_C.SetupAfterDisplayed
struct UWBP_DroppedPalInfoWIdget_C_SetupAfterDisplayed_Params
{
public:
	struct FPalIndividualCharacterSaveParameter  CallFunc_GetSaveParameter_parameter;               // 0x0(0x218)(None)
};

// 0x4C (0x4C - 0x0)
// Function WBP_DroppedPalInfoWIdget.WBP_DroppedPalInfoWIdget_C.SetHunger
struct UWBP_DroppedPalInfoWIdget_C_SetHunger_Params
{
public:
	double                                       NowHunger;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxHunger;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x18(0x18)(None)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue_1;          // 0x30(0x18)(None)
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x64 (0x64 - 0x0)
// Function WBP_DroppedPalInfoWIdget.WBP_DroppedPalInfoWIdget_C.SetHP
struct UWBP_DroppedPalInfoWIdget_C_SetHP_Params
{
public:
	int32                                        NowHP;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxHP;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4516[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x10(0x18)(None)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4517[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x30(0x18)(None)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WBP_DroppedPalInfoWIdget.WBP_DroppedPalInfoWIdget_C.ExecuteUbergraph_WBP_DroppedPalInfoWIdget
struct UWBP_DroppedPalInfoWIdget_C_ExecuteUbergraph_WBP_DroppedPalInfoWIdget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4518[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_MainMenu_Pal_Skill_Active_C*> K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*> K2Node_MakeArray_Array_1;                          // 0x20(0x10)(ReferenceParm, ContainsInstancedReference)
};

}
}


