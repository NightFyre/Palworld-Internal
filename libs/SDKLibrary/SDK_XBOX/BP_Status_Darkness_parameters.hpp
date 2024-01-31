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

// 0x11 (0x11 - 0x0)
// Function BP_Status_Darkness.BP_Status_Darkness_C.DisableDebugSetting
struct UBP_Status_Darkness_C_DisableDebugSetting_Params
{
public:
	bool                                         Disable;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B8F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalDebugSetting*                      CallFunc_GetPalDebugSetting_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA1 (0xA1 - 0x0)
// Function BP_Status_Darkness.BP_Status_Darkness_C.ExecuteUbergraph_BP_Status_Darkness
struct UBP_Status_Darkness_C_ExecuteUbergraph_BP_Status_Darkness_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DisableDebugSetting_Disable;              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasSelfPalElement_Has;                    // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B90[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*       CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterParameterComponent*       CallFunc_GetComponentByClass_ReturnValue_1;        // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_2;                   // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLookAtComponent*                   CallFunc_GetComponentByClass_ReturnValue_2;        // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_3;                   // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalLookAtComponent*                   CallFunc_GetComponentByClass_ReturnValue_3;        // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_4;                   // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                   K2Node_DynamicCast_AsPal_Player_Character;         // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B91[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue_5;                   // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectComponent*             CallFunc_GetComponentByClass_ReturnValue_4;        // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                   K2Node_DynamicCast_AsPal_Player_Character_1;       // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B92[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPalVisualEffectDynamicParameter      K2Node_MakeStruct_PalVisualEffectDynamicParameter; // 0x80(0x10)(None)
	class UPalVisualEffectComponent*             CallFunc_GetComponentByClass_ReturnValue_5;        // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalVisualEffectBase*                  CallFunc_AddVisualEffect_Local_ReturnValue;        // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DisableDebugSetting_Disable_1;            // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


