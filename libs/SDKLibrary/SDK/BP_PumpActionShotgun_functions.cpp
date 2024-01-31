#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PumpActionShotgun.BP_PumpActionShotgun_C
// (Actor)

class UClass* ABP_PumpActionShotgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PumpActionShotgun_C");

	return Clss;
}


// BP_PumpActionShotgun_C BP_PumpActionShotgun.Default__BP_PumpActionShotgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PumpActionShotgun_C* ABP_PumpActionShotgun_C::GetDefaultObj()
{
	static class ABP_PumpActionShotgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PumpActionShotgun_C*>(ABP_PumpActionShotgun_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PumpActionShotgun.BP_PumpActionShotgun_C.EjectARound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_GetEjectionPort_EjectionTransform                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ShotgunAmmo_C*           CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PumpActionShotgun_C::EjectARound(const struct FTransform& CallFunc_GetEjectionPort_EjectionTransform, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ShotgunAmmo_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PumpActionShotgun_C", "EjectARound");

	Params::ABP_PumpActionShotgun_C_EjectARound_Params Parms{};

	Parms.CallFunc_GetEjectionPort_EjectionTransform = CallFunc_GetEjectionPort_EjectionTransform;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PumpActionShotgun.BP_PumpActionShotgun_C.IsUseLeftHandAttach
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_PumpActionShotgun_C::IsUseLeftHandAttach()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PumpActionShotgun_C", "IsUseLeftHandAttach");

	Params::ABP_PumpActionShotgun_C_IsUseLeftHandAttach_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PumpActionShotgun.BP_PumpActionShotgun_C.OnshotInternal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsShoted                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnshotInternal_IsShoted                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PumpActionShotgun_C::OnshotInternal(bool* IsShoted, bool CallFunc_OnshotInternal_IsShoted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PumpActionShotgun_C", "OnshotInternal");

	Params::ABP_PumpActionShotgun_C_OnshotInternal_Params Parms{};

	Parms.CallFunc_OnshotInternal_IsShoted = CallFunc_OnshotInternal_IsShoted;

	UObject::ProcessEvent(Func, &Parms);

	if (IsShoted != nullptr)
		*IsShoted = Parms.IsShoted;

}


// Function BP_PumpActionShotgun.BP_PumpActionShotgun_C.PlayReloadAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PumpActionShotgun_C::PlayReloadAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PumpActionShotgun_C", "PlayReloadAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PumpActionShotgun.BP_PumpActionShotgun_C.OnNotifyEnd_FCB44FF643DA97B49C538D845683A965
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PumpActionShotgun_C::OnNotifyEnd_FCB44FF643DA97B49C538D845683A965(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PumpActionShotgun_C", "OnNotifyEnd_FCB44FF643DA97B49C538D845683A965");

	Params::ABP_PumpActionShotgun_C_OnNotifyEnd_FCB44FF643DA97B49C538D845683A965_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PumpActionShotgun.BP_PumpActionShotgun_C.OnNotifyBegin_FCB44FF643DA97B49C538D845683A965
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PumpActionShotgun_C::OnNotifyBegin_FCB44FF643DA97B49C538D845683A965(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PumpActionShotgun_C", "OnNotifyBegin_FCB44FF643DA97B49C538D845683A965");

	Params::ABP_PumpActionShotgun_C_OnNotifyBegin_FCB44FF643DA97B49C538D845683A965_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PumpActionShotgun.BP_PumpActionShotgun_C.OnInterrupted_FCB44FF643DA97B49C538D845683A965
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PumpActionShotgun_C::OnInterrupted_FCB44FF643DA97B49C538D845683A965(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PumpActionShotgun_C", "OnInterrupted_FCB44FF643DA97B49C538D845683A965");

	Params::ABP_PumpActionShotgun_C_OnInterrupted_FCB44FF643DA97B49C538D845683A965_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PumpActionShotgun.BP_PumpActionShotgun_C.OnBlendOut_FCB44FF643DA97B49C538D845683A965
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PumpActionShotgun_C::OnBlendOut_FCB44FF643DA97B49C538D845683A965(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PumpActionShotgun_C", "OnBlendOut_FCB44FF643DA97B49C538D845683A965");

	Params::ABP_PumpActionShotgun_C_OnBlendOut_FCB44FF643DA97B49C538D845683A965_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PumpActionShotgun.BP_PumpActionShotgun_C.OnCompleted_FCB44FF643DA97B49C538D845683A965
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PumpActionShotgun_C::OnCompleted_FCB44FF643DA97B49C538D845683A965(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PumpActionShotgun_C", "OnCompleted_FCB44FF643DA97B49C538D845683A965");

	Params::ABP_PumpActionShotgun_C_OnCompleted_FCB44FF643DA97B49C538D845683A965_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PumpActionShotgun.BP_PumpActionShotgun_C.OnReloadStart
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_PumpActionShotgun_C::OnReloadStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PumpActionShotgun_C", "OnReloadStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PumpActionShotgun.BP_PumpActionShotgun_C.OnReleaseTrigger
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PumpActionShotgun_C::OnReleaseTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PumpActionShotgun_C", "OnReleaseTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PumpActionShotgun.BP_PumpActionShotgun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PumpActionShotgun_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PumpActionShotgun_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PumpActionShotgun.BP_PumpActionShotgun_C.OnWeaponNotify
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EWeaponNotifyType       Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PumpActionShotgun_C::OnWeaponNotify(enum class EWeaponNotifyType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PumpActionShotgun_C", "OnWeaponNotify");

	Params::ABP_PumpActionShotgun_C_OnWeaponNotify_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PumpActionShotgun.BP_PumpActionShotgun_C.OnShot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PumpActionShotgun_C::OnShot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PumpActionShotgun_C", "OnShot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PumpActionShotgun.BP_PumpActionShotgun_C.ExecuteUbergraph_BP_PumpActionShotgun
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanShoot_Can                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnshotInternal_IsShoted                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponNotifyType       K2Node_Event_type                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               K2Node_DynamicCast_AsPal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFullMagazine_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeaponAnimationInfo        CallFunc_GetCurrentWeaponAnimationInfo_ReturnValue               (ConstParm)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PumpActionShotgun_C::ExecuteUbergraph_BP_PumpActionShotgun(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, bool CallFunc_CanShoot_Can, bool CallFunc_OnshotInternal_IsShoted, enum class EWeaponNotifyType K2Node_Event_type, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsFullMagazine_ReturnValue, const struct FWeaponAnimationInfo& CallFunc_GetCurrentWeaponAnimationInfo_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PumpActionShotgun_C", "ExecuteUbergraph_BP_PumpActionShotgun");

	Params::ABP_PumpActionShotgun_C_ExecuteUbergraph_BP_PumpActionShotgun_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_CanShoot_Can = CallFunc_CanShoot_Can;
	Parms.CallFunc_OnshotInternal_IsShoted = CallFunc_OnshotInternal_IsShoted;
	Parms.K2Node_Event_type = K2Node_Event_type;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Character = K2Node_DynamicCast_AsPal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsFullMagazine_ReturnValue = CallFunc_IsFullMagazine_ReturnValue;
	Parms.CallFunc_GetCurrentWeaponAnimationInfo_ReturnValue = CallFunc_GetCurrentWeaponAnimationInfo_ReturnValue;
	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


