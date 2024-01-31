#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FoliageModelChunk.BP_FoliageModelChunk_C
// (Actor)

class UClass* ABP_FoliageModelChunk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FoliageModelChunk_C");

	return Clss;
}


// BP_FoliageModelChunk_C BP_FoliageModelChunk.Default__BP_FoliageModelChunk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FoliageModelChunk_C* ABP_FoliageModelChunk_C::GetDefaultObj()
{
	static class ABP_FoliageModelChunk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FoliageModelChunk_C*>(ABP_FoliageModelChunk_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FoliageModelChunk.BP_FoliageModelChunk_C.OnReceivedChunkGridSize
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewChunkGridSize                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FoliageModelChunk_C::OnReceivedChunkGridSize(int32 NewChunkGridSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FoliageModelChunk_C", "OnReceivedChunkGridSize");

	Params::ABP_FoliageModelChunk_C_OnReceivedChunkGridSize_Params Parms{};

	Parms.NewChunkGridSize = NewChunkGridSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FoliageModelChunk.BP_FoliageModelChunk_C.ExecuteUbergraph_BP_FoliageModelChunk
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NewChunkGridSize                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FoliageModelChunk_C::ExecuteUbergraph_BP_FoliageModelChunk(int32 EntryPoint, int32 K2Node_Event_NewChunkGridSize, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FoliageModelChunk_C", "ExecuteUbergraph_BP_FoliageModelChunk");

	Params::ABP_FoliageModelChunk_C_ExecuteUbergraph_BP_FoliageModelChunk_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewChunkGridSize = K2Node_Event_NewChunkGridSize;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


