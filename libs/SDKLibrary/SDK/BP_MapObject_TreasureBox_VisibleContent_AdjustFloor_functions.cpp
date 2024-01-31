#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MapObject_TreasureBox_VisibleContent_AdjustFloor.BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C
// (Actor)

class UClass* ABP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C");

	return Clss;
}


// BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C BP_MapObject_TreasureBox_VisibleContent_AdjustFloor.Default__BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C* ABP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C::GetDefaultObj()
{
	static class ABP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C*>(ABP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MapObject_TreasureBox_VisibleContent_AdjustFloor.BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MapObject_TreasureBox_VisibleContent_AdjustFloor.BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C.ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_AdjustActorToFloor_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C::ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class AActor* CallFunc_AdjustActorToFloor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C", "ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor");

	Params::ABP_MapObject_TreasureBox_VisibleContent_AdjustFloor_C_ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent_AdjustFloor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_AdjustActorToFloor_ReturnValue = CallFunc_AdjustActorToFloor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


