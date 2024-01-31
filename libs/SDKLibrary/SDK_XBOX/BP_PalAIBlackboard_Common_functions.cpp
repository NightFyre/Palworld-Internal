#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalAIBlackboard_Common.BP_PalAIBlackboard_Common_C
// (None)

class UClass* UBP_PalAIBlackboard_Common_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalAIBlackboard_Common_C");

	return Clss;
}


// BP_PalAIBlackboard_Common_C BP_PalAIBlackboard_Common.Default__BP_PalAIBlackboard_Common_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalAIBlackboard_Common_C* UBP_PalAIBlackboard_Common_C::GetDefaultObj()
{
	static class UBP_PalAIBlackboard_Common_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalAIBlackboard_Common_C*>(UBP_PalAIBlackboard_Common_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalAIBlackboard_Common.BP_PalAIBlackboard_Common_C.Initialize_PalBB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SelfActor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAIBlackboard_Common_C::Initialize_PalBB(class AActor* SelfActor, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAIBlackboard_Common_C", "Initialize_PalBB");

	Params::UBP_PalAIBlackboard_Common_C_Initialize_PalBB_Params Parms{};

	Parms.SelfActor = SelfActor;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalAIBlackboard_Common.BP_PalAIBlackboard_Common_C.ExecuteUbergraph_BP_PalAIBlackboard_Common
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAIBlackboard_Common_C::ExecuteUbergraph_BP_PalAIBlackboard_Common(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalAIBlackboard_Common_C", "ExecuteUbergraph_BP_PalAIBlackboard_Common");

	Params::UBP_PalAIBlackboard_Common_C_ExecuteUbergraph_BP_PalAIBlackboard_Common_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


