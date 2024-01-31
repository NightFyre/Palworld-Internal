#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Action_NPC_HasPropMonoMotion.BP_Action_NPC_HasPropMonoMotion_C
// (None)

class UClass* UBP_Action_NPC_HasPropMonoMotion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Action_NPC_HasPropMonoMotion_C");

	return Clss;
}


// BP_Action_NPC_HasPropMonoMotion_C BP_Action_NPC_HasPropMonoMotion.Default__BP_Action_NPC_HasPropMonoMotion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Action_NPC_HasPropMonoMotion_C* UBP_Action_NPC_HasPropMonoMotion_C::GetDefaultObj()
{
	static class UBP_Action_NPC_HasPropMonoMotion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Action_NPC_HasPropMonoMotion_C*>(UBP_Action_NPC_HasPropMonoMotion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Action_NPC_HasPropMonoMotion.BP_Action_NPC_HasPropMonoMotion_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Action_NPC_HasPropMonoMotion_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_NPC_HasPropMonoMotion_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Action_NPC_HasPropMonoMotion.BP_Action_NPC_HasPropMonoMotion_C.OnEndAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Action_NPC_HasPropMonoMotion_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_NPC_HasPropMonoMotion_C", "OnEndAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Action_NPC_HasPropMonoMotion.BP_Action_NPC_HasPropMonoMotion_C.ExecuteUbergraph_BP_Action_NPC_HasPropMonoMotion
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   CallFunc_GetMainMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Prop_Base_C*             CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult        (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UBP_Action_NPC_HasPropMonoMotion_C::ExecuteUbergraph_BP_Action_NPC_HasPropMonoMotion(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Prop_Base_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_NPC_HasPropMonoMotion_C", "ExecuteUbergraph_BP_Action_NPC_HasPropMonoMotion");

	Params::UBP_Action_NPC_HasPropMonoMotion_C_ExecuteUbergraph_BP_Action_NPC_HasPropMonoMotion_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetMainMesh_ReturnValue = CallFunc_GetMainMesh_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult = CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


