#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VisualEffect_Status_Darkness.BP_VisualEffect_Status_Darkness_C
// (None)

class UClass* UBP_VisualEffect_Status_Darkness_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VisualEffect_Status_Darkness_C");

	return Clss;
}


// BP_VisualEffect_Status_Darkness_C BP_VisualEffect_Status_Darkness.Default__BP_VisualEffect_Status_Darkness_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VisualEffect_Status_Darkness_C* UBP_VisualEffect_Status_Darkness_C::GetDefaultObj()
{
	static class UBP_VisualEffect_Status_Darkness_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VisualEffect_Status_Darkness_C*>(UBP_VisualEffect_Status_Darkness_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VisualEffect_Status_Darkness.BP_VisualEffect_Status_Darkness_C.OnBeginVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_VisualEffect_Status_Darkness_C::OnBeginVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_Status_Darkness_C", "OnBeginVisualEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VisualEffect_Status_Darkness.BP_VisualEffect_Status_Darkness_C.OnEndVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_VisualEffect_Status_Darkness_C::OnEndVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_Status_Darkness_C", "OnEndVisualEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VisualEffect_Status_Darkness.BP_VisualEffect_Status_Darkness_C.TickVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_Status_Darkness_C::TickVisualEffect(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_Status_Darkness_C", "TickVisualEffect");

	Params::UBP_VisualEffect_Status_Darkness_C_TickVisualEffect_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VisualEffect_Status_Darkness.BP_VisualEffect_Status_Darkness_C.ExecuteUbergraph_BP_VisualEffect_Status_Darkness
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetMainMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetBodyLocation_ReturnValue                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_Status_Darkness_C::ExecuteUbergraph_BP_VisualEffect_Status_Darkness(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, const struct FTransform& CallFunc_GetBodyLocation_ReturnValue, class UPalSkeletalMeshComponent* K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, float K2Node_Event_DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_Status_Darkness_C", "ExecuteUbergraph_BP_VisualEffect_Status_Darkness");

	Params::UBP_VisualEffect_Status_Darkness_C_ExecuteUbergraph_BP_VisualEffect_Status_Darkness_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetMainMesh_ReturnValue = CallFunc_GetMainMesh_ReturnValue;
	Parms.CallFunc_GetBodyLocation_ReturnValue = CallFunc_GetBodyLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component = K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


