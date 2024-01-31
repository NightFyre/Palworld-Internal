#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x168 - 0x150)
// BlueprintGeneratedClass BP_AIActionPairCall_FeedItem.BP_AIActionPairCall_FeedItem_C
class UBP_AIActionPairCall_FeedItem_C : public UBP_AIActionPairCallBase_C
{
public:
	struct FPalItemSlotId                        FeedItemSlotId;                                    // 0x150(0x14)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        FeedItemNum;                                       // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIActionPairCall_FeedItem_C* GetDefaultObj();

	void CreatePairBehaviorActionDynamicParameter(struct FActionDynamicParameter* DynamicParameter, const struct FPalNetArchive& Blackboard, const struct FActionDynamicParameter& Parameter, const struct FPalNetArchive& K2Node_MakeStruct_PalNetArchive, const struct FActionDynamicParameter& CallFunc_CreatePairBehaviorActionDynamicParameter_DynamicParameter);
};

}


