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
// Function BP_ActionPairStandby_FeedItem.BP_ActionPairStandby_FeedItem_C.OnSetCallAIAction
struct UBP_ActionPairStandby_FeedItem_C_OnSetCallAIAction_Params
{
public:
	class UPalAIActionBase*                      CallAction;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIActionPairCall_FeedItem_C*       CallAIActionFeedItem;                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalNetArchive                        CallFunc_GetBlackboard_ReturnValue;                // 0x10(0x10)(ConstParm)
	struct FPalItemSlotId                        CallFunc_ReadPlayerFeedItemTo_ItemSlotId;          // 0x20(0x14)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_ReadPlayerFeedItemTo_ItemNum;             // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_AIActionPairCall_FeedItem_C*       K2Node_DynamicCast_AsBP_AIAction_Pair_Call_Feed_Item; // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


