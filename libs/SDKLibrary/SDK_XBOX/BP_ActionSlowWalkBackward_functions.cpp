#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionSlowWalkBackward.BP_ActionSlowWalkBackward_C
// (None)

class UClass* UBP_ActionSlowWalkBackward_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionSlowWalkBackward_C");

	return Clss;
}


// BP_ActionSlowWalkBackward_C BP_ActionSlowWalkBackward.Default__BP_ActionSlowWalkBackward_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionSlowWalkBackward_C* UBP_ActionSlowWalkBackward_C::GetDefaultObj()
{
	static class UBP_ActionSlowWalkBackward_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionSlowWalkBackward_C*>(UBP_ActionSlowWalkBackward_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionSlowWalkBackward.BP_ActionSlowWalkBackward_C.FindGoalPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ActionSlowWalkBackward_C::FindGoalPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSlowWalkBackward_C", "FindGoalPosition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionSlowWalkBackward.BP_ActionSlowWalkBackward_C.OnNotifyEnd_990D050E4901A391C8C8F78879A92A4F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSlowWalkBackward_C::OnNotifyEnd_990D050E4901A391C8C8F78879A92A4F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSlowWalkBackward_C", "OnNotifyEnd_990D050E4901A391C8C8F78879A92A4F");

	Params::UBP_ActionSlowWalkBackward_C_OnNotifyEnd_990D050E4901A391C8C8F78879A92A4F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionSlowWalkBackward.BP_ActionSlowWalkBackward_C.OnNotifyBegin_990D050E4901A391C8C8F78879A92A4F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSlowWalkBackward_C::OnNotifyBegin_990D050E4901A391C8C8F78879A92A4F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSlowWalkBackward_C", "OnNotifyBegin_990D050E4901A391C8C8F78879A92A4F");

	Params::UBP_ActionSlowWalkBackward_C_OnNotifyBegin_990D050E4901A391C8C8F78879A92A4F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionSlowWalkBackward.BP_ActionSlowWalkBackward_C.OnInterrupted_990D050E4901A391C8C8F78879A92A4F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSlowWalkBackward_C::OnInterrupted_990D050E4901A391C8C8F78879A92A4F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSlowWalkBackward_C", "OnInterrupted_990D050E4901A391C8C8F78879A92A4F");

	Params::UBP_ActionSlowWalkBackward_C_OnInterrupted_990D050E4901A391C8C8F78879A92A4F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionSlowWalkBackward.BP_ActionSlowWalkBackward_C.OnBlendOut_990D050E4901A391C8C8F78879A92A4F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSlowWalkBackward_C::OnBlendOut_990D050E4901A391C8C8F78879A92A4F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSlowWalkBackward_C", "OnBlendOut_990D050E4901A391C8C8F78879A92A4F");

	Params::UBP_ActionSlowWalkBackward_C_OnBlendOut_990D050E4901A391C8C8F78879A92A4F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionSlowWalkBackward.BP_ActionSlowWalkBackward_C.OnCompleted_990D050E4901A391C8C8F78879A92A4F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSlowWalkBackward_C::OnCompleted_990D050E4901A391C8C8F78879A92A4F(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSlowWalkBackward_C", "OnCompleted_990D050E4901A391C8C8F78879A92A4F");

	Params::UBP_ActionSlowWalkBackward_C_OnCompleted_990D050E4901A391C8C8F78879A92A4F_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionSlowWalkBackward.BP_ActionSlowWalkBackward_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionSlowWalkBackward_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSlowWalkBackward_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionSlowWalkBackward.BP_ActionSlowWalkBackward_C.OnEndAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionSlowWalkBackward_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSlowWalkBackward_C", "OnEndAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionSlowWalkBackward.BP_ActionSlowWalkBackward_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSlowWalkBackward_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSlowWalkBackward_C", "TickAction");

	Params::UBP_ActionSlowWalkBackward_C_TickAction_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionSlowWalkBackward.BP_ActionSlowWalkBackward_C.ExecuteUbergraph_BP_ActionSlowWalkBackward
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetPalCharacterMovementComponent_ReturnValue            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalActionType          Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTargetLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalStaticCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Vector_Normal2D_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetPalCharacterMovementComponent_ReturnValue_1          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_3                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetPalCharacterMovementComponent_ReturnValue_2          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_4                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_5                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_6                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalStaticCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   CallFunc_GetMainMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_7                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetPalCharacterMovementComponent_ReturnValue_3          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSlowWalkBackward_C::ExecuteUbergraph_BP_ActionSlowWalkBackward(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, enum class EPalActionType Temp_byte_Variable, float K2Node_Event_DeltaTime, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FVector& CallFunc_GetTargetLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_5, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_6, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_7, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, float CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionSlowWalkBackward_C", "ExecuteUbergraph_BP_ActionSlowWalkBackward");

	Params::UBP_ActionSlowWalkBackward_C_ExecuteUbergraph_BP_ActionSlowWalkBackward_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetPalCharacterMovementComponent_ReturnValue = CallFunc_GetPalCharacterMovementComponent_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.CallFunc_GetTargetLocation_ReturnValue = CallFunc_GetTargetLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_2 = CallFunc_GetActionCharacter_ReturnValue_2;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Vector_Normal2D_ReturnValue = CallFunc_Vector_Normal2D_ReturnValue;
	Parms.CallFunc_GetPalCharacterMovementComponent_ReturnValue_1 = CallFunc_GetPalCharacterMovementComponent_ReturnValue_1;
	Parms.CallFunc_GetActionCharacter_ReturnValue_3 = CallFunc_GetActionCharacter_ReturnValue_3;
	Parms.CallFunc_GetPalCharacterMovementComponent_ReturnValue_2 = CallFunc_GetPalCharacterMovementComponent_ReturnValue_2;
	Parms.CallFunc_GetActionCharacter_ReturnValue_4 = CallFunc_GetActionCharacter_ReturnValue_4;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_5 = CallFunc_GetActionCharacter_ReturnValue_5;
	Parms.CallFunc_GetActionCharacter_ReturnValue_6 = CallFunc_GetActionCharacter_ReturnValue_6;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetMainMesh_ReturnValue = CallFunc_GetMainMesh_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_7 = CallFunc_GetActionCharacter_ReturnValue_7;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_GetPalCharacterMovementComponent_ReturnValue_3 = CallFunc_GetPalCharacterMovementComponent_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast = CallFunc_CreateProxyObjectForPlayMontage_PlayRate_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


