#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VisualEffect_Status_Flamed.BP_VisualEffect_Status_Flamed_C
// (None)

class UClass* UBP_VisualEffect_Status_Flamed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VisualEffect_Status_Flamed_C");

	return Clss;
}


// BP_VisualEffect_Status_Flamed_C BP_VisualEffect_Status_Flamed.Default__BP_VisualEffect_Status_Flamed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VisualEffect_Status_Flamed_C* UBP_VisualEffect_Status_Flamed_C::GetDefaultObj()
{
	static class UBP_VisualEffect_Status_Flamed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VisualEffect_Status_Flamed_C*>(UBP_VisualEffect_Status_Flamed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VisualEffect_Status_Flamed.BP_VisualEffect_Status_Flamed_C.OnBeginVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_VisualEffect_Status_Flamed_C::OnBeginVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_Status_Flamed_C", "OnBeginVisualEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VisualEffect_Status_Flamed.BP_VisualEffect_Status_Flamed_C.TickVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_Status_Flamed_C::TickVisualEffect(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_Status_Flamed_C", "TickVisualEffect");

	Params::UBP_VisualEffect_Status_Flamed_C_TickVisualEffect_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VisualEffect_Status_Flamed.BP_VisualEffect_Status_Flamed_C.OnEndVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_VisualEffect_Status_Flamed_C::OnEndVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_Status_Flamed_C", "OnEndVisualEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VisualEffect_Status_Flamed.BP_VisualEffect_Status_Flamed_C.ExecuteUbergraph_BP_VisualEffect_Status_Flamed
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetMainMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_Status_Flamed_C::ExecuteUbergraph_BP_VisualEffect_Status_Flamed(int32 EntryPoint, float K2Node_Event_DeltaTime, class USkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPalSkeletalMeshComponent* K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_Status_Flamed_C", "ExecuteUbergraph_BP_VisualEffect_Status_Flamed");

	Params::UBP_VisualEffect_Status_Flamed_C_ExecuteUbergraph_BP_VisualEffect_Status_Flamed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetMainMesh_ReturnValue = CallFunc_GetMainMesh_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component = K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


