#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xFF (0x100 - 0x1)
// ScriptStruct ABP_Player_Head.ABP_Player_Head_C.AnimBlueprintGeneratedConstantData
struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
public:
	uint8                                        Pad_46D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  __NameProperty_32;                                 // 0x4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_33;                                 // 0xC(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_34;                                 // 0x14(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlendProfile*                         __BlendProfile_35;                                 // 0x20(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                           __CurveFloat_36;                                   // 0x28(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         __BoolProperty_37;                                 // 0x30(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAlphaBlendOption                 __EnumProperty_38;                                 // 0x31(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBlendListTransitionType          __EnumProperty_39;                                 // 0x32(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46D8[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                __ArrayProperty_40;                                // 0x38(0x10)(BlueprintVisible, EditFixedSize)
	struct FAnimNodeFunctionRef                  __StructProperty_41;                               // 0x48(0x20)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess         AnimBlueprintExtension_PropertyAccess;             // 0x68(0x80)(None)
	struct FAnimSubsystem_Base                   AnimBlueprintExtension_Base;                       // 0xE8(0x18)(None)
};

// 0x1 (0x2 - 0x1)
// ScriptStruct ABP_Player_Head.ABP_Player_Head_C.AnimBlueprintGeneratedMutableData
struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
public:
	bool                                         __BoolProperty;                                    // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


