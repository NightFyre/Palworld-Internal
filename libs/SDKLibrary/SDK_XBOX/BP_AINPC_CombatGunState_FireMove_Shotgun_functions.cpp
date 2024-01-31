#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AINPC_CombatGunState_FireMove_Shotgun.BP_AINPC_CombatGunState_FireMove_Shotgun_C
// (None)

class UClass* UBP_AINPC_CombatGunState_FireMove_Shotgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AINPC_CombatGunState_FireMove_Shotgun_C");

	return Clss;
}


// BP_AINPC_CombatGunState_FireMove_Shotgun_C BP_AINPC_CombatGunState_FireMove_Shotgun.Default__BP_AINPC_CombatGunState_FireMove_Shotgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AINPC_CombatGunState_FireMove_Shotgun_C* UBP_AINPC_CombatGunState_FireMove_Shotgun_C::GetDefaultObj()
{
	static class UBP_AINPC_CombatGunState_FireMove_Shotgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AINPC_CombatGunState_FireMove_Shotgun_C*>(UBP_AINPC_CombatGunState_FireMove_Shotgun_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AINPC_CombatGunState_FireMove_Shotgun.BP_AINPC_CombatGunState_FireMove_Shotgun_C.MoveDIrectionWorldSpace
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Direction                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetSelfActor_SelfActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_FireMove_Shotgun_C::MoveDIrectionWorldSpace(struct FVector* Direction, class APalCharacter* CallFunc_GetSelfActor_SelfActor, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_FireMove_Shotgun_C", "MoveDIrectionWorldSpace");

	Params::UBP_AINPC_CombatGunState_FireMove_Shotgun_C_MoveDIrectionWorldSpace_Params Parms{};

	Parms.CallFunc_GetSelfActor_SelfActor = CallFunc_GetSelfActor_SelfActor;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Direction != nullptr)
		*Direction = std::move(Parms.Direction);

}

}


