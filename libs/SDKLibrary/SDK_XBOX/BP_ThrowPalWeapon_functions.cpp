#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ThrowPalWeapon.BP_ThrowPalWeapon_C
// (Actor)

class UClass* ABP_ThrowPalWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ThrowPalWeapon_C");

	return Clss;
}


// BP_ThrowPalWeapon_C BP_ThrowPalWeapon.Default__BP_ThrowPalWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ThrowPalWeapon_C* ABP_ThrowPalWeapon_C::GetDefaultObj()
{
	static class ABP_ThrowPalWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ThrowPalWeapon_C*>(ABP_ThrowPalWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.IsEmptyMagazine
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_ThrowPalWeapon_C::IsEmptyMagazine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowPalWeapon_C", "IsEmptyMagazine");

	Params::ABP_ThrowPalWeapon_C_IsEmptyMagazine_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.Set Flags
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Disable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Speed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        FlagName                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetOwnerCharacter_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterMovementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowPalWeapon_C::Set_Flags(bool Disable, double Speed, class FName FlagName, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowPalWeapon_C", "Set Flags");

	Params::ABP_ThrowPalWeapon_C_Set_Flags_Params Parms{};

	Parms.Disable = Disable;
	Parms.Speed = Speed;
	Parms.FlagName = FlagName;
	Parms.CallFunc_GetOwnerCharacter_ReturnValue = CallFunc_GetOwnerCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast = CallFunc_SetWalkSpeedMultiplier_speed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.OnThrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThrowPalWeapon_C::OnThrow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowPalWeapon_C", "OnThrow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.IsNotEmptyOtomo
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               NotEmpty                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalOtomoHolderComponentBase*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetOtomoCount_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowPalWeapon_C::IsNotEmptyOtomo(bool* NotEmpty, class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UPalOtomoHolderComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetOtomoCount_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowPalWeapon_C", "IsNotEmptyOtomo");

	Params::ABP_ThrowPalWeapon_C_IsNotEmptyOtomo_Params Parms{};

	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOtomoCount_ReturnValue = CallFunc_GetOtomoCount_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NotEmpty != nullptr)
		*NotEmpty = Parms.NotEmpty;

}


// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.GetEquipSocketName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_ThrowPalWeapon_C::GetEquipSocketName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowPalWeapon_C", "GetEquipSocketName");

	Params::ABP_ThrowPalWeapon_C_GetEquipSocketName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.GetThrowObjectClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      ThrowObject                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowPalWeapon_C::GetThrowObjectClass(class UClass** ThrowObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowPalWeapon_C", "GetThrowObjectClass");

	Params::ABP_ThrowPalWeapon_C_GetThrowObjectClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ThrowObject != nullptr)
		*ThrowObject = Parms.ThrowObject;

}


// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.OnAttachWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      AttachActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowPalWeapon_C::OnAttachWeapon(class AActor* AttachActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowPalWeapon_C", "OnAttachWeapon");

	Params::ABP_ThrowPalWeapon_C_OnAttachWeapon_Params Parms{};

	Parms.AttachActor = AttachActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.OnDetachWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DetachActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowPalWeapon_C::OnDetachWeapon(class AActor* DetachActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowPalWeapon_C", "OnDetachWeapon");

	Params::ABP_ThrowPalWeapon_C_OnDetachWeapon_Params Parms{};

	Parms.DetachActor = DetachActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThrowPalWeapon.BP_ThrowPalWeapon_C.ExecuteUbergraph_BP_ThrowPalWeapon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNotEmptyOtomo_NotEmpty                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_attachActor                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_detachActor                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowPalWeapon_C::ExecuteUbergraph_BP_ThrowPalWeapon(int32 EntryPoint, bool CallFunc_IsNotEmptyOtomo_NotEmpty, class AActor* K2Node_Event_attachActor, class AActor* K2Node_Event_detachActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowPalWeapon_C", "ExecuteUbergraph_BP_ThrowPalWeapon");

	Params::ABP_ThrowPalWeapon_C_ExecuteUbergraph_BP_ThrowPalWeapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsNotEmptyOtomo_NotEmpty = CallFunc_IsNotEmptyOtomo_NotEmpty;
	Parms.K2Node_Event_attachActor = K2Node_Event_attachActor;
	Parms.K2Node_Event_detachActor = K2Node_Event_detachActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


