#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionCooking.BP_ActionCooking_C
// (None)

class UClass* UBP_ActionCooking_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionCooking_C");

	return Clss;
}


// BP_ActionCooking_C BP_ActionCooking.Default__BP_ActionCooking_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionCooking_C* UBP_ActionCooking_C::GetDefaultObj()
{
	static class UBP_ActionCooking_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionCooking_C*>(UBP_ActionCooking_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionCooking.BP_ActionCooking_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionCooking_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionCooking_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCooking.BP_ActionCooking_C.OnEndAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionCooking_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionCooking_C", "OnEndAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionCooking.BP_ActionCooking_C.ExecuteUbergraph_BP_ActionCooking
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   CallFunc_GetMainMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_CookingFryingPan_C*      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         K2Node_DynamicCast_AsPal_Player_Character                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionCooking_C::ExecuteUbergraph_BP_ActionCooking(int32 EntryPoint, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class ABP_CookingFryingPan_C* CallFunc_FinishSpawningActor_ReturnValue, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionCooking_C", "ExecuteUbergraph_BP_ActionCooking");

	Params::UBP_ActionCooking_C_ExecuteUbergraph_BP_ActionCooking_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_GetMainMesh_ReturnValue = CallFunc_GetMainMesh_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Player_Character = K2Node_DynamicCast_AsPal_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


