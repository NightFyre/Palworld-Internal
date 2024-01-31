#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x158 - 0x158)
// BlueprintGeneratedClass BP_ActionPairStandby_FeedItem.BP_ActionPairStandby_FeedItem_C
class UBP_ActionPairStandby_FeedItem_C : public UBP_ActionPairStandbyBase_C
{
public:

	static class UClass* StaticClass();
	static class UBP_ActionPairStandby_FeedItem_C* GetDefaultObj();

	void OnSetCallAIAction(class UPalAIActionBase* CallAction, class UBP_AIActionPairCall_FeedItem_C* CallAIActionFeedItem, const struct FPalNetArchive& CallFunc_GetBlackboard_ReturnValue, const struct FPalItemSlotId& CallFunc_ReadPlayerFeedItemTo_ItemSlotId, int32 CallFunc_ReadPlayerFeedItemTo_ItemNum, class UBP_AIActionPairCall_FeedItem_C* K2Node_DynamicCast_AsBP_AIAction_Pair_Call_Feed_Item, bool K2Node_DynamicCast_bSuccess);
};

}


