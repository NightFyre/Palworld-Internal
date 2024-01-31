#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIActionPairCall_FeedItem.BP_AIActionPairCall_FeedItem_C
// (None)

class UClass* UBP_AIActionPairCall_FeedItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIActionPairCall_FeedItem_C");

	return Clss;
}


// BP_AIActionPairCall_FeedItem_C BP_AIActionPairCall_FeedItem.Default__BP_AIActionPairCall_FeedItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIActionPairCall_FeedItem_C* UBP_AIActionPairCall_FeedItem_C::GetDefaultObj()
{
	static class UBP_AIActionPairCall_FeedItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIActionPairCall_FeedItem_C*>(UBP_AIActionPairCall_FeedItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIActionPairCall_FeedItem.BP_AIActionPairCall_FeedItem_C.CreatePairBehaviorActionDynamicParameter
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FActionDynamicParameter     DynamicParameter                                                 (Parm, OutParm)
// struct FPalNetArchive              Blackboard                                                       (Edit, BlueprintVisible)
// struct FActionDynamicParameter     Parameter                                                        (Edit, BlueprintVisible)
// struct FPalNetArchive              K2Node_MakeStruct_PalNetArchive                                  (None)
// struct FActionDynamicParameter     CallFunc_CreatePairBehaviorActionDynamicParameter_DynamicParameter(None)

void UBP_AIActionPairCall_FeedItem_C::CreatePairBehaviorActionDynamicParameter(struct FActionDynamicParameter* DynamicParameter, const struct FPalNetArchive& Blackboard, const struct FActionDynamicParameter& Parameter, const struct FPalNetArchive& K2Node_MakeStruct_PalNetArchive, const struct FActionDynamicParameter& CallFunc_CreatePairBehaviorActionDynamicParameter_DynamicParameter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIActionPairCall_FeedItem_C", "CreatePairBehaviorActionDynamicParameter");

	Params::UBP_AIActionPairCall_FeedItem_C_CreatePairBehaviorActionDynamicParameter_Params Parms{};

	Parms.Blackboard = Blackboard;
	Parms.Parameter = Parameter;
	Parms.K2Node_MakeStruct_PalNetArchive = K2Node_MakeStruct_PalNetArchive;
	Parms.CallFunc_CreatePairBehaviorActionDynamicParameter_DynamicParameter = CallFunc_CreatePairBehaviorActionDynamicParameter_DynamicParameter;

	UObject::ProcessEvent(Func, &Parms);

	if (DynamicParameter != nullptr)
		*DynamicParameter = std::move(Parms.DynamicParameter);

}

}


