#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Player_Hair.ABP_Player_Hair_C
// (None)

class UClass* UABP_Player_Hair_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Player_Hair_C");

	return Clss;
}


// ABP_Player_Hair_C ABP_Player_Hair.Default__ABP_Player_Hair_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Player_Hair_C* UABP_Player_Hair_C::GetDefaultObj()
{
	static class UABP_Player_Hair_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Player_Hair_C*>(UABP_Player_Hair_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_Player_Hair.ABP_Player_Hair_C.HairLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   HairLayer                                                        (Parm, OutParm, NoDestructor)

void UABP_Player_Hair_C::HairLayer(const struct FPoseLink& InPose, struct FPoseLink* HairLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair_C", "HairLayer");

	Params::UABP_Player_Hair_C_HairLayer_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (HairLayer != nullptr)
		*HairLayer = std::move(Parms.HairLayer);

}


// Function ABP_Player_Hair.ABP_Player_Hair_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_Player_Hair_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair_C", "AnimGraph");

	Params::UABP_Player_Hair_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_Player_Hair.ABP_Player_Hair_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_Player_Hair_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair_C", "BlueprintBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player_Hair.ABP_Player_Hair_C.ExecuteUbergraph_ABP_Player_Hair
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_Hair_C::ExecuteUbergraph_ABP_Player_Hair(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Hair_C", "ExecuteUbergraph_ABP_Player_Hair");

	Params::UABP_Player_Hair_C_ExecuteUbergraph_ABP_Player_Hair_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


