#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MeleeWeaponBase.BP_MeleeWeaponBase_C
// (Actor)

class UClass* ABP_MeleeWeaponBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MeleeWeaponBase_C");

	return Clss;
}


// BP_MeleeWeaponBase_C BP_MeleeWeaponBase.Default__BP_MeleeWeaponBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MeleeWeaponBase_C* ABP_MeleeWeaponBase_C::GetDefaultObj()
{
	static class ABP_MeleeWeaponBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MeleeWeaponBase_C*>(ABP_MeleeWeaponBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MeleeWeaponBase.BP_MeleeWeaponBase_C.SeekRightHandOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_MeleeWeaponBase_C::SeekRightHandOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MeleeWeaponBase_C", "SeekRightHandOpen");

	Params::ABP_MeleeWeaponBase_C_SeekRightHandOpen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MeleeWeaponBase.BP_MeleeWeaponBase_C.SeekLeftHandOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_MeleeWeaponBase_C::SeekLeftHandOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MeleeWeaponBase_C", "SeekLeftHandOpen");

	Params::ABP_MeleeWeaponBase_C_SeekLeftHandOpen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MeleeWeaponBase.BP_MeleeWeaponBase_C.GetLeftHandTransform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform ABP_MeleeWeaponBase_C::GetLeftHandTransform(const struct FTransform& CallFunc_GetSocketTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MeleeWeaponBase_C", "GetLeftHandTransform");

	Params::ABP_MeleeWeaponBase_C_GetLeftHandTransform_Params Parms{};

	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MeleeWeaponBase.BP_MeleeWeaponBase_C.IsUseLeftHandAttach
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_MeleeWeaponBase_C::IsUseLeftHandAttach()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MeleeWeaponBase_C", "IsUseLeftHandAttach");

	Params::ABP_MeleeWeaponBase_C_IsUseLeftHandAttach_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_MeleeWeaponBase.BP_MeleeWeaponBase_C.GetEquipSocketName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_MeleeWeaponBase_C::GetEquipSocketName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MeleeWeaponBase_C", "GetEquipSocketName");

	Params::ABP_MeleeWeaponBase_C_GetEquipSocketName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


