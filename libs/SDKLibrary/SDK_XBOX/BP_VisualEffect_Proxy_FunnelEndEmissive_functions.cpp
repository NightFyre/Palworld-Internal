#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VisualEffect_Proxy_FunnelEndEmissive.BP_VisualEffect_Proxy_FunnelEndEmissive_C
// (None)

class UClass* UBP_VisualEffect_Proxy_FunnelEndEmissive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VisualEffect_Proxy_FunnelEndEmissive_C");

	return Clss;
}


// BP_VisualEffect_Proxy_FunnelEndEmissive_C BP_VisualEffect_Proxy_FunnelEndEmissive.Default__BP_VisualEffect_Proxy_FunnelEndEmissive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VisualEffect_Proxy_FunnelEndEmissive_C* UBP_VisualEffect_Proxy_FunnelEndEmissive_C::GetDefaultObj()
{
	static class UBP_VisualEffect_Proxy_FunnelEndEmissive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VisualEffect_Proxy_FunnelEndEmissive_C*>(UBP_VisualEffect_Proxy_FunnelEndEmissive_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VisualEffect_Proxy_FunnelEndEmissive.BP_VisualEffect_Proxy_FunnelEndEmissive_C.OnBeginVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_VisualEffect_Proxy_FunnelEndEmissive_C::OnBeginVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_Proxy_FunnelEndEmissive_C", "OnBeginVisualEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VisualEffect_Proxy_FunnelEndEmissive.BP_VisualEffect_Proxy_FunnelEndEmissive_C.ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CopyMesh_FunnelEndEmissive_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_Proxy_FunnelEndEmissive_C::ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_CopyMesh_FunnelEndEmissive_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_Proxy_FunnelEndEmissive_C", "ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive");

	Params::UBP_VisualEffect_Proxy_FunnelEndEmissive_C_ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


