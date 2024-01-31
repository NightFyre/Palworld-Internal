#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionPairStandby_FeedItem.BP_ActionPairStandby_FeedItem_C
// (None)

class UClass* UBP_ActionPairStandby_FeedItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionPairStandby_FeedItem_C");

	return Clss;
}


// BP_ActionPairStandby_FeedItem_C BP_ActionPairStandby_FeedItem.Default__BP_ActionPairStandby_FeedItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionPairStandby_FeedItem_C* UBP_ActionPairStandby_FeedItem_C::GetDefaultObj()
{
	static class UBP_ActionPairStandby_FeedItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionPairStandby_FeedItem_C*>(UBP_ActionPairStandby_FeedItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionPairStandby_FeedItem.BP_ActionPairStandby_FeedItem_C.OnSetCallAIAction
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionBase*            CallAction                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIActionPairCall_FeedItem_C*CallAIActionFeedItem                                             (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalNetArchive              CallFunc_GetBlackboard_ReturnValue                               (ConstParm)
// struct FPalItemSlotId              CallFunc_ReadPlayerFeedItemTo_ItemSlotId                         (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ReadPlayerFeedItemTo_ItemNum                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AIActionPairCall_FeedItem_C*K2Node_DynamicCast_AsBP_AIAction_Pair_Call_Feed_Item             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPairStandby_FeedItem_C::OnSetCallAIAction(class UPalAIActionBase* CallAction, class UBP_AIActionPairCall_FeedItem_C* CallAIActionFeedItem, const struct FPalNetArchive& CallFunc_GetBlackboard_ReturnValue, const struct FPalItemSlotId& CallFunc_ReadPlayerFeedItemTo_ItemSlotId, int32 CallFunc_ReadPlayerFeedItemTo_ItemNum, class UBP_AIActionPairCall_FeedItem_C* K2Node_DynamicCast_AsBP_AIAction_Pair_Call_Feed_Item, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionPairStandby_FeedItem_C", "OnSetCallAIAction");

	Params::UBP_ActionPairStandby_FeedItem_C_OnSetCallAIAction_Params Parms{};

	Parms.CallAction = CallAction;
	Parms.CallAIActionFeedItem = CallAIActionFeedItem;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_ReadPlayerFeedItemTo_ItemSlotId = CallFunc_ReadPlayerFeedItemTo_ItemSlotId;
	Parms.CallFunc_ReadPlayerFeedItemTo_ItemNum = CallFunc_ReadPlayerFeedItemTo_ItemNum;
	Parms.K2Node_DynamicCast_AsBP_AIAction_Pair_Call_Feed_Item = K2Node_DynamicCast_AsBP_AIAction_Pair_Call_Feed_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


