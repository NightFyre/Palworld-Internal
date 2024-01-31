#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x158 - 0x138)
// BlueprintGeneratedClass BP_ActionDefenseWait.BP_ActionDefenseWait_C
class UBP_ActionDefenseWait_C : public UPalActionBase
{
public:
	uint8                                        Pad_4911[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EPalGeneralMontageType            DefenseMontageType;                                // 0x148(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4912[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          TempMontage;                                       // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionDefenseWait_C* GetDefaultObj();

	void OnBeginAction();
	void OnEndAction();
	void TickAction(float DeltaTime);
	void ExecuteUbergraph_BP_ActionDefenseWait(int32 EntryPoint, bool CallFunc_NotEqual_ByteByte_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, float CallFunc_PlayAnimMontage_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaTime, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue_1, bool CallFunc_Montage_IsPlaying_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}


