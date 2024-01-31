#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x260 - 0x251)
// BlueprintGeneratedClass BP_ActionPairBehavior_FeedItem.BP_ActionPairBehavior_FeedItem_C
class UBP_ActionPairBehavior_FeedItem_C : public UBP_ActionPairBehaviorBase_C
{
public:
	uint8                                        Pad_3AD5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_ActionPairBehavior_FeedItem_C* GetDefaultObj();

	void OnCompleted(class AActor* Human, class AActor* Monster);
	void GetHumanAnime(class UAnimMontage** Montage, enum class EPalGeneralMontageType Temp_byte_Variable, enum class EPalGeneralMontageType Temp_byte_Variable_1, enum class EPalGeneralMontageType Temp_byte_Variable_2, enum class EPalGeneralMontageType Temp_byte_Variable_3, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UAnimMontage* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UAnimMontage* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, class UAnimMontage* CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3);
	void OnBeginAction();
	void ExecuteUbergraph_BP_ActionPairBehavior_FeedItem(int32 EntryPoint, const struct FPalNetArchive& CallFunc_GetBlackboard_ReturnValue, const struct FPalItemSlotId& CallFunc_ReadPlayerFeedItemTo_ItemSlotId, int32 CallFunc_ReadPlayerFeedItemTo_ItemNum, const struct FPalItemSlotIdAndNum& K2Node_MakeStruct_PalItemSlotIdAndNum, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue, bool CallFunc_IsLocalControlActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalIndividualCharacterParameter* CallFunc_GetIndividualCharacterParameterByActor_ReturnValue);
};

}


