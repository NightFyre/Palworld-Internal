#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VisualEffect_Status_Vines.BP_VisualEffect_Status_Vines_C
// (None)

class UClass* UBP_VisualEffect_Status_Vines_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VisualEffect_Status_Vines_C");

	return Clss;
}


// BP_VisualEffect_Status_Vines_C BP_VisualEffect_Status_Vines.Default__BP_VisualEffect_Status_Vines_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VisualEffect_Status_Vines_C* UBP_VisualEffect_Status_Vines_C::GetDefaultObj()
{
	static class UBP_VisualEffect_Status_Vines_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VisualEffect_Status_Vines_C*>(UBP_VisualEffect_Status_Vines_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VisualEffect_Status_Vines.BP_VisualEffect_Status_Vines_C.OnBeginVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_VisualEffect_Status_Vines_C::OnBeginVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_Status_Vines_C", "OnBeginVisualEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VisualEffect_Status_Vines.BP_VisualEffect_Status_Vines_C.OnEndVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_VisualEffect_Status_Vines_C::OnEndVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_Status_Vines_C", "OnEndVisualEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VisualEffect_Status_Vines.BP_VisualEffect_Status_Vines_C.TerminatingTickVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_Status_Vines_C::TerminatingTickVisualEffect(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_Status_Vines_C", "TerminatingTickVisualEffect");

	Params::UBP_VisualEffect_Status_Vines_C_TerminatingTickVisualEffect_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VisualEffect_Status_Vines.BP_VisualEffect_Status_Vines_C.ExecuteUbergraph_BP_VisualEffect_Status_Vines
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_GetAttachInformationByBodyLocation_attachComponent      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetAttachInformationByBodyLocation_attachBoneName       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetAttachInformationByBodyLocation_attachRelativeTransform(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAttachInformationByBodyLocation_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCapsuleComponent*           K2Node_DynamicCast_AsCapsule_Collision                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_Status_Vines_C::ExecuteUbergraph_BP_VisualEffect_Status_Vines(int32 EntryPoint, float K2Node_Event_DeltaTime, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class USceneComponent* CallFunc_GetAttachInformationByBodyLocation_attachComponent, class FName CallFunc_GetAttachInformationByBodyLocation_attachBoneName, const struct FTransform& CallFunc_GetAttachInformationByBodyLocation_attachRelativeTransform, bool CallFunc_GetAttachInformationByBodyLocation_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AActor* CallFunc_GetOwner_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UCapsuleComponent* K2Node_DynamicCast_AsCapsule_Collision, bool K2Node_DynamicCast_bSuccess, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VisualEffect_Status_Vines_C", "ExecuteUbergraph_BP_VisualEffect_Status_Vines");

	Params::UBP_VisualEffect_Status_Vines_C_ExecuteUbergraph_BP_VisualEffect_Status_Vines_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetAttachInformationByBodyLocation_attachComponent = CallFunc_GetAttachInformationByBodyLocation_attachComponent;
	Parms.CallFunc_GetAttachInformationByBodyLocation_attachBoneName = CallFunc_GetAttachInformationByBodyLocation_attachBoneName;
	Parms.CallFunc_GetAttachInformationByBodyLocation_attachRelativeTransform = CallFunc_GetAttachInformationByBodyLocation_attachRelativeTransform;
	Parms.CallFunc_GetAttachInformationByBodyLocation_ReturnValue = CallFunc_GetAttachInformationByBodyLocation_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsCapsule_Collision = K2Node_DynamicCast_AsCapsule_Collision;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast = CallFunc_SetVariableFloat_InValue_ImplicitCast;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_1 = CallFunc_SetVariableFloat_InValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


