#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Action_BeThrown.BP_Action_BeThrown_C
// (None)

class UClass* UBP_Action_BeThrown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Action_BeThrown_C");

	return Clss;
}


// BP_Action_BeThrown_C BP_Action_BeThrown.Default__BP_Action_BeThrown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Action_BeThrown_C* UBP_Action_BeThrown_C::GetDefaultObj()
{
	static class UBP_Action_BeThrown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Action_BeThrown_C*>(UBP_Action_BeThrown_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Action_BeThrown.BP_Action_BeThrown_C.PlayThrownFX
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_Action_BeThrown_C::PlayThrownFX(class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_BeThrown_C", "PlayThrownFX");

	Params::UBP_Action_BeThrown_C_PlayThrownFX_Params Parms{};

	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_2 = CallFunc_GetActionCharacter_ReturnValue_2;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Action_BeThrown.BP_Action_BeThrown_C.PlayThrownMontage
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_Action_BeThrown_C::PlayThrownMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_BeThrown_C", "PlayThrownMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Action_BeThrown.BP_Action_BeThrown_C.ExecuteUbergraph_BP_Action_BeThrown
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalActionType          Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_BeThrown_C::ExecuteUbergraph_BP_Action_BeThrown(int32 EntryPoint, enum class EPalActionType Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, float CallFunc_PlayAnimMontage_ReturnValue, bool CallFunc_IsDead_ReturnValue, class UAnimMontage* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Action_BeThrown_C", "ExecuteUbergraph_BP_Action_BeThrown");

	Params::UBP_Action_BeThrown_C_ExecuteUbergraph_BP_Action_BeThrown_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


