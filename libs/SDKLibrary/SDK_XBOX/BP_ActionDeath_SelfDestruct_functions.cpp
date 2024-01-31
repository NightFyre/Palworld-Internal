#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionDeath_SelfDestruct.BP_ActionDeath_SelfDestruct_C
// (None)

class UClass* UBP_ActionDeath_SelfDestruct_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionDeath_SelfDestruct_C");

	return Clss;
}


// BP_ActionDeath_SelfDestruct_C BP_ActionDeath_SelfDestruct.Default__BP_ActionDeath_SelfDestruct_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionDeath_SelfDestruct_C* UBP_ActionDeath_SelfDestruct_C::GetDefaultObj()
{
	static class UBP_ActionDeath_SelfDestruct_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionDeath_SelfDestruct_C*>(UBP_ActionDeath_SelfDestruct_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionDeath_SelfDestruct.BP_ActionDeath_SelfDestruct_C.GetExClass
// (Private, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:

void UBP_ActionDeath_SelfDestruct_C::GetExClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionDeath_SelfDestruct_C", "GetExClass");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionDeath_SelfDestruct.BP_ActionDeath_SelfDestruct_C.OnBeginAction
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionDeath_SelfDestruct_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionDeath_SelfDestruct_C", "OnBeginAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionDeath_SelfDestruct.BP_ActionDeath_SelfDestruct_C.ExecuteUbergraph_BP_ActionDeath_SelfDestruct
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetActionCharacter_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PalCryComponent_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SkillEffect_SelfDestruct_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDeath_SelfDestruct_C::ExecuteUbergraph_BP_ActionDeath_SelfDestruct(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UBP_PalCryComponent_C* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_SkillEffect_SelfDestruct_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionDeath_SelfDestruct_C", "ExecuteUbergraph_BP_ActionDeath_SelfDestruct");

	Params::UBP_ActionDeath_SelfDestruct_C_ExecuteUbergraph_BP_ActionDeath_SelfDestruct_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActionCharacter_ReturnValue = CallFunc_GetActionCharacter_ReturnValue;
	Parms.CallFunc_GetActionCharacter_ReturnValue_1 = CallFunc_GetActionCharacter_ReturnValue_1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


