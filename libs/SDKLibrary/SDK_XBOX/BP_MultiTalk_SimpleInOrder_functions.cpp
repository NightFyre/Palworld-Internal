#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MultiTalk_SimpleInOrder.BP_MultiTalk_SimpleInOrder_C
// (None)

class UClass* UBP_MultiTalk_SimpleInOrder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MultiTalk_SimpleInOrder_C");

	return Clss;
}


// BP_MultiTalk_SimpleInOrder_C BP_MultiTalk_SimpleInOrder.Default__BP_MultiTalk_SimpleInOrder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MultiTalk_SimpleInOrder_C* UBP_MultiTalk_SimpleInOrder_C::GetDefaultObj()
{
	static class UBP_MultiTalk_SimpleInOrder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MultiTalk_SimpleInOrder_C*>(UBP_MultiTalk_SimpleInOrder_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MultiTalk_SimpleInOrder.BP_MultiTalk_SimpleInOrder_C.GetMaxTalkCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              MaxTalkCount                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MultiTalk_SimpleInOrder_C::GetMaxTalkCount(int32* MaxTalkCount, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MultiTalk_SimpleInOrder_C", "GetMaxTalkCount");

	Params::UBP_MultiTalk_SimpleInOrder_C_GetMaxTalkCount_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MaxTalkCount != nullptr)
		*MaxTalkCount = Parms.MaxTalkCount;

}


// Function BP_MultiTalk_SimpleInOrder.BP_MultiTalk_SimpleInOrder_C.GetTalkData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InTalkID                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  TempDT                                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentTalkCount_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetTalkData_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxTalkCount_MaxTalkCount                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class UDataTable* UBP_MultiTalk_SimpleInOrder_C::GetTalkData(class FName& InTalkID, int32 CurrentIndex, class UDataTable* TempDT, int32 CallFunc_GetCurrentTalkCount_ReturnValue, class UDataTable* CallFunc_GetTalkData_ReturnValue, int32 CallFunc_GetMaxTalkCount_MaxTalkCount, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class UDataTable* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MultiTalk_SimpleInOrder_C", "GetTalkData");

	Params::UBP_MultiTalk_SimpleInOrder_C_GetTalkData_Params Parms{};

	Parms.InTalkID = InTalkID;
	Parms.CurrentIndex = CurrentIndex;
	Parms.TempDT = TempDT;
	Parms.CallFunc_GetCurrentTalkCount_ReturnValue = CallFunc_GetCurrentTalkCount_ReturnValue;
	Parms.CallFunc_GetTalkData_ReturnValue = CallFunc_GetTalkData_ReturnValue;
	Parms.CallFunc_GetMaxTalkCount_MaxTalkCount = CallFunc_GetMaxTalkCount_MaxTalkCount;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MultiTalk_SimpleInOrder.BP_MultiTalk_SimpleInOrder_C.OnFinishOneTalk
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MultiTalk_SimpleInOrder_C::OnFinishOneTalk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MultiTalk_SimpleInOrder_C", "OnFinishOneTalk");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MultiTalk_SimpleInOrder.BP_MultiTalk_SimpleInOrder_C.ExecuteUbergraph_BP_MultiTalk_SimpleInOrder
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentTalkCount_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxTalkCount_MaxTalkCount                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MultiTalk_SimpleInOrder_C::ExecuteUbergraph_BP_MultiTalk_SimpleInOrder(int32 EntryPoint, int32 CallFunc_GetCurrentTalkCount_ReturnValue, int32 CallFunc_GetMaxTalkCount_MaxTalkCount, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MultiTalk_SimpleInOrder_C", "ExecuteUbergraph_BP_MultiTalk_SimpleInOrder");

	Params::UBP_MultiTalk_SimpleInOrder_C_ExecuteUbergraph_BP_MultiTalk_SimpleInOrder_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurrentTalkCount_ReturnValue = CallFunc_GetCurrentTalkCount_ReturnValue;
	Parms.CallFunc_GetMaxTalkCount_MaxTalkCount = CallFunc_GetMaxTalkCount_MaxTalkCount;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


