#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MultiTalk_OrderByName.BP_MultiTalk_OrderByName_C
// (None)

class UClass* UBP_MultiTalk_OrderByName_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MultiTalk_OrderByName_C");

	return Clss;
}


// BP_MultiTalk_OrderByName_C BP_MultiTalk_OrderByName.Default__BP_MultiTalk_OrderByName_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MultiTalk_OrderByName_C* UBP_MultiTalk_OrderByName_C::GetDefaultObj()
{
	static class UBP_MultiTalk_OrderByName_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MultiTalk_OrderByName_C*>(UBP_MultiTalk_OrderByName_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MultiTalk_OrderByName.BP_MultiTalk_OrderByName_C.GetMaxTalkCount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              MaxTalkCount                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MultiTalk_OrderByName_C::GetMaxTalkCount(int32* MaxTalkCount, bool CallFunc_IsValid_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MultiTalk_OrderByName_C", "GetMaxTalkCount");

	Params::UBP_MultiTalk_OrderByName_C_GetMaxTalkCount_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MaxTalkCount != nullptr)
		*MaxTalkCount = Parms.MaxTalkCount;

}


// Function BP_MultiTalk_OrderByName.BP_MultiTalk_OrderByName_C.GetStartTalkSequence
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Sequence                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// int64                              Count                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentTalkCount_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxTalkCount_MaxTalkCount                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UBP_MultiTalk_OrderByName_C::GetStartTalkSequence(class FString* Sequence, int64 Count, int32 CallFunc_GetCurrentTalkCount_ReturnValue, int32 CallFunc_GetMaxTalkCount_MaxTalkCount, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MultiTalk_OrderByName_C", "GetStartTalkSequence");

	Params::UBP_MultiTalk_OrderByName_C_GetStartTalkSequence_Params Parms{};

	Parms.Count = Count;
	Parms.CallFunc_GetCurrentTalkCount_ReturnValue = CallFunc_GetCurrentTalkCount_ReturnValue;
	Parms.CallFunc_GetMaxTalkCount_MaxTalkCount = CallFunc_GetMaxTalkCount_MaxTalkCount;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Sequence != nullptr)
		*Sequence = std::move(Parms.Sequence);

}


// Function BP_MultiTalk_OrderByName.BP_MultiTalk_OrderByName_C.GetTalkData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InTalkID                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetTalkData_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class UDataTable* UBP_MultiTalk_OrderByName_C::GetTalkData(class FName& InTalkID, class UDataTable* CallFunc_GetTalkData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MultiTalk_OrderByName_C", "GetTalkData");

	Params::UBP_MultiTalk_OrderByName_C_GetTalkData_Params Parms{};

	Parms.InTalkID = InTalkID;
	Parms.CallFunc_GetTalkData_ReturnValue = CallFunc_GetTalkData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MultiTalk_OrderByName.BP_MultiTalk_OrderByName_C.OnFinishOneTalk
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MultiTalk_OrderByName_C::OnFinishOneTalk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MultiTalk_OrderByName_C", "OnFinishOneTalk");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MultiTalk_OrderByName.BP_MultiTalk_OrderByName_C.ExecuteUbergraph_BP_MultiTalk_OrderByName
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentTalkCount_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxTalkCount_MaxTalkCount                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MultiTalk_OrderByName_C::ExecuteUbergraph_BP_MultiTalk_OrderByName(int32 EntryPoint, int32 CallFunc_GetCurrentTalkCount_ReturnValue, int32 CallFunc_GetMaxTalkCount_MaxTalkCount, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MultiTalk_OrderByName_C", "ExecuteUbergraph_BP_MultiTalk_OrderByName");

	Params::UBP_MultiTalk_OrderByName_C_ExecuteUbergraph_BP_MultiTalk_OrderByName_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurrentTalkCount_ReturnValue = CallFunc_GetCurrentTalkCount_ReturnValue;
	Parms.CallFunc_GetMaxTalkCount_MaxTalkCount = CallFunc_GetMaxTalkCount_MaxTalkCount;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


