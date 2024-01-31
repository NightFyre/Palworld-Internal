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

// 0x41 (0x41 - 0x0)
// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.DisplayHUD_Respawn
struct ABP_PalHUD_InGame_C_DisplayHUD_Respawn_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        CallFunc_Map_Keys_Keys;                            // 0x10(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C[0x6];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalUserWidget*                        CallFunc_Map_Find_Value;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.HideHUD_ForDeath
struct ABP_PalHUD_InGame_C_HideHUD_ForDeath_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        CallFunc_Map_Keys_Keys;                            // 0x10(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23[0x6];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalUserWidget*                        CallFunc_Map_Find_Value;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.OnUpdateLiftSlot
struct ABP_PalHUD_InGame_C_OnUpdateLiftSlot_Params
{
public:
	bool                                         CallFunc_IsLift_ReturnValue;                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.HideLiftItemDisplay
struct ABP_PalHUD_InGame_C_HideLiftItemDisplay_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.ShowLiftItemDisplay
struct ABP_PalHUD_InGame_C_ShowLiftItemDisplay_Params
{
public:
	struct FPalItemData                          LiftItemData;                                      // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.Setup Lift Item Event
struct ABP_PalHUD_InGame_C_Setup_Lift_Item_Event_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.SetupHUD_Internal
struct ABP_PalHUD_InGame_C_SetupHUD_Internal_Params
{
public:
	bool                                         CallFunc_IsEditorBuild_ReturnValue;                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D[0x6];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalDebugSetting*                      CallFunc_GetPalDebugSetting_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.OnLoaded_39EEADC54AE57646EA72A79D911211B6
struct ABP_PalHUD_InGame_C_OnLoaded_39EEADC54AE57646EA72A79D911211B6_Params
{
public:
	TSubclassOf<class UObject>                   Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.OnLoaded_EF35A3894C280426B58FA0A0D5280930
struct ABP_PalHUD_InGame_C_OnLoaded_EF35A3894C280426B58FA0A0D5280930_Params
{
public:
	TSubclassOf<class UObject>                   Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.OnLoaded_01D7FBF3483366434C8293A197BFD965
struct ABP_PalHUD_InGame_C_OnLoaded_01D7FBF3483366434C8293A197BFD965_Params
{
public:
	TSubclassOf<class UObject>                   Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.ReceiveTick
struct ABP_PalHUD_InGame_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.ReceiveEndPlay
struct ABP_PalHUD_InGame_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.AsyncLoadAndCreateWidget
struct ABP_PalHUD_InGame_C_AsyncLoadAndCreateWidget_Params
{
public:
	TSoftClassPtr<class UPalUserWidget>          WidgetClass;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.OnDyingEnd
struct ABP_PalHUD_InGame_C_OnDyingEnd_Params
{
public:
	class APalPlayerCharacter*                   PlayerCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.OnRespawnPlayer
struct ABP_PalHUD_InGame_C_OnRespawnPlayer_Params
{
public:
	class APalPlayerCharacter*                   Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x184 (0x184 - 0x0)
// Function BP_PalHUD_InGame.BP_PalHUD_InGame_C.ExecuteUbergraph_BP_PalHUD_InGame
struct ABP_PalHUD_InGame_C_ExecuteUbergraph_BP_PalHUD_InGame_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UObject>                   K2Node_CustomEvent_Loaded_2;                       // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable;                               // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsPal_User_Widget_Stackable_UI; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 CallFunc_PushWidgetStackableUI_ReturnValue;        // 0x24(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UObject>                   K2Node_CustomEvent_Loaded_1;                       // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_1;                             // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsPal_User_Widget;         // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_1;                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UObject>                   K2Node_CustomEvent_Loaded;                         // 0x58(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_2;                             // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsPal_User_Widget_1;       // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_2;                // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalUserWidget*                        CallFunc_CreateHUDWidget_ReturnValue;              // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalHUDWidgetPriority             Temp_byte_Variable;                                // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x84(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_57[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xA8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UPalUserWidget>          K2Node_CustomEvent_widgetClass;                    // 0xB8(0x30)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xE8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                   K2Node_CustomEvent_PlayerCharacter;                // 0xF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                        CallFunc_GetHUDService_ReturnValue;                // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_Push_ReturnValue;                         // 0x108(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPalHUDWidgetPriority             CallFunc_Map_Find_Value;                           // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D[0x6];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class APalPlayerCharacter*                   K2Node_CustomEvent_Player;                         // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPalHUDWidgetPriority             K2Node_Select_Default;                             // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalUserWidget*                        CallFunc_CreateHUDWidget_ReturnValue_1;            // 0x130(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                       CallFunc_GetGameSetting_ReturnValue;               // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalHUDService*                        CallFunc_GetHUDService_ReturnValue_1;              // 0x140(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                   CallFunc_GetPalmi_ReturnValue;                     // 0x148(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x150(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UPalDamageReactionComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x168(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_61[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x174(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


