#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AlertByKilledFriendState_SurprisedReaction.BP_AlertByKilledFriendState_SurprisedReaction_C
// (None)

class UClass* UBP_AlertByKilledFriendState_SurprisedReaction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AlertByKilledFriendState_SurprisedReaction_C");

	return Clss;
}


// BP_AlertByKilledFriendState_SurprisedReaction_C BP_AlertByKilledFriendState_SurprisedReaction.Default__BP_AlertByKilledFriendState_SurprisedReaction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AlertByKilledFriendState_SurprisedReaction_C* UBP_AlertByKilledFriendState_SurprisedReaction_C::GetDefaultObj()
{
	static class UBP_AlertByKilledFriendState_SurprisedReaction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AlertByKilledFriendState_SurprisedReaction_C*>(UBP_AlertByKilledFriendState_SurprisedReaction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AlertByKilledFriendState_SurprisedReaction.BP_AlertByKilledFriendState_SurprisedReaction_C.StateEnter
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AlertByKilledFriendState_SurprisedReaction_C::StateEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertByKilledFriendState_SurprisedReaction_C", "StateEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AlertByKilledFriendState_SurprisedReaction.BP_AlertByKilledFriendState_SurprisedReaction_C.ExecuteUbergraph_BP_AlertByKilledFriendState_SurprisedReaction
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_AlertByKilledFriend_C*K2Node_DynamicCast_AsBP_AIAction_Alert_by_Killed_Friend          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetActionComponent_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayAction_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AlertByKilledFriendState_SurprisedReaction_C::ExecuteUbergraph_BP_AlertByKilledFriendState_SurprisedReaction(int32 EntryPoint, class UObject* CallFunc_GetOuterObject_ReturnValue, class UBP_AIAction_AlertByKilledFriend_C* K2Node_DynamicCast_AsBP_AIAction_Alert_by_Killed_Friend, bool K2Node_DynamicCast_bSuccess, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, class UPalActionBase* CallFunc_PlayAction_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertByKilledFriendState_SurprisedReaction_C", "ExecuteUbergraph_BP_AlertByKilledFriendState_SurprisedReaction");

	Params::UBP_AlertByKilledFriendState_SurprisedReaction_C_ExecuteUbergraph_BP_AlertByKilledFriendState_SurprisedReaction_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOuterObject_ReturnValue = CallFunc_GetOuterObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_AIAction_Alert_by_Killed_Friend = K2Node_DynamicCast_AsBP_AIAction_Alert_by_Killed_Friend;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActionComponent_ReturnValue = CallFunc_GetActionComponent_ReturnValue;
	Parms.CallFunc_PlayAction_ReturnValue = CallFunc_PlayAction_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


