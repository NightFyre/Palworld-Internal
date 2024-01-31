#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AlertByKilledFriendState_QuestionMark.BP_AlertByKilledFriendState_QuestionMark_C
// (None)

class UClass* UBP_AlertByKilledFriendState_QuestionMark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AlertByKilledFriendState_QuestionMark_C");

	return Clss;
}


// BP_AlertByKilledFriendState_QuestionMark_C BP_AlertByKilledFriendState_QuestionMark.Default__BP_AlertByKilledFriendState_QuestionMark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AlertByKilledFriendState_QuestionMark_C* UBP_AlertByKilledFriendState_QuestionMark_C::GetDefaultObj()
{
	static class UBP_AlertByKilledFriendState_QuestionMark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AlertByKilledFriendState_QuestionMark_C*>(UBP_AlertByKilledFriendState_QuestionMark_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AlertByKilledFriendState_QuestionMark.BP_AlertByKilledFriendState_QuestionMark_C.StateEnter
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AlertByKilledFriendState_QuestionMark_C::StateEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertByKilledFriendState_QuestionMark_C", "StateEnter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AlertByKilledFriendState_QuestionMark.BP_AlertByKilledFriendState_QuestionMark_C.ExecuteUbergraph_BP_AlertByKilledFriendState_QuestionMark
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAIActionBase*            K2Node_DynamicCast_AsPal_AIAction_Base                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetActionComponent_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              CallFunc_PlayAction_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AlertByKilledFriendState_QuestionMark_C::ExecuteUbergraph_BP_AlertByKilledFriendState_QuestionMark(int32 EntryPoint, class UObject* CallFunc_GetOuterObject_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue_1, class UPalAIActionBase* K2Node_DynamicCast_AsPal_AIAction_Base, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, class UPalActionBase* CallFunc_PlayAction_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertByKilledFriendState_QuestionMark_C", "ExecuteUbergraph_BP_AlertByKilledFriendState_QuestionMark");

	Params::UBP_AlertByKilledFriendState_QuestionMark_C_ExecuteUbergraph_BP_AlertByKilledFriendState_QuestionMark_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOuterObject_ReturnValue = CallFunc_GetOuterObject_ReturnValue;
	Parms.CallFunc_GetOuterObject_ReturnValue_1 = CallFunc_GetOuterObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPal_AIAction_Base = K2Node_DynamicCast_AsPal_AIAction_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetActionComponent_ReturnValue = CallFunc_GetActionComponent_ReturnValue;
	Parms.CallFunc_PlayAction_ReturnValue = CallFunc_PlayAction_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


