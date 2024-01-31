#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AlertByKilledFriendState_AproachDeadPoint.BP_AlertByKilledFriendState_AproachDeadPoint_C
// (None)

class UClass* UBP_AlertByKilledFriendState_AproachDeadPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AlertByKilledFriendState_AproachDeadPoint_C");

	return Clss;
}


// BP_AlertByKilledFriendState_AproachDeadPoint_C BP_AlertByKilledFriendState_AproachDeadPoint.Default__BP_AlertByKilledFriendState_AproachDeadPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AlertByKilledFriendState_AproachDeadPoint_C* UBP_AlertByKilledFriendState_AproachDeadPoint_C::GetDefaultObj()
{
	static class UBP_AlertByKilledFriendState_AproachDeadPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AlertByKilledFriendState_AproachDeadPoint_C*>(UBP_AlertByKilledFriendState_AproachDeadPoint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AlertByKilledFriendState_AproachDeadPoint.BP_AlertByKilledFriendState_AproachDeadPoint_C.StateTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AlertByKilledFriendState_AproachDeadPoint_C::StateTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertByKilledFriendState_AproachDeadPoint_C", "StateTick");

	Params::UBP_AlertByKilledFriendState_AproachDeadPoint_C_StateTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AlertByKilledFriendState_AproachDeadPoint.BP_AlertByKilledFriendState_AproachDeadPoint_C.StateExit
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AlertByKilledFriendState_AproachDeadPoint_C::StateExit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertByKilledFriendState_AproachDeadPoint_C", "StateExit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AlertByKilledFriendState_AproachDeadPoint.BP_AlertByKilledFriendState_AproachDeadPoint_C.ExecuteUbergraph_BP_AlertByKilledFriendState_AproachDeadPoint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_AlertByKilledFriend_C*K2Node_DynamicCast_AsBP_AIAction_Alert_by_Killed_Friend          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_AIAction_AlertByKilledFriend_C*K2Node_DynamicCast_AsBP_AIAction_Alert_by_Killed_Friend_1        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AlertByKilledFriendState_AproachDeadPoint_C::ExecuteUbergraph_BP_AlertByKilledFriendState_AproachDeadPoint(int32 EntryPoint, class UObject* CallFunc_GetOuterObject_ReturnValue, float K2Node_Event_DeltaTime, class UBP_AIAction_AlertByKilledFriend_C* K2Node_DynamicCast_AsBP_AIAction_Alert_by_Killed_Friend, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetOuterObject_ReturnValue_1, class UBP_AIAction_AlertByKilledFriend_C* K2Node_DynamicCast_AsBP_AIAction_Alert_by_Killed_Friend_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AlertByKilledFriendState_AproachDeadPoint_C", "ExecuteUbergraph_BP_AlertByKilledFriendState_AproachDeadPoint");

	Params::UBP_AlertByKilledFriendState_AproachDeadPoint_C_ExecuteUbergraph_BP_AlertByKilledFriendState_AproachDeadPoint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOuterObject_ReturnValue = CallFunc_GetOuterObject_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.K2Node_DynamicCast_AsBP_AIAction_Alert_by_Killed_Friend = K2Node_DynamicCast_AsBP_AIAction_Alert_by_Killed_Friend;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOuterObject_ReturnValue_1 = CallFunc_GetOuterObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_AIAction_Alert_by_Killed_Friend_1 = K2Node_DynamicCast_AsBP_AIAction_Alert_by_Killed_Friend_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


