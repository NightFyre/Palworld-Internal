#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Action_Rolling.BP_Action_Rolling_C
// (None)

class UClass* UBP_Action_Rolling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Action_Rolling_C");

	return Clss;
}


// BP_Action_Rolling_C BP_Action_Rolling.Default__BP_Action_Rolling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Action_Rolling_C* UBP_Action_Rolling_C::GetDefaultObj()
{
	static class UBP_Action_Rolling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Action_Rolling_C*>(UBP_Action_Rolling_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Action_Rolling.BP_Action_Rolling_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Action_Rolling_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Rolling_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Action_Rolling.BP_Action_Rolling_C.EndStep
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Action_Rolling_C::EndStep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Rolling_C", "EndStep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Action_Rolling.BP_Action_Rolling_C.OnBreakAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Action_Rolling_C::OnBreakAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Rolling_C", "OnBreakAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Action_Rolling.BP_Action_Rolling_C.ExecuteUbergraph_BP_Action_Rolling
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_3                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_4                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalDataTableRowName_SoundIDK2Node_MakeStruct_PalDataTableRowName_SoundID                    (NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_5                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActionVelocity_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Rolling_C::ExecuteUbergraph_BP_Action_Rolling(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_5, const struct FVector& CallFunc_GetActionVelocity_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_Rolling_C", "ExecuteUbergraph_BP_Action_Rolling");

	Params::UBP_Action_Rolling_C_ExecuteUbergraph_BP_Action_Rolling_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.CallFunc_GetActionCharacter_ReturnValue_2 = CallFunc_GetActionCharacter_ReturnValue_2;
	Parms.CallFunc_GetActionCharacter_ReturnValue_3 = CallFunc_GetActionCharacter_ReturnValue_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_4 = CallFunc_GetActionCharacter_ReturnValue_4;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_PalDataTableRowName_SoundID = K2Node_MakeStruct_PalDataTableRowName_SoundID;
	Parms.CallFunc_GetActionCharacter_ReturnValue_5 = CallFunc_GetActionCharacter_ReturnValue_5;
	Parms.CallFunc_GetActionVelocity_ReturnValue = CallFunc_GetActionVelocity_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


