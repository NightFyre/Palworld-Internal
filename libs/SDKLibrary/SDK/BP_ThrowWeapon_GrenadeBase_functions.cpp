#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ThrowWeapon_GrenadeBase.BP_ThrowWeapon_GrenadeBase_C
// (Actor)

class UClass* ABP_ThrowWeapon_GrenadeBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ThrowWeapon_GrenadeBase_C");

	return Clss;
}


// BP_ThrowWeapon_GrenadeBase_C BP_ThrowWeapon_GrenadeBase.Default__BP_ThrowWeapon_GrenadeBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ThrowWeapon_GrenadeBase_C* ABP_ThrowWeapon_GrenadeBase_C::GetDefaultObj()
{
	static class ABP_ThrowWeapon_GrenadeBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ThrowWeapon_GrenadeBase_C*>(ABP_ThrowWeapon_GrenadeBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ThrowWeapon_GrenadeBase.BP_ThrowWeapon_GrenadeBase_C.IsEnableAutoAim
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_ThrowWeapon_GrenadeBase_C::IsEnableAutoAim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowWeapon_GrenadeBase_C", "IsEnableAutoAim");

	Params::ABP_ThrowWeapon_GrenadeBase_C_IsEnableAutoAim_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ThrowWeapon_GrenadeBase.BP_ThrowWeapon_GrenadeBase_C.GetRemainBulletCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalPlayerCharacter*         CallFunc_GetPalmi_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalPlayerInventoryData*     CallFunc_GetLocalInventoryData_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalItemContainer*           CallFunc_TryGetContainerFromInventoryType_outContainer           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetContainerFromInventoryType_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNowSelectedIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStackCount_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_ThrowWeapon_GrenadeBase_C::GetRemainBulletCount(class APalPlayerCharacter* CallFunc_GetPalmi_ReturnValue, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, class UPalItemContainer* CallFunc_TryGetContainerFromInventoryType_outContainer, bool CallFunc_TryGetContainerFromInventoryType_ReturnValue, int32 CallFunc_GetNowSelectedIndex_ReturnValue, class UPalItemSlot* CallFunc_Array_Get_Item, int32 CallFunc_GetStackCount_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowWeapon_GrenadeBase_C", "GetRemainBulletCount");

	Params::ABP_ThrowWeapon_GrenadeBase_C_GetRemainBulletCount_Params Parms{};

	Parms.CallFunc_GetPalmi_ReturnValue = CallFunc_GetPalmi_ReturnValue;
	Parms.CallFunc_GetLocalInventoryData_ReturnValue = CallFunc_GetLocalInventoryData_ReturnValue;
	Parms.CallFunc_TryGetContainerFromInventoryType_outContainer = CallFunc_TryGetContainerFromInventoryType_outContainer;
	Parms.CallFunc_TryGetContainerFromInventoryType_ReturnValue = CallFunc_TryGetContainerFromInventoryType_ReturnValue;
	Parms.CallFunc_GetNowSelectedIndex_ReturnValue = CallFunc_GetNowSelectedIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetStackCount_ReturnValue = CallFunc_GetStackCount_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ThrowWeapon_GrenadeBase.BP_ThrowWeapon_GrenadeBase_C.GetShootPitch
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Pitch                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowWeapon_GrenadeBase_C::GetShootPitch(double* Pitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowWeapon_GrenadeBase_C", "GetShootPitch");

	Params::ABP_ThrowWeapon_GrenadeBase_C_GetShootPitch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Pitch != nullptr)
		*Pitch = Parms.Pitch;

}


// Function BP_ThrowWeapon_GrenadeBase.BP_ThrowWeapon_GrenadeBase_C.ComsumeItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThrowWeapon_GrenadeBase_C::ComsumeItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowWeapon_GrenadeBase_C", "ComsumeItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThrowWeapon_GrenadeBase.BP_ThrowWeapon_GrenadeBase_C.OnThrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThrowWeapon_GrenadeBase_C::OnThrow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowWeapon_GrenadeBase_C", "OnThrow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThrowWeapon_GrenadeBase.BP_ThrowWeapon_GrenadeBase_C.GetBulletShootRotation
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                    BulletRotate                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_GetShootPitch_Pitch                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetBulletShootRotation_BulletRotate                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Pitch_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowWeapon_GrenadeBase_C::GetBulletShootRotation(struct FRotator* BulletRotate, double CallFunc_GetShootPitch_Pitch, const struct FRotator& CallFunc_GetBulletShootRotation_BulletRotate, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowWeapon_GrenadeBase_C", "GetBulletShootRotation");

	Params::ABP_ThrowWeapon_GrenadeBase_C_GetBulletShootRotation_Params Parms{};

	Parms.CallFunc_GetShootPitch_Pitch = CallFunc_GetShootPitch_Pitch;
	Parms.CallFunc_GetBulletShootRotation_BulletRotate = CallFunc_GetBulletShootRotation_BulletRotate;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_MakeRotator_Pitch_ImplicitCast = CallFunc_MakeRotator_Pitch_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (BulletRotate != nullptr)
		*BulletRotate = std::move(Parms.BulletRotate);

}


// Function BP_ThrowWeapon_GrenadeBase.BP_ThrowWeapon_GrenadeBase_C.GetThrowObjectClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      ThrowObject                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowWeapon_GrenadeBase_C::GetThrowObjectClass(class UClass** ThrowObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowWeapon_GrenadeBase_C", "GetThrowObjectClass");

	Params::ABP_ThrowWeapon_GrenadeBase_C_GetThrowObjectClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ThrowObject != nullptr)
		*ThrowObject = Parms.ThrowObject;

}


// Function BP_ThrowWeapon_GrenadeBase.BP_ThrowWeapon_GrenadeBase_C.GetEquipSocketName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_ThrowWeapon_GrenadeBase_C::GetEquipSocketName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowWeapon_GrenadeBase_C", "GetEquipSocketName");

	Params::ABP_ThrowWeapon_GrenadeBase_C_GetEquipSocketName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


